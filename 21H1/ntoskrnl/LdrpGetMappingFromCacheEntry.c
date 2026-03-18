/*
 * XREFs of LdrpGetMappingFromCacheEntry @ 0x14033B6E4
 * Callers:
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x14033B550 (LdrpGetAlternateResourceModuleHandleEx.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14027DAE0 (RtlImageNtHeader.c)
 */

char __fastcall LdrpGetMappingFromCacheEntry(unsigned int a1, unsigned __int64 a2, _QWORD *a3, _QWORD *a4)
{
  unsigned __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  char result; // al
  __int64 v11; // rax
  __int16 v12; // cx

  if ( !a2 )
    return 0;
  if ( !a3 )
    return 0;
  if ( a1 >= AlternateResourceModuleCount )
    return 0;
  _mm_lfence();
  v7 = (unsigned __int64)a1 << 6;
  v8 = *(_QWORD *)((char *)AlternateResourceModules + v7 + 32);
  v9 = *(_QWORD *)((char *)AlternateResourceModules + v7 + 48);
  if ( (unsigned __int64)(v8 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 0;
  if ( !v9 )
  {
    v11 = RtlImageNtHeader(v8 & 0xFFFFFFFFFFFFFFFCuLL);
    if ( !v11 )
      return 0;
    v12 = *(_WORD *)(v11 + 24);
    if ( v12 == 267 || v12 == 523 )
      v9 = *(unsigned int *)(v11 + 80);
    else
      v9 = 0LL;
    if ( !v9 )
      return 0;
  }
  if ( a2 < (v8 & 0xFFFFFFFFFFFFFFFCuLL) || a2 >= v9 + (v8 & 0xFFFFFFFFFFFFFFFCuLL) )
    return 0;
  *a3 = v8;
  result = 1;
  *a4 = v9;
  return result;
}
