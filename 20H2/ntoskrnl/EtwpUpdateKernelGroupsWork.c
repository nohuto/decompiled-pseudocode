/*
 * XREFs of EtwpUpdateKernelGroupsWork @ 0x14078CC80
 * Callers:
 *     <none>
 * Callees:
 *     EtwpUpdateGlobalGroupMasks @ 0x14078E1F8 (EtwpUpdateGlobalGroupMasks.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpUpdateKernelGroupsWork(void *a1)
{
  ExFreePoolWithTag(a1, 0);
  return EtwpUpdateGlobalGroupMasks(EtwpHostSiloState, 0LL, 8LL);
}
