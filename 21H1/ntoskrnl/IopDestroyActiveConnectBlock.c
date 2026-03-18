/*
 * XREFs of IopDestroyActiveConnectBlock @ 0x14074AE60
 * Callers:
 *     IoDisconnectInterrupt @ 0x14074A220 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14074A9DC (IopConnectInterrupt.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x1407AF3CC (IopAcquireReleaseConnectLockInternal.c)
 */

_QWORD *__fastcall IopDestroyActiveConnectBlock(volatile signed __int32 *a1)
{
  _QWORD *result; // rax
  __int64 v3; // rbp
  volatile signed __int32 *v4; // rsi
  struct _KEVENT *v5; // rdi
  __int64 v6; // rdx
  char v7; // r14
  signed __int32 v8; // eax
  __int64 v9; // rax
  volatile signed __int32 **v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  result = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( *((_QWORD *)a1 + 3) )
  {
    v3 = *((_QWORD *)a1 + 4);
    v4 = a1 + 16;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v5 = 0LL;
    LOBYTE(v6) = 1;
    v7 = 0;
    IopAcquireReleaseConnectLockInternal(0LL, v6, 2LL);
    v8 = _InterlockedDecrement((volatile signed __int32 *)v3);
    if ( (volatile signed __int32 *)v3 == v4 )
    {
      if ( v8 )
      {
        v7 = 1;
        *((_QWORD *)a1 + 9) = &Event;
      }
    }
    else
    {
      if ( !v8 )
        v5 = *(struct _KEVENT **)(v3 + 8);
      _InterlockedAdd(v4, 0xFFFFFFFF);
    }
    v9 = *(_QWORD *)a1;
    if ( *(volatile signed __int32 **)(*(_QWORD *)a1 + 8LL) != a1
      || (v10 = (volatile signed __int32 **)*((_QWORD *)a1 + 1), *v10 != a1) )
    {
      __fastfail(3u);
    }
    *v10 = (volatile signed __int32 *)v9;
    *(_QWORD *)(v9 + 8) = v10;
    IopAcquireReleaseConnectLockInternal(0LL, 0LL, 2LL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( v7 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    }
    else if ( v5 )
    {
      KeSetEvent(v5, 0, 0);
    }
    return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v12, v13);
  }
  return result;
}
