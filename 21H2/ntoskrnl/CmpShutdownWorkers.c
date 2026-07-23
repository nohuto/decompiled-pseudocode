/*
 * XREFs of CmpShutdownWorkers @ 0x140876EB0
 * Callers:
 *     CmShutdownSystem @ 0x14086BA58 (CmShutdownSystem.c)
 * Callees:
 *     KeCancelTimer @ 0x1402819B0 (KeCancelTimer.c)
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
