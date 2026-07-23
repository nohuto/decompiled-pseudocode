/*
 * XREFs of EtwNotificationUnregister @ 0x1800503E0
 * Callers:
 *     SbSelectProcedure @ 0x18003E120 (SbSelectProcedure.c)
 *     EtwUnregisterTraceGuids @ 0x180050380 (EtwUnregisterTraceGuids.c)
 *     EtwEventUnregister @ 0x1800503D0 (EtwEventUnregister.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x180060158 (LdrpLogDeprecatedDllEtwEvent.c)
 *     SbCleanupTrace @ 0x180060244 (SbCleanupTrace.c)
 *     SbObtainTraceHandle @ 0x18007E984 (SbObtainTraceHandle.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800CB8E0 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800CB968 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800CF570 (LdrpLogFatalUserCallbackException.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     EtwpFreeRegistration @ 0x1800504E8 (EtwpFreeRegistration.c)
 *     EtwpRemoveRegistrationFromTable @ 0x180050528 (EtwpRemoveRegistrationFromTable.c)
 *     RtlSetLastWin32Error @ 0x1800507C0 (RtlSetLastWin32Error.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180050C48 (EtwpDereferenceUmGuidEntry.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 */

ULONG __cdecl EtwNotificationUnregister(REGHANDLE RegHandle, PVOID *Context)
{
  REGHANDLE v2; // rdi
  REGHANDLE v4; // rbx
  _RTL_BALANCED_NODE *v5; // rcx

  v2 = HIWORD(RegHandle);
  if ( !HIWORD(RegHandle) )
    goto LABEL_13;
  v4 = RegHandle & 0xFFFFFFFFFFFFLL;
  if ( (RegHandle & 1) != 0
    || HIWORD(RegHandle) != *(_WORD *)((RegHandle & 0xFFFFFFFFFFFFLL) + 0x60)
    || v4 == PrivateLoggerNotificationEntry )
  {
    goto LABEL_13;
  }
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v4 + 72));
  if ( (_WORD)v2 != _InterlockedCompareExchange16((volatile signed __int16 *)(v4 + 96), 0, v2) )
  {
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v4 + 72));
LABEL_13:
    RtlSetLastWin32Error(6);
    return 6;
  }
  EtwpRemoveRegistrationFromTable((PRTL_BALANCED_NODE)v4);
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v4 + 72));
  if ( (*(_WORD *)(v4 + 98) & 0x3FFF) != 0xA )
    NtClose(*(HANDLE *)(v4 + 88));
  v5 = *(_RTL_BALANCED_NODE **)(v4 + 248);
  if ( v5 )
  {
    EtwpDereferenceUmGuidEntry(v5);
    *(_QWORD *)(v4 + 248) = 0LL;
  }
  if ( Context )
    *Context = *(PVOID *)(v4 + 56);
  EtwpFreeRegistration(v4);
  return 0;
}
