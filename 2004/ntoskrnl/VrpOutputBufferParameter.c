/*
 * XREFs of VrpOutputBufferParameter @ 0x1405CC3B4
 * Callers:
 *     VrpPostEnumerateKey @ 0x1405CABE4 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x1405CC0D4 (VrpPostQueryKey.c)
 * Callees:
 *     memmove @ 0x140409FC0 (memmove.c)
 */

__int64 __fastcall VrpOutputBufferParameter(char a1, void *a2, unsigned int a3, const void **a4)
{
  if ( a1 == 1 )
    memmove(a2, *a4, a3);
  return 0LL;
}
