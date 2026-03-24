/*
 * XREFs of ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C0073130
 * Callers:
 *     FxUsbTargetDeviceCreate @ 0x1C006A510 (FxUsbTargetDeviceCreate.c)
 * Callees:
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0001D10 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C000B79C (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C0017BC0 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C0017C64 (--1FxSyncRequest@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001A4F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001D540 (memset.c)
 *     WPP_IFR_SF_DDd @ 0x1C002E6DC (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_dd @ 0x1C002E818 (WPP_IFR_SF_dd.c)
 *     ?VerifierSetFormatted@FxRequestBase@@QEAAXXZ @ 0x1C0049DD0 (-VerifierSetFormatted@FxRequestBase@@QEAAXXZ.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x1C0053588 (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C006EBCC (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     USBD_CreateHandle @ 0x1C008F69C (USBD_CreateHandle.c)
 */

__int64 __fastcall FxUsbDevice::InitDevice(FxUsbDevice *this, unsigned int USBDClientContractVersionForWdfClient)
{
  int Handle; // eax
  int v5; // edi
  unsigned __int16 v6; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxRequestBase *m_TrueRequest; // rcx
  __int64 v9; // rdx
  int v10; // eax
  unsigned __int8 v11; // dl
  _FX_DRIVER_GLOBALS *v12; // r10
  unsigned int v13; // r14d
  unsigned int wTotalLength; // esi
  FX_POOL **v15; // rax
  _USB_CONFIGURATION_DESCRIPTOR *m_ConfigDescriptor; // rax
  __int64 v17; // rdx
  unsigned __int8 v18; // dl
  _USB_CONFIGURATION_DESCRIPTOR *v19; // rax
  int _a3; // ecx
  __int64 v21; // rdx
  __int64 v22; // rdx
  _IRP *m_Irp; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v25; // rdx
  unsigned __int8 v26; // r8
  __int64 v27; // rdx
  _IRP *v28; // rcx
  _IO_STACK_LOCATION *v29; // rax
  __int64 v30; // rdx
  unsigned __int8 v31; // r8
  void *BusContext; // rcx
  void (__fastcall *GetUSBDIVersion)(void *, _USBD_VERSION_INFORMATION *, unsigned int *); // rax
  int _a1; // [rsp+28h] [rbp-D8h]
  unsigned __int16 deviceStatus; // [rsp+40h] [rbp-C0h] BYREF
  _WDF_REQUEST_SEND_OPTIONS options; // [rsp+48h] [rbp-B8h] BYREF
  _URB urb; // [rsp+60h] [rbp-A0h] BYREF
  _USB_BUS_INTERFACE_USBDI_V1 busIf; // [rsp+100h] [rbp+0h] BYREF
  FxSyncRequest request; // [rsp+150h] [rbp+50h] BYREF
  _USB_CONFIGURATION_DESCRIPTOR config; // [rsp+280h] [rbp+180h] BYREF
  void *retaddr; // [rsp+2D8h] [rbp+1D8h]

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
      goto $Done_55;
    }
    this->m_UrbType = FxUrbTypeUsbdAllocated;
  }
  v5 = FxRequestBase::ValidateTarget(request.m_TrueRequest, this);
  if ( v5 < 0 )
    goto $Done_55;
  *(_OWORD *)(&urb.UrbGetIsochPipeTransferPathDelays + 1) = (unsigned __int64)&this->m_DeviceDescriptor;
  *(_DWORD *)&urb.UrbHeader.Length = 721032;
  urb.UrbControlTransfer.TransferBufferLength = 18;
  *(_DWORD *)((char *)&urb.UrbGetIsochPipeTransferPathDelays + 130) = 256;
  urb.UrbControlTransfer.UrbLink = 0LL;
  FxFormatUsbRequest(request.m_TrueRequest, (_FILE_OBJECT *)&urb, 0, 0LL);
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
  FxRequestBase::ClearFieldsForReuse(request.m_TrueRequest, v9);
  FxFormatUsbRequest(request.m_TrueRequest, (_FILE_OBJECT *)&urb, 0, 0LL);
  v10 = FxIoTarget::SubmitSync(this, request.m_TrueRequest, &options, 0LL);
  v12 = this->m_Globals;
  v5 = v10;
  if ( v10 < 0 )
  {
    v6 = 12;
    _a1 = v10;
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
    WPP_IFR_SF_DDd(v12, v11, 0xEu, 0xEu, WPP_FxusbDeviceKm_cpp_Traceguids, config.wTotalLength, 9, -1073741823);
    goto $Done_55;
  }
  v13 = config.wTotalLength + 18;
  wTotalLength = config.wTotalLength;
  v15 = FxPoolAllocator(v12, &v12->FxPoolFrameworks, ExDefaultNonPagedPoolType, v13, v12->Tag, retaddr);
  this->m_ConfigDescriptor = (_USB_CONFIGURATION_DESCRIPTOR *)v15;
  if ( !v15 )
  {
    v5 = -1073741670;
    WPP_IFR_SF_dd(this->m_Globals, 2u, 0xEu, 0xFu, WPP_FxusbDeviceKm_cpp_Traceguids, v13, -1073741670);
    goto $Done_55;
  }
  memset(v15, 0, v13);
  m_ConfigDescriptor = this->m_ConfigDescriptor;
  *(_DWORD *)&urb.UrbHeader.Length = 721032;
  urb.UrbControlTransfer.TransferBufferLength = wTotalLength;
  *(_OWORD *)(&urb.UrbGetIsochPipeTransferPathDelays + 1) = (unsigned __int64)m_ConfigDescriptor;
  *(_DWORD *)((char *)&urb.UrbGetIsochPipeTransferPathDelays + 130) = 512;
  urb.UrbControlTransfer.UrbLink = 0LL;
  IoReuseIrp(request.m_TrueRequest->m_Irp.m_Irp, 0);
  FxRequestBase::ClearFieldsForReuse(request.m_TrueRequest, v17);
  FxFormatUsbRequest(request.m_TrueRequest, (_FILE_OBJECT *)&urb, 0, 0LL);
  Handle = FxIoTarget::SubmitSync(this, request.m_TrueRequest, &options, 0LL);
  v5 = Handle;
  if ( Handle < 0 )
  {
    v6 = 16;
    goto LABEL_4;
  }
  v19 = this->m_ConfigDescriptor;
  _a3 = v19->wTotalLength;
  if ( _a3 != wTotalLength )
  {
    v5 = -1073741668;
    WPP_IFR_SF_DDd(this->m_Globals, v18, 0xEu, 0x11u, WPP_FxusbDeviceKm_cpp_Traceguids, wTotalLength, _a3, -1073741668);
    goto $Done_55;
  }
  if ( (v19->bmAttributes & 0x20) != 0 )
    this->m_Traits |= 2u;
  deviceStatus = 0;
  *(_DWORD *)&urb.UrbHeader.Length = 1245320;
  urb.UrbControlTransfer.TransferBufferLength = 2;
  *((_OWORD *)&urb.UrbGetIsochPipeTransferPathDelays + 3) = 0uLL;
  urb.UrbSelectInterface.Interface.InterfaceHandle = &deviceStatus;
  urb.UrbControlDescriptorRequest.LanguageId = 0;
  IoReuseIrp(request.m_TrueRequest->m_Irp.m_Irp, 0);
  FxRequestBase::ClearFieldsForReuse(request.m_TrueRequest, v21);
  FxFormatUsbRequest(request.m_TrueRequest, (_FILE_OBJECT *)&urb, 0, 0LL);
  if ( (int)FxIoTarget::SubmitSync(this, request.m_TrueRequest, &options, 0LL) >= 0 && (deviceStatus & 1) != 0 )
    this->m_Traits |= 1u;
  memset(&busIf, 0, sizeof(busIf));
  IoReuseIrp(request.m_TrueRequest->m_Irp.m_Irp, -1073741637);
  FxRequestBase::ClearFieldsForReuse(request.m_TrueRequest, v22);
  m_Irp = request.m_TrueRequest->m_Irp.m_Irp;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  m_Irp->IoStatus.Status = -1073741637;
  --CurrentStackLocation;
  *(_WORD *)&CurrentStackLocation->MajorFunction = 2075;
  CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = (__int64)&busIf;
  CurrentStackLocation->Parameters.CreatePipe.Parameters = 0LL;
  CurrentStackLocation->Parameters.Create.Options = 65608;
  CurrentStackLocation->Parameters.WMI.ProviderId = (unsigned __int64)&USB_BUS_INTERFACE_USBDI_GUID;
  FxRequestBase::VerifierSetFormatted(request.m_TrueRequest, v25, v26);
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
    FxRequestBase::VerifierSetFormatted(request.m_TrueRequest, v30, v31);
    Handle = FxIoTarget::SubmitSync(this, request.m_TrueRequest, 0LL, 0LL);
    v5 = Handle;
    if ( Handle < 0 )
    {
      if ( Handle == -1073741637 )
      {
        this->m_OnUSBD = 1;
        v5 = 0;
        goto $Done_55;
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
$Done_55:
  FxSyncRequest::~FxSyncRequest(&request);
  return (unsigned int)v5;
}
