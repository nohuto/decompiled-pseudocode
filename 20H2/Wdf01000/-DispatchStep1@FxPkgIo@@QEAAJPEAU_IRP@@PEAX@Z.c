/*
 * XREFs of ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C00071B0
 * Callers:
 *     ?Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z @ 0x1C0007140 (-Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrp @ 0x1C0048C40 (imp_WdfDeviceWdmDispatchIrp.c)
 * Callees:
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0005CA0 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C001A154 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001CA80 (memset.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002DD0C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C002F42C (WPP_IFR_SF_qid.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0031380 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C004943C (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FreeRequest@FxRequest@@QEAAXXZ @ 0x1C004E450 (-FreeRequest@FxRequest@@QEAAXXZ.c)
 *     ?FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x1C00515A8 (-FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C0059490 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00595BC (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005AE28 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_qcDqd @ 0x1C0065F60 (WPP_IFR_SF_qcDqd.c)
 *     ?Mj2Index@FxIrpDynamicDispatchInfo@@SAHE@Z @ 0x1C0074854 (-Mj2Index@FxIrpDynamicDispatchInfo@@SAHE@Z.c)
 *     ?VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z @ 0x1C00749C0 (-VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z.c)
 *     ?IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z @ 0x1C0075E68 (-IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z.c)
 *     ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x1C0077220 (-GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00C2CE0 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C2D24 (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyDispatchContext@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00C2FC0 (-Vf_VerifyDispatchContext@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

NTSTATUS __fastcall FxPkgIo::DispatchStep1(FxPkgIo *this, _IRP *Irp, _LIST_ENTRY *DispatchContext)
{
  _LIST_ENTRY *p_m_DynamicDispatchInfoListHead; // rdi
  _LIST_ENTRY *v4; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  __int64 MajorFunction; // rcx
  FxIoQueue *v9; // rbp
  FxCxDeviceInfo *m_CxDeviceInfo; // rax
  FxIoInCallerContext *p_IoInCallerContextCallback; // rax
  FxCxDeviceInfo *v12; // r13
  FxDeviceBase *m_DeviceBase; // r12
  _WDF_OBJECT_ATTRIBUTES *p_RequestAttributes; // r13
  __int64 v15; // rax
  unsigned __int64 v16; // rdi
  _BYTE *m_Globals; // r14
  FxRequest *v18; // rsi
  FX_POOL_TRACKER *v19; // rbx
  _QWORD *p_Flink; // r14
  _BYTE *v21; // rax
  _QWORD *v22; // rbx
  _WDF_EXECUTION_LEVEL *p_m_ExecutionLevel; // r14
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rax
  _IRP *v27; // r10
  __int64 v28; // rcx
  unsigned __int8 *v29; // r8
  unsigned __int8 v30; // r9
  __int64 v31; // rax
  FxObject *v32; // rax
  __int64 v33; // rax
  char *v34; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  __int64 v37; // rax
  int v38; // r14d
  bool v39; // al
  _FX_DRIVER_GLOBALS *v40; // rcx
  unsigned __int8 m_CompletionState; // al
  signed __int32 v42; // edx
  unsigned int v43; // edx
  unsigned __int64 v44; // rdx
  void (__fastcall *m_Method)(WDFDEVICE__ *, WDFREQUEST__ *); // rax
  int v47; // eax
  unsigned __int8 v48; // dl
  __int64 v49; // r8
  char _a3; // r10
  __int64 v51; // rbp
  int v52; // esi
  FxDeviceBase *v53; // rcx
  unsigned __int16 v54; // ax
  const void *globals; // rcx
  _FX_DRIVER_GLOBALS *v56; // rdx
  __int64 v57; // r11
  _LIST_ENTRY *Flink; // rbp
  _LIST_ENTRY *v59; // rsi
  FxDeviceBase *v60; // rcx
  unsigned __int16 v61; // r10
  unsigned __int64 v62; // rcx
  FxDeviceBase *v63; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v65; // rcx
  _FX_DRIVER_GLOBALS *v66; // rax
  __int64 v67; // rax
  int v68; // eax
  int v69; // eax
  unsigned __int64 v70; // rdx
  unsigned __int64 v71; // rcx
  int v72; // eax
  const void *v73; // rcx
  _LIST_ENTRY *Blink; // rcx
  int v75; // [rsp+48h] [rbp-70h]
  FxIoInCallerContext *p_m_InCallerContextCallback; // [rsp+50h] [rbp-68h]
  FxVerifierLock *VerifierLock; // [rsp+58h] [rbp-60h] BYREF
  __int64 CurrentIrql; // [rsp+60h] [rbp-58h]
  void *retaddr; // [rsp+B8h] [rbp+0h]
  bool v80; // [rsp+C0h] [rbp+8h]
  FxRequest *ReservedRequest; // [rsp+D0h] [rbp+18h] BYREF
  void *PPObject; // [rsp+D8h] [rbp+20h] BYREF

  p_m_DynamicDispatchInfoListHead = &this->m_DynamicDispatchInfoListHead;
  v4 = DispatchContext;
  if ( DispatchContext == &this->m_DynamicDispatchInfoListHead )
  {
LABEL_2:
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    MajorFunction = CurrentStackLocation->MajorFunction;
    v9 = this->m_DispatchTable[MajorFunction];
    if ( v9 )
    {
      m_CxDeviceInfo = v9->m_CxDeviceInfo;
      if ( m_CxDeviceInfo )
        p_IoInCallerContextCallback = &m_CxDeviceInfo->IoInCallerContextCallback;
      else
        p_IoInCallerContextCallback = &this->m_InCallerContextCallback;
      p_m_InCallerContextCallback = p_IoInCallerContextCallback;
LABEL_6:
      if ( this->m_Filter
        && !p_IoInCallerContextCallback->m_Method
        && v9 == this->m_DefaultQueue
        && !FxIoQueue::IsIoEventHandlerRegistered(v9, (_WDF_REQUEST_TYPE)MajorFunction) )
      {
        goto LABEL_117;
      }
      v80 = v9 && v9->m_SupportForwardProgress;
      CurrentIrql = KeGetCurrentIrql();
      if ( (unsigned __int8)CurrentIrql <= 1u )
        KeEnterCriticalRegion();
      if ( v9 && (v12 = v9->m_CxDeviceInfo) != 0LL )
      {
        m_DeviceBase = this->m_DeviceBase;
        p_RequestAttributes = &v12->RequestAttributes;
      }
      else
      {
        m_DeviceBase = this->m_DeviceBase;
        p_RequestAttributes = (_WDF_OBJECT_ATTRIBUTES *)&m_DeviceBase[2].m_ExecutionLevel;
      }
      v15 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
      v16 = 0LL;
      m_Globals = m_DeviceBase->m_Globals;
      v18 = 0LL;
      ReservedRequest = 0LL;
      PPObject = m_Globals;
      if ( v15 && *(_WORD *)(v15 + 8) == 4354 && *(_BYTE *)(v15 + 1779) )
      {
        v19 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock);
        if ( !v19 )
          v19 = (FX_POOL_TRACKER *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))m_DeviceBase[2].m_DeviceBase)(
                                     HIDWORD(m_DeviceBase[2].m_ChildEntry.Blink),
                                     HIDWORD(m_DeviceBase[2].m_DisposeSingleEntry.Next),
                                     LODWORD(m_DeviceBase[2].m_DisposeSingleEntry.Next));
      }
      else
      {
        ++HIDWORD(m_DeviceBase[2].m_ParentObject);
        v19 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock);
        if ( !v19 )
        {
          ++LODWORD(m_DeviceBase[2].m_ChildEntry.Flink);
          v19 = (FX_POOL_TRACKER *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))m_DeviceBase[2].m_DeviceBase)(
                                     HIDWORD(m_DeviceBase[2].m_ChildEntry.Blink),
                                     HIDWORD(m_DeviceBase[2].m_DisposeSingleEntry.Next),
                                     LODWORD(m_DeviceBase[2].m_DisposeSingleEntry.Next));
        }
        m_Globals = PPObject;
      }
      if ( !v19 )
        goto LABEL_144;
      if ( m_Globals[264] )
      {
        p_Flink = &v19[1].Link.Flink;
        FxPoolInsertNonPagedAllocateTracker(
          (FX_POOL *)((char *)PPObject + 104),
          v19,
          (unsigned __int64)m_DeviceBase[2].m_CallbackLockObjectPtr,
          *((_DWORD *)PPObject + 17),
          retaddr);
      }
      else
      {
        p_Flink = &v19->Link.Flink;
      }
      v21 = PPObject;
      *p_Flink = v19;
      v22 = p_Flink + 2;
      p_Flink[1] = v21;
      if ( p_RequestAttributes )
        p_m_ExecutionLevel = (_WDF_EXECUTION_LEVEL *)p_RequestAttributes;
      else
        p_m_ExecutionLevel = &m_DeviceBase[2].m_ExecutionLevel;
      if ( v21[320] )
      {
        *(_OWORD *)v22 = 0LL;
        *((_OWORD *)v22 + 1) = 0LL;
        *((_OWORD *)v22 + 2) = 0LL;
        *((_DWORD *)v22 + 8) = 1146058822;
        v22 += 6;
      }
      v22[47] = 0LL;
      v22[48] = 0LL;
      v22[49] = 0LL;
      v22[50] = 0LL;
      v22[51] = 0LL;
      v22[46] = v22;
      if ( p_m_ExecutionLevel )
      {
        v24 = *((_QWORD *)p_m_ExecutionLevel + 6);
        if ( v24 )
        {
          v25 = *((_QWORD *)p_m_ExecutionLevel + 5);
          if ( !v25 )
            v25 = *(_QWORD *)(v24 + 16);
          memset(v22 + 52, 0, (v25 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
          v24 = *((_QWORD *)p_m_ExecutionLevel + 6);
        }
        v22[50] = v24;
      }
      if ( !v22 )
      {
LABEL_144:
        v38 = -1073741670;
        WPP_IFR_SF_d(m_DeviceBase->m_Globals, 2u, 0x10u, 0xAu, WPP_FxRequest_cpp_Traceguids, -1073741670);
        goto LABEL_145;
      }
      v22[2] = m_DeviceBase->m_Globals;
      *v22 = FxObject::`vftable';
      v22[7] = 0LL;
      *((_BYTE *)v22 + 48) = 1;
      *((_DWORD *)v22 + 6) = 0x10000;
      *((_DWORD *)v22 + 2) = 24121352;
      v22[5] = v22 + 4;
      v22[4] = v22 + 4;
      v22[10] = v22 + 9;
      v22[9] = v22 + 9;
      v26 = v22[2];
      *((_DWORD *)v22 + 3) = 1;
      v22[8] = 0LL;
      v22[11] = 0LL;
      v22[12] = 0LL;
      if ( *(_BYTE *)(v26 + 316) )
        FxObject::Vf_VerifyConstruct((FxObject *)v22, (_FX_DRIVER_GLOBALS *)1, 0);
      *v22 = FxNonPagedObject::`vftable';
      v22[14] = 0LL;
      *((_BYTE *)v22 + 104) = 1;
      if ( *((char *)v22 + 24) < 0 )
      {
        v66 = (_FX_DRIVER_GLOBALS *)v22[2];
        if ( v66->FxVerifierLock )
        {
          VerifierLock = 0LL;
          FxVerifierLock::CreateAndInitialize(&VerifierLock, v66, (FxObject *)v22);
          *(v22 - 5) = VerifierLock;
        }
      }
      v27 = Irp;
      v22[19] = Irp;
      v22[23] = 0LL;
      v22[24] = 0LL;
      *((_WORD *)v22 + 106) = 0;
      *((_BYTE *)v22 + 238) = 1;
      v22[20] = 0LL;
      v22[25] = 0LL;
      *((_BYTE *)v22 + 214) = v22[19] == 0LL;
      v22[16] = v22 + 15;
      v22[15] = v22 + 15;
      *((_BYTE *)v22 + 215) = 0;
      *(_WORD *)((char *)v22 + 235) = 0;
      v22[21] = 0LL;
      v22[22] = 0LL;
      v22[18] = 0LL;
      v22[28] = 0LL;
      *((_DWORD *)v22 + 52) = 0;
      v22[30] = 0LL;
      *((_BYTE *)v22 + 234) = 0;
      *((_BYTE *)v22 + 237) = 0;
      v22[32] = FxRequestSystemBuffer::`vftable';
      v22[34] = FxRequestOutputBuffer::`vftable';
      v22[33] = 0LL;
      v22[35] = 0LL;
      *((_WORD *)v22 + 116) = 232;
      v22[37] = v22 + 36;
      v22[36] = v22 + 36;
      v22[39] = v22 + 38;
      v22[38] = v22 + 38;
      v22[41] = v22 + 40;
      v22[40] = v22 + 40;
      *v22 = FxRequestFromLookaside::`vftable';
      v22[27] = 216LL;
      v22[31] = 0LL;
      *((_BYTE *)v22 + 353) = 0;
      *((_BYTE *)v22 + 352) = 0;
      *((_WORD *)v22 + 177) = 0;
      v22[42] = 0LL;
      v22[43] = 0LL;
      v22[12] = m_DeviceBase->m_DeviceBase;
      v28 = v22[19];
      v29 = *(unsigned __int8 **)(v28 + 184);
      v30 = *v29;
      if ( *v29 != 14 )
      {
        if ( v30 < 3u )
          goto LABEL_45;
        if ( v30 <= 4u )
        {
          if ( m_DeviceBase[1].m_Refcnt == 1 )
          {
            if ( *(_BYTE *)(v28 + 64) )
              goto LABEL_45;
            v67 = *(_QWORD *)(v28 + 112);
          }
          else
          {
            if ( m_DeviceBase[1].m_Refcnt != 2 )
              goto LABEL_45;
            v67 = *(_QWORD *)(v28 + 24);
          }
          v22[33] = v67;
          goto LABEL_41;
        }
        if ( v30 != 15 )
          goto LABEL_45;
      }
      if ( (*((_DWORD *)v29 + 6) & 3) != 0 )
      {
        if ( (*((_DWORD *)v29 + 6) & 3) == 1 || (*((_DWORD *)v29 + 6) & 3) == 2 )
        {
          v22[33] = *(_QWORD *)(v28 + 24);
          goto LABEL_41;
        }
        if ( (*((_DWORD *)v29 + 6) & 3) != 3 )
        {
LABEL_41:
          if ( v22[33] )
            *((_BYTE *)v22 + 235) |= 1u;
          if ( v22[35] )
            *((_BYTE *)v22 + 235) |= 2u;
LABEL_45:
          if ( m_DeviceBase->m_Globals->FxRequestParentOptimizationOn )
          {
            v32 = 0LL;
            PPObject = 0LL;
            if ( !*((_WORD *)v22 + 5) )
            {
              v38 = -1073741816;
LABEL_137:
              WPP_IFR_SF_d(m_DeviceBase->m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequest_cpp_Traceguids, v38);
              FxObject::ClearEvtCallbacks((FxObject *)v22);
              (*(void (__fastcall **)(_QWORD *))(*v22 + 48LL))(v22);
LABEL_145:
              v27 = Irp;
LABEL_63:
              v39 = v80;
              if ( v80 )
              {
                if ( v38 < 0 )
                  goto LABEL_150;
                if ( (this->m_Globals->FxEnhancedVerifierOptions & 0xF0000) != 0 )
                {
                  v68 = FxPkgIo::VerifierFreeRequestToTestForwardProgess(this, v18);
                  v27 = Irp;
                  v38 = v68;
                }
                v39 = v80;
              }
              if ( v38 >= 0 )
              {
                if ( !v39 || !v9->m_FwdProgContext->m_IoResourcesAllocate.Method )
                {
LABEL_66:
                  if ( p_m_InCallerContextCallback && p_m_InCallerContextCallback->m_Method && !v18->m_Reserved )
                  {
                    v18->m_InternalContext = v9;
                    v40 = this->m_Globals;
                    v27->Tail.Overlay.CurrentStackLocation->Control |= 1u;
                    if ( v40->FxVerifierOn )
                      FxRequestBase::SetVerifierFlags(v18, 33);
                    if ( v18->m_Completed )
                    {
                      v73 = (const void *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
                      if ( !v18->m_ObjectSize )
                        v73 = 0LL;
                      WPP_IFR_SF_q(v18->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v73);
                      FxVerifierDbgBreakPoint(v18->m_Globals);
                    }
                    else
                    {
                      m_CompletionState = v18->m_CompletionState;
                      v18->m_CompletionState = -126;
                      if ( !m_CompletionState )
                      {
                        v42 = _InterlockedExchangeAdd(&v18->m_Refcnt, 1u);
                        v18 = ReservedRequest;
                        v43 = v42 + 1;
                        if ( SLOBYTE(ReservedRequest->m_ObjectFlags) < 0 )
                        {
                          Blink = ReservedRequest[-1].m_OwnerListEntry2.Blink;
                          if ( Blink )
                            FxTagTracker::UpdateTagHistory(
                              (FxTagTracker *)Blink,
                              (void *)0x74617453,
                              1820,
                              "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
                              TagAddRef,
                              v43);
                        }
                      }
                    }
                    v18->Release(
                      v18,
                      (void *)1952543827,
                      1740,
                      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
                    v18->m_Presented = 1;
                    v44 = 0LL;
                    if ( v18->m_ObjectSize )
                      v44 = (unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL;
                    m_Method = p_m_InCallerContextCallback->m_Method;
                    if ( this->m_DeviceBase->m_ObjectSize )
                      v16 = (unsigned __int64)this->m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
                    if ( m_Method )
                      m_Method((WDFDEVICE__ *)v16, (WDFREQUEST__ *)v44);
                    v38 = 259;
                  }
                  else
                  {
                    v38 = FxIoQueue::QueueRequest(v9, v18, (unsigned __int8)WPP_FxRequest_cpp_Traceguids);
                  }
                  goto LABEL_81;
                }
                v18->m_Presented = 1;
                v70 = (unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL;
                if ( !v18->m_ObjectSize )
                  v70 = 0LL;
                v71 = (unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL;
                if ( !v9->m_ObjectSize )
                  v71 = 0LL;
                if ( ((int (__fastcall *)(unsigned __int64, unsigned __int64, _FXIO_FORWARD_PROGRESS_CONTEXT *))v9->m_FwdProgContext->m_IoResourcesAllocate.Method)(
                       v71,
                       v70,
                       v9->m_FwdProgContext) >= 0 )
                {
                  v27 = Irp;
                  goto LABEL_66;
                }
                FxRequest::FreeRequest(v18);
                ReservedRequest = 0LL;
                v72 = FxIoQueue::GetReservedRequest(v9, Irp, &ReservedRequest);
                v38 = v72;
                if ( v72 != 259 )
                {
                  v27 = Irp;
                  if ( v72 < 0 )
                    goto LABEL_165;
                  goto LABEL_155;
                }
LABEL_81:
                if ( (unsigned __int8)CurrentIrql <= 1u )
                  KeLeaveCriticalRegion();
                return v38;
              }
LABEL_150:
              if ( this->m_Filter && !v9 )
                goto LABEL_165;
              if ( v39 )
              {
                v69 = FxIoQueue::GetReservedRequest(v9, v27, &ReservedRequest);
                v38 = v69;
                if ( v69 == 259 )
                  goto LABEL_81;
                v27 = Irp;
                if ( v69 >= 0 )
                {
LABEL_155:
                  v18 = ReservedRequest;
                  goto LABEL_66;
                }
              }
              else
              {
                WPP_IFR_SF_d(this->m_Globals, 2u, 0xDu, 0x10u, (const _GUID *)&WPP_FxPkgIo_cpp_Traceguids, v38);
                v27 = Irp;
              }
LABEL_165:
              v27->IoStatus.Status = v38;
              v27->IoStatus.Information = 0LL;
              IofCompleteRequest(v27, 0);
              goto LABEL_81;
            }
            if ( !p_RequestAttributes )
            {
LABEL_59:
              v37 = v22[2];
              *((_WORD *)v22 + 12) |= 8u;
              if ( *(_BYTE *)(v37 + 316) )
              {
                FxObject::Vf_VerifyLeakDetectionConsiderObject((FxObject *)v22, (_FX_DRIVER_GLOBALS *)1);
                v27 = Irp;
              }
              v38 = 0;
              goto LABEL_62;
            }
            if ( p_RequestAttributes->ExecutionLevel == WdfExecutionLevelPassive )
            {
              FxObject::MarkPassiveCallbacks((FxObject *)v22, ObjectLock);
              v32 = (FxObject *)PPObject;
              v27 = Irp;
            }
            if ( p_RequestAttributes->ParentObject )
            {
              FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)v22[2], p_RequestAttributes->ParentObject, 0x1000u, &PPObject);
              v32 = (FxObject *)PPObject;
              v27 = Irp;
            }
            if ( !v32 )
            {
LABEL_53:
              v33 = *((unsigned __int16 *)v22 + 5);
              if ( (_WORD)v33 )
                v34 = (char *)v22 + v33;
              else
                v34 = 0LL;
              EvtDestroyCallback = p_RequestAttributes->EvtDestroyCallback;
              if ( EvtDestroyCallback )
                *((_QWORD *)v34 + 3) = EvtDestroyCallback;
              EvtCleanupCallback = p_RequestAttributes->EvtCleanupCallback;
              if ( EvtCleanupCallback )
              {
                *((_QWORD *)v34 + 2) = EvtCleanupCallback;
                *((_WORD *)v22 + 12) |= 0x400u;
              }
              goto LABEL_59;
            }
            v38 = FxObject::AssignParentObject((FxObject *)v22, v32);
            if ( v38 >= 0 )
            {
              v27 = Irp;
              goto LABEL_53;
            }
          }
          else
          {
            v38 = FxObject::Commit((FxObject *)v22, p_RequestAttributes, 0LL, m_DeviceBase, 0);
          }
          if ( v38 >= 0 )
          {
            v27 = Irp;
LABEL_62:
            v18 = (FxRequest *)v22;
            ReservedRequest = (FxRequest *)v22;
            goto LABEL_63;
          }
          goto LABEL_137;
        }
        if ( v30 != 15 && *(_BYTE *)(v28 + 64) )
          goto LABEL_45;
        v22[33] = *((_QWORD *)v29 + 4);
        v31 = *(_QWORD *)(v28 + 112);
      }
      else
      {
        v22[33] = *(_QWORD *)(v28 + 24);
        v31 = *(_QWORD *)(v28 + 24);
      }
      v22[35] = v31;
      goto LABEL_41;
    }
    p_IoInCallerContextCallback = &this->m_InCallerContextCallback;
    p_m_InCallerContextCallback = &this->m_InCallerContextCallback;
    if ( this->m_InCallerContextCallback.m_Method )
      goto LABEL_6;
    if ( this->m_Filter )
    {
LABEL_117:
      ++Irp->CurrentLocation;
      Irp->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
      return IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp);
    }
    v52 = -1073741808;
    v63 = this->m_DeviceBase;
    m_ObjectSize = v63->m_ObjectSize;
    v65 = (const void *)((unsigned __int64)v63 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v65 = 0LL;
    WPP_IFR_SF_qid(
      this->m_Globals,
      2u,
      0xDu,
      0xFu,
      (const _GUID *)&WPP_FxPkgIo_cpp_Traceguids,
      v65,
      (__int64)Irp,
      -1073741808);
    goto LABEL_112;
  }
  v47 = FxIrpDynamicDispatchInfo::Mj2Index(Irp->Tail.Overlay.CurrentStackLocation->MajorFunction);
  v51 = v47;
  if ( v47 >= 4 )
  {
    v52 = -1073741811;
    v53 = this->m_DeviceBase;
    v54 = v53->m_ObjectSize;
    globals = (const void *)((unsigned __int64)v53 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v54 )
      globals = 0LL;
    WPP_IFR_SF_qcDqd(
      this->m_Globals,
      v48,
      0xDu,
      0xEu,
      (const _GUID *)&WPP_FxPkgIo_cpp_Traceguids,
      Irp,
      _a3,
      *(unsigned __int8 *)(v49 + 1),
      globals,
      v75);
    FxVerifierDbgBreakPoint(this->m_Globals);
    goto LABEL_112;
  }
  v56 = this->m_Globals;
  if ( v56->FxVerifierOn )
  {
    v52 = FxPkgIo::Vf_VerifyDispatchContext(this, v56, v4);
    if ( v52 < 0 )
    {
LABEL_112:
      Irp->IoStatus.Status = v52;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      return v52;
    }
  }
  v57 = v51;
  while ( 1 )
  {
    Flink = v4[v57 + 1].Flink;
    v59 = v4;
    v4 = v4->Flink;
    if ( Flink )
      break;
    if ( v4 == p_m_DynamicDispatchInfoListHead )
      goto LABEL_2;
  }
  v60 = this->m_DeviceBase;
  v61 = v60->m_ObjectSize;
  v62 = (unsigned __int64)v60 ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !v61 )
    v62 = 0LL;
  return ((__int64 (__fastcall *)(unsigned __int64, _QWORD, _QWORD, _QWORD, _LIST_ENTRY *, _IRP *, unsigned __int64))Flink)(
           v62,
           Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
           Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
           Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart,
           v59[v57 + 1].Blink,
           Irp,
           (unsigned __int64)v4 | 1);
}
