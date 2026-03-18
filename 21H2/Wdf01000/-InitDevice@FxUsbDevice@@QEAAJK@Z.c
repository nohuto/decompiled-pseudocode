/*
 * XREFs of ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C007F964
 * Callers:
 *     FxUsbTargetDeviceCreate @ 0x1C0077950 (FxUsbTargetDeviceCreate.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C0006F0C (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C001A138 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C001A228 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C001A8A0 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?VerifierSetFormatted@FxRequestBase@@QEAAXXZ @ 0x1C001B250 (-VerifierSetFormatted@FxRequestBase@@QEAAXXZ.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0036C00 (memset.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x1C00387CE (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C00393BA (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C0052E4C (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_dd @ 0x1C0053078 (WPP_IFR_SF_dd.c)
 *     USBD_CreateHandle @ 0x1C00903A8 (USBD_CreateHandle.c)
 *     USBD_QueryUsbCapability @ 0x1C0090A40 (USBD_QueryUsbCapability.c)
 */

__int64 __fastcall FxUsbDevice::InitDevice(FxUsbDevice *this, unsigned int USBDClientContractVersionForWdfClient)
{
  int Handle; // eax
  int v5; // edi
  unsigned __int16 v6; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  USBD_HANDLE__ *m_USBDHandle; // rcx
  FxRequestBase *m_TrueRequest; // rcx
  __int64 v10; // rdx
  int v11; // eax
  unsigned __int8 v12; // dl
  _FX_DRIVER_GLOBALS *v13; // r10
  unsigned int v14; // r14d
  ULONG Tag; // ecx
  unsigned int wTotalLength; // esi
  void *v17; // rax
  FX_POOL **v18; // rax
  __int64 v19; // rdx
  unsigned __int8 v20; // dl
  _USB_CONFIGURATION_DESCRIPTOR *m_ConfigDescriptor; // rax
  int _a3; // ecx
  __int64 v23; // rdx
  __int64 v24; // rdx
  _IRP *m_Irp; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v27; // rdx
  _IRP *v28; // rcx
  _IO_STACK_LOCATION *v29; // rax
  void *BusContext; // rcx
  void (__fastcall *GetUSBDIVersion)(void *, _USBD_VERSION_INFORMATION *, unsigned int *); // rax
  int _a1; // [rsp+28h] [rbp-D8h]
  unsigned __int16 deviceStatus; // [rsp+40h] [rbp-C0h] BYREF
  _WDF_REQUEST_SEND_OPTIONS options; // [rsp+48h] [rbp-B8h] BYREF
  __m128i v36; // [rsp+60h] [rbp-A0h] BYREF
  _URB urb; // [rsp+70h] [rbp-90h] BYREF
  _USB_BUS_INTERFACE_USBDI_V1 busIf; // [rsp+110h] [rbp+10h] BYREF
  FxSyncRequest request; // [rsp+160h] [rbp+60h] BYREF
  _USB_CONFIGURATION_DESCRIPTOR config; // [rsp+290h] [rbp+190h] BYREF
  void *retaddr; // [rsp+2E8h] [rbp+1E8h]

  FxSyncRequest::FxSyncRequest(&request, this->m_Globals, 0LL, 0LL);
  memset(&urb, 0, sizeof(urb));
  if ( USBDClientContractVersionForWdfClient != -1 )
  {
    Handle = USBD_CreateHandle(
               this->m_InStackDevice,
               this->m_TargetDevice,
               USBDClientContractVersionForWdfClient,
               this->m_Globals->Tag,
               &this->m_USBDHandle);
    v5 = Handle;
    if ( Handle < 0 )
    {
      v6 = 10;
LABEL_4:
      m_Globals = this->m_Globals;
      _a1 = Handle;
LABEL_5:
      WPP_IFR_SF_d(m_Globals, 2u, 0xEu, v6, WPP_FxusbDeviceKm_cpp_Traceguids, _a1);
      goto $Done_64;
    }
    m_USBDHandle = this->m_USBDHandle;
    this->m_UrbType = FxUrbTypeUsbdAllocated;
    this->m_SspIsochPipeFlags = USBD_QueryUsbCapability(
                                  m_USBDHandle,
                                  &GUID_USB_CAPABILITY_SSP_ISOCH_PIPE_FLAGS,
                                  0,
                                  0LL,
                                  0LL) >= 0;
  }
  v5 = FxRequestBase::ValidateTarget(request.m_TrueRequest, this);
  if ( v5 < 0 )
    goto $Done_64;
  *(_OWORD *)(&urb.UrbGetIsochPipeTransferPathDelays + 1) = (unsigned __int64)&this->m_DeviceDescriptor;
  *(_DWORD *)&urb.UrbHeader.Length = 721032;
  urb.UrbControlTransfer.TransferBufferLength = 18;
  *(_DWORD *)((char *)&urb.UrbGetIsochPipeTransferPathDelays + 130) = 256;
  urb.UrbControlTransfer.UrbLink = 0LL;
  FxFormatUsbRequest(request.m_TrueRequest, (_FILE_OBJECT *)&urb, FxUrbTypeLegacy, 0LL);
  options.Size = 16;
  options.Flags = 1;
  options.Timeout = -50000000LL;
  Handle = FxIoTarget::SubmitSync(this, request.m_TrueRequest, &options, 0LL);
  v5 = Handle;
  if ( Handle < 0 )
  {
    v6 = 11;
    goto LABEL_4;
  }
  m_TrueRequest = request.m_TrueRequest;
  this->m_ControlPipe = urb.UrbSelectInterface.ConfigurationHandle;
  *(_QWORD *)&config.bLength = 0LL;
  config.MaxPower = 0;
  *(_DWORD *)&urb.UrbHeader.Length = 721032;
  *((_OWORD *)&urb.UrbGetIsochPipeTransferPathDelays + 3) = 0uLL;
  urb.UrbControlTransfer.TransferBufferLength = 9;
  urb.UrbSelectInterface.Interface.InterfaceHandle = &config;
  *(_DWORD *)((char *)&urb.UrbGetIsochPipeTransferPathDelays + 130) = 512;
  IoReuseIrp(m_TrueRequest->m_Irp.m_Irp, 0);
  FxRequestBase::ClearFieldsForReuse(request.m_TrueRequest, v10);
  FxFormatUsbRequest(request.m_TrueRequest, (_FILE_OBJECT *)&urb, FxUrbTypeLegacy, 0LL);
  v11 = FxIoTarget::SubmitSync(this, request.m_TrueRequest, &options, 0LL);
  v13 = this->m_Globals;
  v5 = v11;
  if ( v11 < 0 )
  {
    v6 = 12;
    _a1 = v11;
LABEL_12:
    m_Globals = this->m_Globals;
    goto LABEL_5;
  }
  if ( !urb.UrbControlTransfer.TransferBufferLength )
  {
    v5 = -1073741823;
    v6 = 13;
    _a1 = -1073741823;
    goto LABEL_12;
  }
  if ( config.wTotalLength < 9u )
  {
    v5 = -1073741823;
    WPP_IFR_SF_DDd(v13, v12, 0xEu, 0xEu, WPP_FxusbDeviceKm_cpp_Traceguids, config.wTotalLength, 9, -1073741823);
    goto $Done_64;
  }
  v14 = config.wTotalLength + 18;
  Tag = v13->Tag;
  wTotalLength = config.wTotalLength;
  v17 = retaddr;
  v36.m128i_i64[0] = 0LL;
  v36.m128i_i64[1] = 64LL;
  if ( !v13->FxPoolTrackingOn )
    v17 = 0LL;
  v18 = FxPoolAllocator(v13, &v13->FxPoolFrameworks, &v36, v14, Tag, v17);
  this->m_ConfigDescriptor = (_USB_CONFIGURATION_DESCRIPTOR *)v18;
  if ( !v18 )
  {
    v5 = -1073741670;
    WPP_IFR_SF_dd(this->m_Globals, 2u, 0xEu, 0xFu, WPP_FxusbDeviceKm_cpp_Traceguids, v14, -1073741670);
    goto $Done_64;
  }
  *(_DWORD *)&urb.UrbHeader.Length = 721032;
  urb.UrbControlTransfer.TransferBufferLength = wTotalLength;
  *(_OWORD *)(&urb.UrbGetIsochPipeTransferPathDelays + 1) = (unsigned __int64)v18;
  *(_DWORD *)((char *)&urb.UrbGetIsochPipeTransferPathDelays + 130) = 512;
  urb.UrbControlTransfer.UrbLink = 0LL;
  IoReuseIrp(request.m_TrueRequest->m_Irp.m_Irp, 0);
  FxRequestBase::ClearFieldsForReuse(request.m_TrueRequest, v19);
  FxFormatUsbRequest(request.m_TrueRequest, (_FILE_OBJECT *)&urb, FxUrbTypeLegacy, 0LL);
  Handle = FxIoTarget::SubmitSync(this, request.m_TrueRequest, &options, 0LL);
  v5 = Handle;
  if ( Handle < 0 )
  {
    v6 = 16;
    goto LABEL_4;
  }
  m_ConfigDescriptor = this->m_ConfigDescriptor;
  _a3 = m_ConfigDescriptor->wTotalLength;
  if ( _a3 != wTotalLength )
  {
    v5 = -1073741668;
    WPP_IFR_SF_DDd(this->m_Globals, v20, 0xEu, 0x11u, WPP_FxusbDeviceKm_cpp_Traceguids, wTotalLength, _a3, -1073741668);
    goto $Done_64;
  }
  if ( (m_ConfigDescriptor->bmAttributes & 0x20) != 0 )
    this->m_Traits |= 2u;
  deviceStatus = 0;
  *(_DWORD *)&urb.UrbHeader.Length = 1245320;
  urb.UrbControlTransfer.TransferBufferLength = 2;
  *((_OWORD *)&urb.UrbGetIsochPipeTransferPathDelays + 3) = 0uLL;
  urb.UrbSelectInterface.Interface.InterfaceHandle = &deviceStatus;
  urb.UrbControlDescriptorRequest.LanguageId = 0;
  IoReuseIrp(request.m_TrueRequest->m_Irp.m_Irp, 0);
  FxRequestBase::ClearFieldsForReuse(request.m_TrueRequest, v23);
  FxFormatUsbRequest(request.m_TrueRequest, (_FILE_OBJECT *)&urb, FxUrbTypeLegacy, 0LL);
  if ( (int)FxIoTarget::SubmitSync(this, request.m_TrueRequest, &options, 0LL) >= 0 && (deviceStatus & 1) != 0 )
    this->m_Traits |= 1u;
  memset(&busIf, 0, sizeof(busIf));
  IoReuseIrp(request.m_TrueRequest->m_Irp.m_Irp, -1073741637);
  FxRequestBase::ClearFieldsForReuse(request.m_TrueRequest, v24);
  m_Irp = request.m_TrueRequest->m_Irp.m_Irp;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  m_Irp->IoStatus.Status = -1073741637;
  --CurrentStackLocation;
  *(_WORD *)&CurrentStackLocation->MajorFunction = 2075;
  CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = (__int64)&busIf;
  CurrentStackLocation->Parameters.CreatePipe.Parameters = 0LL;
  CurrentStackLocation->Parameters.Create.Options = 65608;
  CurrentStackLocation->Parameters.WMI.ProviderId = (unsigned __int64)&USB_BUS_INTERFACE_USBDI_GUID;
  FxRequestBase::VerifierSetFormatted(request.m_TrueRequest);
  v5 = FxIoTarget::SubmitSync(this, request.m_TrueRequest, 0LL, 0LL);
  if ( v5 < 0 )
  {
    memset(&busIf, 0, sizeof(busIf));
    IoReuseIrp(request.m_TrueRequest->m_Irp.m_Irp, -1073741637);
    FxRequestBase::ClearFieldsForReuse(request.m_TrueRequest, v27);
    v28 = request.m_TrueRequest->m_Irp.m_Irp;
    v29 = v28->Tail.Overlay.CurrentStackLocation;
    v28->IoStatus.Status = -1073741637;
    --v29;
    *(_WORD *)&v29->MajorFunction = 2075;
    v29->Parameters.Read.ByteOffset.QuadPart = (__int64)&busIf;
    v29->Parameters.CreatePipe.Parameters = 0LL;
    v29->Parameters.Create.Options = 64;
    v29->Parameters.WMI.ProviderId = (unsigned __int64)&USB_BUS_INTERFACE_USBDI_GUID;
    FxRequestBase::VerifierSetFormatted(request.m_TrueRequest);
    Handle = FxIoTarget::SubmitSync(this, request.m_TrueRequest, 0LL, 0LL);
    v5 = Handle;
    if ( Handle < 0 )
    {
      if ( Handle == -1073741637 )
      {
        this->m_OnUSBD = 1;
        v5 = 0;
        goto $Done_64;
      }
      v6 = 18;
      goto LABEL_4;
    }
  }
  if ( busIf.IsDeviceHighSpeed && busIf.IsDeviceHighSpeed(busIf.BusContext) )
    this->m_Traits |= 4u;
  BusContext = busIf.BusContext;
  this->m_QueryBusTime = busIf.QueryBusTime;
  this->m_BusInterfaceDereference = busIf.InterfaceDereference;
  GetUSBDIVersion = busIf.GetUSBDIVersion;
  this->m_BusInterfaceContext = BusContext;
  GetUSBDIVersion(BusContext, &this->m_UsbdVersionInformation, &this->m_HcdPortCapabilities);
$Done_64:
  FxSyncRequest::~FxSyncRequest(&request);
  return (unsigned int)v5;
}
