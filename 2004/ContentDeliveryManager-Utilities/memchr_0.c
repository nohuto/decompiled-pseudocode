/*
 * XREFs of memchr_0 @ 0x1800CDD95
 * Callers:
 *     _Stoulx @ 0x1800B0AC0 (_Stoulx.c)
 *     _Stoullx @ 0x1800B1600 (_Stoullx.c)
 *     _Stoxflt @ 0x1800B7FC4 (_Stoxflt.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memchr_0(const void *Buf, int Val, size_t MaxCount)
{
  return memchr(Buf, Val, MaxCount);
}
