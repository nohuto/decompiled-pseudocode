/*
 * XREFs of BgGetContext @ 0x1409EE038
 * Callers:
 *     BgkResumePrepare @ 0x140993078 (BgkResumePrepare.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x140228560 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x140399518 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140399568 (BgpFwAcquireLock.c)
 *     ResFwGetContext @ 0x1409EE088 (ResFwGetContext.c)
 */

__int64 BgGetContext()
{
  __int64 v0; // rbx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( KeGetCurrentIrql() > 2u )
    return 0LL;
  v0 = 0LL;
  v2 = 0LL;
  BgpFwAcquireLock();
  if ( (dword_140C13310 & 1) != 0 )
  {
    ResFwGetContext(&v2);
    v0 = v2;
  }
  BgpFwReleaseLock();
  return v0;
}
