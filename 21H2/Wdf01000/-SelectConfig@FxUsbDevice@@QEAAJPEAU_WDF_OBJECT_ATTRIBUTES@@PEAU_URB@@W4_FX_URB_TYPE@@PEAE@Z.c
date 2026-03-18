/*
 * XREFs of ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C007D5CC
 * Callers:
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x1C0078A20 (imp_WdfUsbTargetDeviceSelectConfig.c)
 *     ?SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C007DD10 (-SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0080138 (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0080420 (-SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CON.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C0006F0C (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C001A138 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C001A228 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C001A8A0 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x1C0026D34 (-Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0036E00 (memmove.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x1C00387CE (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C00393BA (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C0053078 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_dqdd @ 0x1C0070C28 (WPP_IFR_SF_dqdd.c)
 *     ??0FxUsbPipe@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@@Z @ 0x1C00790DC (--0FxUsbPipe@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@@Z.c)
 *     ?CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z @ 0x1C007C124 (-CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z.c)
 *     ?GetInterfaceFromNumber@FxUsbDevice@@IEAAPEAVFxUsbInterface@@E@Z @ 0x1C007CF60 (-GetInterfaceFromNumber@FxUsbDevice@@IEAAPEAVFxUsbInterface@@E@Z.c)
 *     ?FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z @ 0x1C007E7CC (-FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z.c)
 *     ?SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z @ 0x1C007F014 (-SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z.c)
 */

