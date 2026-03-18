/*
 * XREFs of MiGetSystemAddressForImage @ 0x140748C34
 * Callers:
 *     MmLoadSystemImageEx @ 0x14074603C (MmLoadSystemImageEx.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C5BF8 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     MiGetPteAddress @ 0x140221EF0 (MiGetPteAddress.c)
 *     RtlImageNtHeader @ 0x140224A90 (RtlImageNtHeader.c)
 *     MiSectionControlArea @ 0x140248900 (MiSectionControlArea.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x14039C1B8 (MiFreePrivateFixupEntryForSystemImage.c)
 *     MiSessionInsertImage @ 0x14039FBE4 (MiSessionInsertImage.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1403A2C58 (MiAddPrivateFixupEntryForSystemImage.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiMapImageInSystemSpace @ 0x14060C198 (MiMapImageInSystemSpace.c)
 *     MiRelocateImage @ 0x14060F080 (MiRelocateImage.c)
 *     MiBytesToMapSystemImage @ 0x1406A9500 (MiBytesToMapSystemImage.c)
 *     MiUnmapImageInSystemSpace @ 0x1406EB634 (MiUnmapImageInSystemSpace.c)
 *     MiReservePrivilegedPtes @ 0x140748E58 (MiReservePrivilegedPtes.c)
 *     MiImageSuitableForSystem @ 0x140748EBC (MiImageSuitableForSystem.c)
 *     MiReturnSystemImageAddress @ 0x14074A19C (MiReturnSystemImageAddress.c)
 *     MiSelectSystemImageAddress @ 0x14074A350 (MiSelectSystemImageAddress.c)
 *     MiReleasePrivilegedPtes @ 0x140761528 (MiReleasePrivilegedPtes.c)
 */

