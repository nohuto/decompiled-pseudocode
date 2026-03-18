/*
 * XREFs of ?FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxRequestBase@@@Z @ 0x1C001AD20
 * Callers:
 *     FxIoTargetSendIoctl @ 0x1C0019E84 (FxIoTargetSendIoctl.c)
 *     FxIoTargetSendIo @ 0x1C00726D4 (FxIoTargetSendIo.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C0073280 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x1C0075D60 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     imp_WdfUsbTargetPipeResetSynchronously @ 0x1C00768B0 (imp_WdfUsbTargetPipeResetSynchronously.c)
 *     imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x1C0076A80 (imp_WdfUsbTargetPipeSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x1C0077230 (imp_WdfUsbTargetDeviceSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceQueryString @ 0x1C0078760 (imp_WdfUsbTargetDeviceQueryString.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C0078E40 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C007AF70 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 * Callees:
 *     WPP_IFR_SF_qDd @ 0x1C0053924 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qdd @ 0x1C005CC6C (WPP_IFR_SF_qdd.c)
 */

__int64 __fastcall FxValidateRequestOptions(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_REQUEST_SEND_OPTIONS *Options,
        FxRequestBase *a3)
{
  unsigned int Flags; // r8d

  if ( !Options )
    return 0LL;
  if ( Options->Size == 16 )
  {
    Flags = Options->Flags;
    if ( (Flags & 0xFFFFFFF0) != 0 )
    {
      WPP_IFR_SF_qDd(
        FxDriverGlobals,
        (unsigned __int8)Options,
        6u,
        0xBu,
        WPP_FxRequestValidateFunctions_hpp_Traceguids,
        Options,
        Flags,
        0xFu);
    }
    else
    {
      if ( (Flags & 0xFFFFFFF7) == 0 || (Flags & 8) == 0 )
        return 0LL;
      WPP_IFR_SF_qDd(
        FxDriverGlobals,
        (unsigned __int8)Options,
        6u,
        0xCu,
        WPP_FxRequestValidateFunctions_hpp_Traceguids,
        Options,
        8u,
        Flags);
    }
    return 3221225485LL;
  }
  else
  {
    WPP_IFR_SF_qdd(
      FxDriverGlobals,
      2u,
      6u,
      0xAu,
      WPP_FxRequestValidateFunctions_hpp_Traceguids,
      Options,
      16,
      Options->Size);
    return 3221225476LL;
  }
}