__int64 __fastcall FxUsbDevice::SelectConfig(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _FILE_OBJECT *Urb,
        _FX_URB_TYPE NumConfiguredInterfaces,
        unsigned __int8 *PipesAttributes_0)
{
  _FILE_OBJECT *v5; // r13
  unsigned __int16 v7; // r14
  int v8; // edi
  __int64 m_NumInterfaces; // rax
  unsigned __int64 v10; // r9
  _FX_DRIVER_GLOBALS *v11; // rdi
  void *v12; // rax
  unsigned __int8 v13; // dl
  FX_POOL **v14; // r12
  const void *_a1; // rax
  unsigned int _a2; // edx
  _SECTION_OBJECT_POINTERS **p_SectionObjectPointer; // rsi
  _SECTION_OBJECT_POINTERS **v18; // r15
  unsigned int _a4; // eax
  int v20; // edx
  void *v21; // r11
  unsigned __int16 v22; // dx
  unsigned __int16 v23; // ax
  unsigned __int16 v24; // cx
  bool v25; // zf
  ULONG v26; // edx
  void *v27; // rax
  FX_POOL **v28; // r13
  __int64 v29; // rax
  _FX_DRIVER_GLOBALS *v30; // rcx
  FxUsbPipe *v31; // rax
  FxIoTarget *v32; // rax
  int v33; // eax
  _FX_DRIVER_GLOBALS *v34; // rcx
  void *v35; // rax
  ULONG Tag; // r8d
  unsigned __int16 v37; // r14
  unsigned __int16 v38; // r9
  USBD_HANDLE__ *m_USBDHandle; // r9
  int v40; // eax
  FxUsbInterface *InterfaceFromNumber; // rax
  FX_POOL *v42; // r11
  unsigned __int8 v43; // r15
  unsigned __int16 *v44; // r14
  unsigned __int16 *v45; // rsi
  FxUsbInterface *v46; // r13
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r14
  FX_POOL **v50; // rbx
  FX_POOL_TRACKER *v51; // rcx
  unsigned int i; // esi
  __int64 v53; // r9
  unsigned __int8 v55; // [rsp+58h] [rbp-B0h]
  _WDF_REQUEST_SEND_OPTIONS options; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v57; // [rsp+70h] [rbp-98h]
  int v58; // [rsp+78h] [rbp-90h]
  FxObject *v59[2]; // [rsp+88h] [rbp-80h] BYREF
  _URB *v60; // [rsp+98h] [rbp-70h]
  _FX_DRIVER_GLOBALS *m_Globals; // [rsp+A0h] [rbp-68h]
  FxObject *Parent; // [rsp+A8h] [rbp-60h]
  FxSyncRequest request; // [rsp+B0h] [rbp-58h] BYREF
  void *retaddr; // [rsp+230h] [rbp+128h]
  unsigned __int8 v65; // [rsp+238h] [rbp+130h]
  unsigned __int8 v68; // [rsp+250h] [rbp+148h]

  v5 = Urb;
  m_Globals = this->m_Globals;
  FxSyncRequest::FxSyncRequest((FxSyncRequest *)&request.m_Type, m_Globals, 0LL, 0LL);
  v60 = 0LL;
  v7 = 0;
  if ( PipesAttributes_0 )
    *PipesAttributes_0 = 0;
  v8 = FxRequestBase::ValidateTarget(*(FxRequestBase **)&request.m_ClearContextOnDestroy, this);
  if ( v8 >= 0 )
  {
    m_NumInterfaces = this->m_NumInterfaces;
    v55 = m_NumInterfaces;
    if ( (_BYTE)m_NumInterfaces )
    {
      v10 = 16 * m_NumInterfaces;
    }
    else
    {
      v55 = 1;
      v10 = 16LL;
    }
    v11 = m_Globals;
    v12 = retaddr;
    options.Timeout = 0LL;
    v57 = 64LL;
    if ( !m_Globals->FxPoolTrackingOn )
      v12 = 0LL;
    v14 = FxPoolAllocator(
            m_Globals,
            &m_Globals->FxPoolFrameworks,
            (__m128i *)&options.Timeout,
            v10,
            m_Globals->Tag,
            v12);
    if ( !v14 )
    {
      v8 = -1073741670;
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qL(this->m_Globals, 2u, 0xEu, 0x15u, WPP_FxUsbDevice_cpp_Traceguids, _a1, _a2);
      goto LABEL_72;
    }
    p_SectionObjectPointer = &v5->SectionObjectPointer;
    v68 = 0;
    options.Timeout = (__int64)v5 + (unsigned __int16)v5->Type;
    v18 = &v5->SectionObjectPointer;
    if ( (unsigned __int64)&v5->SectionObjectPointer >= options.Timeout )
    {
LABEL_32:
      if ( this->m_NumInterfaces <= 1u || !v7 )
        goto LABEL_48;
      v34 = this->m_Globals;
      v35 = retaddr;
      Tag = v34->Tag;
      v37 = 24 * v7 + 56;
      options.Timeout = 0LL;
      v57 = 64LL;
      if ( !v34->FxPoolTrackingOn )
        v35 = 0LL;
      v60 = (_URB *)FxPoolAllocator(v34, &v34->FxPoolFrameworks, (__m128i *)&options.Timeout, v37, Tag, v35);
      if ( v60 )
      {
LABEL_48:
        m_USBDHandle = this->m_USBDHandle;
        options.Timeout = 0x500000010LL;
        v57 = -20000000LL;
        FxFormatUsbRequest(*(FxRequestBase **)&request.m_ClearContextOnDestroy, v5, FxUrbTypeLegacy, m_USBDHandle);
        v40 = FxIoTarget::SubmitSync(
                this,
                *(FxRequestBase **)&request.m_ClearContextOnDestroy,
                (_WDF_REQUEST_SEND_OPTIONS *)&options.Timeout,
                0LL);
        v8 = v40;
        if ( v40 < 0 )
        {
          WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x1Eu, WPP_FxUsbDevice_cpp_Traceguids, v40);
        }
        else
        {
          this->m_ConfigHandle = v5->FsContext2;
          InterfaceFromNumber = FxUsbDevice::GetInterfaceFromNumber(this, *((_BYTE *)p_SectionObjectPointer + 2));
          InterfaceFromNumber->m_NumberOfConfiguredPipes = *((_BYTE *)p_SectionObjectPointer + 16);
          InterfaceFromNumber->m_ConfiguredPipes = (FxUsbPipe **)*v14;
          *v14 = v42;
          *((_DWORD *)v14 + 2) = (_DWORD)v42;
          FxUsbInterface::SetInfo(InterfaceFromNumber, (_USBD_INTERFACE_INFORMATION *)p_SectionObjectPointer);
          v43 = 1;
          if ( this->m_NumInterfaces > 1u )
          {
            v44 = (unsigned __int16 *)((char *)v5 + (unsigned __int16)v5->Type);
            v45 = (unsigned __int16 *)((char *)p_SectionObjectPointer + *(unsigned __int16 *)p_SectionObjectPointer);
            while ( v45 < v44 )
            {
              v46 = FxUsbDevice::GetInterfaceFromNumber(this, *((_BYTE *)v45 + 2));
              if ( *((_DWORD *)v45 + 4) )
              {
                FxUsbInterface::FormatSelectSettingUrb(v46, v60, v45[8], *((_BYTE *)v45 + 3));
                IoReuseIrp(*(PIRP *)(*(_QWORD *)&request.m_ClearContextOnDestroy + 152LL), 0);
                FxRequestBase::ClearFieldsForReuse(*(FxRequestBase **)&request.m_ClearContextOnDestroy, v47);
                FxFormatUsbRequest(
                  *(FxRequestBase **)&request.m_ClearContextOnDestroy,
                  (_FILE_OBJECT *)v60,
                  FxUrbTypeLegacy,
                  0LL);
                v8 = FxIoTarget::SubmitSync(
                       this,
                       *(FxRequestBase **)&request.m_ClearContextOnDestroy,
                       (_WDF_REQUEST_SEND_OPTIONS *)&options.Timeout,
                       0LL);
                if ( v8 < 0 )
                {
                  WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x1Du, WPP_FxUsbDevice_cpp_Traceguids, v8);
                  goto $Done_61;
                }
                memmove(
                  v45,
                  &v60->UrbGetIsochPipeTransferPathDelays.MaximumSendPathDelayInMilliSeconds,
                  v60->UrbSelectInterface.Interface.Length);
              }
              v46->m_NumberOfConfiguredPipes = *((_BYTE *)v45 + 16);
              v48 = 2LL * v43;
              v46->m_ConfiguredPipes = (FxUsbPipe **)v14[2 * v43];
              v14[v48] = 0LL;
              LODWORD(v14[v48 + 1]) = 0;
              FxUsbInterface::SetInfo(v46, (_USBD_INTERFACE_INFORMATION *)v45);
              v45 = (unsigned __int16 *)((char *)v45 + *v45);
              ++v43;
            }
          }
          if ( PipesAttributes_0 )
            *PipesAttributes_0 = v43;
        }
$Done_61:
        if ( v60 )
          FxPoolFree((FX_POOL_TRACKER *)v60);
        goto LABEL_62;
      }
      v8 = -1073741670;
      v38 = 28;
    }
    else
    {
      while ( 1 )
      {
        _a4 = *((_DWORD *)v18 + 4);
        if ( _a4 > 0xFF )
        {
          v8 = -1073741808;
          WPP_IFR_SF_dqdd(this->m_Globals, v13, 0xEu, 0x16u, WPP_FxUsbDevice_cpp_Traceguids, 255, v18, _a4, -1073741808);
          goto LABEL_62;
        }
        Parent = FxUsbDevice::GetInterfaceFromNumber(this, *((_BYTE *)v18 + 2));
        if ( !Parent )
        {
          v8 = -1073741808;
          WPP_IFR_SF_dd(this->m_Globals, 2u, 0xEu, 0x17u, WPP_FxUsbDevice_cpp_Traceguids, v20, -1073741808);
          goto LABEL_62;
        }
        v22 = *((unsigned __int8 *)v18 + 16);
        v65 = *((_BYTE *)v18 + 16);
        v23 = v22;
        if ( v22 <= v7 )
          v23 = v7;
        v24 = 8 * *((unsigned __int8 *)v18 + 16);
        v25 = (_BYTE)v22 == 0;
        v7 = v23;
        v26 = v11->Tag;
        v27 = retaddr;
        if ( v25 )
          v24 = 8;
        v59[0] = 0LL;
        v59[1] = (FxObject *)64;
        if ( v11->FxPoolTrackingOn == (_BYTE)v21 )
          v27 = v21;
        v28 = FxPoolAllocator(v11, &v11->FxPoolFrameworks, (__m128i *)v59, v24, v26, v27);
        if ( !v28 )
        {
          v8 = -1073741670;
          WPP_IFR_SF_dd(
            this->m_Globals,
            2u,
            0xEu,
            0x18u,
            WPP_FxUsbDevice_cpp_Traceguids,
            *((unsigned __int8 *)v18 + 2),
            -1073741670);
          goto LABEL_62;
        }
        v29 = 2LL * v68;
        v58 = 0;
        v14[v29] = (FX_POOL *)v28;
        LODWORD(v14[v29 + 1]) = v65;
        if ( v65 )
          break;
LABEL_28:
        if ( *(_QWORD *)&Parent[1].m_ObjectFlags )
          FxUsbDevice::CleanupInterfacePipesAndDelete(this, (_FX_DRIVER_GLOBALS *)Parent);
        ++v68;
        v18 = (_SECTION_OBJECT_POINTERS **)((char *)v18 + *(unsigned __int16 *)v18);
        if ( (unsigned __int64)v18 >= options.Timeout )
        {
          v5 = Urb;
          goto LABEL_32;
        }
      }
      while ( 1 )
      {
        v30 = this->m_Globals;
        v59[0] = 0LL;
        v59[1] = (FxObject *)64;
        v31 = (FxUsbPipe *)FxObjectHandleAllocCommon(
                             v30,
                             (FxPoolTypeOrPoolFlags *)v59,
                             0x1B0uLL,
                             0,
                             PipesAttributes,
                             0,
                             FxObjectTypeExternal);
        if ( !v31 )
          break;
        FxUsbPipe::FxUsbPipe(v31, this->m_Globals, this);
        v59[0] = v32;
        *v28 = (FX_POOL *)v32;
        if ( !v32 )
          goto LABEL_41;
        v8 = FxIoTarget::Init(v32, this->m_DeviceBase);
        if ( v8 < 0 )
        {
          WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x1Au, WPP_FxUsbDevice_cpp_Traceguids, v8);
          goto LABEL_62;
        }
        v33 = FxObject::Commit(v59[0], (_FX_DRIVER_GLOBALS *)PipesAttributes, 0LL, Parent, 1u);
        v8 = v33;
        if ( v33 < 0 )
        {
          WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x1Bu, WPP_FxUsbDevice_cpp_Traceguids, v33);
          goto LABEL_62;
        }
        ++v28;
        v13 = v65;
        if ( ++v58 >= (unsigned int)v65 )
        {
          v11 = m_Globals;
          goto LABEL_28;
        }
      }
      *v28 = 0LL;
