/*
 * XREFs of ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C0072234
 * Callers:
 *     imp_WdfUsbInterfaceSelectSetting @ 0x1C006A2F0 (imp_WdfUsbInterfaceSelectSetting.c)
 *     ?SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x1C00725AC (-SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_D.c)
 *     ?SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C00726C8 (-SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z.c)
 * Callees:
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0001D10 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C000B79C (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000BF84 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C0017C60 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C0017D04 (--1FxSyncRequest@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     WPP_IFR_SF_DDd @ 0x1C002E65C (WPP_IFR_SF_DDd.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0059E9C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x1C00655FC (-Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z.c)
 *     ??0FxUsbPipe@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@@Z @ 0x1C006C458 (--0FxUsbPipe@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@@Z.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C006EB4C (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     ?CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z @ 0x1C006F8E0 (-CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z.c)
 *     ?SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z @ 0x1C00727C8 (-SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FxUsbInterface::SelectSetting(
        FxUsbInterface *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _URB *Urb)
{
  _URB *v3; // r12
  unsigned __int8 v5; // dl
  unsigned int v6; // edi
  int _a2; // eax
  int v8; // esi
  __int64 v9; // r14
  unsigned __int64 v10; // rsi
  FX_POOL **v11; // rax
  FxUsbPipe **v12; // r15
  unsigned __int8 v13; // r13
  FxUsbPipe *v14; // rax
  FxIoTarget *v15; // rax
  FxIoTarget *v16; // r12
  int v17; // eax
  FxObject **v18; // rbx
  __int64 v19; // rcx
  unsigned __int16 v21; // r9
  _BYTE pendHead_8[24]; // [rsp+48h] [rbp-C0h] OVERLAPPED BYREF
  FxSyncRequest request; // [rsp+60h] [rbp-A8h] BYREF
  void *retaddr; // [rsp+1D0h] [rbp+C8h]

  v3 = Urb;
  FxSyncRequest::FxSyncRequest((FxSyncRequest *)&request.m_Type, this->m_Globals, 0LL, 0LL);
  v6 = 0;
  *(_OWORD *)pendHead_8 = 0LL;
  if ( !this->m_ConfiguredPipes || this->m_CurAlternateSetting != v3->UrbSelectInterface.Interface.AlternateSetting )
  {
    *(_QWORD *)&pendHead_8[8] = pendHead_8;
    *(_QWORD *)pendHead_8 = pendHead_8;
    _a2 = v3->UrbHeader.Length;
    if ( (unsigned __int16)_a2 < 0x18u )
    {
      v6 = -1073741811;
      WPP_IFR_SF_DDd(this->m_Globals, v5, 0xEu, 0x10u, WPP_FxUsbInterface_cpp_Traceguids, _a2, 24, -1073741811);
      goto LABEL_32;
    }
    v8 = FxRequestBase::ValidateTarget(*(FxRequestBase **)&request.m_ClearContextOnDestroy, this->m_UsbDevice);
    if ( v8 >= 0 )
    {
      LODWORD(v9) = ((unsigned int)v3->UrbSelectInterface.Interface.Length - 24) / 0x18;
      if ( (_BYTE)v9 )
        v10 = 8LL * (unsigned __int8)v9;
      else
        v10 = 8LL;
      v11 = FxPoolAllocator(
              this->m_Globals,
              &this->m_Globals->FxPoolFrameworks,
              ExDefaultNonPagedPoolType,
              v10,
              this->m_Globals->Tag,
              retaddr);
      v12 = (FxUsbPipe **)v11;
      if ( v11 )
      {
        memset(v11, 0, v10);
        v13 = 0;
        if ( (_BYTE)v9 )
        {
          while ( 1 )
          {
            v14 = (FxUsbPipe *)FxObjectHandleAlloc(
                                 this->m_Globals,
                                 ExDefaultNonPagedPoolType,
                                 0x1B0uLL,
                                 0,
                                 PipesAttributes,
                                 0,
                                 FxObjectTypeExternal);
            if ( v14 )
            {
              FxUsbPipe::FxUsbPipe(v14, this->m_Globals, this->m_UsbDevice);
              v16 = v15;
            }
            else
            {
              v16 = 0LL;
            }
            v12[v13] = (FxUsbPipe *)v16;
            if ( !v16 )
              break;
            v17 = FxIoTarget::Init(v16, this->m_UsbDevice->m_DeviceBase);
            v8 = v17;
            if ( v17 < 0 )
            {
              v21 = 19;
              goto LABEL_35;
            }
            v17 = FxObject::Commit(v16, (_FX_DRIVER_GLOBALS *)PipesAttributes, 0LL, this, 1u);
            v8 = v17;
            if ( v17 < 0 )
            {
              v21 = 20;
LABEL_35:
              WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, v21, WPP_FxUsbInterface_cpp_Traceguids, v17);
              goto $Done_53;
            }
            if ( ++v13 >= (unsigned __int8)v9 )
            {
              v3 = Urb;
              goto LABEL_20;
            }
          }
          v8 = -1073741670;
          WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x12u, WPP_FxUsbInterface_cpp_Traceguids, -1073741670);
        }
        else
        {
LABEL_20:
          if ( this->m_ConfiguredPipes )
            FxUsbDevice::CleanupInterfacePipesAndDelete(this->m_UsbDevice, (_FX_DRIVER_GLOBALS *)this);
          *(_QWORD *)&pendHead_8[16] = 0x500000010LL;
          request.__vftable = (FxSyncRequest_vtbl *)-20000000LL;
          FxFormatUsbRequest(*(FxRequestBase **)&request.m_ClearContextOnDestroy, (_FILE_OBJECT *)v3, 0, 0LL);
          v8 = FxIoTarget::SubmitSync(
                 this->m_UsbDevice,
                 *(FxRequestBase **)&request.m_ClearContextOnDestroy,
                 (_WDF_REQUEST_SEND_OPTIONS *)&pendHead_8[16],
                 0LL);
          if ( v8 >= 0 )
          {
            this->m_NumberOfConfiguredPipes = v9;
            this->m_ConfiguredPipes = v12;
            FxUsbInterface::SetInfo(this, &v3->UrbSelectInterface.Interface);
$Done_53:
            if ( v8 >= 0 )
              goto LABEL_31;
          }
        }
        if ( (_BYTE)v9 )
        {
          v18 = v12;
          v9 = (unsigned __int8)v9;
          do
          {
            if ( *v18 )
            {
              FxObject::ClearEvtCallbacks(*v18);
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 48LL))(v19);
            }
            ++v18;
            --v9;
          }
          while ( v9 );
        }
        FxPoolFree((FX_POOL_TRACKER *)v12);
      }
      else
      {
        v8 = -1073741670;
        WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x11u, WPP_FxUsbInterface_cpp_Traceguids, -1073741670);
      }
    }
LABEL_31:
    v6 = v8;
  }
LABEL_32:
  FxSyncRequest::~FxSyncRequest((FxSyncRequest *)&request.m_Type);
  return v6;
}
