/*
 * XREFs of ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C0072E80
 * Callers:
 *     imp_WdfUsbTargetDeviceAllocAndQueryString @ 0x1C006A9F0 (imp_WdfUsbTargetDeviceAllocAndQueryString.c)
 *     imp_WdfUsbTargetDeviceQueryString @ 0x1C006B290 (imp_WdfUsbTargetDeviceQueryString.c)
 * Callees:
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0001D10 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C000B79C (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C0017C60 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C0017D04 (--1FxSyncRequest@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     memmove @ 0x1C001D440 (memmove.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C006EB4C (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 */

__int64 __fastcall FxUsbDevice::GetString(
        FxUsbDevice *this,
        wchar_t *String,
        wchar_t *NumCharacters,
        unsigned __int8 StringIndex,
        unsigned __int16 LangID,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *Options)
{
  _WDF_REQUEST_SEND_OPTIONS *p_options; // r15
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FX_POOL_TRACKER *v12; // rdi
  int v13; // ebx
  unsigned int v14; // ebx
  FX_POOL **v15; // rax
  _USB_COMMON_DESCRIPTOR *p_common; // rsi
  __int64 bLength; // rax
  unsigned __int64 v18; // rdx
  unsigned __int16 v19; // ax
  _USB_COMMON_DESCRIPTOR common; // [rsp+34h] [rbp-CCh] BYREF
  _URB_CONTROL_DESCRIPTOR_REQUEST urb; // [rsp+40h] [rbp-C0h] BYREF
  FxSyncRequest request; // [rsp+D0h] [rbp-30h] BYREF
  _WDF_REQUEST_SEND_OPTIONS options; // [rsp+200h] [rbp+100h] BYREF
  void *Caller; // [rsp+258h] [rbp+158h]

  p_options = Options;
  memset(&urb, 0, sizeof(urb));
  m_Globals = this->m_Globals;
  common = 0;
  options = 0LL;
  FxSyncRequest::FxSyncRequest(&request, m_Globals, 0LL, Request);
  v12 = 0LL;
  v13 = FxRequestBase::ValidateTarget(request.m_TrueRequest, this);
  if ( v13 >= 0 )
  {
    if ( String )
    {
      v14 = 2 * *NumCharacters + 2;
      v15 = FxPoolAllocator(
              this->m_Globals,
              &this->m_Globals->FxPoolFrameworks,
              ExDefaultNonPagedPoolType,
              v14,
              this->m_Globals->Tag,
              Caller);
      v12 = (FX_POOL_TRACKER *)v15;
      if ( !v15 )
      {
        v13 = -1073741670;
        goto $Done_54;
      }
      memset(v15, 0, v14);
      p_common = (_USB_COMMON_DESCRIPTOR *)v12;
    }
    else
    {
      v14 = 2;
      p_common = &common;
    }
    urb.TransferBufferMDL = 0LL;
    urb.UrbLink = 0LL;
    urb.Index = StringIndex;
    urb.LanguageId = LangID;
    *(_DWORD *)&urb.Hdr.Length = 721032;
    urb.TransferBufferLength = v14;
    urb.TransferBuffer = p_common;
    urb.DescriptorType = 3;
    if ( !Options )
    {
      options.Size = 16;
      p_options = &options;
      options.Flags = 1;
      options.Timeout = -20000000LL;
    }
    FxFormatUsbRequest(request.m_TrueRequest, (_FILE_OBJECT *)&urb, 0, 0LL);
    v13 = FxIoTarget::SubmitSync(this, request.m_TrueRequest, p_options, 0LL);
    if ( v13 >= 0 )
    {
      bLength = p_common->bLength;
      if ( (bLength & 1) != 0 || (unsigned __int8)bLength < 2u )
      {
        v13 = -1073741668;
      }
      else
      {
        v18 = (unsigned __int64)(bLength - 2) >> 1;
        if ( String )
        {
          v19 = *NumCharacters;
          *NumCharacters = v18;
          if ( v19 < (unsigned __int16)v18 )
          {
            LOWORD(v18) = v19;
            v13 = -2147483643;
          }
          memmove(String, &p_common[1], 2LL * (unsigned __int16)v18);
        }
        else
        {
          *NumCharacters = v18;
        }
      }
    }
    if ( v12 )
      FxPoolFree(v12);
  }
$Done_54:
  FxSyncRequest::~FxSyncRequest(&request);
  return (unsigned int)v13;
}
