/*
 * XREFs of MiAddMdlTracker @ 0x140530A94
 * Callers:
 *     MiProbeAndLockComplete @ 0x1402358B0 (MiProbeAndLockComplete.c)
 *     MiProbeAndLockPages @ 0x1402AF160 (MiProbeAndLockPages.c)
 *     MiSwitchToTransition @ 0x14053A154 (MiSwitchToTransition.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAllocateFromNPagedLookasideList @ 0x140213400 (ExAllocateFromNPagedLookasideList.c)
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x140225B74 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 *     RtlCaptureStackBackTrace @ 0x1402C1720 (RtlCaptureStackBackTrace.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlAvlInsertNodeEx @ 0x1403212A0 (RtlAvlInsertNodeEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiGetInstructionPointer @ 0x14052E204 (MiGetInstructionPointer.c)
 */

__int64 __fastcall MiAddMdlTracker(ULONG_PTR BugCheckParameter3, __int64 a2, int a3)
{
  PEPROCESS v3; // rsi
  __int64 result; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rdi
  _QWORD *v10; // rdx
  bool v11; // r8
  _QWORD *v12; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v16; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]
  ULONG BackTraceHash; // [rsp+90h] [rbp+8h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+20h] BYREF

  v3 = *(PEPROCESS *)(BugCheckParameter3 + 16);
  result = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v3 || (v3 = PsInitialSystemProcess) != 0LL )
  {
    v8 = v3[1].ActiveProcessors.Bitmap[11];
    if ( v8 )
    {
      if ( *(_DWORD *)(v8 + 32) )
      {
        result = (__int64)ExAllocateFromNPagedLookasideList(&stru_140C4EA80);
        v9 = result;
        if ( result )
        {
          *(_QWORD *)(result + 24) = BugCheckParameter3;
          *(_QWORD *)(result + 40) = a2;
          *(_QWORD *)(result + 32) = *(_QWORD *)(BugCheckParameter3 + 32);
          *(_DWORD *)(result + 48) = *(_DWORD *)(BugCheckParameter3 + 44);
          *(_DWORD *)(result + 52) = *(_DWORD *)(BugCheckParameter3 + 40);
          *(_QWORD *)(result + 64) = *(_QWORD *)(BugCheckParameter3 + 48);
          v20 = 0LL;
          MetroHash64::Hash((const unsigned __int8 *)(BugCheckParameter3 + 48), 8 * a2, (unsigned __int8 *const)&v20);
          *(_DWORD *)(v9 + 60) = v20;
          BackTraceHash = 0;
          memset((void *)(v9 + 72), 0, 0x40uLL);
          if ( !RtlCaptureStackBackTrace(0, 8u, (PVOID *)(v9 + 72), &BackTraceHash) )
          {
            *(_QWORD *)(v9 + 80) = retaddr;
            *(_QWORD *)(v9 + 72) = MiGetInstructionPointer();
          }
          *(_DWORD *)(v9 + 56) = a3;
          *(_QWORD *)(v9 + 136) = v3;
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 24), &LockHandle);
          v10 = *(_QWORD **)v8;
          v11 = 0;
          if ( *(_QWORD *)v8 )
          {
            while ( 1 )
            {
              if ( BugCheckParameter3 < v10[3] )
              {
                v12 = (_QWORD *)*v10;
                if ( !*v10 )
                  break;
              }
              else
              {
                if ( BugCheckParameter3 <= v10[3] )
                  KeBugCheckEx(0xD9u, 1uLL, (ULONG_PTR)v10, BugCheckParameter3, *(_QWORD *)(v8 + 16));
                v12 = (_QWORD *)v10[1];
                if ( !v12 )
                {
                  v11 = 1;
                  break;
                }
              }
              v10 = v12;
            }
          }
          RtlAvlInsertNodeEx((unsigned __int64 *)v8, (unsigned __int64)v10, v11, (_QWORD *)v9);
          *(_QWORD *)(v8 + 16) += a2;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          result = (unsigned int)KiIrqlFlags;
          OldIrql = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              result = KeGetCurrentIrql();
              if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v16 = ((unsigned int)result & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= result;
                if ( v16 )
                  result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(OldIrql);
        }
        else
        {
          *(_DWORD *)(v8 + 32) = 0;
        }
      }
    }
  }
  return result;
}
