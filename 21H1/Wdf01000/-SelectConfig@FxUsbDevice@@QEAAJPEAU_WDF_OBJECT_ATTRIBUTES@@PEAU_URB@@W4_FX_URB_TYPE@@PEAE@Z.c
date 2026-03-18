/*
 * XREFs of ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C0070E4C
 * Callers:
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x1C006B5F0 (imp_WdfUsbTargetDeviceSelectConfig.c)
 *     ?SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0071558 (-SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C007384C (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0073B20 (-SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CON.c)
 * Callees:
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0001D10 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C000B79C (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000BF84 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C0017C60 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C0017D04 (--1FxSyncRequest@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     memmove @ 0x1C001D440 (memmove.c)
 *     WPP_IFR_SF_dd @ 0x1C002E798 (WPP_IFR_SF_dd.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x1C0053508 (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0059E9C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_dqdd @ 0x1C005EF54 (WPP_IFR_SF_dqdd.c)
 *     ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x1C00655FC (-Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z.c)
 *     ??0FxUsbPipe@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@@Z @ 0x1C006C458 (--0FxUsbPipe@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@@Z.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C006EB4C (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     ?CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z @ 0x1C006F8E0 (-CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z.c)
 *     ?GetInterfaceFromNumber@FxUsbDevice@@IEAAPEAVFxUsbInterface@@E@Z @ 0x1C0070744 (-GetInterfaceFromNumber@FxUsbDevice@@IEAAPEAVFxUsbInterface@@E@Z.c)
 *     ?FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z @ 0x1C0071FF4 (-FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z.c)
 *     ?SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z @ 0x1C00727C8 (-SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z.c)
 */

