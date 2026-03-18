/*
 * XREFs of MiSnapDriverRange @ 0x140760B20
 * Callers:
 *     MmProtectDriverSection @ 0x14025D5E0 (MmProtectDriverSection.c)
 *     MmLockRegistryRecoverySections @ 0x140582708 (MmLockRegistryRecoverySections.c)
 *     MiCheckForDiscardableLongJumpTable @ 0x1405B52C0 (MiCheckForDiscardableLongJumpTable.c)
 *     MiMarkKernelImageCfgBits @ 0x1406EB4B0 (MiMarkKernelImageCfgBits.c)
 *     MiFreeDriverInitialization @ 0x14075F194 (MiFreeDriverInitialization.c)
 *     MiDisablePagingOfDriver @ 0x140760730 (MiDisablePagingOfDriver.c)
 *     MiHandleDriverNonPagedSections @ 0x1407608BC (MiHandleDriverNonPagedSections.c)
 *     MiBackSingleImageWithPagefile @ 0x14080F7F4 (MiBackSingleImageWithPagefile.c)
 *     MiIdentifyImageDiscardablePages @ 0x14097389C (MiIdentifyImageDiscardablePages.c)
 *     MiEnablePagingTheExecutive @ 0x140B085F8 (MiEnablePagingTheExecutive.c)
 *     MmDiscardDriverSection @ 0x140B2FE74 (MmDiscardDriverSection.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     MiGetPteAddress @ 0x140313C70 (MiGetPteAddress.c)
 *     MiIsKernelHalPadSection @ 0x1403D6DF4 (MiIsKernelHalPadSection.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     MmImageSectionPagable @ 0x140760F98 (MmImageSectionPagable.c)
 */

