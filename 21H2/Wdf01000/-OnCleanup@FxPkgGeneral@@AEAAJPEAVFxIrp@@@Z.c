/*
 * XREFs of ?OnCleanup@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0004D00
 * Callers:
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0003EF0 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0004BB0 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z @ 0x1C00074E0 (-FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgGeneral::OnCleanup(FxPkgGeneral *this, FxIrp *FxIrp)
{
  unsigned __int64 ObjectHandleUnchecked; // r15
  _IRP *m_Irp; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _FILE_OBJECT *FileObject; // r10
  int FileObjectFromWdm; // eax
  FxFileObject *v9; // rdx
  unsigned int v10; // ebp
  _LIST_ENTRY *m_PkgContext; // rcx
  _LIST_ENTRY *i; // rbx
  _FILE_OBJECT *v13; // rdx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *Flink; // rcx
  __int64 v17; // rdx
  _LIST_ENTRY *v18; // rcx
  FxFileObject *pFxFO; // [rsp+40h] [rbp+8h] BYREF

  pFxFO = 0LL;
  ObjectHandleUnchecked = 0LL;
  m_Irp = FxIrp->m_Irp;
  CurrentStackLocation = FxIrp->m_Irp->Tail.Overlay.CurrentStackLocation;
  FileObject = CurrentStackLocation->FileObject;
  if ( FileObject && (FileObject->Flags & 0x100) != 0 )
  {
    v10 = 0;
  }
  else
  {
    FileObjectFromWdm = FxFileObject::_GetFileObjectFromWdm(
                          this->m_Device,
                          (_WDF_FILEOBJECT_CLASS)LODWORD(this->m_DeviceBase[1].m_DisposeSingleEntry.Next),
                          CurrentStackLocation->FileObject,
                          &pFxFO);
    v9 = pFxFO;
    v10 = FileObjectFromWdm;
    if ( pFxFO )
    {
      if ( FileObjectFromWdm >= 0 )
        ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(pFxFO);
      m_PkgContext = (_LIST_ENTRY *)v9->m_PkgContext;
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
    for ( i = m_PkgContext->Flink; i != &this->m_FileObjectInfoHeadList; i = i->Flink )
    {
      Blink = i[3].Blink;
      if ( Blink )
      {
        Flink = i[3].Flink;
        LOBYTE(pFxFO) = 0;
        if ( Flink )
        {
          ((void (__fastcall *)(_LIST_ENTRY *, FxFileObject **))Flink->Flink[1].Flink)(Flink, &pFxFO);
          ((void (__fastcall *)(unsigned __int64))i[3].Blink)(ObjectHandleUnchecked);
        }
        else
        {
          ((void (__fastcall *)(unsigned __int64))Blink)(ObjectHandleUnchecked);
        }
        v18 = i[3].Flink;
        if ( v18 )
        {
          LOBYTE(v17) = (_BYTE)pFxFO;
          ((void (__fastcall *)(_LIST_ENTRY *, __int64))v18->Flink[1].Blink)(v18, v17);
        }
      }
    }
    m_Irp = FxIrp->m_Irp;
    v13 = FxIrp->m_Irp->Tail.Overlay.CurrentStackLocation->FileObject;
    if ( v13 )
    {
      FxPkgIo::FlushAllQueuesByFileObject((FxPkgIo *)this->m_DeviceBase[3].m_ChildListHead.Blink, v13);
      m_Irp = FxIrp->m_Irp;
    }
  }
  if ( BYTE1(this->m_DeviceBase[1].m_ChildEntry.Blink) )
  {
    ++m_Irp->CurrentLocation;
    ++m_Irp->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, FxIrp->m_Irp);
  }
  else
  {
    m_Irp->IoStatus.Status = v10;
    FxIrp->m_Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(FxIrp->m_Irp, 0);
    FxIrp->m_Irp = 0LL;
  }
  return v10;
}
