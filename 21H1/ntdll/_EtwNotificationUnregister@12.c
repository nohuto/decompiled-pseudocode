/*
 * XREFs of _EtwNotificationUnregister@12 @ 0x4B2D99D0
 * Callers:
 *     _SbSelectProcedure@16 @ 0x4B2B82A0 (_SbSelectProcedure@16.c)
 *     _SbObtainTraceHandle@4 @ 0x4B2B8430 (_SbObtainTraceHandle@4.c)
 *     _EtwUnregisterTraceGuids@8 @ 0x4B2D9960 (_EtwUnregisterTraceGuids@8.c)
 *     _EtwEventUnregister@8 @ 0x4B2D99B0 (_EtwEventUnregister@8.c)
 *     _SbCleanupTrace@0 @ 0x4B2DD868 (_SbCleanupTrace@0.c)
 *     _LdrpAppxEtwGenericIntegrityFailure@4 @ 0x4B32C454 (_LdrpAppxEtwGenericIntegrityFailure@4.c)
 *     _LdrpAppxEtwIntegrityFailure@12 @ 0x4B32C4D5 (_LdrpAppxEtwIntegrityFailure@12.c)
 *     _LdrpLogFatalUserCallbackException@8 @ 0x4B330333 (_LdrpLogFatalUserCallbackException@8.c)
 *     _TraceLoggingUnregister_EtwEventUnregister@4 @ 0x4B330EB8 (_TraceLoggingUnregister_EtwEventUnregister@4.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _EtwpFreeRegistration@4 @ 0x4B2D9A81 (_EtwpFreeRegistration@4.c)
 *     _EtwpRemoveRegistrationFromTable@4 @ 0x4B2D9AD8 (_EtwpRemoveRegistrationFromTable@4.c)
 *     _RtlSetLastWin32Error@4 @ 0x4B2DAB00 (_RtlSetLastWin32Error@4.c)
 *     _EtwpDereferenceUmGuidEntry@4 @ 0x4B2EE4C1 (_EtwpDereferenceUmGuidEntry@4.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 */

int __stdcall EtwNotificationUnregister(int a1, __int16 a2, _DWORD *a3)
{
  int v3; // ecx

  if ( !a2 || (a1 & 1) != 0 || a2 != *(_WORD *)(a1 + 52) || a1 == PrivateLoggerNotificationEntry )
    goto LABEL_14;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 40));
  if ( _InterlockedCompareExchange16((volatile signed __int16 *)(a1 + 52), 0, a2) != a2 )
  {
    RtlReleaseSRWLockExclusive((volatile signed __int32 *)(a1 + 40));
LABEL_14:
    RtlSetLastWin32Error(6);
    return 6;
  }
  EtwpRemoveRegistrationFromTable(a1);
  RtlReleaseSRWLockExclusive((volatile signed __int32 *)(a1 + 40));
  if ( (*(_WORD *)(a1 + 54) & 0x3FFF) != 0xA )
    NtClose(*(HANDLE *)(a1 + 48));
  v3 = *(_DWORD *)(a1 + 200);
  if ( v3 )
  {
    EtwpDereferenceUmGuidEntry(v3);
    *(_DWORD *)(a1 + 200) = 0;
  }
  if ( a3 )
    *a3 = *(_DWORD *)(a1 + 32);
  EtwpFreeRegistration(a1);
  return 0;
}
