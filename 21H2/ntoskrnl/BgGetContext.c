/*
 * XREFs of BgGetContext @ 0x140AAB2D4
 * Callers:
 *     BgkResumePrepare @ 0x140A4E794 (BgkResumePrepare.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1403A7BF0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1403A7C40 (BgpFwAcquireLock.c)
 *     ResFwGetContext @ 0x140AAB320 (ResFwGetContext.c)
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
  if ( (dword_140C0DF90 & 1) != 0 )
  {
    ResFwGetContext(&v2);
    v0 = v2;
  }
  BgpFwReleaseLock();
  return v0;
}
