/*
 * XREFs of CcCopyReadExceptionFilter @ 0x1404E9FD4
 * Callers:
 *     CcCompleteAsyncRead @ 0x1402F7640 (CcCompleteAsyncRead.c)
 *     CcCopyBytesToUserBuffer @ 0x1403234C0 (CcCopyBytesToUserBuffer.c)
 *     CcMapAndCopyInToCache @ 0x140331C70 (CcMapAndCopyInToCache.c)
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