LABEL_41:
      v8 = -1073741670;
      v38 = 25;
    }
    WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, v38, WPP_FxUsbDevice_cpp_Traceguids, -1073741670);
LABEL_62:
    if ( v55 )
    {
      v49 = v55;
      v50 = v14;
      do
      {
        v51 = (FX_POOL_TRACKER *)*v50;
        if ( *v50 )
        {
          for ( i = 0; i < *((_DWORD *)v50 + 2); ++i )
          {
            v51 = (FX_POOL_TRACKER *)*v50;
            if ( *((_QWORD *)&(*v50)->NonPagedLock.m_DbgFlagIsInitialized + i) )
            {
              FxObject::ClearEvtCallbacks(*((FxObject **)&(*v50)->NonPagedLock.m_DbgFlagIsInitialized + i));
              (*(void (**)(void))(*(_QWORD *)v53 + 48LL))();
              *((_QWORD *)&(*v50)->NonPagedLock.m_DbgFlagIsInitialized + i) = 0LL;
              v51 = (FX_POOL_TRACKER *)*v50;
            }
          }
          FxPoolFree(v51);
          *v50 = 0LL;
          *((_DWORD *)v50 + 2) = 0;
        }
        v50 += 2;
        --v49;
      }
      while ( v49 );
    }
    FxPoolFree((FX_POOL_TRACKER *)v14);
  }
LABEL_72:
  FxSyncRequest::~FxSyncRequest((FxSyncRequest *)&request.m_Type);
  return (unsigned int)v8;
}
