/*
 * XREFs of NtAssociateWaitCompletionPacket @ 0x1402F58B0
 * Callers:
 *     <none>
 * Callees:
 *     KiExitDispatcher @ 0x1402197A0 (KiExitDispatcher.c)
 *     ObpGetWaitObject @ 0x14021B4E0 (ObpGetWaitObject.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     KiWakeOtherQueueWaiters @ 0x14028CDD0 (KiWakeOtherQueueWaiters.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1402E0780 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402E07D0 (KiWakeQueueWaiter.c)
 *     KiWaitSatisfyOther @ 0x1402F5D5C (KiWaitSatisfyOther.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140340590 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x140511514 (KeIsThreadRunning.c)
 *     KiAcquireSpinLockInstrumented @ 0x140514D4C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140514E58 (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x1405A5D90 (EtwTraceEnqueueWork.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
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
  __int64 v39; // r9
  char v40; // al
  int v41; // r9d
  PVOID *v42; // r8
  _QWORD *v43; // rax
  _DWORD *v44; // r9
  unsigned int v45; // eax
  PVOID v46; // rcx
  _DWORD *SchedulerAssist; // r9
  int v48; // eax
  _DWORD *v49; // rcx
  int v50; // eax
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // r9
  _DWORD *v53; // r8
  int v54; // eax
  bool v55; // zf
  _DWORD *v56; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v58; // r9
  unsigned __int8 v59; // al
  struct _KPRCB *v60; // r10
  _DWORD *v61; // r9
  int v62; // eax
  int v63; // eax
  unsigned __int8 v64; // al
  struct _KPRCB *v65; // r9
  _DWORD *v66; // r8
  int v67; // eax
  PVOID Object; // [rsp+38h] [rbp-60h] BYREF
  PVOID v69; // [rsp+40h] [rbp-58h] BYREF
  PVOID v70; // [rsp+48h] [rbp-50h] BYREF
  _DWORD v71[2]; // [rsp+50h] [rbp-48h] BYREF
  _QWORD *v72; // [rsp+58h] [rbp-40h]
  struct _KPRCB *v73; // [rsp+60h] [rbp-38h]
  __int64 v74; // [rsp+68h] [rbp-30h]
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
    v69 = 0LL;
    v12 = ObReferenceObjectByHandle(IoCompletionHandle, 2u, IoCompletionObjectType, PreviousMode, &v69, 0LL);
    if ( v12 < 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      return v12;
    }
    v70 = 0LL;
    v13 = ObReferenceObjectByHandle(TargetObjectHandle, 0x100000u, 0LL, PreviousMode, &v70, 0LL);
    v71[1] = v13;
    if ( v13 < 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      v46 = v69;
    }
    else
    {
      v14 = v70;
      WaitObject = ObpGetWaitObject((__int64)v70 - 48);
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
              v48 = v21[6];
              v21[6] = v48 + 1;
              if ( v48 == -1 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          if ( _interlockedbittestandset64(v18, 0LL) )
          {
            v49 = CurrentPrcb->SchedulerAssist;
            if ( v49 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v50 = v49[6] - 1;
                v49[6] = v50;
                if ( !v50 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            KxWaitForSpinLockAndAcquire(v18);
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
          v22[10] = v70;
          v23 = v69;
          v22[11] = v69;
          *((_WORD *)v22 + 8) = 1026;
          v22[3] = v23;
          v22[4] = WaitObject;
          v24 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v24 <= 0xFu )
          {
            v56 = KeGetCurrentPrcb()->SchedulerAssist;
            v15 = (-1LL << (v24 + 1)) & 4;
            v17 = (unsigned int)v15 | v56[5];
            v56[5] = v17;
          }
          v25 = 0LL;
          v71[0] = 0;
          while ( _interlockedbittestandset((volatile signed __int32 *)WaitObject, 7u) )
          {
            do
              KeYieldProcessorEx(v71, v15, v17, v25);
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
                  v59 = KeGetCurrentIrql();
                  if ( v59 <= 0xFu && v24 <= 0xFu && v59 >= 2u )
                  {
                    v60 = KeGetCurrentPrcb();
                    v61 = v60->SchedulerAssist;
                    v62 = ~(unsigned __int16)(-1LL << (v24 + 1));
                    v55 = (v62 & v61[5]) == 0;
                    v61[5] &= v62;
                    if ( v55 )
                      KiRemoveSystemWorkPriorityKick(v60);
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
          v72 = (char *)v69 + 8;
          v35 = KeGetCurrentIrql();
          __writecr8(v36);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v35 <= 0xFu )
          {
            v44 = KeGetCurrentPrcb()->SchedulerAssist;
            v32 = (-1LL << (v35 + 1)) & 4;
            v33 = (unsigned int)v32 | v44[5];
            v44[5] = v33;
          }
          v73 = KeGetCurrentPrcb();
          CurrentThread = (__int64)v73->CurrentThread;
          v74 = CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(CurrentThread);
            EtwTraceEnqueueWork(v58, Object, IsThreadRunning);
          }
          v38 = v69;
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v69, v32, v33, CurrentThread);
          if ( (_QWORD *)*v72 == v72
            || (v45 = v38[10], v38 = v69, v45 >= *((_DWORD *)v69 + 11))
            || (v38 = v69, *(PVOID *)(v74 + 232) == v69) && *(_BYTE *)(v74 + 643) == 15 )
          {
            v40 = 0;
          }
          else
          {
            v40 = KiWakeQueueWaiter((__int64)v73, (__int64)v69, (__int64)Object, v39);
          }
          if ( !v40 )
          {
            v41 = v38[1];
            v38[1] = v41 + 1;
            v42 = (PVOID *)*((_QWORD *)v38 + 4);
            if ( *v42 != v38 + 6 )
              goto LABEL_48;
            v43 = Object;
            *(_QWORD *)Object = v38 + 6;
            v43[1] = v42;
            *v42 = v43;
            *((_QWORD *)v38 + 4) = v43;
            if ( !v41 && (_QWORD *)*v72 != v72 )
              KiWakeOtherQueueWaiters((__int64)v73, (__int64)v38);
          }
          _InterlockedAnd(v38, 0xFFFFFF7F);
          _InterlockedAnd((volatile signed __int32 *)WaitObject, 0xFFFFFF7F);
          KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0LL, 1u, 0, v24);
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
              v63 = v30[6] - 1;
              v30[6] = v63;
              if ( !v63 )
                KiRemoveSystemWorkPriorityKick(v29);
            }
          }
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v64 = KeGetCurrentIrql();
              if ( v64 <= 0xFu && CurrentIrql <= 0xFu && v64 >= 2u )
              {
                v65 = KeGetCurrentPrcb();
                v66 = v65->SchedulerAssist;
                v67 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v55 = (v67 & v66[5]) == 0;
                v66[5] &= v67;
                if ( v55 )
                  KiRemoveSystemWorkPriorityKick(v65);
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
            v51 = KeGetCurrentIrql();
            if ( v51 <= 0xFu && CurrentIrql <= 0xFu && v51 >= 2u )
            {
              v52 = KeGetCurrentPrcb();
              v53 = v52->SchedulerAssist;
              v54 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v55 = (v54 & v53[5]) == 0;
              v53[5] &= v54;
              if ( v55 )
                KiRemoveSystemWorkPriorityKick(v52);
            }
          }
        }
        __writecr8(CurrentIrql);
        v13 = -1073741585;
        v14 = v70;
      }
      else
      {
        v13 = -1073741583;
      }
      ObfDereferenceObjectWithTag(v69, 0x746C6644u);
      ObfDereferenceObjectWithTag(v14, 0x746C6644u);
      v46 = Object;
    }
    ObfDereferenceObjectWithTag(v46, 0x746C6644u);
    return v13;
  }
  return result;
}
