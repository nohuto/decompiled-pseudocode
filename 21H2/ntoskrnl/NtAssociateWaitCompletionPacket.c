/*
 * XREFs of NtAssociateWaitCompletionPacket @ 0x140229620
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140229C10 (KeReleaseSpinLock.c)
 *     KiWakeOtherQueueWaiters @ 0x140243310 (KiWakeOtherQueueWaiters.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x14024C4A0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x14024C4F0 (KiWakeQueueWaiter.c)
 *     KiWaitSatisfyOther @ 0x14029A518 (KiWaitSatisfyOther.c)
 *     KiExitDispatcher @ 0x140343AC0 (KiExitDispatcher.c)
 *     ObpGetWaitObject @ 0x1403456F0 (ObpGetWaitObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403582C0 (KxWaitForSpinLockAndAcquire.c)
 *     Feature_2208782651__private_IsEnabledDeviceUsage @ 0x1403F1350 (Feature_2208782651__private_IsEnabledDeviceUsage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x140513054 (KeIsThreadRunning.c)
 *     KiAcquireSpinLockInstrumented @ 0x14051688C (KiAcquireSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x1405A77C0 (EtwTraceEnqueueWork.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall NtAssociateWaitCompletionPacket(
        void *a1,
        void *a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        char *a8)
{
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS result; // eax
  NTSTATUS v13; // ebx
  NTSTATUS v14; // r14d
  PVOID v15; // rcx
  __int64 WaitObject; // rbx
  volatile signed __int32 *v17; // r12
  __int64 CurrentIrql; // rdi
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v21; // rcx
  int v22; // eax
  _DWORD *v23; // rcx
  int v24; // eax
  _BYTE *v25; // rsi
  int IsEnabledDeviceUsage; // eax
  PVOID v27; // rdi
  PVOID v28; // rax
  __int64 v29; // rsi
  _DWORD *v30; // r9
  _QWORD *v31; // r15
  char v32; // r12
  unsigned __int8 v33; // cl
  unsigned __int64 v34; // r10
  _DWORD *v35; // r8
  struct _KPRCB *v36; // r13
  _KTHREAD *CurrentThread; // r14
  unsigned __int8 IsThreadRunning; // al
  _QWORD *v39; // rsi
  _DWORD *v40; // rdi
  unsigned int v41; // eax
  int v42; // ecx
  PVOID *v43; // rdx
  char v44; // bl
  _QWORD *v45; // rdx
  _QWORD *v46; // rax
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r9
  _DWORD *v49; // r8
  int v50; // eax
  bool v51; // zf
  __int64 v52; // rcx
  KPROCESSOR_MODE v53; // [rsp+30h] [rbp-68h]
  PVOID Object; // [rsp+38h] [rbp-60h] BYREF
  PVOID v55; // [rsp+40h] [rbp-58h] BYREF
  NTSTATUS v56; // [rsp+48h] [rbp-50h]
  __int64 v57; // [rsp+50h] [rbp-48h]
  PVOID v58; // [rsp+58h] [rbp-40h] BYREF
  int v59; // [rsp+60h] [rbp-38h] BYREF
  __int64 v60; // [rsp+68h] [rbp-30h]
  PKSPIN_LOCK SpinLock; // [rsp+70h] [rbp-28h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v53 = PreviousMode;
  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 1u, IopWaitCompletionPacketObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v55 = 0LL;
    v13 = ObReferenceObjectByHandle(a2, 2u, IoCompletionObjectType, PreviousMode, &v55, 0LL);
    if ( v13 < 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      return v13;
    }
    v58 = 0LL;
    v14 = ObReferenceObjectByHandle(a3, 0x100000u, 0LL, PreviousMode, &v58, 0LL);
    v56 = v14;
    if ( v14 < 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      v15 = v55;
LABEL_77:
      ObfDereferenceObjectWithTag(v15, 0x746C6644u);
      return v14;
    }
    WaitObject = ObpGetWaitObject((char *)v58 - 48);
    if ( (__int16 *)WaitObject == &ObpDefaultObject || !WaitObject || (((*(_BYTE *)WaitObject & 0x7F) - 2) & 0xFD) == 0 )
    {
      v14 = -1073741583;
      goto LABEL_75;
    }
    v17 = (volatile signed __int32 *)((char *)Object + 96);
    SpinLock = (PKSPIN_LOCK)((char *)Object + 96);
    CurrentIrql = KeGetCurrentIrql();
    v57 = CurrentIrql;
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
      LOBYTE(CurrentIrql) = v57;
    }
    v25 = Object;
    if ( *((_BYTE *)Object + 104) )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v17, CurrentIrql);
      v14 = -1073741585;
LABEL_75:
      v27 = Object;
      goto LABEL_76;
    }
    IsEnabledDeviceUsage = Feature_2208782651__private_IsEnabledDeviceUsage();
    v27 = Object;
    if ( IsEnabledDeviceUsage && *((_BYTE *)Object + 105) )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v17, v57);
      v14 = -1073700861;
LABEL_76:
      ObfDereferenceObjectWithTag(v55, 0x746C6644u);
      ObfDereferenceObjectWithTag(v58, 0x746C6644u);
      v15 = v27;
      goto LABEL_77;
    }
    v25[104] = 1;
    *((_QWORD *)v27 + 6) = a4;
    *((_QWORD *)v27 + 7) = a5;
    *((_DWORD *)v27 + 18) = a6;
    *((_QWORD *)v27 + 8) = a7;
    *((_QWORD *)v27 + 10) = v58;
    v28 = v55;
    *((_QWORD *)v27 + 11) = v55;
    *((_WORD *)v27 + 8) = 1026;
    *((_QWORD *)v27 + 3) = v28;
    *((_QWORD *)v27 + 4) = WaitObject;
    v29 = KeGetCurrentIrql();
    v60 = v29;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v29 <= 0xFu )
    {
      v30 = KeGetCurrentPrcb()->SchedulerAssist;
      v30[5] |= (-1 << (v29 + 1)) & 4;
    }
    v59 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)WaitObject, 7u) )
    {
      do
        KeYieldProcessorEx(&v59);
      while ( (*(_DWORD *)WaitObject & 0x80u) != 0 );
    }
    if ( *(int *)(WaitObject + 4) <= 0 )
    {
      v45 = *(_QWORD **)(WaitObject + 16);
      if ( *v45 == WaitObject + 8 )
      {
        v46 = Object;
        *(_QWORD *)Object = WaitObject + 8;
        v46[1] = v45;
        *v45 = v46;
        *(_QWORD *)(WaitObject + 16) = v46;
        _InterlockedAnd((volatile signed __int32 *)WaitObject, 0xFFFFFF7F);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v47 = KeGetCurrentIrql();
            if ( v47 <= 0xFu && (unsigned __int8)v29 <= 0xFu && v47 >= 2u )
            {
              v48 = KeGetCurrentPrcb();
              v49 = v48->SchedulerAssist;
              v50 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v29 + 1));
              v51 = (v50 & v49[5]) == 0;
              v49[5] &= v50;
              if ( v51 )
                KiRemoveSystemWorkPriorityKick(v48);
            }
          }
        }
        __writecr8((unsigned __int8)v29);
        v44 = 0;
        goto LABEL_68;
      }
    }
    else
    {
      KiWaitSatisfyOther(WaitObject);
      *((_BYTE *)v27 + 17) = 5;
      *(_QWORD *)Object = 0LL;
      v31 = (char *)v55 + 8;
      v32 = 0;
      v33 = KeGetCurrentIrql();
      __writecr8(v34);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v33 <= 0xFu )
      {
        v35 = KeGetCurrentPrcb()->SchedulerAssist;
        v35[5] |= (-1 << (v33 + 1)) & 4;
      }
      v36 = KeGetCurrentPrcb();
      CurrentThread = v36->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        IsThreadRunning = KeIsThreadRunning(v36->CurrentThread);
        v39 = Object;
        EtwTraceEnqueueWork(CurrentThread, Object, IsThreadRunning);
      }
      else
      {
        v39 = Object;
      }
      v40 = v55;
      KiAcquireKobjectLockSafe(v55);
      if ( (_QWORD *)*v31 != v31 )
      {
        v41 = v40[10];
        v40 = v55;
        if ( v41 >= *((_DWORD *)v55 + 11) || (v40 = v55, CurrentThread->Queue == v55) && CurrentThread->WaitReason == 15 )
        {
          v39 = Object;
        }
        else
        {
          v39 = Object;
          v32 = KiWakeQueueWaiter(v36, v55, Object);
        }
      }
      if ( v32 )
        goto LABEL_57;
      v42 = v40[1];
      v40[1] = v42 + 1;
      v43 = (PVOID *)*((_QWORD *)v40 + 4);
      if ( *v43 == v40 + 6 )
      {
        *v39 = v40 + 6;
        v39[1] = v43;
        *v43 = v39;
        *((_QWORD *)v40 + 4) = v39;
        if ( !v42 && (_QWORD *)*v31 != v31 )
          KiWakeOtherQueueWaiters(v36, v40);
LABEL_57:
        _InterlockedAnd(v40, 0xFFFFFF7F);
        _InterlockedAnd((volatile signed __int32 *)WaitObject, 0xFFFFFF7F);
        KiExitDispatcher((unsigned int)KeGetCurrentPrcb(), 0, 1, 0, v60);
        v44 = 1;
        v14 = v56;
        v17 = (volatile signed __int32 *)SpinLock;
LABEL_68:
        KeReleaseSpinLock((PKSPIN_LOCK)v17, v57);
        if ( a8 )
        {
          if ( v53 )
          {
            v52 = 0x7FFFFFFF0000LL;
            if ( (unsigned __int64)a8 < 0x7FFFFFFF0000LL )
              v52 = (__int64)a8;
            *(_BYTE *)v52 = *(_BYTE *)v52;
          }
          *a8 = v44;
        }
        return v14;
      }
    }
    __fastfail(3u);
  }
  return result;
}
