/*
 * XREFs of imp_WdfRequestProbeAndLockUserBufferForRead @ 0x1C004A5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000CF7C (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C00150E8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C004E398 (-ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00592C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C6814 (-Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall imp_WdfRequestProbeAndLockUserBufferForRead(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        void *Buffer,
        unsigned __int64 Length,
        WDFMEMORY__ **MemoryObject)
{
  unsigned int v5; // r15d
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  WDFMEMORY__ **v8; // rsi
  __int64 result; // rax
  unsigned int v10; // edx
  FxRequest *v11; // r10
  _FX_DRIVER_GLOBALS *v12; // rcx
  __int64 v13; // rcx
  unsigned __int8 v14; // r8
  unsigned __int8 v15; // r8
  int IsDriverOwned; // edi
  int _a1; // eax
  FxRequestMemory *pMemory; // [rsp+30h] [rbp-10h] BYREF
  void *retaddr; // [rsp+68h] [rbp+28h]
  unsigned __int8 irql; // [rsp+70h] [rbp+30h] BYREF
  FxRequest *pRequest; // [rsp+80h] [rbp+40h] BYREF

  pRequest = 0LL;
  v5 = Length;
  pMemory = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Request,
    0x1008u,
    (void **)&pRequest);
  m_Globals = pRequest->m_Globals;
  if ( !Buffer )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v8 = MemoryObject;
  if ( !MemoryObject )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *MemoryObject = 0LL;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    v11 = pRequest;
    v12 = pRequest->m_Globals;
    if ( v12->FxVerifierOn && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v12, v10, 9u) || *(_BYTE *)(v13 + 317)) )
    {
      irql = 0;
      FxNonPagedObject::Lock(v11, &irql, v14);
      if ( m_Globals->FxVerifierOn )
        IsDriverOwned = FxRequest::Vf_VerifyRequestIsDriverOwned(pRequest, m_Globals);
      else
        IsDriverOwned = 0;
      FxNonPagedObject::Unlock(pRequest, irql, v15);
      if ( IsDriverOwned < 0 )
        return (unsigned int)IsDriverOwned;
      v11 = pRequest;
    }
    _a1 = FxRequest::ProbeAndLockForRead(v11, Buffer, v5, &pMemory);
    IsDriverOwned = _a1;
    if ( _a1 >= 0 )
      *v8 = (WDFMEMORY__ *)FxObject::GetObjectHandleUnchecked(pMemory);
    else
      WPP_IFR_SF_d(m_Globals, 2u, 0x10u, 0x41u, WPP_FxRequestApi_cpp_Traceguids, _a1);
    return (unsigned int)IsDriverOwned;
  }
  return result;
}
