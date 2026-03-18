/*
 * XREFs of EtwpUpdateKernelGroupsWork @ 0x14077F370
 * Callers:
 *     <none>
 * Callees:
 *     EtwpUpdateGlobalGroupMasks @ 0x140780310 (EtwpUpdateGlobalGroupMasks.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpUpdateKernelGroupsWork(void *a1)
{
  ExFreePoolWithTag(a1, 0);
  return EtwpUpdateGlobalGroupMasks(EtwpHostSiloState, 0LL, 8LL);
}
