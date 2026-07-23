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
  PVOID v6; // rax
  _DWORD *v7; // r15
  NTSTATUS v8; // edi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // r13
  __int64 ProcessServerSilo; // r12
  char *v12; // r14
  __int64 v13; // rsi
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
        ExfTryToWakePushLock((volatile signed __int64 *)v12);
      KeAbPostRelease((ULONG_PTR)v12);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
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
