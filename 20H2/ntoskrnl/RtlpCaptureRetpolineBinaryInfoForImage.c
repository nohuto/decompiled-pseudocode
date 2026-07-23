/*
 * XREFs of RtlpCaptureRetpolineBinaryInfoForImage @ 0x1403B5930
 * Callers:
 *     RtlUpdateImportRelocationsInImage @ 0x1403B5638 (RtlUpdateImportRelocationsInImage.c)
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x14058E4AC (RtlPerformRetpolineRelocationsOnImageEx.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402FD940 (RtlImageDirectoryEntryToData.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140756028 (LdrImageDirectoryEntryToLoadConfig.c)
 */

__int64 __fastcall RtlpCaptureRetpolineBinaryInfoForImage(
        PVOID BaseOfImage,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6)
{
  __int64 v7; // r15
  _DWORD *Config; // rax
  unsigned int v11; // ebx
  PVOID v12; // rax
  __int64 v14; // rdi
  unsigned int v15; // ecx
  unsigned int v16; // r8d
  unsigned int *v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rcx
  ULONG Size[10]; // [rsp+20h] [rbp-28h] BYREF

  v7 = a3;
  *(_OWORD *)a6 = 0LL;
  *(_OWORD *)(a6 + 16) = 0LL;
  *(_OWORD *)(a6 + 32) = 0LL;
  Config = (_DWORD *)LdrImageDirectoryEntryToLoadConfig(BaseOfImage);
  v11 = 0;
  if ( Config && *Config >= 0xC8u )
  {
    if ( *((_QWORD *)Config + 15) )
      *(_DWORD *)(a6 + 4) = Config[30] - a2;
    v12 = RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0xCu, Size);
    if ( v12 )
      *(_DWORD *)(a6 + 8) = (_DWORD)v12 - (_DWORD)BaseOfImage;
    if ( a4 )
    {
      v14 = a4 - a2;
      v15 = a5[18];
      v16 = a5[19];
      if ( v15 <= a5[17] )
        v15 = a5[17];
      if ( v16 <= v15 )
        v16 = v15;
      v17 = a5 + 1;
      v18 = 16LL;
      do
      {
        v19 = v16;
        v16 = *v17++;
        if ( v16 <= v19 )
          v16 = v19;
        --v18;
      }
      while ( v18 );
      v20 = v14 + v16;
      if ( __OFSUB__(v20, v14) || v20 > 0x7FFFFFFF || v14 - v7 < (__int64)0xFFFFFFFF80000000uLL )
        return (unsigned int)-1073741776;
      else
        *(_DWORD *)a6 = v14;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v11;
}
