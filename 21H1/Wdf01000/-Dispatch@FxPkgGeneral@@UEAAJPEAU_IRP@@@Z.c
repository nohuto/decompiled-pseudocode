/*
 * XREFs of ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0006C90
 * Callers:
 *     <none>
 * Callees:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0005FD0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008440 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00094F0 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0009830 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C000CA80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C00184D4 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0032554 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qqcq @ 0x1C0040E60 (WPP_IFR_SF_qqcq.c)
 *     ?PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z @ 0x1C0055888 (-PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005A8F8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005ABF8 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005B708 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0075A34 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C00769F0 (-PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z.c)
 *     ?OnShutdown@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C008DED8 (-OnShutdown@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 */

__int64 __fastcall FxPkgGeneral::Dispatch(FxPkgGeneral *this, _IRP *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _IRP *m_Irp; // rax
  _IO_STACK_LOCATION *v6; // rdx
  unsigned __int8 MajorFunction; // cl
  unsigned int v9; // r12d
  _FILE_OBJECT *FileObject; // r8
  unsigned __int64 v12; // rdi
  int FileObjectFromWdm; // eax
  unsigned __int8 v14; // r8
  _LIST_ENTRY *m_PkgContext; // rbx
  _LIST_ENTRY *i; // rbx
  _LIST_ENTRY *Blink; // rax
  _FILE_OBJECT *v18; // r15
  FxDeviceBase *v19; // rax
  _LIST_ENTRY *v20; // rsi
  _FX_DRIVER_GLOBALS *v21; // rbx
  unsigned __int8 v22; // dl
  unsigned __int8 v23; // r8
  _LIST_ENTRY *v24; // r13
  _LIST_ENTRY *v25; // rax
  _LIST_ENTRY **p_Blink; // rdi
  _LIST_ENTRY *v27; // rbx
  _LIST_ENTRY *v28; // rax
  unsigned int v29; // edx
  _LIST_ENTRY *v30; // rax
  unsigned __int8 v31; // r8
  bool v32; // zf
  _QWORD *v33; // r15
  _QWORD *v34; // rcx
  _IRP *j; // r9
  unsigned __int8 v36; // r8
  unsigned __int8 v37; // dl
  unsigned __int8 v38; // r8
  _LIST_ENTRY *v39; // rbx
  _LIST_ENTRY *v40; // rax
  unsigned int v41; // edx
  _LIST_ENTRY *v42; // rax
  char *CurrentStackLocation; // rdx
  FxDeviceBase *m_DeviceBase; // r10
  const void *_a1; // r8
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v47; // rcx
  FxVerifierLock *v48; // rcx
  FxTagTracker *v49; // rcx
  FxVerifierLock *v50; // rcx
  FxVerifierLock *v51; // rcx
  FxIrpQueue *v52; // rcx
  __int64 v53; // r9
  _IRP *v54; // r10
  _QWORD *v55; // rbx
  __int64 v56; // rax
  FxRequest *v57; // rbx
  void (__fastcall *v58)(FxRequest *, __int64, __int64, const char *); // rax
  FxVerifierLock *v59; // rcx
  FxTagTracker *v60; // rcx
  FxVerifierLock *v61; // rcx
  char _a3; // [rsp+38h] [rbp-31h]
  void *_a4; // [rsp+40h] [rbp-29h]
  FxIrp v64; // [rsp+50h] [rbp-19h] BYREF
  void *PeekContext; // [rsp+58h] [rbp-11h]
  FxFileObject *ppFxFileObject; // [rsp+60h] [rbp-9h] BYREF
  _LIST_ENTRY *v67; // [rsp+68h] [rbp-1h] BYREF
  _LIST_ENTRY *v68; // [rsp+70h] [rbp+7h]
  int v69; // [rsp+78h] [rbp+Fh]
  unsigned __int8 PreviousIrql; // [rsp+D0h] [rbp+67h] BYREF
  unsigned __int8 v71; // [rsp+D8h] [rbp+6Fh] BYREF
  unsigned __int8 v72; // [rsp+E0h] [rbp+77h] BYREF
  FxIrp fxIrp; // [rsp+E8h] [rbp+7Fh] BYREF

  fxIrp.m_Irp = Irp;
  m_Globals = this->m_Globals;
  m_Irp = Irp;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
  {
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
    m_Irp = fxIrp.m_Irp;
  }
  if ( m_Globals->FxVerboseOn )
  {
    CurrentStackLocation = (char *)m_Irp->Tail.Overlay.CurrentStackLocation;
    m_DeviceBase = this->m_DeviceBase;
    _a4 = Irp;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    v32 = m_DeviceBase->m_ObjectSize == 0;
    _a3 = *CurrentStackLocation;
    if ( v32 )
      _a1 = 0LL;
    WPP_IFR_SF_qqcq(
      m_Globals,
      5u,
      0xDu,
      0x14u,
      WPP_FxPkgGeneral_cpp_Traceguids,
      _a1,
      m_DeviceBase->m_DeviceObject.m_DeviceObject,
      _a3,
      _a4);
    m_Irp = fxIrp.m_Irp;
  }
  v6 = m_Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = v6->MajorFunction;
  if ( !v6->MajorFunction )
    return (unsigned int)FxPkgGeneral::OnCreate(this, &fxIrp);
  if ( MajorFunction != 2 )
  {
    if ( MajorFunction == 18 )
    {
      FileObject = v6->FileObject;
      v12 = 0LL;
      ppFxFileObject = 0LL;
      if ( FileObject && (FileObject->Flags & 0x100) != 0 )
      {
        v9 = 0;
      }
      else
      {
        FileObjectFromWdm = FxFileObject::_GetFileObjectFromWdm(
                              this->m_Device,
                              (_WDF_FILEOBJECT_CLASS)this->m_DeviceBase[1].m_DisposeSingleEntry.Next,
                              FileObject,
                              &ppFxFileObject);
        v9 = FileObjectFromWdm;
        if ( ppFxFileObject )
        {
          if ( FileObjectFromWdm >= 0 && ppFxFileObject->m_ObjectSize )
            v12 = (unsigned __int64)ppFxFileObject ^ 0xFFFFFFFFFFFFFFF8uLL;
          m_PkgContext = (_LIST_ENTRY *)ppFxFileObject->m_PkgContext;
          if ( !m_PkgContext )
            m_PkgContext = &this->m_FileObjectInfoHeadList;
        }
        else
        {
          m_PkgContext = this->m_FileObjectInfoHeadList.Blink;
          if ( m_PkgContext != &this->m_FileObjectInfoHeadList )
          {
            while ( LODWORD(m_PkgContext[9].Flink) || !m_PkgContext[2].Blink )
            {
              m_PkgContext = m_PkgContext->Blink;
              if ( m_PkgContext == &this->m_FileObjectInfoHeadList )
                goto LABEL_18;
            }
            m_PkgContext = m_PkgContext->Blink;
          }
        }
LABEL_18:
        for ( i = m_PkgContext->Flink; i != &this->m_FileObjectInfoHeadList; i = i->Flink )
        {
          Blink = i[3].Blink;
          if ( Blink )
          {
            Flink = i[3].Flink;
            v72 = 0;
            if ( Flink )
            {
              ((void (__fastcall *)(_LIST_ENTRY *, unsigned __int8 *))Flink->Flink[1].Flink)(Flink, &v72);
              Blink = i[3].Blink;
            }
            ((void (__fastcall *)(unsigned __int64))Blink)(v12);
            v47 = i[3].Flink;
            if ( v47 )
              ((void (__fastcall *)(_LIST_ENTRY *, _QWORD))v47->Flink[1].Blink)(v47, v72);
          }
        }
        m_Irp = fxIrp.m_Irp;
        v18 = fxIrp.m_Irp->Tail.Overlay.CurrentStackLocation->FileObject;
        PeekContext = v18;
        if ( v18 )
        {
          v19 = this->m_DeviceBase;
          v69 = 2;
          PreviousIrql = 0;
          v20 = v19[3].m_ChildListHead.Blink;
          v68 = (_LIST_ENTRY *)&v67;
          v67 = (_LIST_ENTRY *)&v67;
          v21 = (_FX_DRIVER_GLOBALS *)v20[1].Flink;
          if ( KeGetCurrentIrql() )
          {
            WPP_IFR_SF_(v21, 2u, 0xDu, 0x21u, (const _GUID *)&WPP_FxPkgIo_cpp_Traceguids);
            FxVerifierDbgBreakPoint(v21);
          }
          else
          {
            if ( SLOBYTE(v20[1].Blink) < 0 && (v48 = (FxVerifierLock *)v20[-3].Blink) != 0LL )
            {
              FxVerifierLock::Lock(v48, &PreviousIrql, v14);
              v22 = PreviousIrql;
            }
            else
            {
              v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v20[7]);
              PreviousIrql = v22;
            }
            v24 = v20 + 8;
            v25 = v20[8].Flink;
            if ( v25->Blink != &v20[8] )
              goto LABEL_106;
            v67 = v20[8].Flink;
            v68 = v20 + 8;
            p_Blink = 0LL;
            v25->Blink = (_LIST_ENTRY *)&v67;
            v27 = v67;
            v24->Flink = (_LIST_ENTRY *)&v67;
            v28 = v68;
            if ( (_LIST_ENTRY **)v27->Blink != &v67 || (_LIST_ENTRY **)v68->Flink != &v67 )
              goto LABEL_106;
            v68->Flink = v27;
            v27->Blink = v28;
            v68 = (_LIST_ENTRY *)&v67;
            v67 = (_LIST_ENTRY *)&v67;
            if ( v27 != v24 )
            {
              while ( LODWORD(v27[1].Flink) != 1 )
              {
                v27 = v27->Flink;
                if ( v27 == v24 )
                  goto LABEL_33;
              }
              p_Blink = &v27[-57].Blink;
              v29 = _InterlockedIncrement((volatile signed __int32 *)&v27[-56].Flink + 1);
              if ( SLOBYTE(v27[-55].Flink) < 0 )
              {
                v49 = (FxTagTracker *)v27[-60].Blink;
                if ( v49 )
                  FxTagTracker::UpdateTagHistory(
                    v49,
                    (void *)0x73756C66,
                    1686,
                    "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
                    TagAddRef,
                    v29);
              }
              v30 = v27->Flink;
              if ( v27->Flink->Blink != v27 )
LABEL_106:
                __fastfail(3u);
              v22 = PreviousIrql;
              v67 = v27->Flink;
              v68 = v27;
              v30->Blink = (_LIST_ENTRY *)&v67;
              v27->Flink = (_LIST_ENTRY *)&v67;
            }
LABEL_33:
            if ( SLOBYTE(v20[1].Blink) < 0 && (v50 = (FxVerifierLock *)v20[-3].Blink) != 0LL )
              FxVerifierLock::Unlock(v50, v22, v23);
            else
              KeReleaseSpinLock((PKSPIN_LOCK)&v20[7], v22);
            for ( ; p_Blink; v18 = (_FILE_OBJECT *)PeekContext )
            {
              v32 = *((_BYTE *)p_Blink + 136) == 0;
              v71 = 0;
              if ( !v32 )
                FxIoQueue::PurgeForwardProgressIrps((FxIoQueue *)p_Blink, v18);
              if ( *((char *)p_Blink + 24) < 0 && (v51 = (FxVerifierLock *)*(p_Blink - 5)) != 0LL )
                FxVerifierLock::Lock(v51, &v71, v31);
              else
                v71 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_Blink + 14);
              v33 = p_Blink + 24;
              while ( 1 )
              {
                v34 = (_QWORD *)*v33;
                for ( j = 0LL; v34 != v33; j = 0LL )
                {
                  j = (_IRP *)(v34 - 21);
                  if ( *(void **)(v34[2] + 48LL) == PeekContext )
                    break;
                  v34 = (_QWORD *)*v34;
                }
                v64.m_Irp = j;
                if ( !j )
                  break;
                while ( 1 )
                {
                  v52 = (FxIrpQueue *)(p_Blink + 24);
                  if ( _InterlockedExchange64((volatile __int64 *)&j->CancelRoutine, 0LL) )
                    break;
                  v64.m_Irp = FxIrpQueue::PeekNextIrpFromQueue(v52, v64.m_Irp, PeekContext);
                  j = v64.m_Irp;
                  if ( !v64.m_Irp )
                    goto LABEL_43;
                }
                FxIrpQueue::RemoveIrpFromListEntry(v52, &v64);
                v54 = v64.m_Irp;
                v55 = v64.m_Irp->Tail.Overlay.DriverContext[3];
                if ( *(_DWORD *)v55 == 1 )
                  v55[1] = 0LL;
                v54->Tail.Overlay.DriverContext[3] = 0LL;
                if ( !v53 )
                  break;
                v56 = *(v55 - 15);
                v57 = (FxRequest *)(v55 - 15);
                v58 = *(void (__fastcall **)(FxRequest *, __int64, __int64, const char *))(v56 + 16);
                v57->m_IrpQueue = 0LL;
                v58(v57, 1969583441LL, 2102LL, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
                FxObject::AddRef(
                  v57,
                  (void *)0x75657551,
                  4330,
                  "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
                FxIoQueue::CancelForQueue((FxIoQueue *)p_Blink, v57, v71);
                FxNonPagedObject::Lock((FxNonPagedObject *)p_Blink, &v71);
              }
LABEL_43:
              FxIoQueue::DispatchEvents((FxIoQueue *)p_Blink, v71, 0LL);
              ((void (__fastcall *)(_LIST_ENTRY **, __int64, __int64, const char *))(*p_Blink)[1].Flink)(
                p_Blink,
                1937075302LL,
                1441LL,
                "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
              if ( SLOBYTE(v20[1].Blink) < 0 && (v59 = (FxVerifierLock *)v20[-3].Blink) != 0LL )
              {
                FxVerifierLock::Lock(v59, &PreviousIrql, v36);
                v37 = PreviousIrql;
              }
              else
              {
                v37 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v20[7]);
                PreviousIrql = v37;
              }
              v39 = v67;
              v40 = v68;
              p_Blink = 0LL;
              if ( (_LIST_ENTRY **)v67->Blink != &v67 || (_LIST_ENTRY **)v68->Flink != &v67 )
                goto LABEL_106;
              v68->Flink = v67;
              v39->Blink = v40;
              v68 = (_LIST_ENTRY *)&v67;
              v67 = (_LIST_ENTRY *)&v67;
              if ( v39 != v24 )
              {
                while ( LODWORD(v39[1].Flink) != 1 )
                {
                  v39 = v39->Flink;
                  if ( v39 == v24 )
                    goto LABEL_52;
                }
                p_Blink = &v39[-57].Blink;
                v41 = _InterlockedIncrement((volatile signed __int32 *)&v39[-56].Flink + 1);
                if ( SLOBYTE(v39[-55].Flink) < 0 )
                {
                  v60 = (FxTagTracker *)v39[-60].Blink;
                  if ( v60 )
                    FxTagTracker::UpdateTagHistory(
                      v60,
                      (void *)0x73756C66,
                      1686,
                      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
                      TagAddRef,
                      v41);
                }
                v42 = v39->Flink;
                if ( v39->Flink->Blink != v39 )
                  goto LABEL_106;
                v37 = PreviousIrql;
                v67 = v39->Flink;
                v68 = v39;
                v42->Blink = (_LIST_ENTRY *)&v67;
                v39->Flink = (_LIST_ENTRY *)&v67;
              }
LABEL_52:
              if ( SLOBYTE(v20[1].Blink) < 0 && (v61 = (FxVerifierLock *)v20[-3].Blink) != 0LL )
                FxVerifierLock::Unlock(v61, v37, v38);
              else
                KeReleaseSpinLock((PKSPIN_LOCK)&v20[7], v37);
            }
          }
          m_Irp = fxIrp.m_Irp;
        }
      }
      if ( BYTE1(this->m_DeviceBase[1].m_ChildEntry.Blink) )
      {
        ++m_Irp->CurrentLocation;
        ++m_Irp->Tail.Overlay.CurrentStackLocation;
        return (unsigned int)IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, fxIrp.m_Irp);
      }
      m_Irp->IoStatus.Status = v9;
      fxIrp.m_Irp->IoStatus.Information = 0LL;
    }
    else
    {
      if ( MajorFunction == 16 )
        return (unsigned int)FxPkgGeneral::OnShutdown(this, &fxIrp);
      v9 = -1073741637;
      m_Irp->IoStatus.Status = -1073741637;
    }
    IofCompleteRequest(fxIrp.m_Irp, 0);
    return v9;
  }
  return (unsigned int)FxPkgGeneral::OnClose(this, &fxIrp);
}
