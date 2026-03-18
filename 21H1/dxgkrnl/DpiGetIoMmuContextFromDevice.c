/*
 * XREFs of DpiGetIoMmuContextFromDevice @ 0x1C00558A4
 * Callers:
 *     DpiAddMemoryTracker @ 0x1C00557E0 (DpiAddMemoryTracker.c)
 *     DpiMapMemoryTrackersToIoMmu @ 0x1C0055B6C (DpiMapMemoryTrackersToIoMmu.c)
 *     DpiRemoveMemoryTracker @ 0x1C0055C24 (DpiRemoveMemoryTracker.c)
 *     DpiResetIoMmuContext @ 0x1C0055CB8 (DpiResetIoMmuContext.c)
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0211DD4 (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiMapIommuContiguous @ 0x1C02C20F0 (DpiMapIommuContiguous.c)
 *     DpiMapIommuIdentityRange @ 0x1C02C2140 (DpiMapIommuIdentityRange.c)
 *     DpiUnmapIommuContiguous @ 0x1C02C2960 (DpiUnmapIommuContiguous.c)
 *     DpiUnmapIommuIdentityRange @ 0x1C02C29B0 (DpiUnmapIommuIdentityRange.c)
 *     DpiAttachIoMmuDomain @ 0x1C02CD30C (DpiAttachIoMmuDomain.c)
 * Callees:
 *     DpiGetFdoFromDevice @ 0x1C001F7A4 (DpiGetFdoFromDevice.c)
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
