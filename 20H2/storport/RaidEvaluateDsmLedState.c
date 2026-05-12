/*
 * XREFs of RaidEvaluateDsmLedState @ 0x1C0044F78
 * Callers:
 *     RaidDsmGetLedState @ 0x1C0044CD4 (RaidDsmGetLedState.c)
 *     RaidDsmGetSupportedLedState @ 0x1C0044D8C (RaidDsmGetSupportedLedState.c)
 *     RaidDsmQuerySupportedFunctionForLedState @ 0x1C0044E54 (RaidDsmQuerySupportedFunctionForLedState.c)
 *     RaidDsmSetLedState @ 0x1C0044F0C (RaidDsmSetLedState.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000BD70 (RaidAllocatePool.c)
 *     memset @ 0x1C001F8C0 (memset.c)
 *     RaBuildDsmRequestForLedState @ 0x1C00437BC (RaBuildDsmRequestForLedState.c)
 *     RaidSyncAcpiEvalMethod @ 0x1C0045ABC (RaidSyncAcpiEvalMethod.c)
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
