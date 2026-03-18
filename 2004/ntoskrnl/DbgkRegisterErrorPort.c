/*
 * XREFs of DbgkRegisterErrorPort @ 0x140883954
 * Callers:
 *     NtSetSystemInformation @ 0x1406AA390 (NtSetSystemInformation.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     PsGetServerSiloGlobals @ 0x14026D714 (PsGetServerSiloGlobals.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     PsGetProcessServerSilo @ 0x14027D870 (PsGetProcessServerSilo.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     PsIsHostSilo @ 0x140291F70 (PsIsHostSilo.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140297DA0 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwAlpcConnectPort @ 0x1403F44E0 (ZwAlpcConnectPort.c)
 *     ZwAlpcDisconnectPort @ 0x1403F4640 (ZwAlpcDisconnectPort.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 *     DbgkpDeleteErrorPort @ 0x140883F58 (DbgkpDeleteErrorPort.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgkRegisterErrorPort(void *Src, size_t Size)
{
  unsigned int v2; // edi
  wchar_t *PoolWithQuotaTag; // rax
  _DWORD *v6; // rax
  _DWORD *v7; // r15
  int v8; // edi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // r13
  __int64 ProcessServerSilo; // r12
  char *v12; // r14
  __int64 v13; // rsi
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-F0h] BYREF
  __int128 v15; // [rsp+78h] [rbp-E0h]
  __int128 v16; // [rsp+88h] [rbp-D0h]
  __int128 v17; // [rsp+98h] [rbp-C0h]
  __int128 v18; // [rsp+A8h] [rbp-B0h]
  __int128 v19; // [rsp+B8h] [rbp-A0h]
  __int64 v20; // [rsp+C8h] [rbp-90h]
  _QWORD v21[9]; // [rsp+D0h] [rbp-88h] BYREF

  v2 = Size;
  UnicodeString = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  memset(v21, 0, sizeof(v21));
  if ( !v2 || (v2 & 1) != 0 || v2 > 0xFFFF )
    return 3221225485LL;
  PoolWithQuotaTag = (wchar_t *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v2, 0x50676244u);
  UnicodeString.Buffer = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return 3221225626LL;
  UnicodeString.MaximumLength = v2;
  UnicodeString.Length = v2;
  memmove(PoolWithQuotaTag, Src, v2);
  v6 = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x10uLL, 0x50676244u);
  v7 = v6;
  if ( v6 )
  {
    *(_DWORD *)((char *)&v18 + 2) = -2147483608;
    v21[2] = 272LL;
    v21[4] = 8704LL;
    LODWORD(v21[0]) = 0x100000;
    LODWORD(v15) = 48;
    *((_QWORD *)&v15 + 1) = 0LL;
    DWORD2(v16) = 512;
    *(_QWORD *)&v16 = 0LL;
    v17 = 0LL;
    v8 = ZwAlpcConnectPort((__int64)(v6 + 2), (__int64)&UnicodeString);
    if ( v8 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      *v7 = 1;
      v7[1] = 0;
      Process = (__int64)CurrentThread->ApcState.Process;
      ProcessServerSilo = PsGetProcessServerSilo(Process);
      v12 = (char *)PsGetServerSiloGlobals(ProcessServerSilo) + 968;
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v12, 0LL);
      v13 = *((_QWORD *)v12 + 1);
      if ( !v13 && PsIsHostSilo(ProcessServerSilo) )
        _interlockedbittestandset((volatile signed __int32 *)0xFFFFF780000002F0LL, 0);
      *((_QWORD *)v12 + 1) = v7;
      *((_QWORD *)v12 + 2) = Process;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v12);
      KeAbPostRelease((ULONG_PTR)v12);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      v8 = 0;
      v7 = 0LL;
      if ( v13 )
      {
        if ( !_interlockedbittestandset((volatile signed __int32 *)(v13 + 4), 0) )
          ZwAlpcDisconnectPort(*(_QWORD *)(v13 + 8), 0LL);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v13, 0xFFFFFFFF) == 1 )
          DbgkpDeleteErrorPort((PVOID)v13);
      }
      KeSetEvent(*((PRKEVENT *)v12 + 3), 0, 0);
    }
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
  }
  else
  {
    v8 = -1073741670;
  }
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)v8;
}
