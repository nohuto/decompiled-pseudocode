/*
 * XREFs of LdrpGetMappingFromCacheEntry @ 0x1402FC9B4
 * Callers:
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1402FC820 (LdrpGetAlternateResourceModuleHandleEx.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140297240 (RtlImageNtHeader.c)
 */

char __fastcall LdrpGetMappingFromCacheEntry(unsigned int a1, unsigned __int64 a2, _QWORD *a3, _QWORD *a4)
{
  unsigned __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 SizeOfImage; // rdx
  char result; // al
  PIMAGE_NT_HEADERS v11; // rax
  unsigned __int16 Magic; // cx

  if ( !a2 )
    return 0;
  if ( !a3 )
    return 0;
  if ( a1 >= AlternateResourceModuleCount )
    return 0;
  _mm_lfence();
  v7 = (unsigned __int64)a1 << 6;
  v8 = *(_QWORD *)((char *)AlternateResourceModules + v7 + 32);
  SizeOfImage = *(_QWORD *)((char *)AlternateResourceModules + v7 + 48);
  if ( (unsigned __int64)(v8 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 0;
  if ( !SizeOfImage )
  {
    v11 = RtlImageNtHeader((PVOID)(v8 & 0xFFFFFFFFFFFFFFFCuLL));
    if ( !v11 )
      return 0;
    Magic = v11->OptionalHeader.Magic;
    if ( Magic == 267 || Magic == 523 )
      SizeOfImage = v11->OptionalHeader.SizeOfImage;
    else
      SizeOfImage = 0LL;
    if ( !SizeOfImage )
      return 0;
  }
  if ( a2 < (v8 & 0xFFFFFFFFFFFFFFFCuLL) || a2 >= SizeOfImage + (v8 & 0xFFFFFFFFFFFFFFFCuLL) )
    return 0;
  *a3 = v8;
  result = 1;
  *a4 = SizeOfImage;
  return result;
}
