/*
 * XREFs of NtAssociateWaitCompletionPacket @ 0x1402CDF20
 * Callers:
 *     <none>
 * Callees:
 *     KiWaitSatisfyOther @ 0x14022AA88 (KiWaitSatisfyOther.c)
 *     KeReleaseSpinLock @ 0x1402CE500 (KeReleaseSpinLock.c)
 *     KiWakeOtherQueueWaiters @ 0x1402E7B60 (KiWakeOtherQueueWaiters.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F0D40 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     ObpGetWaitObject @ 0x140350440 (ObpGetWaitObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140363010 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x140513294 (KeIsThreadRunning.c)
 *     KiAcquireSpinLockInstrumented @ 0x140516ACC (KiAcquireSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x1405A79F0 (EtwTraceEnqueueWork.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
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
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS result; // eax
  int v13; // ebx
  int v14; // esi
  PVOID v15; // rcx
  __int64 WaitObject; // rbx
  volatile signed __int32 *v17; // r15
  __int64 CurrentIrql; // r12
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v21; // rcx
  int v22; // eax
  _DWORD *v23; // rcx
  int v24; // eax
  PVOID v25; // rdi
  PVOID v26; // rax
  __int64 v27; // r14
  _DWORD *v28; // r9
  _QWORD *v29; // r15
  char v30; // r12
  unsigned __int8 v31; // cl
  unsigned __int64 v32; // r10
  _DWORD *v33; // r8
  struct _KPRCB *v34; // r13
  _KTHREAD *CurrentThread; // r14
  unsigned __int8 IsThreadRunning; // al
  _QWORD *v37; // rsi
  _DWORD *v38; // rdi
  unsigned int v39; // eax
  int v40; // ecx
  PVOID *v41; // rdx
  BOOLEAN v42; // bl
  _QWORD *v43; // rdx
  _QWORD *v44; // rax
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r9
  _DWORD *v47; // r8
  int v48; // eax
  bool v49; // zf
  __int64 v50; // rcx
  KPROCESSOR_MODE v51; // [rsp+30h] [rbp-68h]
  PVOID Object; // [rsp+38h] [rbp-60h] BYREF
  PVOID v53; // [rsp+40h] [rbp-58h] BYREF
  int v54; // [rsp+48h] [rbp-50h]
  PVOID v55; // [rsp+50h] [rbp-48h] BYREF
  int v56; // [rsp+58h] [rbp-40h] BYREF
  __int64 v57; // [rsp+60h] [rbp-38h]
  PKSPIN_LOCK SpinLock; // [rsp+68h] [rbp-30h]
  __int64 v59; // [rsp+70h] [rbp-28h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v51 = PreviousMode;
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
    v53 = 0LL;
    v13 = ObReferenceObjectByHandle(IoCompletionHandle, 2u, IoCompletionObjectType, PreviousMode, &v53, 0LL);
    if ( v13 < 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      return v13;
    }
    v55 = 0LL;
    v14 = ObReferenceObjectByHandle(TargetObjectHandle, 0x100000u, 0LL, PreviousMode, &v55, 0LL);
    v54 = v14;
    if ( v14 < 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      v15 = v53;
LABEL_75:
      ObfDereferenceObjectWithTag(v15, 0x746C6644u);
      return v14;
    }
    WaitObject = ObpGetWaitObject((char *)v55 - 48);
    if ( (__int16 *)WaitObject == &ObpDefaultObject || !WaitObject || (((*(_BYTE *)WaitObject & 0x7F) - 2) & 0xFD) == 0 )
    {
      v14 = -1073741583;
      goto LABEL_73;
    }
    v17 = (volatile signed __int32 *)((char *)Object + 96);
    SpinLock = (PKSPIN_LOCK)((char *)Object + 96);
    CurrentIrql = KeGetCurrentIrql();
    v59 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v17);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v21 = CurrentPrcb->SchedulerAssist;
      if ( v21 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v22 = v21[6];
          v21[6] = v22 + 1;
          if ( v22 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset64(v17, 0LL) )
      {
        v23 = CurrentPrcb->SchedulerAssist;
        if ( v23 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v24 = v23[6] - 1;
            v23[6] = v24;
            if ( !v24 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        KxWaitForSpinLockAndAcquire(v17);
      }
    }
    if ( *((_BYTE *)Object + 104) )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v17, CurrentIrql);
      v14 = -1073741585;
LABEL_73:
      v25 = Object;
      goto LABEL_74;
    }
    v25 = Object;
    if ( *((_BYTE *)Object + 105) )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v17, CurrentIrql);
      v14 = -1073700861;
LABEL_74:
      ObfDereferenceObjectWithTag(v53, 0x746C6644u);
      ObfDereferenceObjectWithTag(v55, 0x746C6644u);
      v15 = v25;
      goto LABEL_75;
    }
    *((_BYTE *)Object + 104) = 1;
    *((_QWORD *)v25 + 6) = KeyContext;
    *((_QWORD *)v25 + 7) = ApcContext;
    *((_DWORD *)v25 + 18) = IoStatus;
    *((_QWORD *)v25 + 8) = IoStatusInformation;
    *((_QWORD *)v25 + 10) = v55;
    v26 = v53;
    *((_QWORD *)v25 + 11) = v53;
    *((_WORD *)v25 + 8) = 1026;
    *((_QWORD *)v25 + 3) = v26;
    *((_QWORD *)v25 + 4) = WaitObject;
    v27 = KeGetCurrentIrql();
    v57 = v27;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v27 <= 0xFu )
    {
      v28 = KeGetCurrentPrcb()->SchedulerAssist;
      v28[5] |= (-1 << (v27 + 1)) & 4;
    }
    v56 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)WaitObject, 7u) )
    {
      do
        KeYieldProcessorEx(&v56);
      while ( (*(_DWORD *)WaitObject & 0x80u) != 0 );
    }
    if ( *(int *)(WaitObject + 4) <= 0 )
    {
      v43 = *(_QWORD **)(WaitObject + 16);
      if ( *v43 == WaitObject + 8 )
      {
        v44 = Object;
        *(_QWORD *)Object = WaitObject + 8;
        v44[1] = v43;
        *v43 = v44;
        *(_QWORD *)(WaitObject + 16) = v44;
        _InterlockedAnd((volatile signed __int32 *)WaitObject, 0xFFFFFF7F);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v45 = KeGetCurrentIrql();
            if ( v45 <= 0xFu && (unsigned __int8)v27 <= 0xFu && v45 >= 2u )
            {
              v46 = KeGetCurrentPrcb();
              v47 = v46->SchedulerAssist;
              v48 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v27 + 1));
              v49 = (v48 & v47[5]) == 0;
              v47[5] &= v48;
              if ( v49 )
                KiRemoveSystemWorkPriorityKick(v46);
            }
          }
        }
        __writecr8((unsigned __int8)v27);
        v42 = 0;
        goto LABEL_66;
      }
    }
    else
    {
      KiWaitSatisfyOther(WaitObject);
      *((_BYTE *)v25 + 17) = 5;
      *(_QWORD *)Object = 0LL;
      v29 = (char *)v53 + 8;
      v30 = 0;
      v31 = KeGetCurrentIrql();
      __writecr8(v32);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v31 <= 0xFu )
      {
        v33 = KeGetCurrentPrcb()->SchedulerAssist;
        v33[5] |= (-1 << (v31 + 1)) & 4;
      }
      v34 = KeGetCurrentPrcb();
      CurrentThread = v34->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        IsThreadRunning = KeIsThreadRunning(v34->CurrentThread);
        v37 = Object;
        EtwTraceEnqueueWork(CurrentThread, Object, IsThreadRunning);
      }
      else
      {
        v37 = Object;
      }
      v38 = v53;
      KiAcquireKobjectLockSafe(v53);
      if ( (_QWORD *)*v29 != v29 )
      {
        v39 = v38[10];
        v38 = v53;
        if ( v39 >= *((_DWORD *)v53 + 11) || (v38 = v53, CurrentThread->Queue == v53) && CurrentThread->WaitReason == 15 )
        {
          v37 = Object;
        }
        else
        {
          v37 = Object;
          v30 = KiWakeQueueWaiter(v34, v53, Object);
        }
      }
      if ( v30 )
        goto LABEL_55;
      v40 = v38[1];
      v38[1] = v40 + 1;
      v41 = (PVOID *)*((_QWORD *)v38 + 4);
      if ( *v41 == v38 + 6 )
      {
        *v37 = v38 + 6;
        v37[1] = v41;
        *v41 = v37;
        *((_QWORD *)v38 + 4) = v37;
        if ( !v40 && (_QWORD *)*v29 != v29 )
          KiWakeOtherQueueWaiters(v34, v38);
LABEL_55:
        _InterlockedAnd(v38, 0xFFFFFF7F);
        _InterlockedAnd((volatile signed __int32 *)WaitObject, 0xFFFFFF7F);
        KiExitDispatcher((unsigned int)KeGetCurrentPrcb(), 0, 1, 0, v57);
        v42 = 1;
        v14 = v54;
        v17 = (volatile signed __int32 *)SpinLock;
        LOBYTE(CurrentIrql) = v59;
LABEL_66:
        KeReleaseSpinLock((PKSPIN_LOCK)v17, CurrentIrql);
        if ( AlreadySignaled )
        {
          if ( v51 )
          {
            v50 = 0x7FFFFFFF0000LL;
            if ( (unsigned __int64)AlreadySignaled < 0x7FFFFFFF0000LL )
              v50 = (__int64)AlreadySignaled;
            *(_BYTE *)v50 = *(_BYTE *)v50;
          }
          *AlreadySignaled = v42;
        }
        return v14;
      }
    }
    __fastfail(3u);
  }
  return result;
}
