/*
 * XREFs of ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0007B50
 * Callers:
 *     ?Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z @ 0x1C0007AD0 (-Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrp @ 0x1C0063CC0 (imp_WdfDeviceWdmDispatchIrp.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C00065CC (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0008700 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0036C00 (memset.c)
 *     ?Mj2Index@FxIrpDynamicDispatchInfo@@SAHE@Z @ 0x1C0039666 (-Mj2Index@FxIrpDynamicDispatchInfo@@SAHE@Z.c)
 *     ?IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z @ 0x1C0039730 (-IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C00553E4 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0064138 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FreeRequest@FxRequest@@QEAAXXZ @ 0x1C0068670 (-FreeRequest@FxRequest@@QEAAXXZ.c)
 *     ?FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x1C0069688 (-FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0069E70 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C006E6F0 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_qcDqd @ 0x1C0075040 (WPP_IFR_SF_qcDqd.c)
 *     ?VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z @ 0x1C0081718 (-VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z.c)
 *     ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x1C008280C (-GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00C7DC8 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C7E0C (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyDispatchContext@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00C80A4 (-Vf_VerifyDispatchContext@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

NTSTATUS __fastcall FxPkgIo::DispatchStep1(FxPkgIo *this, _IRP *Irp, _LIST_ENTRY *DispatchContext)
{
  _LIST_ENTRY *p_m_DynamicDispatchInfoListHead; // rdi
  _LIST_ENTRY *v4; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  __int64 MajorFunction; // rcx
  FxIoQueue *v9; // rsi
  FxCxDeviceInfo *m_CxDeviceInfo; // rax
  FxIoInCallerContext *p_IoInCallerContextCallback; // rax
  FxCxDeviceInfo *v12; // rbp
  FxDeviceBase *m_DeviceBase; // r13
  char *p_RequestAttributes; // rbp
  __int64 v15; // rax
  unsigned __int64 v16; // rdi
  _BYTE *m_Globals; // r14
  FxRequest *v18; // r15
  _FX_DRIVER_GLOBALS *v19; // rdx
  FX_POOL_TRACKER *v20; // rbx
  _QWORD *p_Flink; // r14
  _BYTE *v22; // rax
  _QWORD *v23; // rbx
  _WDF_EXECUTION_LEVEL *p_m_ExecutionLevel; // r14
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rax
  _IRP *v28; // r9
  __int64 v29; // rcx
  unsigned __int8 *v30; // rdx
  unsigned __int8 v31; // r8
  __int64 v32; // rax
  _FX_DRIVER_GLOBALS *v33; // rdx
  __int64 v34; // rax
  char *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // r14d
  bool v40; // al
  FxIoInCallerContext *v41; // rbx
  _FX_DRIVER_GLOBALS *v42; // rcx
  unsigned __int8 m_CompletionState; // al
  signed __int32 v44; // r10d
  unsigned int v45; // r10d
  unsigned __int64 v46; // rdx
  void (__fastcall *m_Method)(WDFDEVICE__ *, WDFREQUEST__ *); // rax
  __int64 v49; // rax
  int v50; // eax
  unsigned __int8 v51; // dl
  __int64 v52; // r8
  char _a3; // r10
  __int64 v54; // rbp
  int v55; // esi
  FxDeviceBase *v56; // rcx
  unsigned __int16 v57; // ax
  const void *globals; // rcx
  _FX_DRIVER_GLOBALS *v59; // rdx
  _LIST_ENTRY *Flink; // rsi
  _LIST_ENTRY *v61; // rax
  FxDeviceBase *v62; // rcx
  unsigned __int16 v63; // r10
  unsigned __int64 v64; // rcx
  bool v65; // zf
  FxDeviceBase *v66; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v68; // rcx
  PSLIST_ENTRY v69; // rax
  _FX_DRIVER_GLOBALS *v70; // rdx
  int v71; // eax
  int v72; // eax
  unsigned __int64 v73; // rdx
  unsigned __int64 v74; // rcx
  int v75; // eax
  const void *v76; // rax
  _LIST_ENTRY *Blink; // rcx
  int v78; // [rsp+48h] [rbp-70h]
  void *PPObject; // [rsp+50h] [rbp-68h] BYREF
  FxIoInCallerContext *p_m_InCallerContextCallback; // [rsp+58h] [rbp-60h]
  FxVerifierLock *VerifierLock; // [rsp+60h] [rbp-58h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+0h]
  bool v83; // [rsp+C0h] [rbp+8h]
  char v85; // [rsp+D0h] [rbp+18h]
  FxRequest *ReservedRequest; // [rsp+D8h] [rbp+20h] BYREF

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
        goto LABEL_122;
      }
      v85 = 0;
      v83 = v9 && v9->m_SupportForwardProgress;
      if ( KeGetCurrentIrql() <= 1u )
      {
        KeEnterCriticalRegion();
        v85 = 1;
      }
      if ( v9 && (v12 = v9->m_CxDeviceInfo) != 0LL )
      {
        m_DeviceBase = this->m_DeviceBase;
        p_RequestAttributes = (char *)&v12->RequestAttributes;
      }
      else
      {
        m_DeviceBase = this->m_DeviceBase;
        p_RequestAttributes = (char *)&m_DeviceBase[2].m_ExecutionLevel;
      }
      v15 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
      v16 = 0LL;
      m_Globals = m_DeviceBase->m_Globals;
      v18 = 0LL;
      ReservedRequest = 0LL;
      PPObject = m_Globals;
      if ( v15 && *(_WORD *)(v15 + 8) == 4354 && *(_BYTE *)(v15 + 1779) )
      {
        v69 = ExpInterlockedPopEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock);
        v20 = (FX_POOL_TRACKER *)v69;
        if ( !v69 )
          v20 = (FX_POOL_TRACKER *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))m_DeviceBase[2].m_DeviceBase)(
                                     HIDWORD(m_DeviceBase[2].m_ChildEntry.Blink),
                                     HIDWORD(m_DeviceBase[2].m_DisposeSingleEntry.Next),
                                     LODWORD(m_DeviceBase[2].m_DisposeSingleEntry.Next));
      }
      else
      {
        ++HIDWORD(m_DeviceBase[2].m_ParentObject);
        v20 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock);
        if ( !v20 )
        {
          ++LODWORD(m_DeviceBase[2].m_ChildEntry.Flink);
          v20 = (FX_POOL_TRACKER *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))m_DeviceBase[2].m_DeviceBase)(
                                     HIDWORD(m_DeviceBase[2].m_ChildEntry.Blink),
                                     HIDWORD(m_DeviceBase[2].m_DisposeSingleEntry.Next),
                                     LODWORD(m_DeviceBase[2].m_DisposeSingleEntry.Next));
        }
        m_Globals = PPObject;
      }
      if ( !v20 )
        goto LABEL_143;
      if ( m_Globals[272] )
      {
        p_Flink = &v20[1].Link.Flink;
        FxPoolInsertNonPagedAllocateTracker(
          (FX_POOL *)((char *)PPObject + 112),
          v20,
          (unsigned __int64)m_DeviceBase[2].m_CallbackLockObjectPtr,
          *((_DWORD *)PPObject + 17),
          retaddr);
      }
      else
      {
        p_Flink = &v20->Link.Flink;
      }
      v22 = PPObject;
      *p_Flink = v20;
      v23 = p_Flink + 2;
      p_Flink[1] = v22;
      if ( p_RequestAttributes )
        p_m_ExecutionLevel = (_WDF_EXECUTION_LEVEL *)p_RequestAttributes;
      else
        p_m_ExecutionLevel = &m_DeviceBase[2].m_ExecutionLevel;
      if ( v22[328] )
      {
        *(_OWORD *)v23 = 0LL;
        *((_OWORD *)v23 + 1) = 0LL;
        *((_OWORD *)v23 + 2) = 0LL;
        *((_DWORD *)v23 + 8) = 1146058822;
        v23 += 6;
      }
      v23[47] = 0LL;
      v23[48] = 0LL;
      v23[49] = 0LL;
      v23[50] = 0LL;
      v23[51] = 0LL;
      v23[46] = v23;
      if ( p_m_ExecutionLevel )
      {
        v25 = *((_QWORD *)p_m_ExecutionLevel + 6);
        if ( v25 )
        {
          v26 = *((_QWORD *)p_m_ExecutionLevel + 5);
          if ( !v26 )
            v26 = *(_QWORD *)(v25 + 16);
          memset(v23 + 52, 0, (v26 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
          v25 = *((_QWORD *)p_m_ExecutionLevel + 6);
        }
        v23[50] = v25;
      }
      if ( !v23 )
      {
LABEL_143:
        v39 = -1073741670;
        WPP_IFR_SF_d(m_DeviceBase->m_Globals, 2u, 0x10u, 0xAu, WPP_FxRequest_cpp_Traceguids, -1073741670);
        goto LABEL_144;
      }
      v23[2] = m_DeviceBase->m_Globals;
      *v23 = FxObject::`vftable';
      v23[7] = 0LL;
      *((_BYTE *)v23 + 48) = 1;
      *((_DWORD *)v23 + 6) = 0x10000;
      *((_DWORD *)v23 + 2) = 24121352;
      v23[5] = v23 + 4;
      v23[4] = v23 + 4;
      v23[10] = v23 + 9;
      v23[9] = v23 + 9;
      v27 = v23[2];
      *((_DWORD *)v23 + 3) = 1;
      v23[8] = 0LL;
      v23[11] = 0LL;
      v23[12] = 0LL;
      if ( *(_BYTE *)(v27 + 324) )
        FxObject::Vf_VerifyConstruct((FxObject *)v23, v19, 0);
      *v23 = FxNonPagedObject::`vftable';
      v23[14] = 0LL;
      *((_BYTE *)v23 + 104) = 1;
      if ( *((char *)v23 + 24) < 0 )
      {
        v70 = (_FX_DRIVER_GLOBALS *)v23[2];
        if ( v70->FxVerifierLock )
        {
          VerifierLock = 0LL;
          FxVerifierLock::CreateAndInitialize(&VerifierLock, v70, (FxObject *)v23);
          *(v23 - 5) = VerifierLock;
        }
      }
      v28 = Irp;
      v23[19] = Irp;
      v23[23] = 0LL;
      v23[24] = 0LL;
      *((_WORD *)v23 + 106) = 0;
      *((_BYTE *)v23 + 238) = 1;
      v23[20] = 0LL;
      v23[25] = 0LL;
      *((_BYTE *)v23 + 214) = Irp == 0LL;
      v23[16] = v23 + 15;
      v23[15] = v23 + 15;
      *((_BYTE *)v23 + 215) = 0;
      *(_WORD *)((char *)v23 + 235) = 0;
      v23[21] = 0LL;
      v23[22] = 0LL;
      v23[18] = 0LL;
      v23[28] = 0LL;
      *((_DWORD *)v23 + 52) = 0;
      v23[30] = 0LL;
      *((_BYTE *)v23 + 234) = 0;
      *((_BYTE *)v23 + 237) = 0;
      v23[32] = FxRequestSystemBuffer::`vftable';
      v23[34] = FxRequestOutputBuffer::`vftable';
      v23[33] = 0LL;
      v23[35] = 0LL;
      *((_WORD *)v23 + 116) = 232;
      v23[37] = v23 + 36;
      v23[36] = v23 + 36;
      v23[39] = v23 + 38;
      v23[38] = v23 + 38;
      v23[41] = v23 + 40;
      v23[40] = v23 + 40;
      *v23 = FxRequestFromLookaside::`vftable';
      v23[27] = 216LL;
      v23[31] = 0LL;
      *((_BYTE *)v23 + 353) = 0;
      *((_BYTE *)v23 + 352) = 0;
      *((_WORD *)v23 + 177) = 0;
      v23[42] = 0LL;
      v23[43] = 0LL;
      v23[12] = m_DeviceBase->m_DeviceBase;
      v29 = v23[19];
      v30 = *(unsigned __int8 **)(v29 + 184);
      v31 = *v30;
      if ( *v30 != 14 )
      {
        if ( v31 < 3u )
          goto LABEL_46;
        if ( v31 <= 4u )
        {
          if ( m_DeviceBase[1].m_Refcnt == 1 )
          {
            if ( *(_BYTE *)(v29 + 64) )
              goto LABEL_46;
            v49 = *(_QWORD *)(v29 + 112);
          }
          else
          {
            if ( m_DeviceBase[1].m_Refcnt != 2 )
              goto LABEL_46;
            v49 = *(_QWORD *)(v29 + 24);
          }
          v23[33] = v49;
          goto LABEL_42;
        }
        if ( v31 != 15 )
          goto LABEL_46;
      }
      if ( (*((_DWORD *)v30 + 6) & 3) == 0 )
      {
        v23[33] = *(_QWORD *)(v29 + 24);
        v32 = *(_QWORD *)(v29 + 24);
LABEL_41:
        v23[35] = v32;
        goto LABEL_42;
      }
      if ( (*((_DWORD *)v30 + 6) & 3) == 1 || (*((_DWORD *)v30 + 6) & 3) == 2 )
      {
        v23[33] = *(_QWORD *)(v29 + 24);
        goto LABEL_42;
      }
      if ( (*((_DWORD *)v30 + 6) & 3) != 3 )
      {
LABEL_42:
        if ( v23[33] )
          *((_BYTE *)v23 + 235) |= 1u;
        if ( v23[35] )
          *((_BYTE *)v23 + 235) |= 2u;
        goto LABEL_46;
      }
      if ( v31 == 15 || !*(_BYTE *)(v29 + 64) )
      {
        v23[33] = *((_QWORD *)v30 + 4);
        v32 = *(_QWORD *)(v29 + 112);
        goto LABEL_41;
      }
LABEL_46:
      if ( m_DeviceBase->m_Globals->FxRequestParentOptimizationOn )
      {
        v33 = 0LL;
        PPObject = 0LL;
        if ( *((_WORD *)v23 + 5) )
        {
          if ( !p_RequestAttributes )
          {
LABEL_60:
            v38 = v23[2];
            *((_WORD *)v23 + 12) |= 8u;
            if ( *(_BYTE *)(v38 + 324) )
            {
              FxObject::Vf_VerifyLeakDetectionConsiderObject((FxObject *)v23, v33);
              v28 = Irp;
            }
            v39 = 0;
            goto LABEL_63;
          }
          if ( *((_DWORD *)p_RequestAttributes + 6) == 2 )
          {
            FxObject::MarkPassiveCallbacks((FxObject *)v23, ObjectLock);
            v33 = (_FX_DRIVER_GLOBALS *)PPObject;
            v28 = Irp;
          }
          if ( *((_QWORD *)p_RequestAttributes + 4) )
          {
            FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)v23[2], *((_QWORD *)p_RequestAttributes + 4), 0x1000u, &PPObject);
            v33 = (_FX_DRIVER_GLOBALS *)PPObject;
            v28 = Irp;
          }
          if ( !v33 )
          {
LABEL_54:
            v34 = *((unsigned __int16 *)v23 + 5);
            if ( (_WORD)v34 )
              v35 = (char *)v23 + v34;
            else
              v35 = 0LL;
            v36 = *((_QWORD *)p_RequestAttributes + 2);
            if ( v36 )
              *((_QWORD *)v35 + 3) = v36;
            v37 = *((_QWORD *)p_RequestAttributes + 1);
            if ( v37 )
            {
              *((_QWORD *)v35 + 2) = v37;
              *((_WORD *)v23 + 12) |= 0x400u;
            }
            goto LABEL_60;
          }
          v39 = FxObject::AssignParentObject((FxObject *)v23, (FxObject *)v33);
          if ( v39 >= 0 )
          {
            v28 = Irp;
            goto LABEL_54;
          }
        }
        else
        {
          v39 = -1073741816;
        }
      }
      else
      {
        v39 = FxObject::Commit((FxObject *)v23, (_FX_DRIVER_GLOBALS *)p_RequestAttributes, 0LL, m_DeviceBase, 0);
        if ( v39 >= 0 )
        {
          v28 = Irp;
LABEL_63:
          v18 = (FxRequest *)v23;
          ReservedRequest = (FxRequest *)v23;
          goto LABEL_64;
        }
      }
      WPP_IFR_SF_d(m_DeviceBase->m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequest_cpp_Traceguids, v39);
      FxObject::ClearEvtCallbacks((FxObject *)v23);
      (*(void (__fastcall **)(_QWORD *))(*v23 + 48LL))(v23);
LABEL_144:
      v28 = Irp;
LABEL_64:
      v40 = v83;
      if ( v83 )
      {
        if ( v39 < 0 )
          goto LABEL_148;
        if ( (this->m_Globals->FxEnhancedVerifierOptions & 0xF0000) == 0 )
          goto LABEL_155;
        v71 = FxPkgIo::VerifierFreeRequestToTestForwardProgess(this, v18);
        v28 = Irp;
        v39 = v71;
        v40 = v83;
      }
      if ( v39 >= 0 )
      {
        if ( !v40 )
        {
LABEL_67:
          v41 = p_m_InCallerContextCallback;
          if ( p_m_InCallerContextCallback && p_m_InCallerContextCallback->m_Method && !v18->m_Reserved )
          {
            v18->m_InternalContext = v9;
            v42 = this->m_Globals;
            v28->Tail.Overlay.CurrentStackLocation->Control |= 1u;
            if ( v42->FxVerifierOn )
              FxRequestBase::SetVerifierFlags(v18, 33);
            if ( v18->m_Completed )
            {
              if ( v18->m_ObjectSize )
                v76 = (const void *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v76 = 0LL;
              WPP_IFR_SF_q(v18->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v76);
              FxVerifierDbgBreakPoint(v18->m_Globals);
            }
            else
            {
              m_CompletionState = v18->m_CompletionState;
              v18->m_CompletionState = -126;
              if ( !m_CompletionState )
              {
                v44 = _InterlockedExchangeAdd(&v18->m_Refcnt, 1u);
                v18 = ReservedRequest;
                v45 = v44 + 1;
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
                      v45);
                }
              }
            }
            v18->Release(
              v18,
              (void *)1952543827,
              1740,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
            v18->m_Presented = 1;
            v46 = 0LL;
            if ( v18->m_ObjectSize )
              v46 = (unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL;
            m_Method = v41->m_Method;
            if ( this->m_DeviceBase->m_ObjectSize )
              v16 = (unsigned __int64)this->m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
            if ( m_Method )
              m_Method((WDFDEVICE__ *)v16, (WDFREQUEST__ *)v46);
            v39 = 259;
          }
          else
          {
            v39 = FxIoQueue::QueueRequest(v9, v18);
          }
          goto LABEL_82;
        }
LABEL_155:
        if ( !v9->m_FwdProgContext->m_IoResourcesAllocate.Method )
          goto LABEL_67;
        v18->m_Presented = 1;
        v73 = (unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !v18->m_ObjectSize )
          v73 = 0LL;
        if ( v9->m_ObjectSize )
          v74 = (unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v74 = 0LL;
        if ( v9->m_FwdProgContext->m_IoResourcesAllocate.Method((WDFQUEUE__ *)v74, (WDFREQUEST__ *)v73) >= 0 )
        {
          v28 = Irp;
          goto LABEL_67;
        }
        FxRequest::FreeRequest(v18);
        ReservedRequest = 0LL;
        v75 = FxIoQueue::GetReservedRequest(v9, Irp, &ReservedRequest);
        v39 = v75;
        if ( v75 != 259 )
        {
          v28 = Irp;
          if ( v75 < 0 )
            goto LABEL_164;
LABEL_153:
          v18 = ReservedRequest;
          goto LABEL_67;
        }
LABEL_82:
        if ( v85 )
          KeLeaveCriticalRegion();
        return v39;
      }
LABEL_148:
      if ( this->m_Filter && !v9 )
        goto LABEL_164;
      if ( v40 )
      {
        v72 = FxIoQueue::GetReservedRequest(v9, v28, &ReservedRequest);
        v39 = v72;
        if ( v72 == 259 )
          goto LABEL_82;
        v28 = Irp;
        if ( v72 >= 0 )
          goto LABEL_153;
      }
      else
      {
        WPP_IFR_SF_d(this->m_Globals, 2u, 0xDu, 0x10u, WPP_FxPkgIo_cpp_Traceguids, v39);
        v28 = Irp;
      }
LABEL_164:
      v28->IoStatus.Status = v39;
      v28->IoStatus.Information = 0LL;
      IofCompleteRequest(v28, 0);
      goto LABEL_82;
    }
    p_IoInCallerContextCallback = &this->m_InCallerContextCallback;
    v65 = this->m_InCallerContextCallback.m_Method == 0LL;
    p_m_InCallerContextCallback = &this->m_InCallerContextCallback;
    if ( !v65 )
      goto LABEL_6;
    if ( this->m_Filter )
    {
LABEL_122:
      ++Irp->CurrentLocation;
      Irp->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
      return IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp);
    }
    v55 = -1073741808;
    v66 = this->m_DeviceBase;
    m_ObjectSize = v66->m_ObjectSize;
    v68 = (const void *)((unsigned __int64)v66 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v68 = 0LL;
    WPP_IFR_SF_qqd(this->m_Globals, 2u, 0xDu, 0xFu, WPP_FxPkgIo_cpp_Traceguids, v68, Irp, -1073741808);
    goto LABEL_118;
  }
  v50 = FxIrpDynamicDispatchInfo::Mj2Index(Irp->Tail.Overlay.CurrentStackLocation->MajorFunction);
  v54 = v50;
  if ( v50 >= 4 )
  {
    v55 = -1073741811;
    v56 = this->m_DeviceBase;
    v57 = v56->m_ObjectSize;
    globals = (const void *)((unsigned __int64)v56 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v57 )
      globals = 0LL;
    WPP_IFR_SF_qcDqd(
      this->m_Globals,
      v51,
      0xDu,
      0xEu,
      WPP_FxPkgIo_cpp_Traceguids,
      Irp,
      _a3,
      *(unsigned __int8 *)(v52 + 1),
      globals,
      v78);
    FxVerifierDbgBreakPoint(this->m_Globals);
    goto LABEL_118;
  }
  v59 = this->m_Globals;
  if ( v59->FxVerifierOn )
  {
    v55 = FxPkgIo::Vf_VerifyDispatchContext(this, v59, v4);
    if ( v55 < 0 )
    {
LABEL_118:
      Irp->IoStatus.Status = v55;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      return v55;
    }
  }
  while ( 1 )
  {
    Flink = v4[v54 + 1].Flink;
    v61 = v4;
    v4 = v4->Flink;
    if ( Flink )
      break;
    if ( v4 == p_m_DynamicDispatchInfoListHead )
      goto LABEL_2;
  }
  v62 = this->m_DeviceBase;
  v63 = v62->m_ObjectSize;
  v64 = (unsigned __int64)v62 ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !v63 )
    v64 = 0LL;
  return ((__int64 (__fastcall *)(unsigned __int64, _QWORD, _QWORD, _QWORD, _LIST_ENTRY *, _IRP *, unsigned __int64))Flink)(
           v64,
           Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
           Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
           Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart,
           v61[v54 + 1].Blink,
           Irp,
           (unsigned __int64)v4 | 1);
}
