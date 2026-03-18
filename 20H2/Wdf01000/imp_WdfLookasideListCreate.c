/*
 * XREFs of imp_WdfLookasideListCreate @ 0x1C004BF90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0004E28 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000A0E0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000BF84 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000CF7C (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000CFA4 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qqqqd @ 0x1C004BDF0 (WPP_IFR_SF_qqqqd.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C004D2F0 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ??0FxPagedLookasideListFromPool@@QEAA@PEAU_FX_DRIVER_GLOBALS@@KPEAVFxDeviceBase@@1@Z @ 0x1C00540AC (--0FxPagedLookasideListFromPool@@QEAA@PEAU_FX_DRIVER_GLOBALS@@KPEAVFxDeviceBase@@1@Z.c)
 *     ??0FxLookasideList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GK@Z @ 0x1C0055878 (--0FxLookasideList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GK@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0058968 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00595BC (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall imp_WdfLookasideListCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *LookasideAttributes,
        unsigned __int64 BufferSize,
        _POOL_TYPE PoolType,
        _WDF_OBJECT_ATTRIBUTES *MemoryAttributes,
        unsigned int PoolTag,
        WDFLOOKASIDE__ **PLookaside)
{
  _FX_DRIVER_GLOBALS *DriverName; // rdi
  int v11; // eax
  _WDF_OBJECT_ATTRIBUTES *v12; // r13
  _FX_DRIVER_GLOBALS *v13; // rcx
  void *ParentObject; // rdx
  WDFLOOKASIDE__ **v15; // r15
  __int64 result; // rax
  void *v17; // r9
  unsigned int Tag; // esi
  FxLookasideList *v19; // rax
  FxObject *v20; // rbx
  void (__fastcall *const *v21)(); // rax
  FxLookasideList *v22; // rax
  FxDeviceBase *v23; // r14
  FxDeviceBase *v24; // rbx
  const void *ObjectHandleUnchecked; // rax
  const void *_a4; // rdx
  FxPagedLookasideListFromPool *v27; // rax
  FxObject *v28; // rax
  int v29; // edi
  void *retaddr; // [rsp+78h] [rbp+0h]
  FxObject *pParent; // [rsp+80h] [rbp+8h] BYREF

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  pParent = 0LL;
  v11 = FxValidateObjectAttributesForParentHandle(
          (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
          LookasideAttributes,
          0);
  v12 = MemoryAttributes;
  v13 = DriverName;
  if ( v11 < 0 )
  {
    if ( (int)FxValidateObjectAttributesForParentHandle(DriverName, MemoryAttributes, 0) < 0 )
      goto LABEL_6;
    ParentObject = v12->ParentObject;
    v13 = DriverName;
  }
  else
  {
    ParentObject = LookasideAttributes->ParentObject;
  }
  FxObjectHandleGetPtr(v13, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
  DriverName = pParent->m_Globals;
LABEL_6:
  v15 = PLookaside;
  if ( !PLookaside )
    FxVerifierNullBugCheck(DriverName, retaddr);
  PLookaside = 0LL;
  *v15 = 0LL;
  if ( !BufferSize )
  {
    WPP_IFR_SF_d(DriverName, 2u, 0x12u, 0xAu, WPP_FxLookasideListAPI_cpp_Traceguids, -1073741811);
    return 3221225485LL;
  }
  result = FxValidateObjectAttributes(DriverName, LookasideAttributes, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(DriverName, v12, 0);
    if ( (int)result >= 0 )
    {
      Tag = PoolTag;
      if ( !PoolTag )
        Tag = DriverName->Tag;
      if ( DriverName->FxVerifierOn && WPP_GLOBAL_WDF_Control.Dpc.DeferredRoutine )
        WPP_GLOBAL_WDF_Control.Dpc.DeferredRoutine((_KDPC *)(unsigned int)PoolType, retaddr, (void *)Tag, v17);
      if ( FxIsPagedPoolType(PoolType) )
      {
        result = FxVerifierCheckIrqlLevel(DriverName, 0);
        if ( (int)result < 0 )
          return result;
        v23 = FxDeviceBase::_SearchForDevice(DriverName, LookasideAttributes);
        v24 = FxDeviceBase::_SearchForDevice(DriverName, v12);
        if ( v23 && v24 && v23 != v24 )
        {
          FxObject::GetObjectHandleUnchecked(v24);
          ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(v23);
          WPP_IFR_SF_qqqqd(
            DriverName,
            (unsigned __int8)_a4,
            0x12u,
            0xBu,
            WPP_FxLookasideListAPI_cpp_Traceguids,
            ObjectHandleUnchecked,
            LookasideAttributes->ParentObject,
            _a4,
            v12->ParentObject,
            -1073741811);
          return 3221225485LL;
        }
        v27 = (FxPagedLookasideListFromPool *)FxObjectHandleAlloc(
                                                DriverName,
                                                ExDefaultNonPagedPoolType,
                                                0x200uLL,
                                                0,
                                                LookasideAttributes,
                                                0,
                                                FxObjectTypeExternal);
        if ( v27 )
        {
          FxPagedLookasideListFromPool::FxPagedLookasideListFromPool(v27, DriverName, Tag, v23, v24);
          v20 = v28;
          goto LABEL_33;
        }
      }
      else if ( BufferSize >= 0x1000 )
      {
        v22 = (FxLookasideList *)FxObjectHandleAlloc(
                                   DriverName,
                                   ExDefaultNonPagedPoolType,
                                   0x1C0uLL,
                                   0,
                                   LookasideAttributes,
                                   0,
                                   FxObjectTypeExternal);
        v20 = v22;
        if ( v22 )
        {
          FxLookasideList::FxLookasideList(v22, DriverName, 0x1C0u, Tag);
          v21 = FxNPagedLookasideListFromPool::`vftable';
          goto LABEL_22;
        }
      }
      else
      {
        v19 = (FxLookasideList *)FxObjectHandleAlloc(
                                   DriverName,
                                   ExDefaultNonPagedPoolType,
                                   0x140uLL,
                                   0,
                                   LookasideAttributes,
                                   0,
                                   FxObjectTypeExternal);
        v20 = v19;
        if ( v19 )
        {
          FxLookasideList::FxLookasideList(v19, DriverName, 0x140u, Tag);
          v21 = FxNPagedLookasideList::`vftable';
LABEL_22:
          v20->__vftable = (FxObject_vtbl *)v21;
          goto LABEL_33;
        }
      }
      v20 = 0LL;
LABEL_33:
      if ( v20 )
      {
        v29 = ((__int64 (__fastcall *)(FxObject *, unsigned __int64, _WDF_OBJECT_ATTRIBUTES *))v20->__vftable[1].SelfDestruct)(
                v20,
                BufferSize,
                v12);
        if ( v29 < 0
          || (v29 = FxObject::Commit(v20, (_FX_DRIVER_GLOBALS *)LookasideAttributes, (void **)&PLookaside, 0LL, 1u),
              v29 < 0) )
        {
          FxObject::ClearEvtCallbacks(v20);
          v20->DeleteObject(v20);
        }
        else
        {
          *v15 = (WDFLOOKASIDE__ *)PLookaside;
        }
        return (unsigned int)v29;
      }
      else
      {
        return 3221225626LL;
      }
    }
  }
  return result;
}
