/*
 * XREFs of imp_WdfRequestReuse @ 0x1C0010520
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x1C00105B0 (-Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C0052E4C (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfRequestReuse(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_REUSE_PARAMS *ReuseParams)
{
  unsigned __int8 v4; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _WDF_BIND_INFO *WdfBindInfo; // rax
  int _a3; // eax
  unsigned int _a2; // edx
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxRequest *pRequest; // [rsp+50h] [rbp+8h] BYREF

  pRequest = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  m_Globals = pRequest->m_Globals;
  if ( !ReuseParams )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( ReuseParams->Size == 24 )
  {
    WdfBindInfo = m_Globals->WdfBindInfo;
    if ( WdfBindInfo->Version.Major > 1 || WdfBindInfo->Version.Major == 1 && WdfBindInfo->Version.Minor >= 0xB )
      _a3 = -4;
    else
      _a3 = -2;
    _a2 = ReuseParams->Flags;
    if ( (_a2 & _a3) == 0 )
      return FxRequest::Reuse(pRequest, ReuseParams);
    WPP_IFR_SF_DDd(m_Globals, _a2, 0x10u, 0xDu, WPP_FxRequestApi_cpp_Traceguids, _a2, _a3, -1073741811);
  }
  else
  {
    WPP_IFR_SF_DDd(m_Globals, v4, 0x10u, 0xCu, WPP_FxRequestApi_cpp_Traceguids, ReuseParams->Size, 24, -1073741811);
  }
  return -1073741811;
}
