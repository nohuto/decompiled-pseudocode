/*
 * XREFs of ??1FxRequestBase@@MEAA@XZ @ 0x1C00070E0
 * Callers:
 *     ??_EFxRequestFromLookaside@@UEAAPEAXI@Z @ 0x1C0005F60 (--_EFxRequestFromLookaside@@UEAAPEAXI@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C001A228 (--1FxSyncRequest@@UEAA@XZ.c)
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C00083A0 (--1FxObject@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C00387A2 (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C00551B0 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C006EECC (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 */

void __fastcall FxRequestBase::~FxRequestBase(FxRequestBase *this, unsigned int a2)
{
  _MDL *m_AllocatedMdl; // rcx
  FxRequestContext *m_RequestContext; // rcx
  _IRP *m_Irp; // rdi
  FxRequestTimer *m_Timer; // rcx
  FxVerifierLock *v7; // rcx

  this->__vftable = (FxRequestBase_vtbl *)FxRequestBase::`vftable';
  m_AllocatedMdl = this->m_AllocatedMdl;
  if ( m_AllocatedMdl )
  {
    if ( this->m_Globals->FxVerifierOn )
      FxMdlFreeDebug(this->m_Globals, m_AllocatedMdl);
    else
      IoFreeMdl(m_AllocatedMdl);
  }
  m_RequestContext = this->m_RequestContext;
  m_Irp = this->m_Irp.m_Irp;
  if ( !m_RequestContext )
  {
LABEL_3:
    if ( !m_Irp )
      goto LABEL_6;
    goto LABEL_4;
  }
  if ( !m_Irp
    || (m_RequestContext->ReleaseAndRestore(m_RequestContext, this), (m_RequestContext = this->m_RequestContext) != 0LL) )
  {
    ((void (__fastcall *)(FxRequestContext *, __int64))m_RequestContext->~FxRequestContext)(m_RequestContext, 1LL);
    goto LABEL_3;
  }
LABEL_4:
  if ( this->m_IrpAllocation == 1 )
    IoFreeIrp(this->m_Irp.m_Irp);
LABEL_6:
  m_Timer = this->m_Timer;
  if ( m_Timer )
    FxRequestTimer::`scalar deleting destructor'(m_Timer, a2);
  this->__vftable = (FxRequestBase_vtbl *)FxNonPagedObject::`vftable';
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    v7 = *(FxVerifierLock **)&this[-1].m_IrpCompletionReferenceCount;
    if ( v7 )
    {
      FxVerifierLock::`scalar deleting destructor'(v7, a2);
      *(_QWORD *)&this[-1].m_IrpCompletionReferenceCount = 0LL;
    }
  }
  this->m_NPLock.m_DbgFlagIsInitialized = 0;
  FxObject::~FxObject(this);
}
