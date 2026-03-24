/*
 * XREFs of CmpShutdownWorkers @ 0x140876D50
 * Callers:
 *     CmShutdownSystem @ 0x14086B8F8 (CmShutdownSystem.c)
 * Callees:
 *     KeCancelTimer @ 0x140260240 (KeCancelTimer.c)
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
