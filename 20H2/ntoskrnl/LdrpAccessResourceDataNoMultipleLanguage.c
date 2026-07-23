/*
 * XREFs of LdrpAccessResourceDataNoMultipleLanguage @ 0x1406ACA94
 * Callers:
 *     LdrpFindMessageInAlternateModule @ 0x1402FC794 (LdrpFindMessageInAlternateModule.c)
 *     LdrpGetRcConfig @ 0x1402FCD50 (LdrpGetRcConfig.c)
 *     LdrpAccessResourceData @ 0x1406AA71C (LdrpAccessResourceData.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140297240 (RtlImageNtHeader.c)
 *     LdrpGetImageSize @ 0x1402FD604 (LdrpGetImageSize.c)
 *     RtlImageDirectoryEntryToData @ 0x1402FD940 (RtlImageDirectoryEntryToData.c)
 *     RtlAddressInSectionTable @ 0x1402FE174 (RtlAddressInSectionTable.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1402FE1D0 (RtlSectionTableFromVirtualAddress.c)
 */

__int64 __fastcall LdrpAccessResourceDataNoMultipleLanguage(
        PVOID BaseOfImage,
        ULONG *a2,
        unsigned __int64 *a3,
        _DWORD *a4)
{
  _DWORD *v4; // rsi
  __int64 v6; // rbx
  unsigned int ImageSize; // r14d
  unsigned __int64 v8; // rdi
  __int64 v9; // r13
  BOOL v10; // eax
  PIMAGE_NT_HEADERS v11; // rax
  _IMAGE_NT_HEADERS64 *v12; // rsi
  unsigned __int16 Magic; // ax
  ULONG VirtualAddress; // r8d
  __int64 v15; // r15
  PIMAGE_SECTION_HEADER v16; // rax
  ULONG v17; // r8d
  unsigned __int64 v18; // rcx
  PIMAGE_SECTION_HEADER v19; // rax
  _BYTE *v20; // rax
  __int64 v22; // [rsp+28h] [rbp-50h] BYREF
  unsigned int v23; // [rsp+30h] [rbp-48h]
  _BYTE *v24; // [rsp+38h] [rbp-40h]
  PIMAGE_SECTION_HEADER v25; // [rsp+40h] [rbp-38h]

  v4 = a4;
  v6 = (__int64)BaseOfImage;
  v24 = RtlImageDirectoryEntryToData(BaseOfImage, 1u, 2u, (PULONG)&v22);
  if ( !v24 )
    return 3221225609LL;
  v22 = 0LL;
  ImageSize = LdrpGetImageSize(v6, &v22);
  v23 = ImageSize;
  if ( ImageSize == -1073741701 )
    return 3221225595LL;
  v8 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (unsigned __int64)a2 <= (v6 & 0xFFFFFFFFFFFFFFFCuLL) )
    return 3221225595LL;
  v9 = v22;
  if ( v22 )
  {
    if ( (unsigned __int64)a2 >= v8 + v22 )
      return 3221225595LL;
  }
  v10 = 0;
  if ( (v6 & 3) != 0 )
  {
    v10 = (v6 & 1) != 0;
    v6 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  if ( v10 )
  {
    v11 = RtlImageNtHeader((PVOID)v6);
    v12 = v11;
    if ( !v11 )
      return 3221225609LL;
    Magic = v11->OptionalHeader.Magic;
    if ( Magic == 267 )
    {
      VirtualAddress = v12->OptionalHeader.DataDirectory[0].VirtualAddress;
    }
    else if ( Magic == 523 )
    {
      VirtualAddress = v12->OptionalHeader.DataDirectory[2].VirtualAddress;
    }
    else
    {
      VirtualAddress = 0;
    }
    if ( !VirtualAddress )
      return 3221225609LL;
    v15 = v6 + VirtualAddress - (_QWORD)v24;
    v16 = RtlSectionTableFromVirtualAddress(v12, (PVOID)v6, VirtualAddress);
    if ( !v16 )
      return 3221225609LL;
    v17 = *a2;
    if ( *a2 > v16->Misc.PhysicalAddress )
    {
      LODWORD(v22) = v16->VirtualAddress;
      v19 = RtlSectionTableFromVirtualAddress(v12, (PVOID)v6, v17);
      v25 = v19;
      if ( !v19 )
        return 3221225609LL;
      v20 = RtlAddressInSectionTable(v12, (PVOID)v6, v19->VirtualAddress);
      v15 += &v24[v25->VirtualAddress - (unsigned __int64)(unsigned int)v22] - v20;
    }
    v4 = a4;
  }
  else
  {
    v15 = 0LL;
  }
  if ( a3 && ((v18 = v6 + *a2 - v15, *a3 = v18, v18 <= v8) || v9 && v18 >= v8 + v9) )
  {
    *a3 = 0LL;
    return 3221225595LL;
  }
  else
  {
    if ( v4 )
      *v4 = a2[1];
    return ImageSize;
  }
}
