/*
 * XREFs of ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x1C0021B30
 * Callers:
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x1C0021924 (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 *     ?PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ @ 0x1C002F5F0 (-PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ.c)
 * Callees:
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C00065CC (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0014A1C (-Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?Clear@FxCollectionInternal@@QEAAXXZ @ 0x1C0021C50 (-Clear@FxCollectionInternal@@QEAAXXZ.c)
 *     ??0FxResourceCm@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C0021EFC (--0FxResourceCm@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall FxCmResList::BuildFromWdmList(
        FxCmResList *this,
        _CM_RESOURCE_LIST *WdmResourceList,
        unsigned __int8 AccessFlags)
{
  FxCollectionInternal *v3; // r14
  unsigned int v7; // edi
  unsigned int Count; // r15d
  unsigned int v10; // ebx
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *PartialDescriptors; // rbp
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxResourceCm *v13; // rax
  FxObject *v14; // rax
  FX_POOL *v15; // rdi
  FxPoolTypeOrPoolFlags v16; // [rsp+40h] [rbp-28h] BYREF

  v3 = &this->FxCollectionInternal;
  v7 = 0;
  FxCollectionInternal::Clear(&this->FxCollectionInternal);
  this->m_AccessFlags = AccessFlags;
  if ( WdmResourceList )
  {
    Count = WdmResourceList->List[0].PartialResourceList.Count;
    v10 = 0;
    PartialDescriptors = WdmResourceList->List[0].PartialResourceList.PartialDescriptors;
    if ( Count )
    {
      while ( 1 )
      {
        m_Globals = this->m_Globals;
        *(_QWORD *)&v16.UsePoolType = 0LL;
        v16.u.PoolFlags = 64LL;
        v13 = (FxResourceCm *)FxObjectHandleAllocCommon(m_Globals, &v16, 0x90uLL, 0, 0LL, 0, FxObjectTypeInternal);
        if ( !v13 )
          break;
        FxResourceCm::FxResourceCm(v13, this->m_Globals, PartialDescriptors);
        v15 = (FX_POOL *)v14;
        if ( !v14 )
          break;
        FxObject::AssignParentObject(v14, this);
        if ( !FxCollectionInternal::Add(v3, this->m_Globals, v15) )
          break;
        ++v10;
        ++PartialDescriptors;
        v7 = 0;
        if ( v10 >= Count )
          return v7;
      }
      FxCollectionInternal::Clear(v3);
      return (unsigned int)-1073741670;
    }
  }
  return v7;
}
