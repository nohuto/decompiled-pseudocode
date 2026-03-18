/*
 * XREFs of ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0023D98
 * Callers:
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0023B1C (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 * Callees:
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z @ 0x1C00240F0 (-InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z.c)
 *     ??0FxPkgGeneral@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z @ 0x1C0024140 (--0FxPkgGeneral@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z.c)
 *     ??0FxWmiIrpHandler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x1C00241BC (--0FxWmiIrpHandler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z.c)
 *     ??0FxPkgIo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z @ 0x1C0024230 (--0FxPkgIo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z.c)
 *     ??0FxPackage@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x1C00242E8 (--0FxPackage@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z.c)
 *     ?ConfigureAutoForwardCleanupClose@FxDevice@@QEAAXPEAUWDFDEVICE_INIT@@@Z @ 0x1C0024330 (-ConfigureAutoForwardCleanupClose@FxDevice@@QEAAXPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?FxPoolAddHeaderSize@@YAJPEAU_FX_DRIVER_GLOBALS@@_KPEA_K@Z @ 0x1C00243A0 (-FxPoolAddHeaderSize@@YAJPEAU_FX_DRIVER_GLOBALS@@_KPEA_K@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C00243D0 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0024524 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0024550 (-ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     memset @ 0x1C0036C00 (memset.c)
 *     ?_InitializeContext@FxPrePostCallback@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFCXDEVICE_INIT@@PEAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallbackType@@@Z @ 0x1C008A3A4 (-_InitializeContext@FxPrePostCallback@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFCXDEVICE_INIT@@PEAPEAVF.c)
 */

