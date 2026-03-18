/*
 * XREFs of PsStartSiloMonitor @ 0x1407AE7D0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     HalSystemVectorDispatchEntry @ 0x1402D53D0 (HalSystemVectorDispatchEntry.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     PspGetServerSiloStatePointer @ 0x14057B528 (PspGetServerSiloStatePointer.c)
 *     PspGetNextSilo @ 0x1406158F4 (PspGetNextSilo.c)
 *     PspInvokeCreateCallback @ 0x1407AE980 (PspInvokeCreateCallback.c)
 *     PspInvokeTerminateCallback @ 0x140907050 (PspInvokeTerminateCallback.c)
 */

__int64 __fastcall PsStartSiloMonitor(__int64 a1)
{
  int v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v4; // r9
  void *i; // rcx
  void *NextSilo; // rax
  __int64 v7; // rsi
  __int64 v8; // r8
  _DWORD *v9; // r9
  char v10; // si
  int v11; // r14d
  void *j; // rcx
  void *v13; // rax
  __int64 v14; // r8
  _DWORD *v15; // r9
  void *v16; // rdi
  _DWORD *v17; // r9
  __int64 *v18; // rax
  char v19; // bp
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  void *v24; // r8
  int v25; // esi
  void *k; // rcx
  void *v27; // rax
  __int64 v28; // r8
  _DWORD *v29; // r9
  void *v30; // rdi
  __int64 v31; // rax
  _OWORD v32[3]; // [rsp+20h] [rbp-58h] BYREF

  v1 = 0;
  memset(v32, 0, sizeof(v32));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspSiloMonitorLock, 0LL);
  if ( !*(_QWORD *)a1 && !*(_QWORD *)(a1 + 8) )
  {
    if ( !*(_BYTE *)(a1 + 17) )
    {
      for ( i = 0LL; ; i = v24 )
      {
        NextSilo = PspGetNextSilo(i, 1);
        if ( !NextSilo )
          break;
        if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer((__int64)NextSilo) - 1) <= 2 )
        {
          v1 = -1073741637;
          goto LABEL_15;
        }
      }
    }
    if ( *(_QWORD *)(a1 + 24) )
    {
      if ( !*(_BYTE *)(a1 + 16) )
        goto LABEL_10;
      KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v32, v4);
      v7 = HalSystemVectorDispatchEntry();
      v1 = PspInvokeCreateCallback(v7, a1);
      if ( v1 < 0 && *(_QWORD *)(a1 + 32) )
        PspInvokeTerminateCallback(v7, a1);
      KiUnstackDetachProcess((__int64)v32, 0LL, v8, v9);
      if ( v1 >= 0 )
      {
LABEL_10:
        v10 = 0;
        v11 = 0;
        KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v32, v4);
        for ( j = 0LL; ; j = v16 )
        {
          v13 = PspGetNextSilo(j, 1);
          v16 = v13;
          if ( !v13 )
            break;
          if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer((__int64)v13) - 1) <= 2 )
          {
            ++v11;
            if ( (int)PspInvokeCreateCallback(v16, a1) < 0 )
              v10 = 1;
          }
        }
        KiUnstackDetachProcess((__int64)v32, 0LL, v14, v15);
        if ( v10 )
        {
          if ( *(_QWORD *)(a1 + 32) )
          {
            v25 = 0;
            KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v32, v17);
            for ( k = 0LL; ; k = v30 )
            {
              v27 = PspGetNextSilo(k, 1);
              v30 = v27;
              if ( !v27 )
                break;
              if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer((__int64)v27) - 1) <= 2 )
              {
                PspInvokeTerminateCallback(v30, a1);
                ++v25;
              }
            }
            if ( v11 != v25 )
              __int2c();
            if ( *(_BYTE *)(a1 + 16) )
            {
              v31 = HalSystemVectorDispatchEntry();
              PspInvokeCreateCallback(v31, a1);
            }
            KiUnstackDetachProcess((__int64)v32, 0LL, v28, v29);
          }
          v1 = -1073741248;
        }
        else
        {
          v18 = (__int64 *)qword_140C1E028;
          if ( *(__int64 **)qword_140C1E028 != &PspSiloMonitorList )
            __fastfail(3u);
          *(_QWORD *)a1 = &PspSiloMonitorList;
          v1 = 0;
          *(_QWORD *)(a1 + 8) = v18;
          *v18 = a1;
          qword_140C1E028 = a1;
        }
      }
    }
  }
LABEL_15:
  v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v19 & 2) != 0 && (v19 & 4) == 0 )
    ExfTryToWakePushLock(&PspSiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v20, v21, v22);
  return (unsigned int)v1;
}
