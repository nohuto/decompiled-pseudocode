/*
 * XREFs of ObpReferenceProcessObjectByHandle @ 0x1406A5D30
 * Callers:
 *     ObDuplicateObject @ 0x140677E70 (ObDuplicateObject.c)
 *     ObCaptureObjectStateForDuplication @ 0x1406A5B84 (ObCaptureObjectStateForDuplication.c)
 * Callees:
 *     ExLockHandleTableEntry @ 0x14021E890 (ExLockHandleTableEntry.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ObpIncrPointerCount @ 0x14027E460 (ObpIncrPointerCount.c)
 *     ExfUnblockPushLock @ 0x1403F7730 (ExfUnblockPushLock.c)
 *     ObpPushStackInfo @ 0x140563258 (ObpPushStackInfo.c)
 *     ExpLookupHandleTableEntry @ 0x140611EF0 (ExpLookupHandleTableEntry.c)
 *     ExpGetHandleExtraInfo @ 0x14094F360 (ExpGetHandleExtraInfo.c)
 */

__int64 __fastcall ObpReferenceProcessObjectByHandle(
        unsigned __int64 a1,
        struct _KTHREAD *a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        struct _KTHREAD **a6,
        _DWORD *a7,
        _QWORD *a8)
{
  unsigned __int64 v8; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  signed __int64 *v12; // rax
  signed __int64 *v13; // rsi
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  volatile signed __int64 *v17; // rbx
  int v18; // r10d
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // eax
  __int64 result; // rax
  bool v23; // zf
  __int64 *HandleExtraInfo; // rax
  signed __int32 v25[14]; // [rsp+0h] [rbp-38h] BYREF

  v8 = a1;
  CurrentThread = KeGetCurrentThread();
  *a6 = 0LL;
  if ( (a1 & 0x80000000) == 0LL )
  {
LABEL_6:
    --CurrentThread->KernelApcDisable;
    if ( (v8 & 0x3FC) != 0
      && (v12 = (signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)a3, v8), (v13 = v12) != 0LL)
      && ExLockHandleTableEntry(a3, v12) )
    {
      v15 = *v13;
      v16 = *((unsigned int *)v13 + 2);
      v17 = (volatile signed __int64 *)((*v13 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
      v18 = v13[1] & 0x1FFFFFF;
      if ( *(_DWORD *)(a3 + 4)
        && (HandleExtraInfo = (__int64 *)ExpGetHandleExtraInfo(a3, v8, v16, v14),
            v15 = *v13,
            LODWORD(v16) = *((_DWORD *)v13 + 2),
            HandleExtraInfo) )
      {
        v19 = *HandleExtraInfo;
      }
      else
      {
        v19 = 0LL;
      }
      v20 = (v15 >> 17) & 7;
      *a8 = v19;
      v21 = v20 | 8;
      if ( (v16 & 0x2000000) == 0 )
        v21 = v20;
      *a7 = v21;
      a7[1] = v18;
      ObpIncrPointerCount(v17);
      _InterlockedExchangeAdd64(v13, 1uLL);
      _InterlockedOr(v25, 0);
      if ( *(_QWORD *)(a3 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a3 + 48), 0LL);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( ObpTraceFlags )
        ObpPushStackInfo((__int64)v17, 1, 1u, a5);
      *a6 = (struct _KTHREAD *)(v17 + 6);
      return 0LL;
    }
    else
    {
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      return 3221225480LL;
    }
  }
  if ( a1 == -1LL )
  {
    v23 = ObpTraceFlags == 0;
    a7[1] = 0x1FFFFF;
    *a7 = 0;
    *a8 = 0LL;
    if ( !v23 )
      ObpPushStackInfo((__int64)&a2[-1].SchedulerAssistPriorityFloor, 1, 1u, a5);
    ObpIncrPointerCount((volatile signed __int64 *)&a2[-1].SchedulerAssistPriorityFloor);
    result = 0LL;
    *a6 = a2;
  }
  else
  {
    if ( a1 != -2LL )
    {
      if ( a4 )
        return 3221225480LL;
      a3 = ObpKernelHandleTable;
      v8 = a1 ^ 0xFFFFFFFF80000000uLL;
      goto LABEL_6;
    }
    v23 = ObpTraceFlags == 0;
    a7[1] = 0x1FFFFF;
    *a7 = 0;
    *a8 = 0LL;
    if ( !v23 )
      ObpPushStackInfo((__int64)&CurrentThread[-1].SchedulerAssistPriorityFloor, 1, 1u, a5);
    ObpIncrPointerCount((volatile signed __int64 *)&CurrentThread[-1].SchedulerAssistPriorityFloor);
    result = 0LL;
    *a6 = CurrentThread;
  }
  return result;
}
