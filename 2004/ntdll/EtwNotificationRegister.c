/*
 * XREFs of EtwNotificationRegister @ 0x180043030
 * Callers:
 *     EtwRegisterTraceGuidsW @ 0x180042A00 (EtwRegisterTraceGuidsW.c)
 *     EtwEventRegister @ 0x180042E70 (EtwEventRegister.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     EtwpRegisterProvider @ 0x180042EBC (EtwpRegisterProvider.c)
 *     EtwpAllocateRegistration @ 0x180043160 (EtwpAllocateRegistration.c)
 *     EtwpCheckForPrivatePreEnable @ 0x180043270 (EtwpCheckForPrivatePreEnable.c)
 *     EtwpInsertRegistration @ 0x180043454 (EtwpInsertRegistration.c)
 *     EtwpFreeRegistration @ 0x180050498 (EtwpFreeRegistration.c)
 *     RtlSetLastWin32Error @ 0x180050770 (RtlSetLastWin32Error.c)
 */

__int64 __fastcall EtwNotificationRegister(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  __int64 v7; // rax
  ULONG v8; // ebx
  __int64 Registration; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // rdi
  volatile signed __int64 *v14; // rsi

  if ( a1 && a5 )
  {
    v7 = *a1 - *(_QWORD *)&PrivateLoggerNotificationGuid.Data1;
    if ( *a1 == *(_QWORD *)&PrivateLoggerNotificationGuid.Data1 )
      v7 = a1[1] - *(_QWORD *)PrivateLoggerNotificationGuid.Data4;
    if ( !v7 && PrivateLoggerNotificationEntry )
    {
      v8 = 87;
      goto LABEL_14;
    }
    *a5 = 0LL;
    v8 = 0;
    Registration = EtwpAllocateRegistration(a1, a3, a4, a2);
    v13 = Registration;
    if ( !Registration )
    {
      v8 = 14;
      goto LABEL_14;
    }
    v14 = (volatile signed __int64 *)(Registration + 64);
    RtlAcquireSRWLockExclusive(Registration + 64, v10, v11, v12);
    *(_DWORD *)(v13 + 80) = NtCurrentTeb()->ClientId.UniqueThread;
    if ( a2 != 10 && (v8 = EtwpRegisterProvider(v13, a3, a2)) != 0 )
    {
      *(_DWORD *)(v13 + 80) = 0;
      RtlReleaseSRWLockExclusive(v14);
      EtwpFreeRegistration(v13);
    }
    else
    {
      EtwpInsertRegistration(v13);
      EtwpCheckForPrivatePreEnable(v13);
      *(_DWORD *)(v13 + 80) = 0;
      RtlReleaseSRWLockExclusive(v14);
      *a5 = v13 | ((unsigned __int64)*(unsigned __int16 *)(v13 + 96) << 48);
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
