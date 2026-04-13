/*
 * XREFs of memchr_0 @ 0x1800CB735
 * Callers:
 *     _Stoulx @ 0x1800AE460 (_Stoulx.c)
 *     _Stoullx @ 0x1800AEFA0 (_Stoullx.c)
 *     _Stoxflt @ 0x1800B5964 (_Stoxflt.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memchr_0(const void *Buf, int Val, size_t MaxCount)
{
  return memchr(Buf, Val, MaxCount);
}
