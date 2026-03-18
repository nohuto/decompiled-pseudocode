/*
 * XREFs of DpiGetIoMmuContextFromDevice @ 0x1C00568B4
 * Callers:
 *     DpiAddMemoryTracker @ 0x1C00567F0 (DpiAddMemoryTracker.c)
 *     DpiMapMemoryTrackersToIoMmu @ 0x1C0056B7C (DpiMapMemoryTrackersToIoMmu.c)
 *     DpiRemoveMemoryTracker @ 0x1C0056C34 (DpiRemoveMemoryTracker.c)
 *     DpiResetIoMmuContext @ 0x1C0056CC8 (DpiResetIoMmuContext.c)
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0216024 (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiMapIommuContiguous @ 0x1C02C6670 (DpiMapIommuContiguous.c)
 *     DpiMapIommuIdentityRange @ 0x1C02C66C0 (DpiMapIommuIdentityRange.c)
 *     DpiUnmapIommuContiguous @ 0x1C02C6EE0 (DpiUnmapIommuContiguous.c)
 *     DpiUnmapIommuIdentityRange @ 0x1C02C6F30 (DpiUnmapIommuIdentityRange.c)
 *     DpiAttachIoMmuDomain @ 0x1C02D188C (DpiAttachIoMmuDomain.c)
 * Callees:
 *     DpiGetFdoFromDevice @ 0x1C001E510 (DpiGetFdoFromDevice.c)
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
