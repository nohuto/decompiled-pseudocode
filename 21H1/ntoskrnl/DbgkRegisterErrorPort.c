/*
 * XREFs of DbgkRegisterErrorPort @ 0x140882634
 * Callers:
 *     NtSetSystemInformation @ 0x1405CF400 (NtSetSystemInformation.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x140204560 (PsGetProcessServerSilo.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1402421D0 (ExAllocatePoolWithQuotaTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     PsIsHostSilo @ 0x1402556F0 (PsIsHostSilo.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     PsGetServerSiloGlobals @ 0x1402D70B4 (PsGetServerSiloGlobals.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwAlpcConnectPort @ 0x1403F3250 (ZwAlpcConnectPort.c)
 *     ZwAlpcDisconnectPort @ 0x1403F33B0 (ZwAlpcDisconnectPort.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     DbgkpDeleteErrorPort @ 0x140882C38 (DbgkpDeleteErrorPort.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-F0h] BYREF
  __int128 v18; // [rsp+78h] [rbp-E0h]
  __int128 v19; // [rsp+88h] [rbp-D0h]
  __int128 v20; // [rsp+98h] [rbp-C0h]
  __int128 v21; // [rsp+A8h] [rbp-B0h]
  __int128 v22; // [rsp+B8h] [rbp-A0h]
  __int64 v23; // [rsp+C8h] [rbp-90h]
  _QWORD v24[9]; // [rsp+D0h] [rbp-88h] BYREF

  v2 = Size;
  UnicodeString = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  memset(v24, 0, sizeof(v24));
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
    *(_DWORD *)((char *)&v21 + 2) = -2147483608;
    v24[2] = 272LL;
    v24[4] = 8704LL;
    LODWORD(v24[0]) = 0x100000;
    LODWORD(v18) = 48;
    *((_QWORD *)&v18 + 1) = 0LL;
    DWORD2(v19) = 512;
    *(_QWORD *)&v19 = 0LL;
    v20 = 0LL;
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
        ExfTryToWakePushLock(v12);
      KeAbPostRelease((ULONG_PTR)v12);
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v14, v15, v16);
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
