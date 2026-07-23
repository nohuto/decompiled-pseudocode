/*
 * XREFs of MiGetSystemAddressForImage @ 0x14075EA6C
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075BCBC (MmLoadSystemImageEx.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C9358 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MiSectionControlArea @ 0x14031FFB0 (MiSectionControlArea.c)
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 *     RtlImageNtHeader @ 0x1403276A0 (RtlImageNtHeader.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x14039F098 (MiFreePrivateFixupEntryForSystemImage.c)
 *     MiSessionInsertImage @ 0x1403A2AC4 (MiSessionInsertImage.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1403A5A28 (MiAddPrivateFixupEntryForSystemImage.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiBytesToMapSystemImage @ 0x1406A8B50 (MiBytesToMapSystemImage.c)
 *     MiRelocateImage @ 0x1406AC790 (MiRelocateImage.c)
 *     MiUnmapImageInSystemSpace @ 0x1406C3BF4 (MiUnmapImageInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x1406C3D80 (MiMapImageInSystemSpace.c)
 *     MiReservePrivilegedPtes @ 0x14075EC90 (MiReservePrivilegedPtes.c)
 *     MiImageSuitableForSystem @ 0x14075ECF4 (MiImageSuitableForSystem.c)
 *     MiReturnSystemImageAddress @ 0x14075FE64 (MiReturnSystemImageAddress.c)
 *     MiSelectSystemImageAddress @ 0x140760018 (MiSelectSystemImageAddress.c)
 *     MiReleasePrivilegedPtes @ 0x140773C08 (MiReleasePrivilegedPtes.c)
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
  _DWORD *v20; // rbx
  PIMAGE_NT_HEADERS v21; // rdx
  unsigned int LoaderFlags; // ecx
  unsigned int NumberOfRvaAndSizes; // eax
  unsigned int Size; // eax
  int SizeOfHeapReserve; // ecx
  unsigned int SizeOfHeapReserve_high; // eax
  int v27; // ebx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // [rsp+30h] [rbp-138h] BYREF
  unsigned int v31; // [rsp+34h] [rbp-134h]
  int v32; // [rsp+38h] [rbp-130h]
  __int64 PteAddress; // [rsp+40h] [rbp-128h]
  int v34; // [rsp+48h] [rbp-120h]
  int v35; // [rsp+4Ch] [rbp-11Ch]
  int v36; // [rsp+50h] [rbp-118h]
  unsigned __int64 v37; // [rsp+58h] [rbp-110h]
  PVOID BaseOfImage[10]; // [rsp+60h] [rbp-108h] BYREF
  _QWORD v39[14]; // [rsp+B0h] [rbp-B8h] BYREF

  v4 = a2;
  v36 = a2;
  v30 = 0;
  memset(v39, 0, sizeof(v39));
  memset(BaseOfImage, 0, sizeof(BaseOfImage));
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
  v34 = MiMapImageInSystemSpace((__int64 *)v6, 3, (__int64)BaseOfImage);
  if ( v34 < 0 )
    return 0LL;
  v20 = BaseOfImage[0];
  v21 = RtlImageNtHeader(BaseOfImage[0]);
  v31 = v20[15] + 48;
  if ( v21->OptionalHeader.Magic != 523 )
  {
    LOWORD(v39[6]) = v21->OptionalHeader.Magic;
    LODWORD(v39[1]) = v21->OptionalHeader.FileAlignment;
    HIDWORD(v39[1]) = v21->OptionalHeader.SectionAlignment;
    LODWORD(v39[2]) = v21->OptionalHeader.SizeOfImage;
    SizeOfHeapReserve = v21->OptionalHeader.SizeOfHeapReserve;
    HIDWORD(v39[2]) = SizeOfHeapReserve;
    v39[0] = HIDWORD(v21->OptionalHeader.ImageBase);
    LODWORD(v39[3]) = v21->OptionalHeader.SizeOfHeaders;
    HIDWORD(v39[3]) = v21->OptionalHeader.AddressOfEntryPoint;
    v39[4] = LODWORD(v21->OptionalHeader.SizeOfStackReserve);
    v39[5] = HIDWORD(v21->OptionalHeader.SizeOfStackReserve);
    WORD1(v39[6]) = v21->OptionalHeader.Subsystem;
    HIDWORD(v39[6]) = *(_DWORD *)&v21->OptionalHeader.MajorSubsystemVersion;
    LODWORD(v39[7]) = *(_DWORD *)&v21->OptionalHeader.MajorOperatingSystemVersion;
    WORD2(v39[7]) = v21->OptionalHeader.DllCharacteristics;
    LODWORD(v39[8]) = v21->OptionalHeader.CheckSum;
    HIDWORD(v39[8]) = v21->OptionalHeader.SizeOfCode;
    v39[13] = 0LL;
    SizeOfHeapReserve_high = HIDWORD(v21->OptionalHeader.SizeOfHeapReserve);
    if ( SizeOfHeapReserve_high > 6 && v21->OptionalHeader.DataDirectory[4].VirtualAddress )
    {
      v39[13] = v21->OptionalHeader.DataDirectory[4];
      SizeOfHeapReserve_high = HIDWORD(v21->OptionalHeader.SizeOfHeapReserve);
    }
    if ( SizeOfHeapReserve_high > 0xC )
    {
      v39[9] = v21->OptionalHeader.DataDirectory[10];
      SizeOfHeapReserve_high = HIDWORD(v21->OptionalHeader.SizeOfHeapReserve);
    }
    if ( SizeOfHeapReserve_high <= 0xE )
    {
      v39[10] = 0LL;
    }
    else
    {
      v39[10] = v21->OptionalHeader.DataDirectory[12];
      if ( v21->OptionalHeader.DataDirectory[12].VirtualAddress && v21->OptionalHeader.DataDirectory[12].Size )
        HIDWORD(v39[2]) = SizeOfHeapReserve | 1;
    }
    if ( HIDWORD(v21->OptionalHeader.SizeOfHeapReserve) <= 5 )
      v39[11] = 0LL;
    else
      v39[11] = v21->OptionalHeader.DataDirectory[3];
    if ( HIDWORD(v21->OptionalHeader.SizeOfHeapReserve) > 0xA )
    {
      LODWORD(v39[12]) = v21->OptionalHeader.DataDirectory[8].VirtualAddress;
      Size = v21->OptionalHeader.DataDirectory[8].Size;
      goto LABEL_62;
    }
LABEL_63:
    v39[12] = 0LL;
    goto LABEL_64;
  }
  LOWORD(v39[6]) = 523;
  LODWORD(v39[1]) = v21->OptionalHeader.FileAlignment;
  HIDWORD(v39[1]) = v21->OptionalHeader.SectionAlignment;
  LODWORD(v39[2]) = v21->OptionalHeader.SizeOfImage;
  LoaderFlags = v21->OptionalHeader.LoaderFlags;
  HIDWORD(v39[2]) = LoaderFlags;
  v39[0] = v21->OptionalHeader.ImageBase;
  LODWORD(v39[3]) = v21->OptionalHeader.SizeOfHeaders;
  HIDWORD(v39[3]) = v21->OptionalHeader.AddressOfEntryPoint;
  v39[4] = v21->OptionalHeader.SizeOfStackReserve;
  v39[5] = v21->OptionalHeader.SizeOfStackCommit;
  WORD1(v39[6]) = v21->OptionalHeader.Subsystem;
  HIDWORD(v39[6]) = *(_DWORD *)&v21->OptionalHeader.MajorSubsystemVersion;
  LODWORD(v39[7]) = *(_DWORD *)&v21->OptionalHeader.MajorOperatingSystemVersion;
  WORD2(v39[7]) = v21->OptionalHeader.DllCharacteristics;
  LODWORD(v39[8]) = v21->OptionalHeader.CheckSum;
  HIDWORD(v39[8]) = v21->OptionalHeader.SizeOfCode;
  v39[13] = 0LL;
  NumberOfRvaAndSizes = v21->OptionalHeader.NumberOfRvaAndSizes;
  if ( NumberOfRvaAndSizes > 6 && v21->OptionalHeader.DataDirectory[6].VirtualAddress )
  {
    v39[13] = v21->OptionalHeader.DataDirectory[6];
    NumberOfRvaAndSizes = v21->OptionalHeader.NumberOfRvaAndSizes;
  }
  if ( NumberOfRvaAndSizes > 0xC )
  {
    v39[9] = v21->OptionalHeader.DataDirectory[12];
    NumberOfRvaAndSizes = v21->OptionalHeader.NumberOfRvaAndSizes;
  }
  if ( NumberOfRvaAndSizes <= 0xE )
  {
    v39[10] = 0LL;
  }
  else
  {
    v39[10] = v21->OptionalHeader.DataDirectory[14];
    if ( v21->OptionalHeader.DataDirectory[14].VirtualAddress && v21->OptionalHeader.DataDirectory[14].Size )
      HIDWORD(v39[2]) = LoaderFlags | 1;
  }
  if ( v21->OptionalHeader.NumberOfRvaAndSizes <= 5 )
    v39[11] = 0LL;
  else
    v39[11] = v21->OptionalHeader.DataDirectory[5];
  if ( v21->OptionalHeader.NumberOfRvaAndSizes <= 0xA )
    goto LABEL_63;
  LODWORD(v39[12]) = v21->OptionalHeader.DataDirectory[10].VirtualAddress;
  Size = v21->OptionalHeader.DataDirectory[10].Size;
LABEL_62:
  HIDWORD(v39[12]) = Size;
LABEL_64:
  v27 = v34;
  MiUnmapImageInSystemSpace((unsigned __int64 *)BaseOfImage);
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
