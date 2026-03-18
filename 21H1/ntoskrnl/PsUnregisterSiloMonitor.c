/*
 * XREFs of PsUnregisterSiloMonitor @ 0x140906E60
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
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     PspGetHostSiloStorage @ 0x14057B518 (PspGetHostSiloStorage.c)
 *     PspGetServerSiloStatePointer @ 0x14057B528 (PspGetServerSiloStatePointer.c)
 *     PspGetNextSilo @ 0x1406158F4 (PspGetNextSilo.c)
 *     PspStorageFreeSlot @ 0x14090A8B4 (PspStorageFreeSlot.c)
 *     PspStorageRemoveObject @ 0x14090A94C (PspStorageRemoveObject.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PsUnregisterSiloMonitor(void (__fastcall **P)(_QWORD))
{
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v3; // r9
  void (__fastcall *v4)(_QWORD); // rax
  void *i; // rcx
  void *NextSilo; // rax
  __int64 v7; // r8
  _DWORD *v8; // r9
  void *v9; // rsi
  __int64 v10; // rax
  PVOID *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _DWORD *v15; // r9
  __int64 HostSiloStorage; // rax
  __int64 v17; // r8
  int v18; // ebx
  __int64 v19; // r8
  _DWORD *v20; // r9
  _OWORD v21[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v21, 0, sizeof(v21));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspSiloMonitorLock, 0LL);
  v4 = *P;
  if ( *(_OWORD *)P != 0LL )
  {
    if ( P[4] )
    {
      KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v21, v3);
      for ( i = 0LL; ; i = v9 )
      {
        NextSilo = PspGetNextSilo(i, 1);
        v9 = NextSilo;
        if ( !NextSilo )
          break;
        if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer((__int64)NextSilo) - 1) <= 2 )
          ((void (__fastcall **)(void *))P)[4](v9);
      }
      if ( *((_BYTE *)P + 16) )
      {
        v10 = HalSystemVectorDispatchEntry();
        P[4](v10);
      }
      KiUnstackDetachProcess((__int64)v21, 0LL, v7, v8);
      v4 = *P;
    }
    if ( *((void (__fastcall ***)(_QWORD))v4 + 1) != P || (v11 = (PVOID *)P[1], *v11 != P) )
      __fastfail(3u);
    *v11 = v4;
    *((_QWORD *)v4 + 1) = v11;
    *P = 0LL;
    P[1] = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PspSiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v13, v14);
  if ( *((_BYTE *)P + 16) )
  {
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v21, v15);
    HostSiloStorage = PspGetHostSiloStorage();
    LOBYTE(v17) = 1;
    v18 = PspStorageRemoveObject(HostSiloStorage, *((unsigned int *)P + 5), v17, 0LL);
    KiUnstackDetachProcess((__int64)v21, 0LL, v19, v20);
    if ( v18 )
    {
      if ( v18 != -1073741275 )
        NT_ASSERT("Status == ((NTSTATUS)0x00000000L) || Status == ((NTSTATUS)0xC0000225L)");
    }
  }
  PspStorageFreeSlot(*((unsigned int *)P + 5));
  ExFreePoolWithTag(P, 0x4D6C6953u);
}