__int64 __fastcall FxUsbDevice::SelectConfig(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _FILE_OBJECT *Urb,
        _FX_URB_TYPE NumConfiguredInterfaces,
        unsigned __int8 *PipesAttributes_0)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  unsigned __int16 v7; // r14
  _URB *v8; // r12
  int v9; // edi
  __int64 m_NumInterfaces; // rsi
  unsigned __int64 v11; // rdi
  FX_POOL **v12; // rax
  FX_POOL **v13; // r15
  const void *ObjectHandleUnchecked; // rax
  unsigned int _a2; // edx
  unsigned __int8 v16; // dl
  _FILE_OBJECT *v17; // rdi
  void **p_SectionObjectPointer; // rsi
  void **v19; // r13
  unsigned int _a4; // eax
  int v21; // edx
  unsigned __int16 v22; // dx
  unsigned __int16 v23; // ax
  unsigned __int16 v24; // cx
  FX_POOL **v25; // rax
  FX_POOL *v26; // rdi
  __int64 v27; // rax
  FxUsbPipe *v28; // rax
  FxIoTarget *v29; // rax
  int v30; // eax
  size_t v31; // r14
  FX_POOL **v32; // rax
  unsigned __int16 v33; // r9
  USBD_HANDLE__ *m_USBDHandle; // r9
  int v35; // eax
  FxUsbInterface *v36; // rax
  FX_POOL *v37; // r11
  unsigned __int8 v38; // r13
  unsigned __int16 *v39; // r14
  unsigned __int16 *v40; // rsi
  FxUsbInterface *v41; // r10
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r14
  FX_POOL **v45; // rbx
  FX_POOL_TRACKER *v46; // rcx
  unsigned int i; // esi
  __int64 v48; // r9
  unsigned __int8 v50; // [rsp+58h] [rbp-B0h]
  unsigned int v51; // [rsp+5Ch] [rbp-ACh]
  _WDF_REQUEST_SEND_OPTIONS options; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v53; // [rsp+70h] [rbp-98h]
  FX_POOL **v54; // [rsp+78h] [rbp-90h]
  _FX_DRIVER_GLOBALS *InterfaceFromNumber; // [rsp+80h] [rbp-88h]
  _FX_DRIVER_GLOBALS *FxDriverGlobals; // [rsp+88h] [rbp-80h]
  FxSyncRequest request; // [rsp+90h] [rbp-78h] BYREF
  void *Caller; // [rsp+210h] [rbp+108h]
  unsigned __int8 v59; // [rsp+218h] [rbp+110h]
  FxUsbInterface *v60; // [rsp+218h] [rbp+110h]
  unsigned __int8 v63; // [rsp+230h] [rbp+128h]

  m_Globals = this->m_Globals;
  FxDriverGlobals = m_Globals;
  FxSyncRequest::FxSyncRequest((FxSyncRequest *)&request.m_Type, m_Globals, 0LL, 0LL);
  v7 = 0;
  v8 = 0LL;
  if ( PipesAttributes_0 )
    *PipesAttributes_0 = 0;
  v9 = FxRequestBase::ValidateTarget(*(FxRequestBase **)&request.m_ClearContextOnDestroy, this);
  if ( v9 >= 0 )
  {
    m_NumInterfaces = this->m_NumInterfaces;
    v50 = m_NumInterfaces;
    if ( (_BYTE)m_NumInterfaces )
    {
      v11 = 16 * m_NumInterfaces;
    }
    else
    {
      v50 = 1;
      v11 = 16LL;
    }
    v12 = FxPoolAllocator(
            m_Globals,
            &m_Globals->FxPoolFrameworks,
            ExDefaultNonPagedPoolType,
            v11,
            m_Globals->Tag,
            Caller);
    v13 = v12;
    if ( !v12 )
    {
      v9 = -1073741670;
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qL(this->m_Globals, 2u, 0xEu, 0x15u, WPP_FxUsbDevice_cpp_Traceguids, ObjectHandleUnchecked, _a2);
      goto LABEL_67;
    }
    memset(v12, 0, v11);
    v17 = Urb;
    v63 = 0;
    p_SectionObjectPointer = (void **)&Urb->SectionObjectPointer;
    v19 = (void **)&Urb->SectionObjectPointer;
    options.Timeout = (__int64)Urb + (unsigned __int16)Urb->Type;
    if ( (unsigned __int64)&Urb->SectionObjectPointer < options.Timeout )
    {
      while ( 1 )
      {
        _a4 = *((_DWORD *)v19 + 4);
        if ( _a4 > 0xFF )
        {
          v9 = -1073741808;
          WPP_IFR_SF_dqdd(this->m_Globals, v16, 0xEu, 0x16u, WPP_FxUsbDevice_cpp_Traceguids, 255, v19, _a4, -1073741808);
          goto LABEL_57;
        }
        InterfaceFromNumber = (_FX_DRIVER_GLOBALS *)FxUsbDevice::GetInterfaceFromNumber(this, *((_BYTE *)v19 + 2));
        if ( !InterfaceFromNumber )
        {
          v9 = -1073741808;
          WPP_IFR_SF_dd(this->m_Globals, 2u, 0xEu, 0x17u, WPP_FxUsbDevice_cpp_Traceguids, v21, -1073741808);
          goto LABEL_57;
        }
        v22 = *((unsigned __int8 *)v19 + 16);
        v23 = v22;
        v59 = *((_BYTE *)v19 + 16);
        if ( v22 <= v7 )
          v23 = v7;
        v24 = 8 * v22;
        v7 = v23;
        if ( !(_BYTE)v22 )
          v24 = 8;
        *(_QWORD *)&options.Size = v24;
        v25 = FxPoolAllocator(
                FxDriverGlobals,
                &FxDriverGlobals->FxPoolFrameworks,
                ExDefaultNonPagedPoolType,
                v24,
                FxDriverGlobals->Tag,
                Caller);
        v54 = v25;
        v26 = (FX_POOL *)v25;
        if ( !v25 )
        {
          v9 = -1073741670;
          WPP_IFR_SF_dd(
            this->m_Globals,
            2u,
            0xEu,
            0x18u,
            WPP_FxUsbDevice_cpp_Traceguids,
            *((unsigned __int8 *)v19 + 2),
            -1073741670);
          goto LABEL_57;
        }
        memset(v25, 0, *(size_t *)&options.Size);
        v27 = 2LL * v63;
        v51 = 0;
        v13[v27] = v26;
        LODWORD(v13[v27 + 1]) = v59;
        if ( v59 )
          break;
LABEL_25:
        if ( InterfaceFromNumber->FxPoolFrameworks.NonPagedHead.Blink )
          FxUsbDevice::CleanupInterfacePipesAndDelete(this, InterfaceFromNumber);
        ++v63;
        v19 = (void **)((char *)v19 + *(unsigned __int16 *)v19);
        if ( (unsigned __int64)v19 >= options.Timeout )
        {
          v17 = Urb;
          goto LABEL_29;
        }
      }
      while ( 1 )
      {
        v28 = (FxUsbPipe *)FxObjectHandleAlloc(
                             this->m_Globals,
                             ExDefaultNonPagedPoolType,
                             0x1B0uLL,
                             0,
                             PipesAttributes,
                             0,
                             FxObjectTypeExternal);
        if ( v28 )
          FxUsbPipe::FxUsbPipe(v28, this->m_Globals, this);
        else
          v29 = 0LL;
        *(_QWORD *)&options.Size = v29;
        *(_QWORD *)&v26->NonPagedLock.m_DbgFlagIsInitialized = v29;
        if ( !v29 )
          break;
        v9 = FxIoTarget::Init(v29, this->m_DeviceBase);
        if ( v9 < 0 )
        {
          WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x1Au, WPP_FxUsbDevice_cpp_Traceguids, v9);
          goto LABEL_57;
        }
        v30 = FxObject::Commit(
                *(FxObject **)&options.Size,
                (_FX_DRIVER_GLOBALS *)PipesAttributes,
                0LL,
                (FxObject *)InterfaceFromNumber,
                1u);
        v9 = v30;
        if ( v30 < 0 )
        {
          WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x1Bu, WPP_FxUsbDevice_cpp_Traceguids, v30);
          goto LABEL_57;
        }
        v16 = v59;
        v26 = (FX_POOL *)(v54 + 1);
        ++v51;
        ++v54;
        if ( v51 >= v59 )
          goto LABEL_25;
      }
      v9 = -1073741670;
      v33 = 25;
      goto LABEL_36;
    }
