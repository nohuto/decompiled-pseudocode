/*
 * XREFs of imp_WdfRequestReuse @ 0x1C0002340
 * Callers:
 *     <none>
 * Callees:
 *     ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x1C00023E0 (-Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0003F34 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C002E6DC (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0059258 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00592C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfRequestReuse(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        unsigned __int64 ReuseParams)
{
  _WDF_REQUEST_REUSE_PARAMS *v3; // rbx
  FxRequest *v4; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  _WDF_BIND_INFO *WdfBindInfo; // rax
  int _a3; // eax
  int _a2; // edx
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxRequest *pRequest; // [rsp+58h] [rbp+10h] BYREF

  v3 = (_WDF_REQUEST_REUSE_PARAMS *)ReuseParams;
  LOWORD(ReuseParams) = 0;
  pRequest = 0LL;
  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v4 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    ReuseParams = LOWORD(v4->__vftable);
    v4 = (FxRequest *)((char *)v4 - ReuseParams);
  }
  if ( v4->m_Type == 4104 )
  {
    pRequest = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pRequest, (void *)Request, 0x1008u, ReuseParams);
    v4 = pRequest;
  }
  m_Globals = v4->m_Globals;
  if ( !v3 )
    FxVerifierNullBugCheck(v4->m_Globals, retaddr);
  if ( v3->Size == 24 )
  {
    WdfBindInfo = m_Globals->WdfBindInfo;
    if ( WdfBindInfo->Version.Major > 1 || WdfBindInfo->Version.Major == 1 && WdfBindInfo->Version.Minor >= 0xB )
      _a3 = -4;
    else
      _a3 = -2;
    _a2 = v3->Flags;
    if ( (_a2 & _a3) != 0 )
    {
      WPP_IFR_SF_DDd(m_Globals, _a2, 0x10u, 0xDu, WPP_FxRequestApi_cpp_Traceguids, _a2, _a3, -1073741811);
      return -1073741811;
    }
    else
    {
      return FxRequest::Reuse(v4, v3);
    }
  }
  else
  {
    WPP_IFR_SF_DDd(m_Globals, v3->Size, 0x10u, 0xCu, WPP_FxRequestApi_cpp_Traceguids, v3->Size, 24, -1073741811);
    return -1073741811;
  }
}
