/*
 * XREFs of DxgkReleaseAdapterDdiSync @ 0x1C0170410
 * Callers:
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C001C714 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C0057094 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x1C0057390 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x1C0057520 (DpiIndirectCbOpmSetSrmList.c)
 *     DpiPdoDispatchPnp @ 0x1C01625D0 (DpiPdoDispatchPnp.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C01630D0 (DpiPdoDispatchInternalIoctl.c)
 *     DpiPdoSetDevicePower @ 0x1C0170D9C (DpiPdoSetDevicePower.c)
 *     DpiPdoIsChildConnected @ 0x1C0173B44 (DpiPdoIsChildConnected.c)
 *     DpiPdoGetDeviceDescriptor @ 0x1C0174734 (DpiPdoGetDeviceDescriptor.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C01881B4 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     DpiGetMonitorDescriptor @ 0x1C0195204 (DpiGetMonitorDescriptor.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1C02CA3F0 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C02D4BC4 (DpiAcpiHandleAcpiEvent.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0003DE0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkReleaseAdapterDdiSync(DXGADAPTER *a1, __int64 a2)
{
  __int64 v3; // rax

  if ( a1 )
  {
    DXGADAPTER::ReleaseDdiSync(a1);
    return 0LL;
  }
  else
  {
    v3 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v3 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v3);
    return 3221225485LL;
  }
}
