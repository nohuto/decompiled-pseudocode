/*
 * XREFs of PpmWmiIdleAccountingWork @ 0x1408EE760
 * Callers:
 *     <none>
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x1402E3AE0 (PopExecuteOnTargetProcessors.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmWmiIdleAccountingWork(void *a1)
{
  ExFreePoolWithTag(a1, 0x656C6469u);
  return PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmWmiFireIdleAccountingEvent, 0LL, 0LL);
}
