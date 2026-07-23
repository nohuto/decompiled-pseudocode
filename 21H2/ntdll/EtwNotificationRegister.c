/*
 * XREFs of EtwNotificationRegister @ 0x180043040
 * Callers:
 *     EtwRegisterTraceGuidsW @ 0x180042A10 (EtwRegisterTraceGuidsW.c)
 *     EtwEventRegister @ 0x180042E80 (EtwEventRegister.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     EtwpRegisterProvider @ 0x180042ECC (EtwpRegisterProvider.c)
 *     EtwpAllocateRegistration @ 0x180043170 (EtwpAllocateRegistration.c)
 *     EtwpCheckForPrivatePreEnable @ 0x180043280 (EtwpCheckForPrivatePreEnable.c)
 *     EtwpInsertRegistration @ 0x180043464 (EtwpInsertRegistration.c)
 *     EtwpFreeRegistration @ 0x1800515F8 (EtwpFreeRegistration.c)
 *     RtlSetLastWin32Error @ 0x1800518D0 (RtlSetLastWin32Error.c)
 */

ULONG __cdecl EtwNotificationRegister(
        LPCGUID Guid,
        ULONG Type,
        PETW_NOTIFICATION_CALLBACK Callback,
        PVOID Context,
        PREGHANDLE RegHandle)
{
  __int64 v7; // rax
  ULONG v8; // ebx
  _RTL_SRWLOCK *Registration; // rax
  __int64 v10; // rdi
  _RTL_SRWLOCK *v11; // rsi

  if ( Guid && RegHandle )
  {
    v7 = *(_QWORD *)&Guid->Data1 - *(_QWORD *)&PrivateLoggerNotificationGuid.Data1;
    if ( *(_QWORD *)&Guid->Data1 == *(_QWORD *)&PrivateLoggerNotificationGuid.Data1 )
      v7 = *(_QWORD *)Guid->Data4 - *(_QWORD *)PrivateLoggerNotificationGuid.Data4;
    if ( !v7 && PrivateLoggerNotificationEntry )
    {
      v8 = 87;
      goto LABEL_14;
    }
    *RegHandle = 0LL;
    v8 = 0;
    Registration = (_RTL_SRWLOCK *)EtwpAllocateRegistration(Guid, Callback, Context, Type);
    v10 = (__int64)Registration;
    if ( !Registration )
    {
      v8 = 14;
      goto LABEL_14;
    }
    v11 = Registration + 8;
    RtlAcquireSRWLockExclusive(Registration + 8);
    *(_DWORD *)(v10 + 80) = NtCurrentTeb()->ClientId.UniqueThread;
    if ( Type != 10 && (v8 = EtwpRegisterProvider(v10, (__int64)Callback, Type)) != 0 )
    {
      *(_DWORD *)(v10 + 80) = 0;
      RtlReleaseSRWLockExclusive(v11);
      EtwpFreeRegistration(v10);
    }
    else
    {
      EtwpInsertRegistration((PRTL_BALANCED_NODE)v10);
      EtwpCheckForPrivatePreEnable(v10);
      *(_DWORD *)(v10 + 80) = 0;
      RtlReleaseSRWLockExclusive(v11);
      *RegHandle = v10 | ((unsigned __int64)*(unsigned __int16 *)(v10 + 96) << 48);
    }
  }
  else
  {
    v8 = 87;
  }
  if ( v8 )
LABEL_14:
    RtlSetLastWin32Error(v8);
  return v8;
}
