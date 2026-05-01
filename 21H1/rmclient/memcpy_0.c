/*
 * XREFs of memcpy_0 @ 0x18000AB24
 * Callers:
 *     CempGetTokenHostInfo @ 0x180007590 (CempGetTokenHostInfo.c)
 *     RmpClientWnfSubscriptionWorker @ 0x180007F60 (RmpClientWnfSubscriptionWorker.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  return memcpy(a1, Src, Size);
}