unsigned __int64 __fastcall MiGetSystemAddressForImage(__int64 a1, int a2, _DWORD *a3)
{
  char v4; // r12
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rax
  __int64 v8; // r8
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rbx
  int v11; // r9d
  PVOID *v12; // r8
  PVOID *v13; // r10
  __int64 v14; // rcx
  int v15; // r13d
  int v16; // r12d
  unsigned int v18; // ebx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rbx
  __int64 v21; // rdx
  int v22; // ecx
  unsigned int v23; // eax
  int v24; // eax
  int v25; // ecx
  unsigned int v26; // eax
  int v27; // ebx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // [rsp+30h] [rbp-138h] BYREF
  unsigned int v31; // [rsp+34h] [rbp-134h]
  unsigned int v32; // [rsp+38h] [rbp-130h]
  __int64 PteAddress; // [rsp+40h] [rbp-128h]
  int v34; // [rsp+48h] [rbp-120h]
  int v35; // [rsp+4Ch] [rbp-11Ch]
  int v36; // [rsp+50h] [rbp-118h]
  unsigned __int64 v37; // [rsp+58h] [rbp-110h]
  unsigned __int64 v38[10]; // [rsp+60h] [rbp-108h] BYREF
  _QWORD v39[14]; // [rsp+B0h] [rbp-B8h] BYREF

  v4 = a2;
  v36 = a2;
  v30 = 0;
  memset(v39, 0, sizeof(v39));
  memset(v38, 0, sizeof(v38));
  *a3 = 1;
  v6 = MiSectionControlArea(a1);
  v37 = v6;
  v7 = MiBytesToMapSystemImage((unsigned int)(*(_DWORD *)(*(_QWORD *)v6 + 8LL) << 12));
  if ( !v7 )
    return 0LL;
  v9 = v7 >> 12;
  v35 = v7 >> 12;
  v10 = MiImageSuitableForSystem(v6, &v30, v8, 0LL);
  if ( v10 )
  {
    v12 = (PVOID *)PsLoadedModuleList;
    v13 = &PsLoadedModuleList;
    while ( v12 != v13 )
    {
      v14 = (__int64)v12[14];
      if ( v14 && v6 == MiSectionControlArea(v14) )
      {
        *a3 = 0;
        v11 = 1;
        break;
      }
      v12 = (PVOID *)*v12;
    }
  }
  if ( v10 )
  {
    if ( v11 != 1 && (v4 & 2) == 0 )
    {
      v15 = v4 & 1;
      if ( ((v4 & 1) == 0 || (unsigned int)MiGetSystemRegionType(v10) == 1)
        && ((v4 & 1) != 0 || (unsigned int)MiGetSystemRegionType(v10) != 1) )
      {
        PteAddress = MiGetPteAddress(v10);
        if ( (int)MiReservePrivilegedPtes(v6, PteAddress, (unsigned int)v9, v4 & 0x20) >= 0 )
        {
          v16 = 0;
          goto LABEL_17;
        }
        return 0LL;
      }
    }
  }
  v15 = v4 & 1;
  LODWORD(PteAddress) = v15;
  v32 = v15 + 1;
  if ( v30 )
  {
    v18 = (v4 & 1) + 1;
    goto LABEL_21;
  }
  v34 = MiMapImageInSystemSpace((__int64 *)v6, 3, (__int64)v38);
  if ( v34 < 0 )
    return 0LL;
  v20 = v38[0];
  v21 = RtlImageNtHeader(v38[0]);
  v31 = *(_DWORD *)(v20 + 60) + 48;
  if ( *(_WORD *)(v21 + 24) != 523 )
  {
    LOWORD(v39[6]) = *(_WORD *)(v21 + 24);
    LODWORD(v39[1]) = *(_DWORD *)(v21 + 60);
    HIDWORD(v39[1]) = *(_DWORD *)(v21 + 56);
    LODWORD(v39[2]) = *(_DWORD *)(v21 + 80);
    v25 = *(_DWORD *)(v21 + 112);
    HIDWORD(v39[2]) = v25;
    v39[0] = *(unsigned int *)(v21 + 52);
    LODWORD(v39[3]) = *(_DWORD *)(v21 + 84);
    HIDWORD(v39[3]) = *(_DWORD *)(v21 + 40);
    v39[4] = *(unsigned int *)(v21 + 96);
    v39[5] = *(unsigned int *)(v21 + 100);
    WORD1(v39[6]) = *(_WORD *)(v21 + 92);
    HIDWORD(v39[6]) = *(_DWORD *)(v21 + 72);
    LODWORD(v39[7]) = *(_DWORD *)(v21 + 64);
    WORD2(v39[7]) = *(_WORD *)(v21 + 94);
    LODWORD(v39[8]) = *(_DWORD *)(v21 + 88);
    HIDWORD(v39[8]) = *(_DWORD *)(v21 + 28);
    v39[13] = 0LL;
    v26 = *(_DWORD *)(v21 + 116);
    if ( v26 > 6 && *(_DWORD *)(v21 + 168) )
    {
      v39[13] = *(_QWORD *)(v21 + 168);
      v26 = *(_DWORD *)(v21 + 116);
    }
    if ( v26 > 0xC )
    {
      v39[9] = *(_QWORD *)(v21 + 216);
      v26 = *(_DWORD *)(v21 + 116);
    }
    if ( v26 <= 0xE )
    {
      v39[10] = 0LL;
    }
    else
    {
      v39[10] = *(_QWORD *)(v21 + 232);
      if ( *(_DWORD *)(v21 + 232) && *(_DWORD *)(v21 + 236) )
        HIDWORD(v39[2]) = v25 | 1;
    }
    if ( *(_DWORD *)(v21 + 116) <= 5u )
      v39[11] = 0LL;
    else
      v39[11] = *(_QWORD *)(v21 + 160);
    if ( *(_DWORD *)(v21 + 116) > 0xAu )
    {
      LODWORD(v39[12]) = *(_DWORD *)(v21 + 200);
      v24 = *(_DWORD *)(v21 + 204);
      goto LABEL_62;
    }
LABEL_63:
    v39[12] = 0LL;
    goto LABEL_64;
  }
  LOWORD(v39[6]) = 523;
  LODWORD(v39[1]) = *(_DWORD *)(v21 + 60);
  HIDWORD(v39[1]) = *(_DWORD *)(v21 + 56);
  LODWORD(v39[2]) = *(_DWORD *)(v21 + 80);
  v22 = *(_DWORD *)(v21 + 128);
  HIDWORD(v39[2]) = v22;
  v39[0] = *(_QWORD *)(v21 + 48);
  LODWORD(v39[3]) = *(_DWORD *)(v21 + 84);
  HIDWORD(v39[3]) = *(_DWORD *)(v21 + 40);
  v39[4] = *(_QWORD *)(v21 + 96);
  v39[5] = *(_QWORD *)(v21 + 104);
  WORD1(v39[6]) = *(_WORD *)(v21 + 92);
  HIDWORD(v39[6]) = *(_DWORD *)(v21 + 72);
  LODWORD(v39[7]) = *(_DWORD *)(v21 + 64);
  WORD2(v39[7]) = *(_WORD *)(v21 + 94);
  LODWORD(v39[8]) = *(_DWORD *)(v21 + 88);
  HIDWORD(v39[8]) = *(_DWORD *)(v21 + 28);
  v39[13] = 0LL;
  v23 = *(_DWORD *)(v21 + 132);
  if ( v23 > 6 && *(_DWORD *)(v21 + 184) )
  {
    v39[13] = *(_QWORD *)(v21 + 184);
    v23 = *(_DWORD *)(v21 + 132);
  }
  if ( v23 > 0xC )
  {
    v39[9] = *(_QWORD *)(v21 + 232);
    v23 = *(_DWORD *)(v21 + 132);
  }
  if ( v23 <= 0xE )
  {
    v39[10] = 0LL;
  }
  else
  {
    v39[10] = *(_QWORD *)(v21 + 248);
    if ( *(_DWORD *)(v21 + 248) && *(_DWORD *)(v21 + 252) )
      HIDWORD(v39[2]) = v22 | 1;
  }
  if ( *(_DWORD *)(v21 + 132) <= 5u )
    v39[11] = 0LL;
  else
    v39[11] = *(_QWORD *)(v21 + 176);
  if ( *(_DWORD *)(v21 + 132) <= 0xAu )
    goto LABEL_63;
  LODWORD(v39[12]) = *(_DWORD *)(v21 + 216);
  v24 = *(_DWORD *)(v21 + 220);
LABEL_62:
  HIDWORD(v39[12]) = v24;
LABEL_64:
  v27 = v34;
  MiUnmapImageInSystemSpace(v38);
  if ( v27 < 0 )
    return 0LL;
  v18 = v32;
  if ( (int)MiRelocateImage(*(_QWORD *)v6, (__int64)v39, v31, v32, -1LL, 1) < 0 )
    return 0LL;
  MiImageSuitableForSystem(v6, &v30, v28, v29);
  if ( !v30 && (*(_DWORD *)(v6 + 56) & 0x40000000) == 0 )
    return 0LL;
LABEL_21:
  v19 = MiSelectSystemImageAddress(v18, (unsigned int)v9);
  v10 = v19;
  if ( v19 )
  {
    PteAddress = MiGetPteAddress(v19);
    if ( (int)MiReservePrivilegedPtes(v6, PteAddress, (unsigned int)v9, v4 & 0x20) < 0 )
    {
LABEL_70:
      MiReturnSystemImageAddress(v10, (unsigned int)((_DWORD)v9 << 12));
      return 0LL;
    }
    v16 = 1;
    if ( !(unsigned int)MiAddPrivateFixupEntryForSystemImage((_DWORD *)v6, v10) )
    {
LABEL_69:
      MiReleasePrivilegedPtes(PteAddress, (unsigned int)v9);
      goto LABEL_70;
    }
LABEL_17:
    if ( !v15 || (int)MiSessionInsertImage(v10, (__int64 *)v6) >= 0 )
      return v10;
    if ( v16 == 1 )
      MiFreePrivateFixupEntryForSystemImage(v10, 1);
    goto LABEL_69;
  }
  return 0LL;
}
