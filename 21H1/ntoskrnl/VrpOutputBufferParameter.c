/*
 * XREFs of VrpOutputBufferParameter @ 0x1405CAFE4
 * Callers:
 *     VrpPostEnumerateKey @ 0x1405C9814 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x1405CAD04 (VrpPostQueryKey.c)
 * Callees:
 *     memmove @ 0x140408CC0 (memmove.c)
 */

__int64 __fastcall VrpOutputBufferParameter(char a1, void *a2, unsigned int a3, const void **a4)
{
  if ( a1 == 1 )
    memmove(a2, *a4, a3);
  return 0LL;
}
