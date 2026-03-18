/*
 * XREFs of DxgkAcquireAdapterDdiSync @ 0x1C0161AF0
 * Callers:
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C001C664 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C0056144 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x1C0056440 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x1C00565D0 (DpiIndirectCbOpmSetSrmList.c)
 *     DpiPdoDispatchPnp @ 0x1C0153AE0 (DpiPdoDispatchPnp.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C0154580 (DpiPdoDispatchInternalIoctl.c)
 *     DpiPdoSetDevicePower @ 0x1C01624FC (DpiPdoSetDevicePower.c)
 *     DpiPdoIsChildConnected @ 0x1C01652A4 (DpiPdoIsChildConnected.c)
 *     DpiPdoGetDeviceDescriptor @ 0x1C0165E94 (DpiPdoGetDeviceDescriptor.c)
 *     DpiGetMonitorDescriptor @ 0x1C0167AB0 (DpiGetMonitorDescriptor.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C016A9C8 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1C02C6E30 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C02D1604 (DpiAcpiHandleAcpiEvent.c)
 * Callees:
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000A490 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 */

__int64 __fastcall DxgkAcquireAdapterDdiSync(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax

  v2 = (int)a2;
  if ( a1 )
  {
    if ( (unsigned int)(a2 - 1) <= 1 )
    {
      DXGADAPTER::AcquireDdiSync(a1, a2);
      return 0LL;
    }
    v4 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v4 + 24) = v2;
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v4 + 24) = -1073741811LL;
  }
  WdLogEvent5_WdError(v4);
  return 3221225485LL;
}
