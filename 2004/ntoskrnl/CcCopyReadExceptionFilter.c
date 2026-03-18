/*
 * XREFs of CcCopyReadExceptionFilter @ 0x1404E4EB4
 * Callers:
 *     CcMapAndCopyInToCache @ 0x140222C30 (CcMapAndCopyInToCache.c)
 *     CcCopyBytesToUserBuffer @ 0x140231960 (CcCopyBytesToUserBuffer.c)
 *     CcCompleteAsyncRead @ 0x1402C7C20 (CcCompleteAsyncRead.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcCopyReadExceptionFilter(int **a1, _DWORD *a2)
{
  int v2; // r8d

  v2 = **a1;
  *a2 = v2;
  if ( v2 == -1073741818 && (unsigned int)(*a1)[6] >= 3 )
    *a2 = (*a1)[12];
  return 1LL;
}
