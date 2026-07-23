/*
 * XREFs of NtAssociateWaitCompletionPacket @ 0x1402CD580
 * Callers:
 *     <none>
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140243980 (KiWakeQueueWaiter.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiWakeOtherQueueWaiters @ 0x1402462E0 (KiWakeOtherQueueWaiters.c)
 *     KiExitDispatcher @ 0x14024A750 (KiExitDispatcher.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ObpGetWaitObject @ 0x140267410 (ObpGetWaitObject.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KiWaitSatisfyOther @ 0x1402CDA2C (KiWaitSatisfyOther.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402E47D0 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x14050D594 (KeIsThreadRunning.c)
 *     KiAcquireSpinLockInstrumented @ 0x140510DCC (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140510ED8 (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x1405A1C00 (EtwTraceEnqueueWork.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtAssociateWaitCompletionPacket(
        HANDLE WaitCompletionPacketHandle,
        HANDLE IoCompletionHandle,
        HANDLE TargetObjectHandle,
        PVOID KeyContext,
        PVOID ApcContext,
        NTSTATUS IoStatus,
        ULONG_PTR IoStatusInformation,
        PBOOLEAN AlreadySignaled)
{
  KPROCESSOR_MODE PreviousMode; // r12
  NTSTATUS result; // eax
  int v12; // ebx
  int v13; // r14d
  PVOID v14; // rdi
  __int64 v15; // rdx
  __int64 WaitObject; // rbx
  __int64 v17; // r8
  volatile signed __int32 *v18; // rdi
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v21; // rcx
  _QWORD *v22; // rsi
  PVOID v23; // rax
  unsigned __int8 v24; // r15
  __int64 v25; // r9
  _QWORD *v26; // rdx
  _QWORD *v27; // rax
  BOOLEAN v28; // bl
  struct _KPRCB *v29; // rcx
  _DWORD *v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int8 v35; // cl
  unsigned __int64 v36; // r10
  __int64 CurrentThread; // r9
  _DWORD *v38; // rsi
  char v39; // al
  __int64 v40; // r9
  PVOID *v41; // r8
  _QWORD *v42; // rax
  _DWORD *v43; // r9
  unsigned int v44; // eax
  PVOID v45; // rcx
  _DWORD *SchedulerAssist; // r9
  int v47; // eax
  _DWORD *v48; // rcx
  int v49; // eax
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // r9
  _DWORD *v52; // r8
  int v53; // eax
  bool v54; // zf
  _DWORD *v55; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v57; // r9
  unsigned __int8 v58; // al
  struct _KPRCB *v59; // r10
  _DWORD *v60; // r9
  int v61; // eax
  int v62; // eax
  unsigned __int8 v63; // al
  struct _KPRCB *v64; // r9
  _DWORD *v65; // r8
  int v66; // eax
  PVOID Object; // [rsp+38h] [rbp-60h] BYREF
  PVOID v68; // [rsp+40h] [rbp-58h] BYREF
  PVOID v69; // [rsp+48h] [rbp-50h] BYREF
  _DWORD v70[2]; // [rsp+50h] [rbp-48h] BYREF
  _QWORD *v71; // [rsp+58h] [rbp-40h]
  struct _KPRCB *v72; // [rsp+60h] [rbp-38h]
  __int64 v73; // [rsp+68h] [rbp-30h]
  void *retaddr; // [rsp+98h] [rbp+0h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  result = ObReferenceObjectByHandle(
             WaitCompletionPacketHandle,
             1u,
             IopWaitCompletionPacketObjectType,
             PreviousMode,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v68 = 0LL;
    v12 = ObReferenceObjectByHandle(IoCompletionHandle, 2u, IoCompletionObjectType, PreviousMode, &v68, 0LL);
    if ( v12 < 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      return v12;
    }
    v69 = 0LL;
    v13 = ObReferenceObjectByHandle(TargetObjectHandle, 0x100000u, 0LL, PreviousMode, &v69, 0LL);
    v70[1] = v13;
    if ( v13 < 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      v45 = v68;
    }
    else
    {
      v14 = v69;
      WaitObject = ObpGetWaitObject((__int64)v69 - 48);
      if ( (__int16 *)WaitObject != &ObpDefaultObject && WaitObject && (((*(_BYTE *)WaitObject & 0x7F) - 2) & 0xFD) != 0 )
      {
        v18 = (volatile signed __int32 *)((char *)Object + 96);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          v15 = (-1LL << (CurrentIrql + 1)) & 4;
          v17 = (unsigned int)v15 | SchedulerAssist[5];
          SchedulerAssist[5] = v17;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented(v18);
        }
        else
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v21 = CurrentPrcb->SchedulerAssist;
          if ( v21 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v47 = v21[6];
              v21[6] = v47 + 1;
              if ( v47 == -1 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          if ( _interlockedbittestandset64(v18, 0LL) )
          {
            v48 = CurrentPrcb->SchedulerAssist;
            if ( v48 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v49 = v48[6] - 1;
                v48[6] = v49;
                if ( !v49 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            KxWaitForSpinLockAndAcquire(v18, v15, v17);
          }
        }
        if ( !*((_BYTE *)Object + 104) )
        {
          *((_BYTE *)Object + 104) = 1;
          v22 = Object;
          *((_QWORD *)Object + 6) = KeyContext;
          v22[7] = ApcContext;
          *((_DWORD *)v22 + 18) = IoStatus;
          v22[8] = IoStatusInformation;
          v22[10] = v69;
          v23 = v68;
          v22[11] = v68;
          *((_WORD *)v22 + 8) = 1026;
          v22[3] = v23;
          v22[4] = WaitObject;
          v24 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v24 <= 0xFu )
          {
            v55 = KeGetCurrentPrcb()->SchedulerAssist;
            v15 = (-1LL << (v24 + 1)) & 4;
            v17 = (unsigned int)v15 | v55[5];
            v55[5] = v17;
          }
          v25 = 0LL;
          v70[0] = 0;
          while ( _interlockedbittestandset((volatile signed __int32 *)WaitObject, 7u) )
          {
            do
              KeYieldProcessorEx(v70, v15, v17, v25);
            while ( (*(_DWORD *)WaitObject & 0x80u) != 0 );
          }
          if ( *(int *)(WaitObject + 4) <= 0 )
          {
            v26 = *(_QWORD **)(WaitObject + 16);
            if ( *v26 == WaitObject + 8 )
            {
              v27 = Object;
              *(_QWORD *)Object = WaitObject + 8;
              v27[1] = v26;
              *v26 = v27;
              *(_QWORD *)(WaitObject + 16) = v27;
              _InterlockedAnd((volatile signed __int32 *)WaitObject, 0xFFFFFF7F);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v58 = KeGetCurrentIrql();
                  if ( v58 <= 0xFu && v24 <= 0xFu && v58 >= 2u )
                  {
                    v59 = KeGetCurrentPrcb();
                    v60 = v59->SchedulerAssist;
                    v61 = ~(unsigned __int16)(-1LL << (v24 + 1));
                    v54 = (v61 & v60[5]) == 0;
                    v60[5] &= v61;
                    if ( v54 )
                      KiRemoveSystemWorkPriorityKick(v59);
                  }
                }
              }
              __writecr8(v24);
              v28 = 0;
              goto LABEL_18;
            }
LABEL_48:
            __fastfail(3u);
          }
          KiWaitSatisfyOther(WaitObject);
          *((_BYTE *)v22 + 17) = 5;
          *(_QWORD *)Object = v34;
          v71 = (char *)v68 + 8;
          v35 = KeGetCurrentIrql();
          __writecr8(v36);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v35 <= 0xFu )
          {
            v43 = KeGetCurrentPrcb()->SchedulerAssist;
            v32 = (-1LL << (v35 + 1)) & 4;
            v33 = (unsigned int)v32 | v43[5];
            v43[5] = v33;
          }
          v72 = KeGetCurrentPrcb();
          CurrentThread = (__int64)v72->CurrentThread;
          v73 = CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(CurrentThread, v32);
            EtwTraceEnqueueWork(v57, Object, IsThreadRunning);
          }
          v38 = v68;
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v68, v32, v33, CurrentThread);
          if ( (_QWORD *)*v71 == v71
            || (v44 = v38[10], v38 = v68, v44 >= *((_DWORD *)v68 + 11))
            || (v38 = v68, *(PVOID *)(v73 + 232) == v68) && *(_BYTE *)(v73 + 643) == 15 )
          {
            v39 = 0;
          }
          else
          {
            v39 = KiWakeQueueWaiter((__int64)v72, (__int64)v68, (__int64)Object);
          }
          if ( !v39 )
          {
            v40 = (unsigned int)v38[1];
            v38[1] = v40 + 1;
            v41 = (PVOID *)*((_QWORD *)v38 + 4);
            if ( *v41 != v38 + 6 )
              goto LABEL_48;
            v42 = Object;
            *(_QWORD *)Object = v38 + 6;
            v42[1] = v41;
            *v41 = v42;
            *((_QWORD *)v38 + 4) = v42;
            if ( !(_DWORD)v40 && (_QWORD *)*v71 != v71 )
              KiWakeOtherQueueWaiters((__int64)v72, (__int64)v38, (__int64)v41, v40);
          }
          _InterlockedAnd(v38, 0xFFFFFF7F);
          _InterlockedAnd((volatile signed __int32 *)WaitObject, 0xFFFFFF7F);
          KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0LL, 1LL, 0LL, v24);
          v28 = 1;
LABEL_18:
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            KiReleaseSpinLockInstrumented(v18, retaddr);
          else
            _InterlockedAnd64((volatile signed __int64 *)v18, 0LL);
          v29 = KeGetCurrentPrcb();
          v30 = v29->SchedulerAssist;
          if ( v30 )
          {
            if ( v29->NestingLevel <= 1u )
            {
              v62 = v30[6] - 1;
              v30[6] = v62;
              if ( !v62 )
                KiRemoveSystemWorkPriorityKick(v29);
            }
          }
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v63 = KeGetCurrentIrql();
              if ( v63 <= 0xFu && CurrentIrql <= 0xFu && v63 >= 2u )
              {
                v64 = KeGetCurrentPrcb();
                v65 = v64->SchedulerAssist;
                v66 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v54 = (v66 & v65[5]) == 0;
                v65[5] &= v66;
                if ( v54 )
                  KiRemoveSystemWorkPriorityKick(v64);
              }
            }
          }
          __writecr8(CurrentIrql);
          if ( AlreadySignaled )
          {
            if ( PreviousMode )
            {
              v31 = (__int64)AlreadySignaled;
              if ( (unsigned __int64)AlreadySignaled >= 0x7FFFFFFF0000LL )
                v31 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v31 = *(_BYTE *)v31;
            }
            *AlreadySignaled = v28;
          }
          return v13;
        }
        KxReleaseSpinLock((PKSPIN_LOCK)v18);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v50 = KeGetCurrentIrql();
            if ( v50 <= 0xFu && CurrentIrql <= 0xFu && v50 >= 2u )
            {
              v51 = KeGetCurrentPrcb();
              v52 = v51->SchedulerAssist;
              v53 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v54 = (v53 & v52[5]) == 0;
              v52[5] &= v53;
              if ( v54 )
                KiRemoveSystemWorkPriorityKick(v51);
            }
          }
        }
        __writecr8(CurrentIrql);
        v13 = -1073741585;
        v14 = v69;
      }
      else
      {
        v13 = -1073741583;
      }
      ObfDereferenceObjectWithTag(v68, 0x746C6644u);
      ObfDereferenceObjectWithTag(v14, 0x746C6644u);
      v45 = Object;
    }
    ObfDereferenceObjectWithTag(v45, 0x746C6644u);
    return v13;
  }
  return result;
}
