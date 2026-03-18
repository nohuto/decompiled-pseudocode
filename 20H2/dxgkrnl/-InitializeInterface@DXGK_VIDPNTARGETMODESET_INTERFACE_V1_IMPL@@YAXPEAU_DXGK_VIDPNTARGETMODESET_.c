/*
 * XREFs of ?InitializeInterface@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C018E51C
 * Callers:
 *     ?_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C018E3FC (-_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::InitializeInterface(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct _DXGK_VIDPNTARGETMODESET_INTERFACE *a2)
{
  __int64 v3; // rax

  if ( !this )
  {
    v3 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v3);
  }
  *(_QWORD *)this = DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::GetNumModes;
  *((_QWORD *)this + 1) = DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquireFirstModeInfo;
  *((_QWORD *)this + 2) = DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo;
  *((_QWORD *)this + 3) = DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquirePinnedModeInfo;
  *((_QWORD *)this + 4) = DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::ReleaseModeInfo;
  *((_QWORD *)this + 5) = DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::CreateNewModeInfo;
  *((_QWORD *)this + 6) = DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AddMode;
  *((_QWORD *)this + 7) = DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::PinMode;
}
