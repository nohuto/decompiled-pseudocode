/*
 * XREFs of DbgkRegisterErrorPort @ 0x140929940
 * Callers:
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140204738 (PsGetServerSiloGlobals.c)
 *     PsIsHostSilo @ 0x1402A6DF0 (PsIsHostSilo.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwAlpcConnectPort @ 0x14041C680 (ZwAlpcConnectPort.c)
 *     ZwAlpcDisconnectPort @ 0x14041C7E0 (ZwAlpcDisconnectPort.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     DbgkpDeleteErrorPort @ 0x140929F64 (DbgkpDeleteErrorPort.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgkRegisterErrorPort(void *Src, size_t Size)
{
  unsigned int v2; // edi
  wchar_t *PoolWithQuotaTag; // rax
  _DWORD *v6; // rax
  _DWORD *v7; // r15
  unsigned int v8; // edi
  int v9; // eax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // r13
  __int64 ProcessServerSilo; // r12
  char *v13; // r14
  __int64 v14; // rsi
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-F0h] BYREF
  __int128 v16; // [rsp+78h] [rbp-E0h]
  __int128 v17; // [rsp+88h] [rbp-D0h]
  __int128 v18; // [rsp+98h] [rbp-C0h]
  __int128 v19; // [rsp+A8h] [rbp-B0h]
  __int128 v20; // [rsp+B8h] [rbp-A0h]
  __int64 v21; // [rsp+C8h] [rbp-90h]
  _QWORD v22[9]; // [rsp+D0h] [rbp-88h] BYREF

  v2 = Size;
  UnicodeString = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  *(_QWORD *)&v18 = 0LL;
  DWORD2(v18) = 0;
  memset(v22, 0, sizeof(v22));
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
    *(_DWORD *)((char *)&v19 + 2) = -2147483608;
    v22[2] = 272LL;
    v22[4] = 8704LL;
    LODWORD(v22[0]) = 0x100000;
    LODWORD(v16) = 48;
    *((_QWORD *)&v16 + 1) = 0LL;
    DWORD2(v17) = 512;
    *(_QWORD *)&v17 = 0LL;
    v18 = 0LL;
    v9 = ZwAlpcConnectPort((__int64)(v6 + 2), (__int64)&UnicodeString);
    v8 = v9;
    if ( v9 == 192 )
    {
      v8 = -1073741749;
    }
    else if ( v9 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      *v7 = 1;
      v7[1] = 0;
      Process = (__int64)CurrentThread->ApcState.Process;
      ProcessServerSilo = PsGetProcessServerSilo(Process);
      v13 = (char *)PsGetServerSiloGlobals(ProcessServerSilo) + 968;
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v13, 0LL);
      v14 = *((_QWORD *)v13 + 1);
      if ( !v14 && PsIsHostSilo(ProcessServerSilo) )
        _interlockedbittestandset((volatile signed __int32 *)0xFFFFF780000002F0LL, 0);
      *((_QWORD *)v13 + 1) = v7;
      *((_QWORD *)v13 + 2) = Process;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v13);
      KeAbPostRelease((ULONG_PTR)v13);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
      v8 = 0;
      v7 = 0LL;
      if ( v14 )
      {
        if ( !_interlockedbittestandset((volatile signed __int32 *)(v14 + 4), 0) )
          ZwAlpcDisconnectPort(*(_QWORD *)(v14 + 8), 0LL);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v14, 0xFFFFFFFF) == 1 )
          DbgkpDeleteErrorPort((PVOID)v14);
      }
      KeSetEvent(*((PRKEVENT *)v13 + 3), 0, 0);
    }
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
  }
  else
  {
    v8 = -1073741670;
  }
  RtlFreeUnicodeString(&UnicodeString);
  return v8;
}
