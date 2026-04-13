/*
 * XREFs of memchr_0 @ 0x1800CD945
 * Callers:
 *     _Stoulx @ 0x1800B0670 (_Stoulx.c)
 *     _Stoullx @ 0x1800B11B0 (_Stoullx.c)
 *     _Stoxflt @ 0x1800B7B74 (_Stoxflt.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memchr_0(const void *Buf, int Val, size_t MaxCount)
{
  return memchr(Buf, Val, MaxCount);
}
