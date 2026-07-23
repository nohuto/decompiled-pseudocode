/*
 * XREFs of LdrpAccessResourceDataNoMultipleLanguage @ 0x180033848
 * Callers:
 *     LdrpAccessResourceData @ 0x180021500 (LdrpAccessResourceData.c)
 *     LdrpGetRcConfig @ 0x180034A90 (LdrpGetRcConfig.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180058DDC (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpFindMessageInAlternateModule @ 0x18006A618 (LdrpFindMessageInAlternateModule.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180032920 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x180032AD0 (RtlImageNtHeaderEx.c)
 *     LdrpGetImageSize @ 0x18003376C (LdrpGetImageSize.c)
 *     RtlSectionTableFromVirtualAddress @ 0x180033AA0 (RtlSectionTableFromVirtualAddress.c)
 *     RtlAddressInSectionTable @ 0x180077FA0 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall LdrpAccessResourceDataNoMultipleLanguage(
        unsigned __int64 BaseOfImage,
        ULONG *a2,
        unsigned __int64 *a3,
        _DWORD *a4)
{
  __int64 v5; // rbx
  NTSTATUS v6; // eax
  char *v7; // r13
  __int64 v8; // r14
  unsigned int ImageSize; // esi
  unsigned __int64 v10; // rdi
  __int64 v11; // r12
  BOOL v12; // eax
  void *v13; // rdx
  ULONG VirtualAddress; // r8d
  PIMAGE_SECTION_HEADER v15; // rax
  void *v16; // rdx
  _IMAGE_NT_HEADERS64 *v17; // r11
  ULONG v18; // r8d
  unsigned __int64 v19; // rcx
  _IMAGE_NT_HEADERS64 *v20; // rax
  _IMAGE_NT_HEADERS64 *v21; // r11
  _BYTE *v22; // rax
  __int64 v24; // [rsp+38h] [rbp-50h] BYREF
  unsigned int v25; // [rsp+40h] [rbp-48h]
  char *v26; // [rsp+48h] [rbp-40h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+50h] [rbp-38h] BYREF

  v5 = BaseOfImage;
  v6 = RtlpImageDirectoryEntryToDataEx(BaseOfImage, 1, 2u, (unsigned int *)&v24, &v26);
  v7 = v26;
  v8 = 0LL;
  if ( v6 < 0 )
    v7 = 0LL;
  v26 = v7;
  if ( !v7 )
    return 3221225609LL;
  v24 = 0LL;
  ImageSize = LdrpGetImageSize(v5, &v24);
  v25 = ImageSize;
  if ( ImageSize == -1073741701 )
    return 3221225595LL;
  v10 = v5 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (unsigned __int64)a2 <= (v5 & 0xFFFFFFFFFFFFFFFCuLL) )
    return 3221225595LL;
  v11 = v24;
  if ( v24 )
  {
    if ( (unsigned __int64)a2 >= v10 + v24 )
      return 3221225595LL;
  }
  v12 = 0;
  if ( (v5 & 3) != 0 )
  {
    v12 = (v5 & 1) != 0;
    v5 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  if ( v12 )
  {
    OutHeaders = 0LL;
    RtlImageNtHeaderEx(1u, (PVOID)v5, 0LL, &OutHeaders);
    if ( !OutHeaders )
      return 3221225609LL;
    if ( OutHeaders->OptionalHeader.Magic == 267 )
    {
      VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
    }
    else if ( OutHeaders->OptionalHeader.Magic == 523 )
    {
      VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[2].VirtualAddress;
    }
    else
    {
      VirtualAddress = 0;
    }
    if ( !VirtualAddress )
      return 3221225609LL;
    v8 = v5 + VirtualAddress - (_QWORD)v7;
    v15 = RtlSectionTableFromVirtualAddress(OutHeaders, v13, VirtualAddress);
    if ( !v15 )
      return 3221225609LL;
    v18 = *a2;
    if ( *a2 > v15->Misc.PhysicalAddress )
    {
      LODWORD(v24) = v15->VirtualAddress;
      v20 = (_IMAGE_NT_HEADERS64 *)RtlSectionTableFromVirtualAddress(v17, v16, v18);
      OutHeaders = v20;
      if ( !v20 )
        return 3221225609LL;
      v22 = RtlAddressInSectionTable(v21, (PVOID)v5, v20->FileHeader.PointerToSymbolTable);
      v8 += &v7[OutHeaders->FileHeader.PointerToSymbolTable - (unsigned __int64)(unsigned int)v24] - v22;
    }
  }
  if ( a3 && ((v19 = v5 + *a2 - v8, *a3 = v19, v19 <= v10) || v11 && v19 >= v10 + v11) )
  {
    *a3 = 0LL;
    return 3221225595LL;
  }
  else
  {
    if ( a4 )
      *a4 = a2[1];
    return ImageSize;
  }
}
