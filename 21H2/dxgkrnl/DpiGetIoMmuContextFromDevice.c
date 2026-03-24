/*
 * XREFs of DpiGetIoMmuContextFromDevice @ 0x1C0057704
 * Callers:
 *     DpiAddMemoryTracker @ 0x1C0057640 (DpiAddMemoryTracker.c)
 *     DpiMapMemoryTrackersToIoMmu @ 0x1C00579CC (DpiMapMemoryTrackersToIoMmu.c)
 *     DpiRemoveMemoryTracker @ 0x1C0057A84 (DpiRemoveMemoryTracker.c)
 *     DpiResetIoMmuContext @ 0x1C0057B18 (DpiResetIoMmuContext.c)
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0215D54 (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiMapIommuContiguous @ 0x1C02C6A20 (DpiMapIommuContiguous.c)
 *     DpiMapIommuIdentityRange @ 0x1C02C6A70 (DpiMapIommuIdentityRange.c)
 *     DpiUnmapIommuContiguous @ 0x1C02C7290 (DpiUnmapIommuContiguous.c)
 *     DpiUnmapIommuIdentityRange @ 0x1C02C72E0 (DpiUnmapIommuIdentityRange.c)
 *     DpiAttachIoMmuDomain @ 0x1C02D1BC8 (DpiAttachIoMmuDomain.c)
 * Callees:
 *     DpiGetFdoFromDevice @ 0x1C001E580 (DpiGetFdoFromDevice.c)
 */

__int64 __fastcall DpiGetIoMmuContextFromDevice(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 FdoFromDevice; // rbx
  __int64 v4; // rax

  FdoFromDevice = DpiGetFdoFromDevice(a1);
  if ( !FdoFromDevice )
  {
    v4 = WdLogNewEntry5_WdAssertion(v2, v1);
    *(_QWORD *)(v4 + 24) = 635LL;
    WdLogEvent5_WdAssertion(v4);
  }
  return FdoFromDevice + 5744;
}
