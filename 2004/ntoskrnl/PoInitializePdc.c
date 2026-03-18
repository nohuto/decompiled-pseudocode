/*
 * XREFs of PoInitializePdc @ 0x140A90A4C
 * Callers:
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 PoInitializePdc()
{
  PopPdcDeviceListLock = 0LL;
  return 0LL;
}
