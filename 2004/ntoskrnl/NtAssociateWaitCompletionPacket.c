/*
 * XREFs of NtAssociateWaitCompletionPacket @ 0x14030EF50
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ObpGetWaitObject @ 0x14020E3C0 (ObpGetWaitObject.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KiAcquireKobjectLockSafe @ 0x140280030 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140280080 (KiWakeQueueWaiter.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiWakeOtherQueueWaiters @ 0x140282AC0 (KiWakeOtherQueueWaiters.c)
 *     KiExitDispatcher @ 0x140286FF0 (KiExitDispatcher.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402D7A80 (KxWaitForSpinLockAndAcquire.c)
 *     KiWaitSatisfyOther @ 0x14030F3FC (KiWaitSatisfyOther.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x14050DBE4 (KeIsThreadRunning.c)
 *     KiAcquireSpinLockInstrumented @ 0x14051141C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140511528 (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x1405A22F0 (EtwTraceEnqueueWork.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
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
  _DWORD *SchedulerAssist; // r9
  volatile signed __int32 *v19; // rdi
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v22; // rcx
  _QWORD *v23; // rsi
  PVOID v24; // rax
  unsigned __int8 v25; // r15
  __int64 v26; // r9
  _QWORD *v27; // rdx
  _QWORD *v28; // rax
  BOOLEAN v29; // bl
  struct _KPRCB *v30; // rcx
  _DWORD *v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int8 v36; // cl
  unsigned __int64 v37; // r10
  __int64 CurrentThread; // r9
  _DWORD *v39; // rsi
  char v40; // al
  __int64 v41; // r9
  PVOID *v42; // r8
  _QWORD *v43; // rax
  _DWORD *v44; // r9
  unsigned int v45; // eax
  PVOID v46; // rcx
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
      v46 = v68;
    }
    else
    {
      v14 = v69;
      WaitObject = ObpGetWaitObject((__int64)v69 - 48);
      if ( (__int16 *)WaitObject != &ObpDefaultObject && WaitObject && (((*(_BYTE *)WaitObject & 0x7F) - 2) & 0xFD) != 0 )
      {
        v19 = (volatile signed __int32 *)((char *)Object + 96);
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
          KiAcquireSpinLockInstrumented(v19);
        }
        else
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v22 = CurrentPrcb->SchedulerAssist;
          if ( v22 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v47 = v22[6];
              v22[6] = v47 + 1;
              if ( v47 == -1 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          if ( _interlockedbittestandset64(v19, 0LL) )
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
            KxWaitForSpinLockAndAcquire(v19, v15, v17, (__int64)SchedulerAssist);
          }
        }
        if ( !*((_BYTE *)Object + 104) )
        {
          *((_BYTE *)Object + 104) = 1;
          v23 = Object;
          *((_QWORD *)Object + 6) = KeyContext;
          v23[7] = ApcContext;
          *((_DWORD *)v23 + 18) = IoStatus;
          v23[8] = IoStatusInformation;
          v23[10] = v69;
          v24 = v68;
          v23[11] = v68;
          *((_WORD *)v23 + 8) = 1026;
          v23[3] = v24;
          v23[4] = WaitObject;
          v25 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v25 <= 0xFu )
          {
            v55 = KeGetCurrentPrcb()->SchedulerAssist;
            v15 = (-1LL << (v25 + 1)) & 4;
            v17 = (unsigned int)v15 | v55[5];
            v55[5] = v17;
          }
          v26 = 0LL;
          v70[0] = 0;
          while ( _interlockedbittestandset((volatile signed __int32 *)WaitObject, 7u) )
          {
            do
              KeYieldProcessorEx(v70, v15, v17, v26);
            while ( (*(_DWORD *)WaitObject & 0x80u) != 0 );
          }
          if ( *(int *)(WaitObject + 4) <= 0 )
          {
            v27 = *(_QWORD **)(WaitObject + 16);
            if ( *v27 == WaitObject + 8 )
            {
              v28 = Object;
              *(_QWORD *)Object = WaitObject + 8;
              v28[1] = v27;
              *v27 = v28;
              *(_QWORD *)(WaitObject + 16) = v28;
              _InterlockedAnd((volatile signed __int32 *)WaitObject, 0xFFFFFF7F);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v58 = KeGetCurrentIrql();
                  if ( v58 <= 0xFu && v25 <= 0xFu && v58 >= 2u )
                  {
                    v59 = KeGetCurrentPrcb();
                    v60 = v59->SchedulerAssist;
                    v61 = ~(unsigned __int16)(-1LL << (v25 + 1));
                    v54 = (v61 & v60[5]) == 0;
                    v60[5] &= v61;
                    if ( v54 )
                      KiRemoveSystemWorkPriorityKick(v59);
                  }
                }
              }
              __writecr8(v25);
              v29 = 0;
              goto LABEL_18;
            }
LABEL_48:
            __fastfail(3u);
          }
          KiWaitSatisfyOther(WaitObject);
          *((_BYTE *)v23 + 17) = 5;
          *(_QWORD *)Object = v35;
          v71 = (char *)v68 + 8;
          v36 = KeGetCurrentIrql();
          __writecr8(v37);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v36 <= 0xFu )
          {
            v44 = KeGetCurrentPrcb()->SchedulerAssist;
            v33 = (-1LL << (v36 + 1)) & 4;
            v34 = (unsigned int)v33 | v44[5];
            v44[5] = v34;
          }
          v72 = KeGetCurrentPrcb();
          CurrentThread = (__int64)v72->CurrentThread;
          v73 = CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(CurrentThread, v33);
            EtwTraceEnqueueWork(v57, Object, IsThreadRunning);
          }
          v39 = v68;
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v68, v33, v34, CurrentThread);
          if ( (_QWORD *)*v71 == v71
            || (v45 = v39[10], v39 = v68, v45 >= *((_DWORD *)v68 + 11))
            || (v39 = v68, *(PVOID *)(v73 + 232) == v68) && *(_BYTE *)(v73 + 643) == 15 )
          {
            v40 = 0;
          }
          else
          {
            v40 = KiWakeQueueWaiter((__int64)v72, (__int64)v68, (__int64)Object);
          }
          if ( !v40 )
          {
            v41 = (unsigned int)v39[1];
            v39[1] = v41 + 1;
            v42 = (PVOID *)*((_QWORD *)v39 + 4);
            if ( *v42 != v39 + 6 )
              goto LABEL_48;
            v43 = Object;
            *(_QWORD *)Object = v39 + 6;
            v43[1] = v42;
            *v42 = v43;
            *((_QWORD *)v39 + 4) = v43;
            if ( !(_DWORD)v41 && (_QWORD *)*v71 != v71 )
              KiWakeOtherQueueWaiters((__int64)v72, (__int64)v39, (__int64)v42, v41);
          }
          _InterlockedAnd(v39, 0xFFFFFF7F);
          _InterlockedAnd((volatile signed __int32 *)WaitObject, 0xFFFFFF7F);
          KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0LL, 1LL, 0LL, v25);
          v29 = 1;
LABEL_18:
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            KiReleaseSpinLockInstrumented(v19, retaddr);
          else
            _InterlockedAnd64((volatile signed __int64 *)v19, 0LL);
          v30 = KeGetCurrentPrcb();
          v31 = v30->SchedulerAssist;
          if ( v31 )
          {
            if ( v30->NestingLevel <= 1u )
            {
              v62 = v31[6] - 1;
              v31[6] = v62;
              if ( !v62 )
                KiRemoveSystemWorkPriorityKick(v30);
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
              v32 = (__int64)AlreadySignaled;
              if ( (unsigned __int64)AlreadySignaled >= 0x7FFFFFFF0000LL )
                v32 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v32 = *(_BYTE *)v32;
            }
            *AlreadySignaled = v29;
          }
          return v13;
        }
        KxReleaseSpinLock((PKSPIN_LOCK)v19);
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
      v46 = Object;
    }
    ObfDereferenceObjectWithTag(v46, 0x746C6644u);
    return v13;
  }
  return result;
}
