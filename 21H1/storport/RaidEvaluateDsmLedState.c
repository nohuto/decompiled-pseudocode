/*
 * XREFs of RaidEvaluateDsmLedState @ 0x1C004398C
 * Callers:
 *     RaidDsmGetLedState @ 0x1C00436E8 (RaidDsmGetLedState.c)
 *     RaidDsmGetSupportedLedState @ 0x1C00437A0 (RaidDsmGetSupportedLedState.c)
 *     RaidDsmQuerySupportedFunctionForLedState @ 0x1C0043868 (RaidDsmQuerySupportedFunctionForLedState.c)
 *     RaidDsmSetLedState @ 0x1C0043920 (RaidDsmSetLedState.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007C88 (RaidAllocatePool.c)
 *     memset @ 0x1C001B4C0 (memset.c)
 *     RaBuildDsmRequestForLedState @ 0x1C0042280 (RaBuildDsmRequestForLedState.c)
 *     RaidSyncAcpiEvalMethod @ 0x1C00444D0 (RaidSyncAcpiEvalMethod.c)
 */

__int64 __fastcall RaidEvaluateDsmLedState(
        PDEVICE_OBJECT DeviceObject,
        int a2,
        int a3,
        union _LARGE_INTEGER *a4,
        ULONG *a5)
{
  PVOID Pool; // rax
  __int64 v10; // rdx
  void *v11; // rbx
  int v13; // esi
  __int64 v14[5]; // [rsp+30h] [rbp-28h] BYREF

  LODWORD(v14[0]) = 0;
  memset(a4, 0, *a5);
  Pool = RaidAllocatePool(NonPagedPoolNx, 0x3CuLL, 0x43416152u, (__int64)DeviceObject);
  v11 = Pool;
  if ( !Pool )
    return 3221225626LL;
  RaBuildDsmRequestForLedState((__int64)Pool, v10, a2, a3);
  v13 = RaidSyncAcpiEvalMethod(DeviceObject, v11, 0x3Cu, a4, *a5, (__int64)v14);
  if ( v13 >= 0 )
    *a5 = v14[0];
  ExFreePoolWithTag(v11, 0x43416152u);
  return (unsigned int)v13;
}
