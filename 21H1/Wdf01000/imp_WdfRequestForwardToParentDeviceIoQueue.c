/*
 * XREFs of imp_WdfRequestForwardToParentDeviceIoQueue @ 0x1C004A210
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1C002F7EC (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qDDd @ 0x1C0049D80 (WPP_IFR_SF_qDDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0059244 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@Z @ 0x1C0076120 (-ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@.c)
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x1C0076B7C (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 *     Vf_VerifyWdfRequestForwardToParentDeviceIoQueue @ 0x1C00C6078 (Vf_VerifyWdfRequestForwardToParentDeviceIoQueue.c)
 */

__int64 __fastcall imp_WdfRequestForwardToParentDeviceIoQueue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        WDFQUEUE__ *ParentDeviceQueue,
        _WDF_REQUEST_FORWARD_OPTIONS *ForwardOptions)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 v7; // dl
  _WDF_REQUEST_FORWARD_OPTIONS *v8; // r9
  unsigned int v9; // ebx
  unsigned int _a3; // eax
  FxRequest *v11; // rdx
  FxIoQueue *v12; // rcx
  int v14; // eax
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxIoQueue *queue; // [rsp+60h] [rbp+8h] BYREF
  void *PPObject; // [rsp+78h] [rbp+20h] BYREF

  PPObject = 0LL;
  queue = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)ParentDeviceQueue,
    0x1003u,
    (void **)&queue);
  m_Globals = queue->m_Globals;
  FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Request, 0x1008u, &PPObject);
  if ( !ForwardOptions )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( ForwardOptions->Size != 8 )
  {
    v9 = -1073741820;
    WPP_IFR_SF_qddd(
      m_Globals,
      v7,
      6u,
      0x4Au,
      WPP_FxRequestApi_cpp_Traceguids,
      ForwardOptions,
      8,
      ForwardOptions->Size,
      -1073741820);
    return v9;
  }
  _a3 = ForwardOptions->Flags;
  if ( (_a3 & 0xFFFFFFFE) != 0 )
  {
    v9 = -1073741811;
    WPP_IFR_SF_qDDd(m_Globals, v7, 6u, 0x4Bu, WPP_FxRequestApi_cpp_Traceguids, ForwardOptions, _a3, 1u);
    return v9;
  }
  v11 = (FxRequest *)PPObject;
  if ( !*((_BYTE *)PPObject + 214) )
  {
    v12 = (FxIoQueue *)*((_QWORD *)PPObject + 31);
    if ( v12 )
      return (unsigned int)FxIoQueue::ForwardRequestToParent(v12, queue, (FxRequest *)PPObject, v8);
  }
  if ( m_Globals->FxVerifierOn )
  {
    v14 = Vf_VerifyWdfRequestForwardToParentDeviceIoQueue(m_Globals, (FxRequest *)PPObject);
    v11 = (FxRequest *)PPObject;
    v9 = v14;
  }
  else
  {
    v9 = 0;
  }
  if ( (v9 & 0x80000000) == 0 )
    return (unsigned int)FxIoQueue::QueueDriverCreatedRequest(queue, v11, 1u);
  return v9;
}
