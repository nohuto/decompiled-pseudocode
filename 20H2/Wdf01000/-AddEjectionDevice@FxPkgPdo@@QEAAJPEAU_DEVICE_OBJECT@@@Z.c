/*
 * XREFs of ?AddEjectionDevice@FxPkgPdo@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C007841C
 * Callers:
 *     imp_WdfPdoAddEjectionRelationsPhysicalDevice @ 0x1C0038490 (imp_WdfPdoAddEjectionRelationsPhysicalDevice.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000BF84 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00595BC (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ?Add@FxTransactionedList@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z @ 0x1C0061570 (-Add@FxTransactionedList@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z.c)
 *     ??0FxRelatedDevice@@QEAA@PEAU_DEVICE_OBJECT@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0090BB4 (--0FxRelatedDevice@@QEAA@PEAU_DEVICE_OBJECT@@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxPkgPdo::AddEjectionDevice(FxPkgPdo *this, _DEVICE_OBJECT *DependentDevice, unsigned __int8 a3)
{
  unsigned __int8 v5; // r8
  FX_POOL **v6; // rax
  FxRelatedDeviceList *v7; // rcx
  _QWORD *v8; // rax
  int v9; // edi
  const void *ObjectHandleUnchecked; // rax
  FxRelatedDevice *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  int v15; // ebx
  void *Caller; // [rsp+48h] [rbp+0h]
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  if ( !this->m_EjectionDeviceList )
  {
    irql = 0;
    FxNonPagedObject::Lock(this, &irql, a3);
    if ( this->m_EjectionDeviceList )
      goto LABEL_8;
    v6 = FxPoolAllocator(
           this->m_Globals,
           &this->m_Globals->FxPoolFrameworks,
           ExDefaultNonPagedPoolType,
           0x50uLL,
           this->m_Globals->Tag,
           Caller);
    v7 = (FxRelatedDeviceList *)v6;
    if ( v6 )
    {
      *((_DWORD *)v6 + 12) = 0;
      *(_WORD *)((char *)v6 + 53) = 0;
      v6[5] = 0LL;
      v8 = v6 + 1;
      v7->m_ListLock.m_Lock = 0LL;
      v7->m_ListLock.m_DbgFlagIsInitialized = 1;
      v8[1] = v8;
      *v8 = v8;
      v7->m_TransactionHead.Blink = &v7->m_TransactionHead;
      v7->m_TransactionHead.Flink = &v7->m_TransactionHead;
      v7->__vftable = (FxRelatedDeviceList_vtbl *)FxRelatedDeviceList::`vftable';
      v7->m_DeleteOnRemove = 1;
      v7->m_NeedReportMissing = 0;
    }
    else
    {
      v7 = 0LL;
    }
    this->m_EjectionDeviceList = v7;
    if ( v7 )
    {
LABEL_8:
      v9 = 0;
    }
    else
    {
      v9 = -1073741670;
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_q(this->m_Globals, 2u, 0xCu, 0x19u, (const _GUID *)&WPP_FxPkgPdo_cpp_Traceguids, ObjectHandleUnchecked);
    }
    FxNonPagedObject::Unlock(this, irql, v5);
    if ( v9 < 0 )
      return (unsigned int)v9;
  }
  v12 = (FxRelatedDevice *)FxObjectHandleAlloc(
                             this->m_Globals,
                             ExDefaultNonPagedPoolType,
                             0xA8uLL,
                             0,
                             0LL,
                             0,
                             FxObjectTypeInternal);
  if ( v12 )
  {
    FxRelatedDevice::FxRelatedDevice(v12, DependentDevice, this->m_Globals);
    v14 = v13;
  }
  else
  {
    v14 = 0LL;
  }
  if ( !v14 )
    return 3221225626LL;
  v15 = FxTransactionedList::Add(this->m_EjectionDeviceList, this->m_Globals, (FxTransactionedEntry *)(v14 + 104));
  if ( v15 < 0 )
  {
    FxObject::ClearEvtCallbacks((FxObject *)v14);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 48LL))(v14);
  }
  return (unsigned int)v15;
}
