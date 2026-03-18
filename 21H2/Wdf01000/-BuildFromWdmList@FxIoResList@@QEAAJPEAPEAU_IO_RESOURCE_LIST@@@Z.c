/*
 * XREFs of ?BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z @ 0x1C001DE54
 * Callers:
 *     ?_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENTS_LIST@@E@Z @ 0x1C001DCEC (-_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENT.c)
 * Callees:
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C00065CC (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0014A1C (-Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ??0FxResourceIo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_DESCRIPTOR@@@Z @ 0x1C001DF70 (--0FxResourceIo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall FxIoResList::BuildFromWdmList(FxIoResList *this, _IO_RESOURCE_DESCRIPTOR **WdmResourceList)
{
  unsigned int v2; // ebx
  int v5; // ebp
  unsigned int v6; // r15d
  _IO_RESOURCE_DESCRIPTOR *p_u; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxResourceIo *v9; // rax
  FxObject *v10; // rax
  FX_POOL *v11; // r12
  FxPoolTypeOrPoolFlags v13; // [rsp+40h] [rbp-28h] BYREF

  v2 = 0;
  v5 = 0;
  v6 = *(_DWORD *)&(*WdmResourceList)->Flags;
  p_u = (_IO_RESOURCE_DESCRIPTOR *)&(*WdmResourceList)->u;
  if ( v6 )
  {
    while ( 1 )
    {
      m_Globals = this->m_Globals;
      *(_QWORD *)&v13.UsePoolType = 0LL;
      v13.u.PoolFlags = 64LL;
      v9 = (FxResourceIo *)FxObjectHandleAllocCommon(m_Globals, &v13, 0xA8uLL, 0, 0LL, 0, FxObjectTypeInternal);
      if ( !v9 )
        break;
      FxResourceIo::FxResourceIo(v9, this->m_Globals, p_u);
      v11 = (FX_POOL *)v10;
      if ( !v10 )
        break;
      FxObject::AssignParentObject(v10, this);
      if ( !FxCollectionInternal::Add(&this->FxCollectionInternal, this->m_Globals, v11) )
        break;
      ++p_u;
      if ( ++v5 >= v6 )
        goto LABEL_6;
    }
    return (unsigned int)-1073741670;
  }
LABEL_6:
  if ( !FxCollectionInternal::Add(
          &this->m_OwningList->FxCollectionInternal,
          this->m_OwningList->m_Globals,
          (FX_POOL *)this) )
    return (unsigned int)-1073741670;
  *WdmResourceList = p_u;
  return v2;
}