__int64 __fastcall MiSnapDriverRange(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6)
{
  unsigned int v6; // esi
  __int64 v10; // rbx
  __int64 v11; // rdx
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r11
  unsigned int v14; // r9d
  unsigned __int64 v15; // r14
  __int64 v16; // r8
  unsigned __int64 PteAddress; // rbp
  unsigned __int64 v18; // r12
  __int64 *v19; // rdi
  unsigned int v20; // r8d
  unsigned int v21; // ebx
  int v22; // eax
  bool v23; // cf
  int v24; // eax
  int v25; // edx
  __int64 v26; // rax
  unsigned __int64 v27; // r11
  __int16 v28; // dx
  __int64 v29; // rax
  bool v30; // zf
  unsigned int v31; // ecx
  unsigned __int64 v32; // rax
  unsigned __int64 v34; // rax
  unsigned int v35; // [rsp+20h] [rbp-B8h]
  unsigned int v36; // [rsp+24h] [rbp-B4h]
  unsigned __int64 v37; // [rsp+28h] [rbp-B0h]
  __int64 v40; // [rsp+58h] [rbp-80h]
  __int64 v41; // [rsp+60h] [rbp-78h]
  __int64 v42; // [rsp+68h] [rbp-70h]
  __int64 v43; // [rsp+70h] [rbp-68h] BYREF
  int v44; // [rsp+78h] [rbp-60h]
  __int128 v45; // [rsp+7Ch] [rbp-5Ch]
  __int64 v46; // [rsp+8Ch] [rbp-4Ch]
  int v47; // [rsp+94h] [rbp-44h]

  v6 = 0;
  v43 = 0LL;
  *a5 = 0LL;
  v45 = 0LL;
  *a6 = 0LL;
  v10 = *(_QWORD *)(a1 + 48);
  v46 = 0LL;
  v40 = v10;
  v11 = RtlImageNtHeader(v10);
  v41 = v11;
  v12 = a4 - v10;
  v13 = *(unsigned int *)(v11 + 56);
  v14 = *(unsigned __int16 *)(v11 + 6);
  v15 = (unsigned int)v13;
  v37 = a4 - v10;
  if ( v13 > 0x1000 )
    v15 = 4096LL;
  v36 = *(unsigned __int16 *)(v11 + 6);
  if ( a2 > v14 )
    return 0LL;
  v16 = *(unsigned __int16 *)(v11 + 20);
  v42 = v16;
  PteAddress = 0LL;
  v47 = 0x40000000;
  v18 = 0LL;
  DWORD1(v45) = v16 + 40 * v14 + v11 + 24 - v10;
  v44 = DWORD1(v45);
  while ( 1 )
  {
    if ( a2 )
      v19 = (__int64 *)(v16 + 40LL * (a2 - 1) + v11 + 24);
    else
      v19 = &v43;
    v20 = *((_DWORD *)v19 + 4);
    if ( v20 < *((_DWORD *)v19 + 2) )
      v20 = *((_DWORD *)v19 + 2);
    v35 = v20;
    if ( !a4 )
      break;
    v34 = *((unsigned int *)v19 + 3);
    if ( v12 < v34 || v12 >= v20 + (unsigned int)v34 )
      goto LABEL_19;
    if ( (a3 & 0x40) != 0 && (*((_DWORD *)v19 + 9) & 0x2000000) != 0 )
      return 0LL;
LABEL_25:
    if ( PteAddress )
      v25 = *((_DWORD *)v19 + 3);
    else
      PteAddress = MiGetPteAddress((*((unsigned int *)v19 + 3) + v10 + 4095) & 0xFFFFFFFFFFFFF000uLL);
    v26 = MiGetPteAddress(-(__int64)v15 & (v10 + v15 + v20 + v25 - 1LL));
    v18 = v26;
    if ( (v28 & 0xFFF) == 0 || (a3 & 0xC) == 0 || v15 >= 0x1000 )
      v18 = v26 - 8;
    if ( v27 > 0x1000 )
      goto LABEL_19;
LABEL_20:
    if ( ++a2 > v14 )
    {
      if ( PteAddress )
      {
        v31 = *((_DWORD *)v19 + 4);
        if ( v31 < *((_DWORD *)v19 + 2) )
          v31 = *((_DWORD *)v19 + 2);
        v32 = MiGetPteAddress(((-(__int64)v15 & (v10 + v15 + *((_DWORD *)v19 + 3) + v31 - 1LL)) + 4095) & 0xFFFFFFFFFFFFF000uLL)
            - 8;
        if ( PteAddress <= v32 )
        {
          *a5 = PteAddress;
          *a6 = v32;
        }
      }
      return 0LL;
    }
    v11 = v41;
    v16 = v42;
  }
  if ( (a3 & 8) != 0 )
  {
    v24 = (*((_DWORD *)v19 + 9) & 0xE0000000) != 0;
    goto LABEL_24;
  }
  if ( (a3 & 1) != 0 )
  {
    v24 = MmImageSectionPagable(v19);
    goto LABEL_23;
  }
  if ( (a3 & 4) != 0 )
  {
    v21 = *((_DWORD *)v19 + 9) & 0xE0000000;
    v22 = MmImageSectionPagable(v19);
    v23 = v21 != 0;
    v10 = v40;
    v24 = v23 && v22 == 0;
LABEL_23:
    v20 = v35;
    v14 = v36;
    v12 = v37;
    goto LABEL_24;
  }
  if ( (a3 & 0x10) != 0 )
  {
    v24 = *((_DWORD *)v19 + 9) & 0x20000000;
LABEL_24:
    if ( !v24 )
      goto LABEL_19;
    goto LABEL_25;
  }
  if ( (a3 & 0x20) != 0 )
  {
    if ( *(_BYTE *)v19 != 80
      || *((_BYTE *)v19 + 1) != 65
      || *((_BYTE *)v19 + 2) != 71
      || *((_BYTE *)v19 + 3) != 69
      || *((_BYTE *)v19 + 4) != 75 )
    {
      goto LABEL_19;
    }
    v30 = *((_BYTE *)v19 + 5) == 68;
    goto LABEL_35;
  }
  if ( a3 < 0 )
  {
    if ( *(_BYTE *)v19 != 80
      || *((_BYTE *)v19 + 1) != 65
      || *((_BYTE *)v19 + 2) != 71
      || *((_BYTE *)v19 + 3) != 69
      || *((_BYTE *)v19 + 4) != 67
      || *((_BYTE *)v19 + 5) != 77
      || *((_BYTE *)v19 + 6) != 82 )
    {
      goto LABEL_19;
    }
    v30 = *((_BYTE *)v19 + 7) == 67;
LABEL_35:
    if ( !v30 )
      goto LABEL_19;
    goto LABEL_25;
  }
  if ( !*(_DWORD *)v19 && v19 != &v43 )
    return 0LL;
  if ( ((*(_DWORD *)(a1 + 104) & 0x4000000) == 0 || *(_DWORD *)v19 != 1414090313)
    && (*((_DWORD *)v19 + 9) & 0x2000000) != 0 )
  {
    v29 = *(_QWORD *)(a1 + 48);
    if ( v29 != PsNtosImageBase && v29 != PsHalImageBase )
      goto LABEL_25;
    v30 = !MiIsKernelHalPadSection((__int64)v19);
    goto LABEL_35;
  }
LABEL_19:
  if ( !PteAddress )
    goto LABEL_20;
  if ( PteAddress > v18 )
  {
    PteAddress = 0LL;
    goto LABEL_20;
  }
  *a5 = PteAddress;
  *a6 = v18;
  if ( a2 + 1 <= v14 )
    return a2 + 1;
  return v6;
}
