/*
 * XREFs of EtwNotificationUnregister @ 0x1800514F0
 * Callers:
 *     SbSelectProcedure @ 0x18003E0E0 (SbSelectProcedure.c)
 *     EtwUnregisterTraceGuids @ 0x180051490 (EtwUnregisterTraceGuids.c)
 *     EtwEventUnregister @ 0x1800514E0 (EtwEventUnregister.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x180061648 (LdrpLogDeprecatedDllEtwEvent.c)
 *     SbCleanupTrace @ 0x180061734 (SbCleanupTrace.c)
 *     SbObtainTraceHandle @ 0x18007F2A4 (SbObtainTraceHandle.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800CB8A0 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800CB928 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800CF530 (LdrpLogFatalUserCallbackException.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180047D08 (EtwpDereferenceUmGuidEntry.c)
 *     EtwpFreeRegistration @ 0x1800515F8 (EtwpFreeRegistration.c)
 *     EtwpRemoveRegistrationFromTable @ 0x180051638 (EtwpRemoveRegistrationFromTable.c)
 *     RtlSetLastWin32Error @ 0x1800518D0 (RtlSetLastWin32Error.c)
 *     NtClose @ 0x18009D820 (NtClose.c)
 */

__int64 __fastcall EtwNotificationUnregister(unsigned __int64 a1, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx

  v4 = HIWORD(a1);
  if ( !HIWORD(a1) )
    goto LABEL_13;
  v6 = a1 & 0xFFFFFFFFFFFFLL;
  if ( (a1 & 1) != 0 || HIWORD(a1) != *(_WORD *)((a1 & 0xFFFFFFFFFFFFLL) + 0x60) || v6 == PrivateLoggerNotificationEntry )
    goto LABEL_13;
  RtlAcquireSRWLockExclusive(v6 + 72, (unsigned __int64)a2, a3, a4);
  if ( (_WORD)v4 != _InterlockedCompareExchange16((volatile signed __int16 *)(v6 + 96), 0, v4) )
  {
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v6 + 72));
LABEL_13:
    RtlSetLastWin32Error(6LL);
    return 6LL;
  }
  EtwpRemoveRegistrationFromTable(v6);
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v6 + 72));
  if ( (*(_WORD *)(v6 + 98) & 0x3FFF) != 0xA )
    NtClose(*(HANDLE *)(v6 + 88));
  v8 = *(_QWORD *)(v6 + 248);
  if ( v8 )
  {
    EtwpDereferenceUmGuidEntry(v8, v7);
    *(_QWORD *)(v6 + 248) = 0LL;
  }
  if ( a2 )
    *a2 = *(_QWORD *)(v6 + 56);
  EtwpFreeRegistration(v6);
  return 0LL;
}
