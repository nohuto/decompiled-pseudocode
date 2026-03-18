/*
 * XREFs of MonitorQueryDmmSourceModeSetInterface @ 0x1C02F2E00
 * Callers:
 *     ?AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGDMM_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C02E0920 (-AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall MonitorQueryDmmSourceModeSetInterface(DXGADAPTER *this, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax

  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = this;
  *(_QWORD *)(v6 + 32) = a2;
  if ( this && a2 )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    {
      v13 = WdLogNewEntry5_WdAssertion(v12, v11);
      WdLogEvent5_WdAssertion(v13);
    }
    if ( *((_QWORD *)this + 337) )
    {
      *a2 = &DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::DmmMonitorSourceModeSetInterfaceV1;
      return 0LL;
    }
    else
    {
      v14 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v14 + 24) = this;
      WdLogEvent5_WdError(v14);
      return 3221225659LL;
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v9 + 24) = 0LL;
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
}
