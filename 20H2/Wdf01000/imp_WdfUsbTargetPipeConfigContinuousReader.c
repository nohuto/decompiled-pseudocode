/*
 * XREFs of imp_WdfUsbTargetPipeConfigContinuousReader @ 0x1C0067F80
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000A0E0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qDd @ 0x1C002EDD8 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qddd @ 0x1C002EF1C (WPP_IFR_SF_qddd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0058968 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?_UsbdPipeTypeToWdf@FxUsbPipe@@SA?AW4_WDF_USB_PIPE_TYPE@@W4_USBD_PIPE_TYPE@@@Z @ 0x1C006BB58 (-_UsbdPipeTypeToWdf@FxUsbPipe@@SA-AW4_WDF_USB_PIPE_TYPE@@W4_USBD_PIPE_TYPE@@@Z.c)
 *     ?InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C006CF8C (-InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 */

int __fastcall imp_WdfUsbTargetPipeConfigContinuousReader(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        _WDF_USB_CONTINUOUS_READER_CONFIG *Config)
{
  unsigned __int8 v5; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int result; // eax
  int v8; // ebx
  unsigned __int16 v9; // r9
  unsigned __int64 TransferLength; // rcx
  unsigned __int64 HeaderLength; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  _WDF_USB_PIPE_TYPE _a3; // eax
  unsigned __int8 v15; // dl
  FxUsbPipe *v16; // r9
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rdx
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]
  FxUsbPipe *pUsbPipe; // [rsp+60h] [rbp+8h] BYREF

  pUsbPipe = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Pipe,
    0x1203u,
    (void **)&pUsbPipe);
  m_Globals = pUsbPipe->m_Globals;
  if ( !Config )
    FxVerifierNullBugCheck(pUsbPipe->m_Globals, retaddr);
  if ( Config->Size != 72 )
  {
    WPP_IFR_SF_qddd(m_Globals, v5, 0xEu, 0xFu, WPP_FxUsbPipeAPI_cpp_Traceguids, Config, Config->Size, 72, -1073741820);
    return -1073741820;
  }
  if ( !Config->EvtUsbTargetPipeReadComplete )
  {
    v8 = -1073741811;
    v9 = 16;
LABEL_23:
    WPP_IFR_SF_d(m_Globals, 2u, 0xEu, v9, WPP_FxUsbPipeAPI_cpp_Traceguids, v8);
    return v8;
  }
  TransferLength = Config->TransferLength;
  if ( !TransferLength )
  {
    v8 = -1073741811;
    v9 = 17;
    goto LABEL_23;
  }
  HeaderLength = Config->HeaderLength;
  v12 = HeaderLength + TransferLength;
  if ( v12 < HeaderLength )
  {
    v9 = 18;
    goto LABEL_22;
  }
  v13 = v12 + Config->TrailerLength;
  if ( v13 < v12 )
  {
    v9 = 19;
LABEL_22:
    v8 = -1073741675;
    goto LABEL_23;
  }
  result = FxValidateObjectAttributes(pUsbPipe->m_Globals, Config->BufferAttributes, 1);
  if ( result < 0 )
    return result;
  _a3 = FxUsbPipe::_UsbdPipeTypeToWdf(pUsbPipe->m_PipeInformation.PipeType);
  if ( (unsigned int)(_a3 - 3) <= 1 )
  {
    if ( (v16->m_PipeInformation.EndpointAddress & 0x80u) != 0 )
    {
      if ( !v16->m_CheckPacketSize )
        return FxUsbPipe::InitContinuousReader(v16, Config, v13);
      v17 = Config->TransferLength;
      v18 = v17 % v16->m_PipeInformation.MaximumPacketSize;
      if ( !v18 )
        return FxUsbPipe::InitContinuousReader(v16, Config, v13);
      v8 = -1073741306;
      WPP_IFR_SF_qDd(
        m_Globals,
        v18,
        0xEu,
        0x16u,
        WPP_FxUsbPipeAPI_cpp_Traceguids,
        (const void *)v17,
        v16->m_PipeInformation.MaximumPacketSize,
        0xC0000206);
    }
    else
    {
      v8 = -1073741808;
      WPP_IFR_SF_qL(m_Globals, 2u, 0xEu, 0x15u, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, 0xC0000010);
    }
  }
  else
  {
    v8 = -1073741808;
    WPP_IFR_SF_qDd(m_Globals, v15, 0xEu, 0x14u, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, _a3, 0xC0000010);
  }
  return v8;
}
