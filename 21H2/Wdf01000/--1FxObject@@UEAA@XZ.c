/*
 * XREFs of ??1FxObject@@UEAA@XZ @ 0x1C00083A0
 * Callers:
 *     ??_GFxMemoryBuffer@@MEAAPEAXI@Z @ 0x1C00052D0 (--_GFxMemoryBuffer@@MEAAPEAXI@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0006180 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ??1FxRequestBase@@MEAA@XZ @ 0x1C00070E0 (--1FxRequestBase@@MEAA@XZ.c)
 *     ?SelfDestruct@FxRequestFromLookaside@@MEAAXXZ @ 0x1C0008230 (-SelfDestruct@FxRequestFromLookaside@@MEAAXXZ.c)
 *     ??1FxMemoryBufferFromPool@@MEAA@XZ @ 0x1C000FB80 (--1FxMemoryBufferFromPool@@MEAA@XZ.c)
 *     ??_EFxUsbUrb@@MEAAPEAXI@Z @ 0x1C0012580 (--_EFxUsbUrb@@MEAAPEAXI@Z.c)
 *     ??1FxPagedObject@@UEAA@XZ @ 0x1C0015B50 (--1FxPagedObject@@UEAA@XZ.c)
 *     ??1FxString@@UEAA@XZ @ 0x1C0027530 (--1FxString@@UEAA@XZ.c)
 *     ??_EFxObject@@UEAAPEAXI@Z @ 0x1C0033960 (--_EFxObject@@UEAAPEAXI@Z.c)
 *     ?SelfDestruct@FxMemoryBufferFromLookaside@@MEAAXXZ @ 0x1C0038C90 (-SelfDestruct@FxMemoryBufferFromLookaside@@MEAAXXZ.c)
 *     ??_GFxSpinLock@@UEAAPEAXI@Z @ 0x1C0038EA0 (--_GFxSpinLock@@UEAAPEAXI@Z.c)
 *     ??1FxNPagedLookasideList@@MEAA@XZ @ 0x1C006A154 (--1FxNPagedLookasideList@@MEAA@XZ.c)
 *     ??1FxNPagedLookasideListFromPool@@MEAA@XZ @ 0x1C006A1A4 (--1FxNPagedLookasideListFromPool@@MEAA@XZ.c)
 *     ??1FxPagedLookasideListFromPool@@MEAA@XZ @ 0x1C006A440 (--1FxPagedLookasideListFromPool@@MEAA@XZ.c)
 *     ??_EFxMemoryBufferFromLookaside@@MEAAPEAXI@Z @ 0x1C006A4B0 (--_EFxMemoryBufferFromLookaside@@MEAAPEAXI@Z.c)
 *     ??1FxRequestMemory@@UEAA@XZ @ 0x1C006AD30 (--1FxRequestMemory@@UEAA@XZ.c)
 *     ??_GFxLookasideList@@MEAAPEAXI@Z @ 0x1C006B1B0 (--_GFxLookasideList@@MEAAPEAXI@Z.c)
 *     ??1FxRelatedDevice@@UEAA@XZ @ 0x1C009175C (--1FxRelatedDevice@@UEAA@XZ.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0016980 (WPP_IFR_SF_qqLL.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006CA68 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C006CEBC (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     WPP_IFR_SF_sqq @ 0x1C006D400 (WPP_IFR_SF_sqq.c)
 */

void __fastcall FxObject::~FxObject(FxObject *this, unsigned int a2, unsigned int a3)
{
  unsigned __int16 m_ObjectFlags; // ax
  FxTagTracker *m_Lock; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a2; // rdx
  unsigned __int16 m_Type; // r9
  __int64 v9; // rax
  unsigned __int16 *p_ObjectType; // rcx
  const char *HandleName; // rdx
  unsigned __int64 v12; // rdi
  const void *v13; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-38h]

  this->__vftable = (FxObject_vtbl *)FxObject::`vftable';
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    m_Lock = (FxTagTracker *)this[-1].m_SpinLock.m_Lock;
    if ( m_Lock )
      FxTagTracker::`scalar deleting destructor'(m_Lock, a2);
  }
  if ( this->m_ParentObject
    || this->m_ChildListHead.Flink != &this->m_ChildListHead
    || this->m_ChildEntry.Flink != &this->m_ChildEntry )
  {
    m_Type = this->m_Type;
    v9 = 0LL;
    if ( !FxObjectsInfoCount )
      goto LABEL_22;
    p_ObjectType = &FxObjectsInfo[0].ObjectType;
    while ( m_Type != *p_ObjectType )
    {
      if ( m_Type > *p_ObjectType )
      {
        v9 = (unsigned int)(v9 + 1);
        p_ObjectType += 12;
        if ( (unsigned int)v9 < FxObjectsInfoCount )
          continue;
      }
      goto LABEL_22;
    }
    HandleName = FxObjectsInfo[v9].HandleName;
    if ( !HandleName )
LABEL_22:
      HandleName = "WDFOBJECT";
    v12 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    v13 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v13 = 0LL;
    WPP_IFR_SF_sqq(this->m_Globals, (unsigned __int8)HandleName, a3, m_Type, traceGuid, HandleName, v13, this);
    if ( !this->m_ObjectSize )
      v12 = 0LL;
    FxVerifierBugCheckWorker(this->m_Globals, WDF_OBJECT_ERROR, v12, (unsigned __int64)this);
  }
  m_ObjectFlags = this->m_ObjectFlags;
  if ( (m_ObjectFlags & 0x200) != 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, this->m_ObjectState, 0xCu);
      m_ObjectFlags = this->m_ObjectFlags;
    }
    if ( (m_ObjectFlags & 0x80u) != 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ChildEntry.Blink) - 32) = 12;
  }
  this->m_ObjectState = 12;
  this->m_SpinLock.m_DbgFlagIsInitialized = 0;
}