LABEL_29:
    if ( this->m_NumInterfaces > 1u && v7 )
    {
      v31 = (unsigned __int16)(24 * v7 + 56);
      v32 = FxPoolAllocator(
              this->m_Globals,
              &this->m_Globals->FxPoolFrameworks,
              ExDefaultNonPagedPoolType,
              (unsigned int)v31,
              this->m_Globals->Tag,
              Caller);
      v8 = (_URB *)v32;
      if ( !v32 )
      {
        v9 = -1073741670;
        v33 = 28;
LABEL_36:
        WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, v33, WPP_FxUsbDevice_cpp_Traceguids, -1073741670);
LABEL_57:
        if ( v50 )
        {
          v44 = v50;
          v45 = v13;
          do
          {
            v46 = (FX_POOL_TRACKER *)*v45;
            if ( *v45 )
            {
              for ( i = 0; i < *((_DWORD *)v45 + 2); ++i )
              {
                v46 = (FX_POOL_TRACKER *)*v45;
                if ( *((_QWORD *)&(*v45)->NonPagedLock.m_DbgFlagIsInitialized + i) )
                {
                  FxObject::ClearEvtCallbacks(*((FxObject **)&(*v45)->NonPagedLock.m_DbgFlagIsInitialized + i));
                  (*(void (**)(void))(*(_QWORD *)v48 + 48LL))();
                  *((_QWORD *)&(*v45)->NonPagedLock.m_DbgFlagIsInitialized + i) = 0LL;
                  v46 = (FX_POOL_TRACKER *)*v45;
                }
              }
              FxPoolFree(v46);
              *v45 = 0LL;
              *((_DWORD *)v45 + 2) = 0;
            }
            v45 += 2;
            --v44;
          }
          while ( v44 );
        }
        FxPoolFree((FX_POOL_TRACKER *)v13);
        goto LABEL_67;
      }
      memset(v32, 0, v31);
    }
    m_USBDHandle = this->m_USBDHandle;
    options.Timeout = 0x500000010LL;
    v53 = -20000000LL;
    FxFormatUsbRequest(*(FxRequestBase **)&request.m_ClearContextOnDestroy, v17, 0, m_USBDHandle);
    v35 = FxIoTarget::SubmitSync(
            this,
            *(FxRequestBase **)&request.m_ClearContextOnDestroy,
            (_WDF_REQUEST_SEND_OPTIONS *)&options.Timeout,
            0LL);
    v9 = v35;
    if ( v35 < 0 )
    {
      WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x1Eu, WPP_FxUsbDevice_cpp_Traceguids, v35);
    }
    else
    {
      this->m_ConfigHandle = Urb->FsContext2;
      v36 = FxUsbDevice::GetInterfaceFromNumber(this, BYTE2(Urb->SectionObjectPointer));
      v36->m_NumberOfConfiguredPipes = Urb->FinalStatus;
      v36->m_ConfiguredPipes = (FxUsbPipe **)*v13;
      *v13 = v37;
      *((_DWORD *)v13 + 2) = (_DWORD)v37;
      FxUsbInterface::SetInfo(v36, (_USBD_INTERFACE_INFORMATION *)p_SectionObjectPointer);
      v38 = 1;
      if ( this->m_NumInterfaces > 1u )
      {
        v39 = (unsigned __int16 *)((char *)Urb + (unsigned __int16)Urb->Type);
        v40 = (unsigned __int16 *)((char *)p_SectionObjectPointer + *(unsigned __int16 *)p_SectionObjectPointer);
        while ( v40 < v39 )
        {
          v41 = FxUsbDevice::GetInterfaceFromNumber(this, *((_BYTE *)v40 + 2));
          v60 = v41;
          if ( *((_DWORD *)v40 + 4) )
          {
            FxUsbInterface::FormatSelectSettingUrb(v41, v8, v40[8], *((_BYTE *)v40 + 3));
            IoReuseIrp(*(PIRP *)(*(_QWORD *)&request.m_ClearContextOnDestroy + 152LL), 0);
            FxRequestBase::ClearFieldsForReuse(*(FxRequestBase **)&request.m_ClearContextOnDestroy, v42);
            FxFormatUsbRequest(*(FxRequestBase **)&request.m_ClearContextOnDestroy, (_FILE_OBJECT *)v8, 0, 0LL);
            v9 = FxIoTarget::SubmitSync(
                   this,
                   *(FxRequestBase **)&request.m_ClearContextOnDestroy,
                   (_WDF_REQUEST_SEND_OPTIONS *)&options.Timeout,
                   0LL);
            if ( v9 < 0 )
            {
              WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x1Du, WPP_FxUsbDevice_cpp_Traceguids, v9);
              goto $Done_52;
            }
            memmove(
              v40,
              &v8->UrbGetIsochPipeTransferPathDelays.MaximumSendPathDelayInMilliSeconds,
              v8->UrbSelectInterface.Interface.Length);
            v41 = v60;
          }
          v41->m_NumberOfConfiguredPipes = *((_BYTE *)v40 + 16);
          v43 = 2LL * v38;
          v41->m_ConfiguredPipes = (FxUsbPipe **)v13[2 * v38];
          v13[v43] = 0LL;
          LODWORD(v13[v43 + 1]) = 0;
          FxUsbInterface::SetInfo(v41, (_USBD_INTERFACE_INFORMATION *)v40);
          v40 = (unsigned __int16 *)((char *)v40 + *v40);
          ++v38;
        }
      }
      if ( PipesAttributes_0 )
        *PipesAttributes_0 = v38;
    }
$Done_52:
    if ( v8 )
      FxPoolFree((FX_POOL_TRACKER *)v8);
    goto LABEL_57;
  }
LABEL_67:
  FxSyncRequest::~FxSyncRequest((FxSyncRequest *)&request.m_Type);
  return (unsigned int)v9;
}
