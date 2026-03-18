/*
 * XREFs of imp_WdfRequestRetrieveOutputMemory @ 0x1C004A170
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDeviceControlOutputMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x1C00030E0 (-GetDeviceControlOutputMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z.c)
 *     ?GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x1C000371C (-GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0058968 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRequestRetrieveOutputMemory(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        WDFMEMORY__ **Memory)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  unsigned __int8 MajorFunction; // al
  int DeviceControlOutputMemoryObject; // eax
  unsigned int v9; // ebx
  void *pBuffer[2]; // [rsp+40h] [rbp-10h] BYREF
  void *retaddr; // [rsp+68h] [rbp+18h]
  IFxMemory *pMemory; // [rsp+70h] [rbp+20h] BYREF
  FxRequest *pRequest; // [rsp+80h] [rbp+30h] BYREF
  unsigned __int64 length; // [rsp+88h] [rbp+38h] BYREF

  pRequest = 0LL;
  pBuffer[0] = 0LL;
  length = 0LL;
  pMemory = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Request,
    0x1008u,
    (void **)&pRequest);
  m_Globals = pRequest->m_Globals;
  if ( !Memory )
    FxVerifierNullBugCheck(pRequest->m_Globals, retaddr);
  MajorFunction = pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
  if ( MajorFunction == 4 )
  {
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qL(m_Globals, 5u, 0x10u, 0x15u, WPP_FxRequestApi_cpp_Traceguids, Request, 0xC0000010);
    return 3221225488LL;
  }
  else
  {
    if ( (unsigned __int8)(MajorFunction - 14) <= 1u )
      DeviceControlOutputMemoryObject = FxRequest::GetDeviceControlOutputMemoryObject(
                                          pRequest,
                                          (FxRequestOutputBuffer **)&pMemory,
                                          (_MDL **)pBuffer,
                                          &length);
    else
      DeviceControlOutputMemoryObject = FxRequest::GetMemoryObject(
                                          pRequest,
                                          (FxRequestSystemBuffer **)&pMemory,
                                          pBuffer,
                                          &length);
    v9 = DeviceControlOutputMemoryObject;
    if ( DeviceControlOutputMemoryObject >= 0 )
      *Memory = pMemory->GetHandle(pMemory);
    return v9;
  }
}
