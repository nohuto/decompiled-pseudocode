/*
 * XREFs of vGetLastBootTimeStatus @ 0x1C000A03C
 * Callers:
 *     InitFNTCache @ 0x1C000A170 (InitFNTCache.c)
 * Callees:
 *     bQueryFntCacheReg @ 0x1C000A5CC (bQueryFntCacheReg.c)
 */

__int64 vGetLastBootTimeStatus()
{
  int FntCacheReg; // eax
  __int64 v1; // rcx
  __int64 result; // rax

  *(_DWORD *)(qword_1C033ABC8 + 12) = 0;
  FntCacheReg = bQueryFntCacheReg(ghkeyGreInitialize);
  v1 = qword_1C033ABC8;
  if ( FntCacheReg )
    *(_DWORD *)(qword_1C033ABC8 + 12) = 0;
  result = *(unsigned int *)(v1 + 12);
  *(_DWORD *)(v1 + 16) = result;
  return result;
}
