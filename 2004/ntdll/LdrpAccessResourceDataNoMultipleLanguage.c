/*
 * XREFs of LdrpAccessResourceDataNoMultipleLanguage @ 0x180033848
 * Callers:
 *     LdrpAccessResourceData @ 0x180021500 (LdrpAccessResourceData.c)
 *     LdrpGetRcConfig @ 0x180034A90 (LdrpGetRcConfig.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18004BDA8 (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpFindMessageInAlternateModule @ 0x180069018 (LdrpFindMessageInAlternateModule.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180032920 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x180032AD0 (RtlImageNtHeaderEx.c)
 *     LdrpGetImageSize @ 0x18003376C (LdrpGetImageSize.c)
 *     RtlSectionTableFromVirtualAddress @ 0x180033AA0 (RtlSectionTableFromVirtualAddress.c)
 *     RtlAddressInSectionTable @ 0x180076E70 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall LdrpAccessResourceDataNoMultipleLanguage(
        unsigned __int64 a1,
        unsigned int *a2,
        unsigned __int64 *a3,
        _DWORD *a4)
{
  unsigned __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // r13
  unsigned __int64 v8; // r14
  unsigned int ImageSize; // esi
  unsigned __int64 v10; // rdi
  __int64 v11; // r12
  BOOL v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r11
  __int64 v18; // r8
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r11
  __int64 v22; // rax
  __int64 v24; // [rsp+38h] [rbp-50h] BYREF
  unsigned int v25; // [rsp+40h] [rbp-48h]
  __int64 v26; // [rsp+48h] [rbp-40h] BYREF
  __int64 v27; // [rsp+50h] [rbp-38h] BYREF

  v5 = a1;
  v6 = RtlpImageDirectoryEntryToDataEx(a1, 1, 2u, &v24, &v26);
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
    v27 = 0LL;
    RtlImageNtHeaderEx(1, v5, 0LL, &v27);
    if ( !v27 )
      return 3221225609LL;
    if ( *(_WORD *)(v27 + 24) == 267 )
    {
      v14 = *(unsigned int *)(v27 + 136);
    }
    else if ( *(_WORD *)(v27 + 24) == 523 )
    {
      v14 = *(unsigned int *)(v27 + 152);
    }
    else
    {
      v14 = 0LL;
    }
    if ( !(_DWORD)v14 )
      return 3221225609LL;
    v8 = v5 + (unsigned int)v14 - v7;
    v15 = RtlSectionTableFromVirtualAddress(v27, v13, v14);
    if ( !v15 )
      return 3221225609LL;
    v18 = *a2;
    if ( (unsigned int)v18 > *(_DWORD *)(v15 + 8) )
    {
      LODWORD(v24) = *(_DWORD *)(v15 + 12);
      v20 = RtlSectionTableFromVirtualAddress(v17, v16, v18);
      v27 = v20;
      if ( !v20 )
        return 3221225609LL;
      v22 = RtlAddressInSectionTable(v21, v5, *(unsigned int *)(v20 + 12));
      v8 += v7 + *(unsigned int *)(v27 + 12) - (unsigned __int64)(unsigned int)v24 - v22;
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
