/*
 * XREFs of ObpPushRefDerefInfo @ 0x1408DA200
 * Callers:
 *     ObpPushStackInfo @ 0x14055F238 (ObpPushStackInfo.c)
 *     ObpPushStackInfoQueue @ 0x1408DA390 (ObpPushStackInfoQueue.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     DbgPrintEx @ 0x14037C640 (DbgPrintEx.c)
 *     ObpGetObjectRefInfo @ 0x1408D9D04 (ObpGetObjectRefInfo.c)
 *     ObpGetTraceIndex @ 0x1408D9E18 (ObpGetTraceIndex.c)
 *     ObpRefillWorkItemFreeList @ 0x1408DA414 (ObpRefillWorkItemFreeList.c)
 */

__int64 __fastcall ObpPushRefDerefInfo(
        __int64 a1,
        char a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned __int16 *Source2,
        int a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int16 *v11; // rdi
  unsigned __int16 TraceIndex; // r9
  unsigned __int16 i; // dx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int16 *v21; // [rsp+20h] [rbp-28h] BYREF

  v21 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
  if ( (ObpTraceFlags & 0x73) != 0 )
  {
    if ( (int)ObpGetObjectRefInfo(a1, &v21) >= 0 )
    {
      v11 = v21;
      if ( v21 )
      {
        TraceIndex = ObpGetTraceIndex(Source2);
        if ( TraceIndex >= 0x3FFDu )
        {
          DbgPrintEx(0, 1u, "ObpPushRefDerefInfo - ObpStackTable overflow\n");
        }
        else
        {
          for ( i = v11[16]; i; *(_DWORD *)&v11[2 * v14 + 22] = *(_DWORD *)&v11[6 * i-- + 16] )
          {
            if ( a4 >= *(_DWORD *)&v11[6 * i + 12] )
              break;
            v14 = 3LL * i;
            *(_QWORD *)&v11[2 * v14 + 18] = *(_QWORD *)&v11[6 * i + 12];
          }
          v15 = i;
          v16 = 3LL * i;
          v11[2 * v16 + 20] = TraceIndex | (a2 != 0 ? 0x8000 : 0);
          v11[2 * v16 + 21] = a3;
          *(_DWORD *)&v11[6 * v15 + 18] = a4;
          *(_DWORD *)&v11[2 * v16 + 22] = a6;
          ++v11[16];
        }
      }
    }
    if ( LOWORD(ObpWorkItemFreeList.Alignment) < 0x64u )
      ObpRefillWorkItemFreeList();
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ObpStackTraceLock);
  KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v17, v18, v19);
}
