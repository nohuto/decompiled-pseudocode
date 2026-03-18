/*
 * XREFs of ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0004764
 * Callers:
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0003EF0 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z @ 0x1C00049B4 (-_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z.c)
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0004BB0 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0008430 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0019824 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxPkgGeneral::OnClose(FxPkgGeneral *this, FxIrp *FxIrp)
{
  _QWORD *p_Type; // r14
  unsigned __int64 ObjectHandleUnchecked; // r12
  char v4; // r13
  char v5; // r15
  _FILE_OBJECT *v8; // r8
  int FileObjectFromWdm; // eax
  FxFileObject *v10; // rdx
  unsigned int v11; // ebp
  _LIST_ENTRY *m_PkgContext; // rcx
  FxPkgGeneral *i; // rdi
  FxDeviceBase *m_DeviceBase; // rax
  _IRP *m_Irp; // rax
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  NTSTATUS _a2; // eax
  _LIST_ENTRY *Flink; // rax
  FxObject *m_ParentObject; // rcx
  __int64 v21; // rdx
  FxObject *v22; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned int v24; // edx
  _FX_DRIVER_GLOBALS *v25; // rcx
  FxDeviceBase *v26; // rcx
  char v27; // [rsp+80h] [rbp+8h] BYREF
  FxFileObject *pFxFO; // [rsp+88h] [rbp+10h] BYREF
  PVOID Tag; // [rsp+90h] [rbp+18h]

  p_Type = &FxIrp->m_Irp->Type;
  ObjectHandleUnchecked = 0LL;
  pFxFO = 0LL;
  v4 = 0;
  v5 = 0;
  Tag = p_Type;
  v8 = *(_FILE_OBJECT **)(p_Type[23] + 48LL);
  if ( v8 && (v8->Flags & 0x100) != 0 )
  {
    v4 = 1;
    v11 = 0;
  }
  else
  {
    FileObjectFromWdm = FxFileObject::_GetFileObjectFromWdm(
                          this->m_Device,
                          (_WDF_FILEOBJECT_CLASS)this->m_DeviceBase[1].m_DisposeSingleEntry.Next,
                          v8,
                          &pFxFO);
    v10 = pFxFO;
    v11 = FileObjectFromWdm;
    if ( pFxFO )
    {
      if ( FileObjectFromWdm >= 0 )
        ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(pFxFO);
      m_PkgContext = (_LIST_ENTRY *)v10->m_PkgContext;
      if ( !m_PkgContext )
        m_PkgContext = &this->m_FileObjectInfoHeadList;
    }
    else
    {
      for ( m_PkgContext = this->m_FileObjectInfoHeadList.Blink;
            m_PkgContext != &this->m_FileObjectInfoHeadList;
            m_PkgContext = m_PkgContext->Blink )
      {
        if ( !LODWORD(m_PkgContext[9].Flink) && m_PkgContext[2].Blink )
        {
          m_PkgContext = m_PkgContext->Blink;
          break;
        }
      }
    }
    for ( i = (FxPkgGeneral *)m_PkgContext->Flink;
          i != (FxPkgGeneral *)&this->m_FileObjectInfoHeadList;
          i = (FxPkgGeneral *)i->__vftable )
    {
      Flink = i->m_ChildEntry.Flink;
      if ( Flink )
      {
        m_ParentObject = i->m_ParentObject;
        v27 = 0;
        if ( m_ParentObject )
        {
          ((void (__fastcall *)(FxObject *, char *))m_ParentObject->Release)(m_ParentObject, &v27);
          ((void (__fastcall *)(unsigned __int64))i->m_ChildEntry.Flink)(ObjectHandleUnchecked);
        }
        else
        {
          ((void (__fastcall *)(unsigned __int64))Flink)(ObjectHandleUnchecked);
        }
        v22 = i->m_ParentObject;
        if ( v22 )
        {
          LOBYTE(v21) = v27;
          ((void (__fastcall *)(FxObject *, __int64))v22->AddRefOverride)(v22, v21);
        }
      }
    }
    FxFileObject::_DestroyFileObject(
      this->m_Device,
      (_WDF_FILEOBJECT_CLASS)this->m_DeviceBase[1].m_DisposeSingleEntry.Next,
      FxIrp->m_Irp->Tail.Overlay.CurrentStackLocation->FileObject);
    p_Type = Tag;
  }
  m_DeviceBase = this->m_DeviceBase;
  if ( BYTE1(m_DeviceBase[1].m_ChildEntry.Blink) )
  {
    m_Irp = FxIrp->m_Irp;
    ++m_Irp->CurrentLocation;
    ++m_Irp->Tail.Overlay.CurrentStackLocation;
    v11 = IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, FxIrp->m_Irp);
  }
  else
  {
    m_DeviceObject = m_DeviceBase->m_DeviceObject.m_DeviceObject;
    if ( *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized
      && ((__int64)m_DeviceObject[1].CurrentIrp & 1) == 0 )
    {
      _a2 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&m_DeviceObject[1], FxIrp->m_Irp, a5, 1u, 0x20u);
      if ( _a2 < 0 )
      {
        m_Globals = this->m_Globals;
        WPP_IFR_SF_qL(m_Globals, 2u, 0xDu, 0x1Eu, WPP_FxPkgGeneral_cpp_Traceguids, FxIrp->m_Irp, _a2);
        if ( m_Globals->FxVerifierOn
          && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v24, 9u) || m_Globals->FxVerifyDownlevel) )
        {
          FxVerifierDbgBreakPoint(v25);
        }
      }
      else
      {
        v5 = 1;
      }
    }
    FxIrp->m_Irp->IoStatus.Status = v11;
    FxIrp->m_Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(FxIrp->m_Irp, 0);
    FxIrp->m_Irp = 0LL;
  }
  if ( !v4 && _InterlockedExchangeAdd(&this->m_OpenHandleCount, 0xFFFFFFFF) == 1 )
  {
    v26 = this->m_DeviceBase;
    if ( BYTE5(v26[1].m_Globals) )
      FxObject::DeleteObject(v26);
  }
  if ( v5 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], p_Type, 0x20u);
  return v11;
}
