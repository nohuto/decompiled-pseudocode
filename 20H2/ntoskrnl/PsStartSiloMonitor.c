/*
 * XREFs of PsStartSiloMonitor @ 0x1407BF870
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     HalSystemVectorDispatchEntry @ 0x140245E60 (HalSystemVectorDispatchEntry.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     PspGetServerSiloStatePointer @ 0x14057F598 (PspGetServerSiloStatePointer.c)
 *     PspGetNextSilo @ 0x140665070 (PspGetNextSilo.c)
 *     PspInvokeCreateCallback @ 0x1407BFA20 (PspInvokeCreateCallback.c)
 *     PspInvokeTerminateCallback @ 0x14090DF20 (PspInvokeTerminateCallback.c)
 */

__int64 __fastcall PsStartSiloMonitor(__int64 a1)
{
  int v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  void *i; // rcx
  void *NextSilo; // rax
  __int64 v6; // rsi
  char v7; // si
  int v8; // r14d
  void *j; // rcx
  void *v10; // rax
  void *v11; // rdi
  __int64 *v12; // rax
  char v13; // bp
  void *v15; // r8
  int v16; // esi
  void *k; // rcx
  void *v18; // rax
  void *v19; // rdi
  __int64 v20; // rax
  _OWORD v21[3]; // [rsp+20h] [rbp-58h] BYREF

  v1 = 0;
  memset(v21, 0, sizeof(v21));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspSiloMonitorLock, 0LL);
  if ( !*(_QWORD *)a1 && !*(_QWORD *)(a1 + 8) )
  {
    if ( !*(_BYTE *)(a1 + 17) )
    {
      for ( i = 0LL; ; i = v15 )
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
      KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v21);
      v6 = HalSystemVectorDispatchEntry();
      v1 = PspInvokeCreateCallback(v6, a1);
      if ( v1 < 0 && *(_QWORD *)(a1 + 32) )
        PspInvokeTerminateCallback(v6, a1);
      KiUnstackDetachProcess((__int64)v21, 0);
      if ( v1 >= 0 )
      {
LABEL_10:
        v7 = 0;
        v8 = 0;
        KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v21);
        for ( j = 0LL; ; j = v11 )
        {
          v10 = PspGetNextSilo(j, 1);
          v11 = v10;
          if ( !v10 )
            break;
          if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer((__int64)v10) - 1) <= 2 )
          {
            ++v8;
            if ( (int)PspInvokeCreateCallback(v11, a1) < 0 )
              v7 = 1;
          }
        }
        KiUnstackDetachProcess((__int64)v21, 0);
        if ( v7 )
        {
          if ( *(_QWORD *)(a1 + 32) )
          {
            v16 = 0;
            KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v21);
            for ( k = 0LL; ; k = v19 )
            {
              v18 = PspGetNextSilo(k, 1);
              v19 = v18;
              if ( !v18 )
                break;
              if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer((__int64)v18) - 1) <= 2 )
              {
                PspInvokeTerminateCallback(v19, a1);
                ++v16;
              }
            }
            if ( v8 != v16 )
              __int2c();
            if ( *(_BYTE *)(a1 + 16) )
            {
              v20 = HalSystemVectorDispatchEntry();
              PspInvokeCreateCallback(v20, a1);
            }
            KiUnstackDetachProcess((__int64)v21, 0);
          }
          v1 = -1073741248;
        }
        else
        {
          v12 = (__int64 *)qword_140C1DF18;
          if ( *(__int64 **)qword_140C1DF18 != &PspSiloMonitorList )
            __fastfail(3u);
          *(_QWORD *)a1 = &PspSiloMonitorList;
          v1 = 0;
          *(_QWORD *)(a1 + 8) = v12;
          *v12 = a1;
          qword_140C1DF18 = a1;
        }
      }
    }
  }
LABEL_15:
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v1;
}
