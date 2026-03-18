/*
 * XREFs of ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x1C0005FF8
 * Callers:
 *     imp_WdfMemoryCreate @ 0x1C0005910 (imp_WdfMemoryCreate.c)
 *     ?_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAK@Z @ 0x1C002A7B0 (-_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4F.c)
 *     ?_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@@Z @ 0x1C002AA2C (-_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVI.c)
 *     imp_WdfRegistryQueryMemory @ 0x1C0070630 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfUsbTargetDeviceAllocAndQueryString @ 0x1C0077EC0 (imp_WdfUsbTargetDeviceAllocAndQueryString.c)
 * Callees:
 *     ?Construct@FxObject@@AEAAXE@Z @ 0x1C0005FA0 (-Construct@FxObject@@AEAAXE@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAVFxMemoryObject@@@Z @ 0x1C000FBCC (-_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_.c)
 *     ?AllocateTagTracker@FxObject@@IEAAXG@Z @ 0x1C006CEE8 (-AllocateTagTracker@FxObject@@IEAAXG@Z.c)
 */

int __fastcall FxMemoryObject::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _POOL_TYPE PoolType,
        unsigned int PoolTag,
        unsigned __int64 BufferSize,
        FxObject **Object)
{
  int v7; // edi
  FxObject *v8; // rax
  FxObject *v9; // rbx
  FxPoolTypeOrPoolFlags v11; // [rsp+40h] [rbp-18h] BYREF

  if ( BufferSize >= 0x1000 )
    return FxMemoryBufferFromPool::_Create(
             FxDriverGlobals,
             Attributes,
             PoolType,
             PoolTag,
             BufferSize,
             (FxMemoryObject **)Object);
  v7 = 0;
  if ( FxDriverGlobals->FxVerifierOn )
  {
    if ( FxDriverGlobals->FxPoolTrackingOn )
      return FxMemoryBufferFromPool::_Create(
               FxDriverGlobals,
               Attributes,
               PoolType,
               PoolTag,
               BufferSize,
               (FxMemoryObject **)Object);
  }
  if ( (PoolType & 0xFFFFFEFF) == 1 || (PoolType & 0xFFFFFEFF) == 5 )
    return FxMemoryBufferFromPool::_Create(
             FxDriverGlobals,
             Attributes,
             PoolType,
             PoolTag,
             BufferSize,
             (FxMemoryObject **)Object);
  if ( PoolType == NonPagedPoolMustSucceed
    || PoolType == NonPagedPoolCacheAligned
    || PoolType == NonPagedPoolCacheAlignedMustS )
  {
    PoolType = ExDefaultNonPagedPoolType;
  }
  v11 = 0LL;
  v11.u.PoolType = PoolType;
  v11.UsePoolType = 1;
  v8 = (FxObject *)FxObjectHandleAllocCommon(
                     FxDriverGlobals,
                     &v11,
                     0x78uLL,
                     PoolTag,
                     Attributes,
                     BufferSize,
                     FxObjectTypeExternal);
  v9 = v8;
  if ( !v8 )
    return -1073741670;
  v8->m_Type = 4096;
  v8->__vftable = (FxObject_vtbl *)FxObject::`vftable';
  v8->m_Globals = FxDriverGlobals;
  v8->m_SpinLock.m_Lock = 0LL;
  v8->m_SpinLock.m_DbgFlagIsInitialized = 1;
  v8->m_ObjectSize = ((BufferSize + 15) & 0xFFF0) + 128;
  FxObject::Construct(v8, 0LL);
  *(_QWORD *)&v9[1].m_Type = BufferSize;
  v9->__vftable = (FxObject_vtbl *)FxMemoryObject::`vftable'{for `FxObject'};
  v9[1].__vftable = (FxObject_vtbl *)FxMemoryObject::`vftable'{for `IFxMemory'};
  if ( (v9->m_ObjectFlags & 0x80) != 0 )
    FxObject::AllocateTagTracker(v9, 0x100Au);
  v9->__vftable = (FxObject_vtbl *)FxMemoryBuffer::`vftable'{for `FxObject'};
  v9[1].__vftable = (FxObject_vtbl *)FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
  *Object = v9;
  return v7;
}
