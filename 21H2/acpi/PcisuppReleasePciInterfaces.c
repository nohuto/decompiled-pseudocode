/*
 * XREFs of PcisuppReleasePciInterfaces @ 0x1C00B61A0
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C004C350 (ACPIBusIrpRemoveDevice.c)
 * Callees:
 *     ACPIInternalClearFlags @ 0x1C0001748 (ACPIInternalClearFlags.c)
 *     WPP_RECORDER_SF_qss @ 0x1C00077E8 (WPP_RECORDER_SF_qss.c)
 *     ACPIWakeReleasePmeRouting @ 0x1C00636D0 (ACPIWakeReleasePmeRouting.c)
 *     PcisuppReleasePciRouting @ 0x1C00B629C (PcisuppReleasePciRouting.c)
 */

void __fastcall PcisuppReleasePciInterfaces(_QWORD *a1)
{
  __int64 v2; // rcx
  const char *v3; // rax
  const char *v4; // rdx

  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(&PciRouteInterfaceLock, 1u);
  if ( (a1[125] & 2) != 0 )
  {
    ACPIInternalClearFlags(a1 + 125, 2LL);
    if ( _InterlockedExchangeAdd(&PciRoutingInterfaceCount, 0xFFFFFFFF) == 1 )
    {
      PcisuppReleasePciRouting();
      ACPIWakeReleasePmeRouting();
      v2 = a1[1];
      v3 = (const char *)&unk_1C006FB8B;
      v4 = (const char *)&unk_1C006FB8B;
      if ( (v2 & 0x200000000000LL) != 0 )
      {
        v3 = (const char *)a1[76];
        if ( (v2 & 0x400000000000LL) != 0 )
          v4 = (const char *)a1[77];
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          5u,
          0xAu,
          (__int64)&WPP_d83fe99678ff30ab9ed6237ab8d0cc59_Traceguids,
          (char)a1,
          v3,
          v4);
    }
  }
  ExReleaseResourceLite(&PciRouteInterfaceLock);
  KeLeaveCriticalRegion();
}
