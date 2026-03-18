/*
 * XREFs of ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0005FD0
 * Callers:
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0006C90 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0005CA0 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008440 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000A1C0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C000CA80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C00154AC (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C001A154 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x1C002EAD0 (WPP_IFR_SF_qqqd.c)
 *     WPP_IFR_SF_qid @ 0x1C002FCFC (WPP_IFR_SF_qid.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0031C50 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C0049A94 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x1C0051E78 (-FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 *     ?DeleteFileObjectFromFailedCreate@FxFileObject@@QEAAXXZ @ 0x1C005317C (-DeleteFileObjectFromFailedCreate@FxFileObject@@QEAAXXZ.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0056594 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     WPP_IFR_SF_DDid @ 0x1C00567E0 (WPP_IFR_SF_DDid.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C0059D70 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0059E9C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C005A2C0 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005A8F8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005ABF8 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x1C00760C0 (-ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C0077434 (WPP_IFR_SF_qLsqd.c)
 *     ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x1C008DB48 (-DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ.c)
 *     ?ForwardCreateRequest@FxPkgGeneral@@AEAAJPEAVFxIrp@@P6AJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z3@Z @ 0x1C008DB78 (-ForwardCreateRequest@FxPkgGeneral@@AEAAJPEAVFxIrp@@P6AJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z3@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C6A10 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00C6CE0 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C6D24 (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxPkgGeneral::OnCreate(FxPkgGeneral *this, FxIrp *FxIrp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  _IRP *m_Irp; // rax
  FxIrp *v5; // r12
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int64 v7; // r8
  FxDeviceBase *m_DeviceBase; // rbx
  int v9; // eax
  _LIST_ENTRY *p_m_FileObjectInfoHeadList; // r15
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rcx
  _LIST_ENTRY *Blink; // r8
  _IRP *v13; // rax
  int v14; // edx
  _FX_DRIVER_GLOBALS *v15; // r14
  unsigned __int64 ContextSizeOverride; // rdx
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  signed int id; // edi
  void *Caller; // rax
  _OWORD *v22; // rax
  _FX_DRIVER_GLOBALS *v23; // rdx
  unsigned __int64 v24; // rdi
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v25; // rax
  unsigned __int64 ContextSize; // r8
  _LIST_ENTRY *v27; // r14
  __int64 v28; // rax
  KIRQL v29; // al
  KIRQL v30; // al
  KIRQL v31; // al
  KIRQL v32; // r12
  KIRQL v33; // r13
  _LIST_ENTRY *v34; // rcx
  int v35; // r14d
  _FX_DRIVER_GLOBALS *v36; // rdx
  unsigned __int8 v37; // r8
  __int64 v38; // rax
  char *v39; // rax
  __int16 v40; // ax
  unsigned __int64 *p_m_Lock; // r14
  unsigned __int8 v42; // r9
  _QWORD *v43; // rdx
  FxDeviceBase_vtbl *v44; // r8
  FxDeviceBase_vtbl **v45; // rcx
  _LIST_ENTRY *v46; // rbx
  bool v47; // zf
  FxDeviceBase *v48; // r15
  _LIST_ENTRY *v49; // rcx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v50; // xmm1_8
  FxIrp v51; // rax
  FX_POOL **v52; // r12
  _FX_DRIVER_GLOBALS *v53; // r13
  __int64 v54; // rax
  _FX_DRIVER_GLOBALS *v55; // rdx
  FX_POOL_TRACKER *v56; // rbx
  FX_POOL_TRACKER *v57; // r14
  FX_POOL **p_Pool; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v59; // rax
  unsigned __int64 v60; // r8
  unsigned __int8 v61; // r8
  FX_POOL *v62; // rax
  _IRP *v63; // rcx
  FX_POOL *v64; // rcx
  unsigned __int8 *v65; // r8
  unsigned __int8 v66; // dl
  FxObject *v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rax
  __int16 v70; // ax
  _LIST_ENTRY *v71; // r13
  _LIST_ENTRY *v72; // rbx
  _LIST_ENTRY *v73; // r15
  unsigned int m_Flags; // eax
  char v75; // cl
  unsigned __int64 v76; // r13
  FxIoQueue *m_DriverCreatedQueue; // rdi
  char m_ObjectFlags; // al
  KIRQL v79; // bl
  unsigned int m_QueueState; // r11d
  _FX_DRIVER_GLOBALS *v81; // r15
  unsigned __int8 FxVerboseOn; // al
  int v84; // eax
  FxIoQueue *m_DefaultQueueForCreates; // rcx
  unsigned __int64 v86; // r12
  FxDeviceBase *v87; // rbx
  unsigned __int64 v88; // rbx
  _LIST_ENTRY *v89; // rax
  _LIST_ENTRY *v90; // rcx
  _LIST_ENTRY *v91; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v93; // rbx
  bool v94; // cf
  _FX_DRIVER_GLOBALS *v95; // rdx
  FxVerifierLock *m_DeviceObject; // rcx
  FxVerifierLock *v97; // rcx
  __m128i v98; // xmm2
  _LIST_ENTRY *v99; // rdx
  FxDeviceBase *v100; // rcx
  unsigned __int64 Flink; // rdx
  unsigned __int16 v102; // ax
  unsigned __int64 v103; // rdx
  unsigned __int16 v104; // ax
  const void *v105; // rcx
  _LIST_ENTRY *v106; // rax
  __int64 v107; // rax
  _FX_DRIVER_GLOBALS *v108; // rdx
  FX_POOL *v109; // rax
  FX_POOL *NonPagedBytes; // rax
  _LIST_ENTRY *v111; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v112; // xmm1_8
  FxDeviceBase *v113; // rax
  _LIST_ENTRY *v114; // rdx
  FxDeviceBase *v115; // rcx
  unsigned __int64 m_Driver; // rdx
  unsigned __int16 v117; // ax
  unsigned __int64 v118; // rdx
  unsigned __int16 v119; // ax
  unsigned __int16 v120; // r9
  const void *v121; // rcx
  FxDeviceBase *v122; // rcx
  unsigned __int16 v123; // ax
  unsigned __int16 v124; // ax
  unsigned __int16 v125; // r9
  const void *v126; // rcx
  FxIoQueue *v127; // rcx
  unsigned __int16 v128; // ax
  _LIST_ENTRY *v129; // rbx
  unsigned __int64 v130; // r15
  FxDeviceBase *v131; // r14
  unsigned __int16 v132; // ax
  unsigned __int64 v133; // r14
  _LIST_ENTRY *v134; // rax
  _LIST_ENTRY *v135; // rcx
  char v136; // al
  _LIST_ENTRY *v137; // rcx
  char v138; // r14
  int v139; // ebx
  FxIoQueue *v140; // rdx
  unsigned __int16 v141; // cx
  const void *v142; // rdx
  FxVerifierLock *v143; // rcx
  const void *v144; // r10
  const char *v145; // r8
  const void *v146; // rdx
  const void *v147; // rdx
  const void *v148; // rcx
  _FX_DRIVER_GLOBALS *v149; // rdx
  FxDeviceBase *v150; // rcx
  unsigned __int16 v151; // ax
  const void *v152; // rcx
  FxDeviceBase *v153; // rcx
  unsigned __int16 v154; // ax
  const void *v155; // rcx
  const _GUID *Tag; // [rsp+20h] [rbp-A9h]
  _IRP *level; // [rsp+30h] [rbp-99h]
  int flags; // [rsp+38h] [rbp-91h]
  unsigned __int8 v159; // [rsp+50h] [rbp-79h] BYREF
  unsigned __int8 v160; // [rsp+51h] [rbp-78h] BYREF
  unsigned __int8 v161; // [rsp+52h] [rbp-77h] BYREF
  char v162; // [rsp+53h] [rbp-76h]
  _FX_DRIVER_GLOBALS *globals; // [rsp+58h] [rbp-71h]
  _WDF_OBJECT_ATTRIBUTES attributes; // [rsp+60h] [rbp-69h] BYREF
  _LIST_ENTRY *v165; // [rsp+98h] [rbp-31h]
  void *PPObject; // [rsp+A0h] [rbp-29h] BYREF
  _FILE_OBJECT *FileObject; // [rsp+A8h] [rbp-21h]
  unsigned __int64 v168; // [rsp+B0h] [rbp-19h]
  FxVerifierLock *VerifierLock; // [rsp+B8h] [rbp-11h] BYREF
  FxVerifierLock *v170; // [rsp+C0h] [rbp-9h] BYREF
  FxRequest *outputRequest; // [rsp+C8h] [rbp-1h] BYREF
  FxRequest *Request[10]; // [rsp+D0h] [rbp+7h] BYREF
  void *retaddr; // [rsp+128h] [rbp+5Fh]
  _IRP *v174; // [rsp+130h] [rbp+67h] BYREF
  FxIrp *Irp; // [rsp+138h] [rbp+6Fh]
  char v176; // [rsp+140h] [rbp+77h]
  unsigned __int8 PreviousIrql; // [rsp+148h] [rbp+7Fh] BYREF

  Irp = FxIrp;
  m_Globals = this->m_Globals;
  v162 = 0;
  v176 = 0;
  m_Irp = FxIrp->m_Irp;
  v5 = FxIrp;
  memset(&attributes, 0, sizeof(attributes));
  v168 = 0LL;
  globals = m_Globals;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  v165 = 0LL;
  v7 = (unsigned __int64)CurrentStackLocation->FileObject;
  FileObject = (_FILE_OBJECT *)v7;
  LODWORD(m_Irp) = _InterlockedExchangeAdd(&this->m_OpenHandleCount, 1u);
  m_DeviceBase = this->m_DeviceBase;
  v9 = (_DWORD)m_Irp + 1;
  if ( BYTE4(m_DeviceBase[1].m_Globals) && v9 > 2 )
  {
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    v93 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v93 = 0LL;
    WPP_IFR_SF_q(m_Globals, 2u, 0xDu, 0x15u, WPP_FxPkgGeneral_cpp_Traceguids, v93);
    v35 = -1073741790;
    goto LABEL_318;
  }
  p_m_FileObjectInfoHeadList = &this->m_FileObjectInfoHeadList;
  ContextTypeInfo = 0LL;
  memset(&attributes.Size + 1, 0, 20);
  memset(&attributes.ParentObject, 0, 24);
  attributes.Size = 56;
  attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
  attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
  if ( p_m_FileObjectInfoHeadList->Flink != p_m_FileObjectInfoHeadList )
  {
    Blink = this->m_FileObjectInfoHeadList.Blink;
    v165 = Blink;
    if ( LODWORD(Blink[5].Blink) )
    {
      attributes = *(_WDF_OBJECT_ATTRIBUTES *)&Blink[5].Blink;
      ContextTypeInfo = attributes.ContextTypeInfo;
    }
    v7 = (unsigned __int64)FileObject;
    attributes.ExecutionLevel = this->m_ExecutionLevel;
    attributes.SynchronizationScope = this->m_SynchronizationScope;
  }
  v13 = FxIrp->m_Irp;
  v14 = (__int64)m_DeviceBase[1].m_DisposeSingleEntry.Next & 0x7FFFFFFF;
  v15 = m_DeviceBase->m_Globals;
  PreviousIrql = 0;
  LODWORD(PPObject) = v14;
  if ( v14 == 1 )
  {
    v24 = 0LL;
    goto LABEL_63;
  }
  if ( !v7 && (v14 != 4 || !BYTE4(m_DeviceBase[1].m_Globals)) )
  {
    if ( v15->FxVerboseOn )
    {
      WPP_IFR_SF_q(v15, 5u, 0xDu, 0xAu, WPP_FxFileObject_cpp_Traceguids, v13);
      v15 = m_DeviceBase->m_Globals;
    }
    FxVerifierDbgBreakPoint(v15);
    v35 = -1073741438;
    goto LABEL_323;
  }
  ContextSizeOverride = 0LL;
  if ( ContextTypeInfo )
  {
    ContextSizeOverride = attributes.ContextSizeOverride;
    if ( !attributes.ContextSizeOverride )
      ContextSizeOverride = ContextTypeInfo->ContextSize;
  }
  v17 = 208LL;
  if ( ContextSizeOverride )
  {
    v18 = (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v18 < ContextSizeOverride )
    {
LABEL_321:
      v35 = -1073741670;
      goto LABEL_322;
    }
    v19 = v18 + 208;
    if ( v19 < 0xD0 )
    {
      id = -1073741675;
LABEL_160:
      WPP_IFR_SF_DDid(v15, ContextSizeOverride, v7, 0, Tag, 0xA0u, 0, ContextSizeOverride, id);
LABEL_320:
      m_Globals = globals;
      goto LABEL_321;
    }
    v17 = v19;
  }
  if ( v15->FxVerifierHandle )
  {
    v7 = -1LL;
    if ( v17 + 48 >= v17 )
      v7 = v17 + 48;
    v94 = v17 + 48 < v17;
    v17 = v7;
    id = v94 ? 0xC0000095 : 0;
  }
  else
  {
    id = 0;
  }
  if ( id < 0 )
    goto LABEL_160;
  if ( v15->FxPoolTrackingOn )
    Caller = retaddr;
  else
    Caller = 0LL;
  v22 = FxPoolAllocator(v15, &v15->FxPoolFrameworks, ExDefaultNonPagedPoolType, v17, v15->Tag, Caller);
  v24 = (unsigned __int64)v22;
  if ( v22 )
  {
    if ( v15->FxVerifierHandle )
    {
      v24 = (unsigned __int64)(v22 + 3);
      *v22 = 0LL;
      v22[1] = 0LL;
      v22[2] = 0LL;
      *((_DWORD *)v22 + 8) = 1146058822;
    }
    *(_QWORD *)(v24 + 168) = 0LL;
    *(_QWORD *)(v24 + 176) = 0LL;
    *(_QWORD *)(v24 + 184) = 0LL;
    *(_QWORD *)(v24 + 192) = 0LL;
    *(_QWORD *)(v24 + 200) = 0LL;
    *(_QWORD *)(v24 + 160) = v24;
    v25 = attributes.ContextTypeInfo;
    if ( attributes.ContextTypeInfo )
    {
      ContextSize = attributes.ContextSizeOverride;
      if ( !attributes.ContextSizeOverride )
        ContextSize = attributes.ContextTypeInfo->ContextSize;
      memset((void *)(v24 + 208), 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      v25 = attributes.ContextTypeInfo;
    }
    *(_QWORD *)(v24 + 192) = v25;
  }
  if ( !v24 )
    goto LABEL_320;
  v27 = (_LIST_ENTRY *)(v24 + 72);
  *(_QWORD *)(v24 + 16) = m_DeviceBase->m_Globals;
  *(_QWORD *)v24 = FxObject::`vftable';
  *(_QWORD *)(v24 + 56) = 0LL;
  *(_BYTE *)(v24 + 48) = 1;
  *(_DWORD *)(v24 + 8) = 10489880;
  *(_DWORD *)(v24 + 24) = 0x10000;
  *(_DWORD *)(v24 + 12) = 1;
  *(_QWORD *)(v24 + 40) = v24 + 32;
  *(_QWORD *)(v24 + 32) = v24 + 32;
  *(_QWORD *)(v24 + 80) = v24 + 72;
  *(_QWORD *)(v24 + 72) = v24 + 72;
  v28 = *(_QWORD *)(v24 + 16);
  *(_QWORD *)(v24 + 64) = 0LL;
  *(_QWORD *)(v24 + 88) = 0LL;
  *(_QWORD *)(v24 + 96) = 0LL;
  if ( *(_BYTE *)(v28 + 316) )
    FxObject::Vf_VerifyConstruct((FxObject *)v24, v23, 0);
  *(_QWORD *)v24 = FxNonPagedObject::`vftable';
  *(_QWORD *)(v24 + 112) = 0LL;
  *(_BYTE *)(v24 + 104) = 1;
  if ( *(char *)(v24 + 24) < 0 )
  {
    v95 = *(_FX_DRIVER_GLOBALS **)(v24 + 16);
    if ( v95->FxVerifierLock )
    {
      VerifierLock = 0LL;
      FxVerifierLock::CreateAndInitialize(&VerifierLock, v95, (FxObject *)v24);
      *(_QWORD *)(v24 - 40) = VerifierLock;
    }
  }
  *(_QWORD *)(v24 + 136) = 0LL;
  *(_QWORD *)v24 = FxFileObject::`vftable'{for `FxNonPagedObject'};
  *(_QWORD *)(v24 + 96) = m_DeviceBase;
  *(_QWORD *)(v24 + 120) = FxFileObject::`vftable'{for `IFxHasCallbacks'};
  *(_QWORD *)(v24 + 128) = FileObject;
  v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v24 + 56));
  *(_WORD *)(v24 + 24) |= 2u;
  KeReleaseSpinLock((PKSPIN_LOCK)(v24 + 56), v29);
  if ( !*(_WORD *)(v24 + 10) )
  {
    v35 = -1073741816;
LABEL_169:
    FxObject::ClearEvtCallbacks((FxObject *)v24);
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v24 + 48LL))(v24);
    m_Globals = globals;
LABEL_322:
    v5 = Irp;
LABEL_323:
    v153 = this->m_DeviceBase;
    v154 = v153->m_ObjectSize;
    v155 = (const void *)((unsigned __int64)v153 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v154 )
      v155 = 0LL;
    WPP_IFR_SF_qL(m_Globals, 2u, 0xDu, 0x16u, WPP_FxPkgGeneral_cpp_Traceguids, v155, v35);
    goto LABEL_318;
  }
  if ( attributes.ExecutionLevel == WdfExecutionLevelPassive )
  {
    v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v24 + 56));
    *(_WORD *)(v24 + 24) |= 0x11u;
    KeReleaseSpinLock((PKSPIN_LOCK)(v24 + 56), v30);
  }
  Request[1] = (FxRequest *)m_DeviceBase;
  v31 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v24 + 56));
  v32 = v31;
  if ( *(_WORD *)(v24 + 26) != 1 )
  {
    FxObject::TraceDroppedEvent((FxObject *)v24, FxObjectDroppedEventAssignParentObject);
    KeReleaseSpinLock((PKSPIN_LOCK)(v24 + 56), v32);
    v35 = -1073741738;
    goto LABEL_169;
  }
  if ( *(_QWORD *)(v24 + 64) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v24 + 56), v31);
    v35 = -1071644147;
    goto LABEL_169;
  }
  v33 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_SpinLock.m_Lock);
  if ( m_DeviceBase->m_ObjectState == 1 )
  {
    v34 = m_DeviceBase->m_ChildListHead.Blink;
    if ( v34->Flink != &m_DeviceBase->m_ChildListHead )
      goto LABEL_319;
    v27->Flink = &m_DeviceBase->m_ChildListHead;
    *(_QWORD *)(v24 + 80) = v34;
    v34->Flink = v27;
    m_DeviceBase->m_ChildListHead.Blink = v27;
    if ( !*(_QWORD *)(v24 + 96) )
      *(_QWORD *)(v24 + 96) = m_DeviceBase->m_DeviceBase;
    KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v33);
    *(_QWORD *)(v24 + 64) = m_DeviceBase;
    v35 = 0;
  }
  else
  {
    FxObject::TraceDroppedEvent(m_DeviceBase, FxObjectDroppedEventAddChildObjectInternal);
    KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v33);
    v35 = -1073741738;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v24 + 56), v32);
  if ( v35 < 0 )
    goto LABEL_169;
  v38 = *(unsigned __int16 *)(v24 + 10);
  if ( (_WORD)v38 )
    v39 = (char *)(v24 + v38);
  else
    v39 = 0LL;
  if ( attributes.EvtDestroyCallback )
    *((_QWORD *)v39 + 3) = attributes.EvtDestroyCallback;
  if ( attributes.EvtCleanupCallback )
  {
    *((_QWORD *)v39 + 2) = attributes.EvtCleanupCallback;
    v40 = *(_WORD *)(v24 + 24) | 0x400;
  }
  else
  {
    v40 = *(_WORD *)(v24 + 24);
  }
  *(_WORD *)(v24 + 24) = v40 | 8;
  if ( *(_BYTE *)(*(_QWORD *)(v24 + 16) + 316LL) )
    FxObject::Vf_VerifyLeakDetectionConsiderObject((FxObject *)v24, v36);
  if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0
    && (m_DeviceObject = (FxVerifierLock *)m_DeviceBase[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
  {
    FxVerifierLock::Lock(m_DeviceObject, &PreviousIrql, v37);
    v42 = PreviousIrql;
    p_m_Lock = &m_DeviceBase->m_NPLock.m_Lock;
  }
  else
  {
    p_m_Lock = &m_DeviceBase->m_NPLock.m_Lock;
    v42 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_NPLock.m_Lock);
  }
  v43 = &m_DeviceBase[2].FxNonPagedObject::FxObject::__vftable;
  v44 = m_DeviceBase[2].FxNonPagedObject::FxObject::__vftable;
  v45 = (FxDeviceBase_vtbl **)(v24 + 144);
  if ( (FxDeviceBase *)v44->~FxObject != &m_DeviceBase[2] )
LABEL_319:
    __fastfail(3u);
  *v45 = v44;
  *(_QWORD *)(v24 + 152) = v43;
  v44->~FxObject = (void (__fastcall *)(FxObject *))v45;
  *v43 = v45;
  if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0
    && (v97 = (FxVerifierLock *)m_DeviceBase[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
  {
    FxVerifierLock::Unlock(v97, v42, (unsigned __int8)v44);
  }
  else
  {
    KeReleaseSpinLock(p_m_Lock, v42);
  }
  if ( (_DWORD)PPObject == 2 )
  {
    FileObject->FsContext = (void *)v24;
  }
  else if ( (_DWORD)PPObject == 3 )
  {
    FileObject->FsContext2 = (void *)v24;
  }
  if ( *(_WORD *)(v24 + 10) )
    v168 = v24 ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v168 = 0LL;
  p_m_FileObjectInfoHeadList = &this->m_FileObjectInfoHeadList;
  v46 = this->m_FileObjectInfoHeadList.Blink->Blink;
  if ( v46 != &this->m_FileObjectInfoHeadList )
  {
    do
    {
      v98 = *(__m128i *)&v46[5].Blink;
      v165 = v46;
      *(__m128i *)&attributes.Size = v98;
      *(_LIST_ENTRY *)&attributes.EvtDestroyCallback = *(_LIST_ENTRY *)((char *)v46 + 104);
      *(_LIST_ENTRY *)&attributes.ParentObject = *(_LIST_ENTRY *)((char *)v46 + 120);
      attributes.ContextTypeInfo = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v46[8].Blink;
      if ( _mm_cvtsi128_si32(v98) )
      {
        attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
        attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
        attributes.ParentObject = 0LL;
        v35 = FxObjectAllocateContext((FxObject *)v24, &attributes, 1u, 0LL);
        if ( v35 < 0 )
        {
          v99 = v46[9].Blink;
          v100 = this->m_DeviceBase;
          if ( v99 )
            Flink = (unsigned __int64)v99[1].Flink;
          else
            Flink = (unsigned __int64)v100->m_Driver;
          v102 = *(_WORD *)(Flink + 10);
          v103 = Flink ^ 0xFFFFFFFFFFFFFFF8uLL;
          v47 = v102 == 0;
          v104 = v100->m_ObjectSize;
          if ( v47 )
            v103 = 0LL;
          v105 = (const void *)((unsigned __int64)v100 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v104 )
            v105 = 0LL;
          WPP_IFR_SF_qqqd(globals, 2u, 0xDu, 0x17u, WPP_FxPkgGeneral_cpp_Traceguids, &v46[5].Blink, v105, v103, v35);
          goto LABEL_315;
        }
      }
      v46 = v46->Blink;
    }
    while ( v46 != p_m_FileObjectInfoHeadList );
  }
  v5 = Irp;
LABEL_63:
  if ( !this->m_DriverCreatedQueue && (this->m_Flags & 0xC) == 0 )
  {
    if ( BYTE1(this->m_DeviceBase[1].m_ChildEntry.Blink) )
    {
      return (unsigned int)FxPkgGeneral::ForwardCreateRequest(this, v5, FxPkgGeneral::_CreateCompletionRoutine, this);
    }
    else
    {
      v35 = 0;
      v5->m_Irp->IoStatus.Status = 0;
      v5->m_Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(v5->m_Irp, 0);
      v5->m_Irp = 0LL;
    }
    return (unsigned int)v35;
  }
  v47 = p_m_FileObjectInfoHeadList->Flink == p_m_FileObjectInfoHeadList;
  v48 = this->m_DeviceBase;
  if ( !v47 && (v49 = this->m_FileObjectInfoHeadList.Blink, v165 = v49, BYTE4(v49[9].Flink)) )
  {
    v106 = v49[9].Blink;
    *(_LIST_ENTRY *)&attributes.Size = v106[2];
    *(_LIST_ENTRY *)&attributes.EvtDestroyCallback = v106[3];
    *(_LIST_ENTRY *)&attributes.ParentObject = v106[4];
    v50 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v106[5].Flink;
  }
  else
  {
    *(_OWORD *)&attributes.Size = *(_OWORD *)&v48[2].m_ExecutionLevel;
    *(_OWORD *)&attributes.EvtDestroyCallback = *(_OWORD *)&v48[3].FxNonPagedObject::FxObject::__vftable;
    *(_OWORD *)&attributes.ParentObject = *(_OWORD *)&v48[3].m_Globals;
    v50 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v48[3].m_ChildListHead.Flink;
  }
  attributes.ContextTypeInfo = v50;
  if ( *(FxDeviceBase **)&v48[1].m_ExecutionLevel != (FxDeviceBase *)&v48[1].m_ExecutionLevel )
  {
    attributes.ExecutionLevel = WdfExecutionLevelDispatch;
    attributes.SynchronizationScope = WdfSynchronizationScopeNone;
    attributes.ParentObject = 0LL;
  }
  v51.m_Irp = v5->m_Irp;
  v52 = 0LL;
  v53 = v48->m_Globals;
  v174 = v51.m_Irp;
  v54 = *(_QWORD *)&v48[3].m_SpinLock.m_DbgFlagIsInitialized;
  if ( v54 && *(_WORD *)(v54 + 8) == 4354 && *(_BYTE *)(v54 + 1779) )
  {
    v56 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&v48[2].m_SpinLock);
    if ( !v56 )
    {
      v107 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v48[2].m_DeviceBase)(
               HIDWORD(v48[2].m_ChildEntry.Blink),
               HIDWORD(v48[2].m_DisposeSingleEntry.Next),
               LODWORD(v48[2].m_DisposeSingleEntry.Next));
LABEL_201:
      v56 = (FX_POOL_TRACKER *)v107;
    }
  }
  else
  {
    ++HIDWORD(v48[2].m_ParentObject);
    v56 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&v48[2].m_SpinLock);
    if ( !v56 )
    {
      ++LODWORD(v48[2].m_ChildEntry.Flink);
      v107 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v48[2].m_DeviceBase)(
               HIDWORD(v48[2].m_ChildEntry.Blink),
               HIDWORD(v48[2].m_DisposeSingleEntry.Next),
               LODWORD(v48[2].m_DisposeSingleEntry.Next));
      goto LABEL_201;
    }
  }
  if ( !v56 )
    goto LABEL_309;
  if ( v53->FxPoolTrackingOn )
  {
    v57 = v56 + 1;
    FxPoolInsertNonPagedAllocateTracker(
      &v53->FxPoolFrameworks,
      v56,
      (unsigned __int64)v48[2].m_CallbackLockObjectPtr,
      v53->Tag,
      retaddr);
  }
  else
  {
    v57 = v56;
  }
  v57->Link.Flink = &v56->Link;
  p_Pool = &v57->Pool;
  v57->Link.Blink = &v53->Linkage;
  if ( v53->FxVerifierHandle )
  {
    *(_OWORD *)p_Pool = 0LL;
    *(_OWORD *)&v57->Size = 0LL;
    *(_OWORD *)&v57->CallersAddress = 0LL;
    LODWORD(v57->CallersAddress) = 1146058822;
    p_Pool = (FX_POOL **)&v57[1];
  }
  p_Pool[47] = 0LL;
  p_Pool[48] = 0LL;
  p_Pool[49] = 0LL;
  p_Pool[50] = 0LL;
  p_Pool[51] = 0LL;
  p_Pool[46] = (FX_POOL *)p_Pool;
  v59 = attributes.ContextTypeInfo;
  if ( attributes.ContextTypeInfo )
  {
    v60 = attributes.ContextSizeOverride;
    if ( !attributes.ContextSizeOverride )
      v60 = attributes.ContextTypeInfo->ContextSize;
    memset(p_Pool + 52, 0, (v60 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    v59 = attributes.ContextTypeInfo;
  }
  p_Pool[50] = (FX_POOL *)v59;
  if ( !p_Pool )
  {
LABEL_309:
    v35 = -1073741670;
    WPP_IFR_SF_d(v48->m_Globals, 2u, 0x10u, 0xAu, WPP_FxRequest_cpp_Traceguids, -1073741670);
    goto LABEL_310;
  }
  p_Pool[2] = (FX_POOL *)v48->m_Globals;
  v61 = 1;
  *p_Pool = (FX_POOL *)FxObject::`vftable';
  p_Pool[7] = 0LL;
  *((_BYTE *)p_Pool + 48) = 1;
  *((_DWORD *)p_Pool + 6) = 0x10000;
  *((_DWORD *)p_Pool + 2) = 24121352;
  p_Pool[5] = (FX_POOL *)(p_Pool + 4);
  p_Pool[4] = (FX_POOL *)(p_Pool + 4);
  p_Pool[10] = (FX_POOL *)(p_Pool + 9);
  p_Pool[9] = (FX_POOL *)(p_Pool + 9);
  v62 = p_Pool[2];
  *((_DWORD *)p_Pool + 3) = 1;
  p_Pool[8] = 0LL;
  p_Pool[11] = 0LL;
  p_Pool[12] = 0LL;
  if ( LOBYTE(v62[1].PeakPagedAllocations) )
  {
    FxObject::Vf_VerifyConstruct((FxObject *)p_Pool, v55, 0);
    v61 = 1;
  }
  *p_Pool = (FX_POOL *)FxNonPagedObject::`vftable';
  p_Pool[14] = 0LL;
  *((_BYTE *)p_Pool + 104) = 1;
  if ( *((char *)p_Pool + 24) < 0 )
  {
    v108 = (_FX_DRIVER_GLOBALS *)p_Pool[2];
    if ( v108->FxVerifierLock )
    {
      v170 = 0LL;
      FxVerifierLock::CreateAndInitialize(&v170, v108, (FxObject *)p_Pool);
      v61 = 1;
      *(p_Pool - 5) = (FX_POOL *)v170;
    }
  }
  v63 = v174;
  p_Pool[19] = (FX_POOL *)v174;
  p_Pool[23] = 0LL;
  p_Pool[24] = 0LL;
  *((_WORD *)p_Pool + 106) = 0;
  *((_BYTE *)p_Pool + 238) = 1;
  p_Pool[20] = 0LL;
  p_Pool[25] = 0LL;
  *((_BYTE *)p_Pool + 214) = p_Pool[19] == 0LL;
  p_Pool[16] = (FX_POOL *)(p_Pool + 15);
  p_Pool[15] = (FX_POOL *)(p_Pool + 15);
  *((_BYTE *)p_Pool + 215) = 0;
  *(_WORD *)((char *)p_Pool + 235) = 0;
  p_Pool[21] = 0LL;
  p_Pool[22] = 0LL;
  p_Pool[18] = 0LL;
  p_Pool[28] = 0LL;
  *((_DWORD *)p_Pool + 52) = 0;
  p_Pool[30] = 0LL;
  *((_BYTE *)p_Pool + 234) = 0;
  *((_BYTE *)p_Pool + 237) = 0;
  p_Pool[32] = (FX_POOL *)FxRequestSystemBuffer::`vftable';
  p_Pool[34] = (FX_POOL *)FxRequestOutputBuffer::`vftable';
  p_Pool[33] = 0LL;
  p_Pool[35] = 0LL;
  *((_WORD *)p_Pool + 116) = 232;
  p_Pool[37] = (FX_POOL *)(p_Pool + 36);
  p_Pool[36] = (FX_POOL *)(p_Pool + 36);
  p_Pool[39] = (FX_POOL *)(p_Pool + 38);
  p_Pool[38] = (FX_POOL *)(p_Pool + 38);
  p_Pool[41] = (FX_POOL *)(p_Pool + 40);
  p_Pool[40] = (FX_POOL *)(p_Pool + 40);
  *p_Pool = (FX_POOL *)FxRequestFromLookaside::`vftable';
  p_Pool[27] = (FX_POOL *)216;
  p_Pool[31] = 0LL;
  *((_BYTE *)p_Pool + 353) = 0;
  *((_BYTE *)p_Pool + 352) = 0;
  *((_WORD *)p_Pool + 177) = 0;
  p_Pool[42] = 0LL;
  p_Pool[43] = 0LL;
  p_Pool[12] = (FX_POOL *)v48->m_DeviceBase;
  if ( v63 )
  {
    v64 = p_Pool[19];
    v65 = (unsigned __int8 *)v64[1].NonPagedHead.Blink;
    v66 = *v65;
    if ( *v65 < 3u )
    {
LABEL_87:
      v61 = 1;
      goto LABEL_88;
    }
    if ( v66 <= 4u )
    {
      if ( v48[1].m_Refcnt == 1 )
      {
        if ( v64->PagedLock.m_Lock.Event.Header.Type )
          goto LABEL_87;
        NonPagedBytes = (FX_POOL *)v64->NonPagedBytes;
      }
      else
      {
        if ( v48[1].m_Refcnt != 2 )
          goto LABEL_87;
        NonPagedBytes = (FX_POOL *)v64->NonPagedHead.Blink;
      }
      p_Pool[33] = NonPagedBytes;
      goto LABEL_224;
    }
    if ( (unsigned __int8)(v66 - 14) > 1u )
      goto LABEL_87;
    if ( (*((_DWORD *)v65 + 6) & 3) != 0 )
    {
      if ( (*((_DWORD *)v65 + 6) & 3) == 1 || (*((_DWORD *)v65 + 6) & 3) == 2 )
      {
        p_Pool[33] = (FX_POOL *)v64->NonPagedHead.Blink;
      }
      else if ( (*((_DWORD *)v65 + 6) & 3) == 3 )
      {
        if ( v66 != 15 && v64->PagedLock.m_Lock.Event.Header.Type )
          goto LABEL_87;
        p_Pool[33] = (FX_POOL *)*((_QWORD *)v65 + 4);
        v109 = (FX_POOL *)v64->NonPagedBytes;
        goto LABEL_216;
      }
LABEL_217:
      NonPagedBytes = p_Pool[33];
LABEL_224:
      if ( NonPagedBytes )
        *((_BYTE *)p_Pool + 235) |= 1u;
      v61 = 1;
      if ( p_Pool[35] )
        *((_BYTE *)p_Pool + 235) |= 2u;
      goto LABEL_88;
    }
    p_Pool[33] = (FX_POOL *)v64->NonPagedHead.Blink;
    v109 = (FX_POOL *)v64->NonPagedHead.Blink;
LABEL_216:
    p_Pool[35] = v109;
    goto LABEL_217;
  }
LABEL_88:
  if ( v48->m_Globals->FxRequestParentOptimizationOn )
  {
    v67 = 0LL;
    PPObject = 0LL;
    if ( !*((_WORD *)p_Pool + 5) )
    {
      v35 = -1073741816;
      goto LABEL_229;
    }
    if ( attributes.ExecutionLevel == WdfExecutionLevelPassive )
    {
      FxObject::MarkPassiveCallbacks((FxObject *)p_Pool, ObjectLock);
      v67 = (FxObject *)PPObject;
      v61 = 1;
    }
    if ( attributes.ParentObject )
    {
      FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)p_Pool[2], attributes.ParentObject, 0x1000u, &PPObject);
      v67 = (FxObject *)PPObject;
      v61 = 1;
    }
    if ( !v67 )
      goto LABEL_95;
    v35 = FxObject::AssignParentObject((FxObject *)p_Pool, v67);
    if ( v35 >= 0 )
    {
      v61 = 1;
LABEL_95:
      v68 = *((unsigned __int16 *)p_Pool + 5);
      if ( (_WORD)v68 )
        v69 = (__int64)p_Pool + v68;
      else
        v69 = 0LL;
      if ( attributes.EvtDestroyCallback )
        *(_QWORD *)(v69 + 24) = attributes.EvtDestroyCallback;
      if ( attributes.EvtCleanupCallback )
      {
        *(_QWORD *)(v69 + 16) = attributes.EvtCleanupCallback;
        v70 = *((_WORD *)p_Pool + 12) | 0x400;
      }
      else
      {
        v70 = *((_WORD *)p_Pool + 12);
      }
      *((_WORD *)p_Pool + 12) = v70 | 8;
      if ( LOBYTE(p_Pool[2][1].PeakPagedAllocations) )
      {
        FxObject::Vf_VerifyLeakDetectionConsiderObject((FxObject *)p_Pool, (_FX_DRIVER_GLOBALS *)v67);
        v61 = 1;
      }
      v35 = 0;
      goto LABEL_104;
    }
  }
  else
  {
    v35 = FxObject::Commit((FxObject *)p_Pool, &attributes, 0LL, v48, 0);
  }
  if ( v35 >= 0 )
  {
    v61 = 1;
LABEL_104:
    v52 = p_Pool;
    goto LABEL_105;
  }
LABEL_229:
  WPP_IFR_SF_d(v48->m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequest_cpp_Traceguids, v35);
  FxObject::ClearEvtCallbacks((FxObject *)p_Pool);
  ((void (__fastcall *)(FX_POOL **))(*p_Pool)->PagedLock.m_Lock.Owner)(p_Pool);
  v61 = 1;
LABEL_105:
  if ( v35 < 0 )
  {
LABEL_310:
    v150 = this->m_DeviceBase;
    v151 = v150->m_ObjectSize;
    v152 = (const void *)((unsigned __int64)v150 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v151 )
      v152 = 0LL;
    WPP_IFR_SF_qL(globals, 2u, 0xDu, 0x18u, WPP_FxPkgGeneral_cpp_Traceguids, v152, v35);
    goto LABEL_313;
  }
  v71 = &this->m_FileObjectInfoHeadList;
  v72 = this->m_FileObjectInfoHeadList.Blink->Blink;
  if ( v72 == &this->m_FileObjectInfoHeadList )
  {
    v73 = v165;
LABEL_108:
    if ( KeGetCurrentIrql() <= 1u )
    {
      KeEnterCriticalRegion();
      v162 = 1;
    }
    m_Flags = this->m_Flags;
    if ( (m_Flags & 4) != 0 || !this->m_DriverCreatedQueue )
    {
      v47 = this->m_ExecutionLevel == WdfExecutionLevelPassive;
      outputRequest = 0LL;
      if ( v47 && KeGetCurrentIrql() >= 2u )
      {
        v35 = -1073741808;
        v122 = this->m_DeviceBase;
        v120 = 26;
        flags = -1073741808;
        v123 = v122->m_ObjectSize;
        v121 = (const void *)((unsigned __int64)v122 ^ 0xFFFFFFFFFFFFFFF8uLL);
        level = Irp->m_Irp;
        if ( !v123 )
          v121 = 0LL;
        goto LABEL_254;
      }
      v84 = FxIoQueue::QueueRequest(this->m_DefaultQueueForCreates, (FxRequest *)v52, v61);
      m_DefaultQueueForCreates = this->m_DefaultQueueForCreates;
      v35 = v84;
      if ( v84 < 0 )
      {
        v124 = m_DefaultQueueForCreates->m_ObjectSize;
        v125 = 27;
        v126 = (const void *)((unsigned __int64)m_DefaultQueueForCreates ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v124 )
          v126 = 0LL;
        goto LABEL_260;
      }
      if ( FxIoQueue::GetRequest(m_DefaultQueueForCreates, FileObject, 0LL, &outputRequest) < 0 )
        goto LABEL_146;
      m_Flags = this->m_Flags;
      v75 = 1;
      v176 = 1;
    }
    else
    {
      v75 = 0;
    }
    if ( (m_Flags & 4) != 0 )
    {
      v129 = this->m_FileObjectInfoHeadList.Blink;
      v47 = v129 == v71;
      v76 = v168;
      if ( !v47 )
      {
        while ( 1 )
        {
          v47 = BYTE4(v129[9].Flink) == 0;
          v73 = v129;
          v165 = v129;
          if ( v47 )
            break;
          if ( v24 )
            *(_QWORD *)(v24 + 136) = v129->Blink;
          if ( *((_WORD *)v52 + 5) )
            v130 = (unsigned __int64)v52 ^ 0xFFFFFFFFFFFFFFF8uLL;
          else
            v130 = 0LL;
          v131 = this->m_DeviceBase;
          v132 = v131->m_ObjectSize;
          v133 = (unsigned __int64)v131 ^ 0xFFFFFFFFFFFFFFF8uLL;
          v47 = v132 == 0;
          v134 = v129[2].Blink;
          if ( v47 )
            v133 = 0LL;
          if ( v134 )
          {
            v135 = v129[2].Flink;
            v159 = 0;
            if ( v135 )
            {
              ((void (__fastcall *)(_LIST_ENTRY *, unsigned __int8 *))v135->Flink[1].Flink)(v135, &v159);
              v134 = v129[2].Blink;
            }
            v136 = ((__int64 (__fastcall *)(unsigned __int64, unsigned __int64, unsigned __int64))v134)(v133, v130, v76);
            v137 = v129[2].Flink;
            v138 = v136;
            if ( v137 )
              ((void (__fastcall *)(_LIST_ENTRY *, _QWORD))v137->Flink[1].Blink)(v137, v159);
            if ( v138 )
              goto LABEL_146;
          }
          v129 = v129->Blink;
          if ( v129 == &this->m_FileObjectInfoHeadList )
          {
            v73 = v165;
            break;
          }
        }
        v75 = v176;
      }
    }
    else
    {
      v76 = v168;
    }
    m_DriverCreatedQueue = this->m_DriverCreatedQueue;
    if ( !m_DriverCreatedQueue )
    {
      if ( (this->m_Flags & 8) != 0 )
      {
        if ( *((_WORD *)v52 + 5) )
          v86 = (unsigned __int64)v52 ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v86 = 0LL;
        v87 = this->m_DeviceBase;
        if ( v87->m_ObjectSize )
          v88 = (unsigned __int64)v87 ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v88 = 0LL;
        v89 = v73[1].Blink;
        if ( v89 )
        {
          v90 = v73[1].Flink;
          v161 = 0;
          if ( v90 )
          {
            ((void (__fastcall *)(_LIST_ENTRY *, unsigned __int8 *))v90->Flink[1].Flink)(v90, &v161);
            ((void (__fastcall *)(unsigned __int64, unsigned __int64, unsigned __int64))v73[1].Blink)(v88, v86, v76);
          }
          else
          {
            ((void (__fastcall *)(unsigned __int64, unsigned __int64, unsigned __int64))v89)(v88, v86, v76);
          }
          v91 = v73[1].Flink;
          if ( v91 )
          {
            ((void (__fastcall *)(_LIST_ENTRY *, _QWORD))v91->Flink[1].Blink)(v91, v161);
            v35 = 259;
            goto $RequestIsGone;
          }
        }
      }
      else
      {
        if ( !BYTE1(this->m_DeviceBase[1].m_ChildEntry.Blink) )
        {
          FxRequest::Complete((FxRequest *)v52, 0);
          v35 = 259;
          goto $RequestIsGone;
        }
        FxPkgGeneral::ForwardCreateRequest(this, Irp, FxPkgGeneral::_CreateCompletionRoutine2, v52);
      }
      goto LABEL_146;
    }
    if ( v75 )
    {
      v139 = FxIoQueue::ForwardRequest(this->m_DefaultQueueForCreates, this->m_DriverCreatedQueue, (FxRequest *)v52);
      if ( v139 < 0 )
      {
        v140 = this->m_DriverCreatedQueue;
        v141 = v140->m_ObjectSize;
        v142 = (const void *)((unsigned __int64)v140 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v141 )
          v142 = 0LL;
        WPP_IFR_SF_qL(globals, 2u, 0xDu, 0x1Cu, WPP_FxPkgGeneral_cpp_Traceguids, v142, v139);
        FxRequest::Complete((FxRequest *)v52, v139);
        v35 = 259;
        goto $RequestIsGone;
      }
      goto LABEL_146;
    }
    m_ObjectFlags = m_DriverCreatedQueue->m_ObjectFlags;
    Request[0] = (FxRequest *)v52;
    LOBYTE(v174) = 0;
    if ( m_ObjectFlags < 0
      && (v143 = *(FxVerifierLock **)&m_DriverCreatedQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Lock(v143, (unsigned __int8 *)&v174, v61);
      v79 = (unsigned __int8)v174;
    }
    else
    {
      v79 = KeAcquireSpinLockRaiseToDpc(&m_DriverCreatedQueue->m_NPLock.m_Lock);
      LOBYTE(v174) = v79;
    }
    if ( *((_BYTE *)v52 + 354) )
      FxObject::AddRef(
        (FxObject *)v52,
        (void *)0x50647746,
        2311,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    m_QueueState = m_DriverCreatedQueue->m_QueueState;
    v81 = m_DriverCreatedQueue->m_Globals;
    FxVerboseOn = v81->FxVerboseOn;
    if ( (m_QueueState & 1) != 0 )
    {
      if ( FxVerboseOn )
      {
        v147 = (const void *)((unsigned __int64)m_DriverCreatedQueue ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_DriverCreatedQueue->m_ObjectSize )
          v147 = 0LL;
        v148 = (const void *)((unsigned __int64)v52 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !*((_WORD *)v52 + 5) )
          v148 = 0LL;
        WPP_IFR_SF_qq(v81, 5u, 0xDu, 0x2Au, WPP_FxIoQueue_cpp_Traceguids, v148, v147);
      }
      if ( *(&v52[2][2].NonPagedLock.m_DbgFlagIsInitialized + 1) )
      {
        v160 = 0;
        FxNonPagedObject::Lock((FxNonPagedObject *)v52, &v160);
        v149 = (_FX_DRIVER_GLOBALS *)v52[2];
        if ( v149->FxVerifierOn )
          FxRequest::Vf_VerifyRequestIsNotCompleted((FxRequest *)v52, v149);
        FxNonPagedObject::Unlock((FxNonPagedObject *)v52, v160);
      }
      BYTE3(v52[19][1].NonPagedHead.Blink->Flink) |= 1u;
      if ( !*((_BYTE *)v52 + 354) )
        goto LABEL_125;
      if ( !m_DriverCreatedQueue->m_Dispatching )
      {
        v79 = (unsigned __int8)v174;
LABEL_125:
        FxIoQueue::DispatchEvents(m_DriverCreatedQueue, v79, (FxRequest *)v52);
        v35 = 259;
        goto $RequestIsGone;
      }
      FxIoQueue::InsertNewRequestLocked(m_DriverCreatedQueue, Request, (unsigned __int8)v174);
      FxNonPagedObject::Unlock(m_DriverCreatedQueue, (unsigned __int8)v174);
LABEL_146:
      v35 = 259;
      goto $RequestIsGone;
    }
    v35 = -1073741436;
    if ( FxVerboseOn )
    {
      v144 = (const void *)((unsigned __int64)v52 ^ 0xFFFFFFFFFFFFFFF8uLL);
      v145 = "power stopping (Drain) in progress,";
      if ( !*((_WORD *)v52 + 5) )
        v144 = 0LL;
      if ( (m_QueueState & 0x10000) == 0 )
        v145 = a5;
      v146 = (const void *)((unsigned __int64)m_DriverCreatedQueue ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_DriverCreatedQueue->m_ObjectSize )
        v146 = 0LL;
      WPP_IFR_SF_qLsqd(v81, 5u, (unsigned int)v145, 0x29u, Tag, v146, m_QueueState, v145, v144, -1073741436);
    }
    FxNonPagedObject::Unlock(m_DriverCreatedQueue, v79);
    *(_QWORD *)&v52[19]->PagedLock.m_Lock.Contention = 0LL;
    FxRequest::Complete((FxRequest *)v52, -1073741436);
    ((void (__fastcall *)(FX_POOL **, void *, __int64, const char *))(*v52)->NonPagedHead.Flink)(
      v52,
      (void *)1886220099,
      2338LL,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    v127 = this->m_DriverCreatedQueue;
    v125 = 29;
    v128 = v127->m_ObjectSize;
    v126 = (const void *)((unsigned __int64)v127 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v128 )
      v126 = 0LL;
LABEL_260:
    WPP_IFR_SF_qL(globals, 2u, 0xDu, v125, WPP_FxPkgGeneral_cpp_Traceguids, v126, v35);
    goto $RequestIsGone;
  }
  while ( 1 )
  {
    v73 = v72;
    if ( BYTE4(v72[9].Flink) )
    {
      v111 = v72[9].Blink;
      *(_LIST_ENTRY *)&attributes.Size = v111[2];
      *(_LIST_ENTRY *)&attributes.EvtDestroyCallback = v111[3];
      *(_LIST_ENTRY *)&attributes.ParentObject = v111[4];
      v112 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v111[5].Flink;
    }
    else
    {
      v113 = this->m_DeviceBase;
      *(_OWORD *)&attributes.Size = *(_OWORD *)&v113[2].m_ExecutionLevel;
      *(_OWORD *)&attributes.EvtDestroyCallback = *(_OWORD *)&v113[3].FxNonPagedObject::FxObject::__vftable;
      *(_OWORD *)&attributes.ParentObject = *(_OWORD *)&v113[3].m_Globals;
      v112 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v113[3].m_ChildListHead.Flink;
    }
    attributes.ContextTypeInfo = v112;
    if ( !attributes.Size )
      goto LABEL_242;
    attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
    attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
    attributes.ParentObject = 0LL;
    v35 = FxObjectAllocateContext((FxObject *)v52, &attributes, 1u, 0LL);
    if ( v35 < 0 )
      break;
    v61 = 1;
LABEL_242:
    v72 = v72->Blink;
    if ( v72 == v71 )
      goto LABEL_108;
  }
  v114 = v72[9].Blink;
  v115 = this->m_DeviceBase;
  if ( v114 )
    m_Driver = (unsigned __int64)v114[1].Flink;
  else
    m_Driver = (unsigned __int64)v115->m_Driver;
  v117 = *(_WORD *)(m_Driver + 10);
  v118 = m_Driver ^ 0xFFFFFFFFFFFFFFF8uLL;
  flags = v35;
  v47 = v117 == 0;
  v119 = v115->m_ObjectSize;
  if ( v47 )
    v118 = 0LL;
  v120 = 25;
  v121 = (const void *)((unsigned __int64)v115 ^ 0xFFFFFFFFFFFFFFF8uLL);
  level = (_IRP *)v118;
  if ( !v119 )
    v121 = 0LL;
LABEL_254:
  WPP_IFR_SF_qid(globals, 2u, 0xDu, v120, WPP_FxPkgGeneral_cpp_Traceguids, v121, (__int64)level, flags);
LABEL_313:
  if ( v52 )
  {
    FxObject::ClearEvtCallbacks((FxObject *)v52);
    ((void (*)(void))(*v52)->PagedLock.m_Lock.Owner)();
  }
LABEL_315:
  if ( v24 )
    FxFileObject::DeleteFileObjectFromFailedCreate((FxFileObject *)v24);
  v5 = Irp;
LABEL_318:
  FxPkgGeneral::DecrementOpenHandleCount(this);
  v5->m_Irp->IoStatus.Status = v35;
  v5->m_Irp->IoStatus.Information = 0LL;
  IofCompleteRequest(v5->m_Irp, 0);
  v5->m_Irp = 0LL;
$RequestIsGone:
  if ( v162 )
    KeLeaveCriticalRegion();
  return (unsigned int)v35;
}
