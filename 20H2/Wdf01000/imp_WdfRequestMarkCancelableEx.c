/*
 * XREFs of imp_WdfRequestMarkCancelableEx @ 0x1C0016A60
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0003F34 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z @ 0x1C0016B14 (-RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002DD0C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C00588FC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0058968 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfRequestMarkCancelableEx(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        void (__fastcall *EvtRequestCancel)(WDFREQUEST__ *))
{
  __int64 v5; // rdx
  FxRequest *v6; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxIoQueue *m_IoQueue; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxRequest *pRequest; // [rsp+58h] [rbp+10h] BYREF

  pRequest = 0LL;
  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(v5) = 0;
  v6 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    v5 = LOWORD(v6->__vftable);
    v6 = (FxRequest *)((char *)v6 - v5);
  }
  if ( v6->m_Type == 4104 )
  {
    pRequest = v6;
  }
  else
  {
    FxObjectHandleGetPtrQI(v6, (void **)&pRequest, (void *)Request, 0x1008u, v5);
    v6 = pRequest;
  }
  m_Globals = v6->m_Globals;
  if ( !EvtRequestCancel )
    FxVerifierNullBugCheck(v6->m_Globals, retaddr);
  if ( !v6->m_Completed )
  {
    m_IoQueue = v6->m_IoQueue;
    if ( m_IoQueue )
      return FxIoQueue::RequestCancelable(m_IoQueue, v6, 1u, EvtRequestCancel, 1u);
  }
  WPP_IFR_SF_qL(m_Globals, 2u, 0x10u, 0x51u, WPP_FxRequestApi_cpp_Traceguids, (const void *)Request, 0xC0000010);
  FxVerifierDbgBreakPoint(m_Globals);
  return -1073741808;
}
