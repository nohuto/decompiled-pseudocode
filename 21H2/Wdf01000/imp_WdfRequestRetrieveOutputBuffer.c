/*
 * XREFs of imp_WdfRequestRetrieveOutputBuffer @ 0x1C0001930
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDeviceControlOutputMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x1C0001A4C (-GetDeviceControlOutputMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z.c)
 *     ?GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x1C0001C3C (-GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0005DAC (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00532C0 (WPP_IFR_SF_qqqd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006CA68 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRequestRetrieveOutputBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        unsigned __int64 RequiredLength,
        void **Buffer,
        unsigned __int64 *Length)
{
  __int64 Offset; // rcx
  FxRequest *v9; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int64 *v11; // rdi
  unsigned __int8 MajorFunction; // al
  __int64 result; // rax
  unsigned __int64 v14; // rcx
  unsigned int v15; // edi
  unsigned __int64 length; // [rsp+50h] [rbp-20h] BYREF
  void *pBuffer; // [rsp+58h] [rbp-18h] BYREF
  IFxMemory *pMemory[2]; // [rsp+60h] [rbp-10h] BYREF
  void *retaddr; // [rsp+98h] [rbp+28h]
  FxRequest *pRequest; // [rsp+A8h] [rbp+38h] BYREF

  pRequest = 0LL;
  pBuffer = 0LL;
  length = 0LL;
  pMemory[0] = 0LL;
  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(Offset) = 0;
  v9 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    Offset = LOWORD(v9->__vftable);
    v9 = (FxRequest *)((char *)v9 - Offset);
  }
  if ( v9->m_Type == 4104 )
  {
    pRequest = v9;
  }
  else
  {
    FxObjectHandleGetPtrQI(v9, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v9 = pRequest;
  }
  m_Globals = v9->m_Globals;
  if ( !Buffer )
    FxVerifierNullBugCheck(v9->m_Globals, retaddr);
  v11 = Length;
  *Buffer = 0LL;
  if ( v11 )
    *v11 = 0LL;
  MajorFunction = v9->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
  if ( MajorFunction == 4 )
  {
    v15 = -1073741808;
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qL(m_Globals, 5u, 0x10u, 0x1Au, WPP_FxRequestApi_cpp_Traceguids, (const void *)Request, 0xC0000010);
  }
  else
  {
    if ( (unsigned __int8)(MajorFunction - 14) > 1u )
      LODWORD(result) = FxRequest::GetMemoryObject(v9, pMemory, &pBuffer, &length);
    else
      LODWORD(result) = FxRequest::GetDeviceControlOutputMemoryObject(v9, pMemory, &pBuffer, &length);
    if ( (int)result < 0 )
      return (unsigned int)result;
    v14 = length;
    if ( length >= RequiredLength )
    {
      *Buffer = pBuffer;
      if ( v11 )
        *v11 = v14;
      return (unsigned int)result;
    }
    v15 = -1073741789;
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qqqd(
        m_Globals,
        5u,
        0x10u,
        0x1Bu,
        WPP_FxRequestApi_cpp_Traceguids,
        (const void *)Request,
        (const void *)length,
        RequiredLength,
        -1073741789);
  }
  return v15;
}
