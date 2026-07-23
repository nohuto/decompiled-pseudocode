/*
 * XREFs of PfpScenCtxPrefetchWait @ 0x1409918C4
 * Callers:
 *     PfpProcessScenarioPhase @ 0x14078D158 (PfpProcessScenarioPhase.c)
 *     PfPowerActionNotify @ 0x1409919B4 (PfPowerActionNotify.c)
 * Callees:
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     PfpScenCtxWaiterTimedOut @ 0x14038DDC0 (PfpScenCtxWaiterTimedOut.c)
 */

__int64 __fastcall PfpScenCtxPrefetchWait(ULONG_PTR BugCheckParameter2, int a2, unsigned int a3)
{
  int v3; // r13d
  unsigned int v4; // r15d
  unsigned int v5; // ebx
  int v6; // esi
  int v8; // r14d
  struct _KTHREAD *CurrentThread; // rax
  int v10; // ecx
  int v12; // r12d
  unsigned int v13; // ebx
  __int64 v14; // rbx
  unsigned int v15; // esi
  NTSTATUS v16; // r10d
  __int64 v17; // rax
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp+8h] BYREF
  int v19; // [rsp+78h] [rbp+10h]
  unsigned int v20; // [rsp+80h] [rbp+18h]

  v20 = a3;
  v19 = a2;
  Timeout.QuadPart = 0LL;
  v3 = 0;
  v4 = 0;
  v5 = a3;
  v6 = a2;
  v8 = dword_140C4FE18 < (unsigned int)dword_140C4FE1C ? 0x7D0 : 0;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    if ( *(_DWORD *)(BugCheckParameter2 + 48) != v6 || (*(_DWORD *)(BugCheckParameter2 + 8) & 0xC) == 8 )
      break;
    if ( v3 )
      goto LABEL_22;
    KeResetEvent((PRKEVENT)(BugCheckParameter2 + 16));
    v10 = *(_DWORD *)(BugCheckParameter2 + 8) & 3;
    if ( v10 == 1 )
    {
      v12 = 2;
      v13 = v5 - v4;
    }
    else
    {
      if ( v10 )
        break;
      if ( !v8 )
      {
LABEL_22:
        PfpScenCtxWaiterTimedOut(BugCheckParameter2);
        break;
      }
      v13 = v8;
      v12 = 1;
      v8 = 0;
    }
    *(_DWORD *)(BugCheckParameter2 + 8) = *(_DWORD *)(BugCheckParameter2 + 8) & 0xFFFFFFF3 | 4;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
    Timeout.QuadPart = -10000LL * v13;
    v14 = MEMORY[0xFFFFF78000000320];
    v15 = MEMORY[0xFFFFF78000000004];
    v16 = KeWaitForSingleObject((PVOID)(BugCheckParameter2 + 16), Executive, 0, 0, &Timeout);
    v17 = (unsigned int)v14;
    v5 = v20;
    v4 += ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
        + ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324] - v15 * HIDWORD(v14)) << 8)
        - ((v17 * (unsigned __int64)v15) >> 24);
    if ( v16 == 258 || v4 >= v20 )
    {
      v3 = 1;
    }
    else if ( v12 == 2 )
    {
      return v4;
    }
    v6 = v19;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  KeLeaveCriticalRegion();
  return v4;
}
