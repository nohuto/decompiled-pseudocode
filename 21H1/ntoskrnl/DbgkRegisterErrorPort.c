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
  PVOID v6; // rax
  _DWORD *v7; // r15
  NTSTATUS v8; // edi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // r13
  __int64 ProcessServerSilo; // r12
  char *v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  ULONG_PTR BufferLength; // [rsp+60h] [rbp-F8h] BYREF
  UNICODE_STRING PortName; // [rsp+68h] [rbp-F0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-E0h] BYREF
  _PORT_MESSAGE ConnectionMessage; // [rsp+A8h] [rbp-B0h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+D0h] [rbp-88h] BYREF

  v2 = Size;
  PortName = 0LL;
  memset(&ConnectionMessage, 0, sizeof(ConnectionMessage));
  BufferLength = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(&PortAttributes, 0, sizeof(PortAttributes));
  if ( !v2 || (v2 & 1) != 0 || v2 > 0xFFFF )
    return 3221225485LL;
  PoolWithQuotaTag = (wchar_t *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v2, 0x50676244u);
  PortName.Buffer = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return 3221225626LL;
  PortName.MaximumLength = v2;
  PortName.Length = v2;
  memmove(PoolWithQuotaTag, Src, v2);
  v6 = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x10uLL, 0x50676244u);
  v7 = v6;
  if ( v6 )
  {
    *(unsigned int *)((char *)&ConnectionMessage.u1.Length + 2) = -2147483608;
    BufferLength = 40LL;
    PortAttributes.MaxMessageLength = 272LL;
    PortAttributes.MaxPoolUsage = 8704LL;
    PortAttributes.Flags = 0x100000;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v8 = ZwAlpcConnectPort(
           (PHANDLE)v6 + 1,
           &PortName,
           &ObjectAttributes,
           &PortAttributes,
           0x20000u,
           0LL,
           &ConnectionMessage,
           &BufferLength,
           0LL,
           0LL,
           0LL);
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
          ZwAlpcDisconnectPort(*(HANDLE *)(v13 + 8), 0);
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
  RtlFreeAnsiString(&PortName);
  return (unsigned int)v8;
}
