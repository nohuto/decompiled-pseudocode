/*
 * XREFs of PsUnregisterSiloMonitor @ 0x140908110
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     HalSystemVectorDispatchEntry @ 0x14026BA30 (HalSystemVectorDispatchEntry.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     PspGetHostSiloStorage @ 0x14057BB58 (PspGetHostSiloStorage.c)
 *     PspGetServerSiloStatePointer @ 0x14057BB68 (PspGetServerSiloStatePointer.c)
 *     PspGetNextSilo @ 0x140657710 (PspGetNextSilo.c)
 *     PspStorageFreeSlot @ 0x14090BB64 (PspStorageFreeSlot.c)
 *     PspStorageRemoveObject @ 0x14090BBFC (PspStorageRemoveObject.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall PsUnregisterSiloMonitor(void (__fastcall **P)(_QWORD))
{
  struct _KTHREAD *CurrentThread; // rax
  void (__fastcall *v3)(_QWORD); // rax
  void *i; // rcx
  void *NextSilo; // rax
  void *v6; // rsi
  __int64 v7; // rax
  PVOID *v8; // rcx
  __int64 HostSiloStorage; // rax
  __int64 v10; // r8
  int v11; // ebx
  _OWORD v12[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v12, 0, sizeof(v12));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspSiloMonitorLock, 0LL);
  v3 = *P;
  if ( *(_OWORD *)P != 0LL )
  {
    if ( P[4] )
    {
      KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v12);
      for ( i = 0LL; ; i = v6 )
      {
        NextSilo = PspGetNextSilo(i, 1);
        v6 = NextSilo;
        if ( !NextSilo )
          break;
        if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer((__int64)NextSilo) - 1) <= 2 )
          ((void (__fastcall **)(void *))P)[4](v6);
      }
      if ( *((_BYTE *)P + 16) )
      {
        v7 = HalSystemVectorDispatchEntry();
        P[4](v7);
      }
      KiUnstackDetachProcess((__int64)v12, 0LL);
      v3 = *P;
    }
    if ( *((void (__fastcall ***)(_QWORD))v3 + 1) != P || (v8 = (PVOID *)P[1], *v8 != P) )
      __fastfail(3u);
    *v8 = v3;
    *((_QWORD *)v3 + 1) = v8;
    *P = 0LL;
    P[1] = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( *((_BYTE *)P + 16) )
  {
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v12);
    HostSiloStorage = PspGetHostSiloStorage();
    LOBYTE(v10) = 1;
    v11 = PspStorageRemoveObject(HostSiloStorage, *((unsigned int *)P + 5), v10, 0LL);
    KiUnstackDetachProcess((__int64)v12, 0LL);
    if ( v11 )
    {
      if ( v11 != -1073741275 )
        NT_ASSERT("Status == ((NTSTATUS)0x00000000L) || Status == ((NTSTATUS)0xC0000225L)");
    }
  }
  PspStorageFreeSlot(*((unsigned int *)P + 5));
  ExFreePoolWithTag(P, 0x4D6C6953u);
}
