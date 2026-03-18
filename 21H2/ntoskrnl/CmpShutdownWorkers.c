/*
 * XREFs of CmpShutdownWorkers @ 0x14091D790
 * Callers:
 *     CmShutdownSystem1 @ 0x14053EBD8 (CmShutdownSystem1.c)
 * Callees:
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 */

BOOLEAN CmpShutdownWorkers()
{
  struct _KTIMER *v0; // rbx
  __int64 v1; // rdi
  BOOLEAN result; // al

  v0 = &CmpLazyWriterData;
  v1 = 3LL;
  do
  {
    result = KeCancelTimer(v0);
    v0 += 3;
    --v1;
  }
  while ( v1 );
  return result;
}
