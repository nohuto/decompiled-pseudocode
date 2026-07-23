/*
 * XREFs of ObpReferenceProcessObjectByHandle @ 0x1405E27D0
 * Callers:
 *     ObCaptureObjectStateForDuplication @ 0x1405E261C (ObCaptureObjectStateForDuplication.c)
 *     ObDuplicateObject @ 0x1406E4910 (ObDuplicateObject.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ObpIncrPointerCount @ 0x1402C08C0 (ObpIncrPointerCount.c)
 *     ExLockHandleTableEntry @ 0x1403535B0 (ExLockHandleTableEntry.c)
 *     ExfUnblockPushLock @ 0x1403F96E0 (ExfUnblockPushLock.c)
 *     ObpPushStackInfo @ 0x140564F68 (ObpPushStackInfo.c)
 *     ExpLookupHandleTableEntry @ 0x1407085D0 (ExpLookupHandleTableEntry.c)
 *     ExpGetHandleExtraInfo @ 0x14094CD00 (ExpGetHandleExtraInfo.c)
 */

__int64 __fastcall ObpReferenceProcessObjectByHandle(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _QWORD *a6,
        _DWORD *a7,
        _QWORD *a8)
{
  unsigned __int64 v8; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v10; // r14
  signed __int64 *v12; // rax
  signed __int64 *v13; // rsi
  __int64 v14; // rdx
  int v15; // r8d
  volatile signed __int64 *v16; // rbx
  int v17; // r10d
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 result; // rax
  bool v25; // zf
  __int64 *HandleExtraInfo; // rax
  signed __int32 v27[14]; // [rsp+0h] [rbp-38h] BYREF

  v8 = a1;
  CurrentThread = KeGetCurrentThread();
  v10 = a3;
  *a6 = 0LL;
  if ( (a1 & 0x80000000) == 0LL )
  {
LABEL_6:
    --CurrentThread->KernelApcDisable;
    if ( (v8 & 0x3FC) != 0
      && (v12 = (signed __int64 *)ExpLookupHandleTableEntry(v10, v8), (v13 = v12) != 0LL)
      && ExLockHandleTableEntry(v10, v12) )
    {
      v14 = *v13;
      v15 = *((_DWORD *)v13 + 2);
      v16 = (volatile signed __int64 *)((*v13 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
      v17 = v15 & 0x1FFFFFF;
      if ( *(_DWORD *)(v10 + 4)
        && (HandleExtraInfo = (__int64 *)ExpGetHandleExtraInfo(v10, v8),
            v14 = *v13,
            v15 = *((_DWORD *)v13 + 2),
            HandleExtraInfo) )
      {
        v18 = *HandleExtraInfo;
      }
      else
      {
        v18 = 0LL;
      }
      v19 = (v14 >> 17) & 7;
      *a8 = v18;
      v20 = v19 | 8;
      if ( (v15 & 0x2000000) == 0 )
        v20 = v19;
      *a7 = v20;
      a7[1] = v17;
      ObpIncrPointerCount(v16);
      _InterlockedExchangeAdd64(v13, 1uLL);
      _InterlockedOr(v27, 0);
      if ( *(_QWORD *)(v10 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(v10 + 48), 0LL);
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v21, v22, v23);
      if ( ObpTraceFlags )
        ObpPushStackInfo((__int64)v16, 1, 1u, a5);
      *a6 = v16 + 6;
      return 0LL;
    }
    else
    {
      KeLeaveCriticalRegionThread((__int64)CurrentThread, a2, a3, a4);
      return 3221225480LL;
    }
  }
  if ( a1 == -1LL )
  {
    v25 = ObpTraceFlags == 0;
    a7[1] = 0x1FFFFF;
    *a7 = 0;
    *a8 = 0LL;
    if ( !v25 )
      ObpPushStackInfo(a2 - 48, 1, 1u, a5);
    ObpIncrPointerCount((volatile signed __int64 *)(a2 - 48));
    result = 0LL;
    *a6 = a2;
  }
  else
  {
    if ( a1 != -2LL )
    {
      if ( (_BYTE)a4 )
        return 3221225480LL;
      v10 = ObpKernelHandleTable;
      v8 = a1 ^ 0xFFFFFFFF80000000uLL;
      goto LABEL_6;
    }
    v25 = ObpTraceFlags == 0;
    a7[1] = 0x1FFFFF;
    *a7 = 0;
    *a8 = 0LL;
    if ( !v25 )
      ObpPushStackInfo((__int64)&CurrentThread[-1].SchedulerAssistPriorityFloor, 1, 1u, a5);
    ObpIncrPointerCount((volatile signed __int64 *)&CurrentThread[-1].SchedulerAssistPriorityFloor);
    result = 0LL;
    *a6 = CurrentThread;
  }
  return result;
}