int __fastcall FxDevice::Initialize(
        FxDevice *this,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *DeviceAttributes)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int result; // eax
  FxPackage *v7; // rax
  FxDefaultIrpHandler *v8; // r14
  _WDF_OBJECT_ATTRIBUTES *p_m_RequestAttributes; // rcx
  _LIST_ENTRY *Flink; // r15
  unsigned __int64 v11; // r12
  unsigned __int64 *p_m_RequestLookasideListElementSize; // r14
  FxPkgGeneral *v13; // rax
  FxPkgGeneral *v14; // rax
  FxWmiIrpHandler *v15; // rax
  unsigned __int16 v16; // r9
  FxWmiIrpHandler *v17; // rax
  FxPkgIo *v18; // rax
  FxPkgIo *v19; // rax
  bool v20; // zf
  ULONG Tag; // ecx
  void *v22; // rax
  FX_POOL **v23; // r14
  _LIST_ENTRY *Blink; // rdx
  _WDF_OBJECT_ATTRIBUTES *v25; // rcx
  unsigned int v26; // r12d
  FxPoolTypeOrPoolFlags v27; // [rsp+40h] [rbp-10h] BYREF
  void *retaddr; // [rsp+88h] [rbp+38h]
  char v29; // [rsp+90h] [rbp+40h]
  unsigned __int64 ContextSize; // [rsp+98h] [rbp+48h]

  m_Globals = this->m_Globals;
  this->m_Exclusive = DeviceInit->Exclusive;
  v29 = 0;
  this->m_ObjectFlags |= 0x800u;
  result = FxDeviceBase::ConfigureConstraints(this, DeviceAttributes);
  if ( result >= 0 )
  {
    *(_QWORD *)&v27.UsePoolType = 0LL;
    v27.u.PoolFlags = 64LL;
    v7 = (FxPackage *)FxObjectHandleAllocCommon(m_Globals, &v27, 0x78uLL, 0, 0LL, 0, FxObjectTypeInternal);
    v8 = (FxDefaultIrpHandler *)v7;
    if ( v7 )
    {
      FxPackage::FxPackage(v7, m_Globals, this, 0x1105u);
      v8->__vftable = (FxDefaultIrpHandler_vtbl *)FxDefaultIrpHandler::`vftable';
    }
    else
    {
      v8 = 0LL;
    }
    this->m_PkgDefault = v8;
    if ( v8 )
    {
      FxDevice::InstallPackage(this, v8);
      if ( DeviceInit->InitType == FxDeviceInitTypeControlDevice )
        this->m_Legacy = 1;
      p_m_RequestAttributes = &this->m_RequestAttributes;
      if ( DeviceInit->RequestAttributes.Size )
      {
        *(_OWORD *)&p_m_RequestAttributes->Size = *(_OWORD *)&DeviceInit->RequestAttributes.Size;
        *(_OWORD *)&this->m_RequestAttributes.EvtDestroyCallback = *(_OWORD *)&DeviceInit->RequestAttributes.EvtDestroyCallback;
        *(_OWORD *)&this->m_RequestAttributes.ParentObject = *(_OWORD *)&DeviceInit->RequestAttributes.ParentObject;
        this->m_RequestAttributes.ContextTypeInfo = DeviceInit->RequestAttributes.ContextTypeInfo;
      }
      ContextSize = FxGetContextSize(p_m_RequestAttributes);
      Flink = DeviceInit->CxDeviceInitListHead.Flink;
      v11 = ContextSize;
      while ( Flink != &DeviceInit->CxDeviceInitListHead )
      {
        v20 = m_Globals->FxPoolTrackingOn == 0;
        Tag = m_Globals->Tag;
        *(_QWORD *)&v27.UsePoolType = 0LL;
        v27.u.PoolFlags = 64LL;
        if ( v20 )
          v22 = 0LL;
        else
          v22 = retaddr;
        v23 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, (__m128i *)&v27, 0x108uLL, Tag, v22);
        if ( !v23 )
          return -1073741670;
        v23[2] = 0LL;
        v23[3] = 0LL;
        v23[1] = (FX_POOL *)v23;
        *v23 = (FX_POOL *)v23;
        *((_OWORD *)v23 + 2) = 0LL;
        *((_OWORD *)v23 + 3) = 0LL;
        *((_OWORD *)v23 + 4) = 0LL;
        v23[10] = 0LL;
        memset(v23 + 12, 0, 0xA8uLL);
        *((_BYTE *)v23 + 88) = ++v29;
        v23[2] = (FX_POOL *)Flink[1].Blink[5].Flink;
        v23[3] = (FX_POOL *)Flink[2].Blink;
        *((_LIST_ENTRY *)v23 + 2) = Flink[3];
        *((_LIST_ENTRY *)v23 + 3) = Flink[4];
        *((_LIST_ENTRY *)v23 + 4) = Flink[5];
        v23[10] = (FX_POOL *)Flink[6].Flink;
        Blink = this->m_CxDeviceInfoListHead.Blink;
        if ( Blink->Flink != &this->m_CxDeviceInfoListHead )
          __fastfail(3u);
        *v23 = (FX_POOL *)&this->m_CxDeviceInfoListHead;
        v23[1] = (FX_POOL *)Blink;
        Blink->Flink = (_LIST_ENTRY *)v23;
        this->m_CxDeviceInfoListHead.Blink = (_LIST_ENTRY *)v23;
        Flink[40].Blink = (_LIST_ENTRY *)v23;
        if ( FxGetContextSize((_WDF_OBJECT_ATTRIBUTES *)&Flink[3]) > v11 )
          ContextSize = FxGetContextSize(v25);
        if ( LOBYTE(Flink[40].Flink) == 1 )
        {
          v26 = 0;
          do
          {
            result = FxPrePostCallback::_InitializeContext(
                       this->m_Globals,
                       (WDFCXDEVICE_INIT *)Flink,
                       (FxCxPnpPowerCallbackContext **)&v23[v26 + 12],
                       (FxCxCallbackType)v26);
            if ( result < 0 )
              return result;
          }
          while ( ++v26 < 0x15 );
        }
        Flink = Flink->Flink;
        v11 = ContextSize;
      }
      p_m_RequestLookasideListElementSize = &this->m_RequestLookasideListElementSize;
      result = FxCalculateObjectTotalSize2(m_Globals, 0x168u, 0, v11, &this->m_RequestLookasideListElementSize);
      if ( result < 0 )
        return result;
      result = FxPoolAddHeaderSize(
                 m_Globals,
                 *p_m_RequestLookasideListElementSize,
                 &this->m_RequestLookasideListElementSize);
      if ( result < 0 )
        return result;
      ExInitializeNPagedLookasideList(
        &this->m_RequestLookasideList,
        0LL,
        0LL,
        ExDefaultNonPagedPoolType,
        *p_m_RequestLookasideListElementSize,
        m_Globals->Tag,
        0);
      FxDevice::ConfigureAutoForwardCleanupClose(this, DeviceInit);
      *(_QWORD *)&v27.UsePoolType = 0LL;
      v27.u.PoolFlags = 64LL;
      v13 = (FxPkgGeneral *)FxObjectHandleAllocCommon(m_Globals, &v27, 0xC8uLL, 0, 0LL, 0, FxObjectTypeInternal);
      if ( v13 )
        FxPkgGeneral::FxPkgGeneral(v13, m_Globals, this);
      else
        v14 = 0LL;
      this->m_PkgGeneral = v14;
      if ( v14 )
      {
        FxDevice::InstallPackage(this, v14);
        *(_QWORD *)&v27.UsePoolType = 0LL;
        v27.u.PoolFlags = 64LL;
        v15 = (FxWmiIrpHandler *)FxObjectHandleAllocCommon(m_Globals, &v27, 0xD0uLL, 0, 0LL, 0, FxObjectTypeInternal);
        if ( v15 )
          FxWmiIrpHandler::FxWmiIrpHandler(v15, m_Globals, this, v16);
        else
          v17 = 0LL;
        this->m_PkgWmi = v17;
        if ( v17 )
        {
          FxDevice::InstallPackage(this, v17);
          *(_QWORD *)&v27.UsePoolType = 0LL;
          v27.u.PoolFlags = 64LL;
          v18 = (FxPkgIo *)FxObjectHandleAllocCommon(m_Globals, &v27, 0x190uLL, 0, 0LL, 0, FxObjectTypeInternal);
          if ( v18 )
            FxPkgIo::FxPkgIo(v18, m_Globals, this);
          else
            v19 = 0LL;
          this->m_PkgIo = v19;
          if ( v19 )
          {
            FxDevice::InstallPackage(this, v19);
            this->m_PkgIo->m_InCallerContextCallback.m_Method = DeviceInit->IoInCallerContextCallback;
            if ( DeviceInit->RequiresSelfIoTarget )
              this->m_SelfIoTargetNeeded = 1;
            return 0;
          }
        }
      }
    }
    return -1073741670;
  }
  return result;
}
