/*
 * XREFs of MonitorQueryDmmSourceModeSetInterface @ 0x1C03B096C
 * Callers:
 *     ?AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGDMM_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C03A0C20 (-AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall MonitorQueryDmmSourceModeSetInterface(DXGADAPTER *this, _QWORD *a2)
{
  __int64 v4; // rax

  v4 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v4 + 24) = this;
  *(_QWORD *)(v4 + 32) = a2;
  if ( this && a2 )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
      WdLogSingleEntry0(1LL);
    if ( *((_QWORD *)this + 349) )
    {
      *a2 = &DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::DmmMonitorSourceModeSetInterfaceV1;
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      return 3221225659LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
}
