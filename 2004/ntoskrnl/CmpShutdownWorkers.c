/*
 * XREFs of CmpShutdownWorkers @ 0x140873880
 * Callers:
 *     CmShutdownSystem @ 0x1408682A8 (CmShutdownSystem.c)
 * Callees:
 *     KeCancelTimer @ 0x1402C9300 (KeCancelTimer.c)
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
