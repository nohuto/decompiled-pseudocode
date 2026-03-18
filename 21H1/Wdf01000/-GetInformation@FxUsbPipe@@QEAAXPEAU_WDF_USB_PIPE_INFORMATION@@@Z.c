/*
 * XREFs of ?GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C006C300
 * Callers:
 *     imp_WdfUsbTargetPipeGetInformation @ 0x1C0068FF0 (imp_WdfUsbTargetPipeGetInformation.c)
 *     ?GetConfiguredPipe@FxUsbInterface@@QEAAPEAUWDFUSBPIPE__@@EPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C00720CC (-GetConfiguredPipe@FxUsbInterface@@QEAAPEAUWDFUSBPIPE__@@EPEAU_WDF_USB_PIPE_INFORMATION@@@Z.c)
 * Callees:
 *     ?_UsbdPipeTypeToWdf@FxUsbPipe@@SA?AW4_WDF_USB_PIPE_TYPE@@W4_USBD_PIPE_TYPE@@@Z @ 0x1C006C438 (-_UsbdPipeTypeToWdf@FxUsbPipe@@SA-AW4_WDF_USB_PIPE_TYPE@@W4_USBD_PIPE_TYPE@@@Z.c)
 *     ?GetConfiguredSettingIndex@FxUsbInterface@@QEAAEXZ @ 0x1C0072124 (-GetConfiguredSettingIndex@FxUsbInterface@@QEAAEXZ.c)
 */

void __fastcall FxUsbPipe::GetInformation(FxUsbPipe *this, _WDF_USB_PIPE_INFORMATION *PipeInformation)
{
  _WDF_USB_PIPE_TYPE v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8

  PipeInformation->MaximumPacketSize = this->m_PipeInformation.MaximumPacketSize;
  PipeInformation->EndpointAddress = this->m_PipeInformation.EndpointAddress;
  PipeInformation->Interval = this->m_PipeInformation.Interval;
  v3 = FxUsbPipe::_UsbdPipeTypeToWdf(this->m_PipeInformation.PipeType);
  *(_DWORD *)(v4 + 12) = v3;
  *(_DWORD *)(v4 + 16) = *(_DWORD *)(v5 + 400);
  PipeInformation->SettingIndex = FxUsbInterface::GetConfiguredSettingIndex(*(FxUsbInterface **)(v5 + 368));
}
