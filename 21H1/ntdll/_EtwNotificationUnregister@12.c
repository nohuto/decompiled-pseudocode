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

ULONG __cdecl EtwNotificationUnregister(REGHANDLE RegHandle, PVOID *Context)
{
  void *v2; // ecx

  if ( !WORD2(RegHandle)
    || (RegHandle & 1) != 0
    || WORD2(RegHandle) != *(_WORD *)(RegHandle + 52)
    || (_DWORD)RegHandle == PrivateLoggerNotificationEntry )
  {
    goto LABEL_14;
  }
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(RegHandle + 40));
  if ( _InterlockedCompareExchange16((volatile signed __int16 *)(RegHandle + 52), 0, SWORD2(RegHandle)) != WORD2(RegHandle) )
  {
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(RegHandle + 40));
LABEL_14:
    RtlSetLastWin32Error(6);
    return 6;
  }
  EtwpRemoveRegistrationFromTable((PRTL_BALANCED_NODE)RegHandle);
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(RegHandle + 40));
  if ( (*(_WORD *)(RegHandle + 54) & 0x3FFF) != 0xA )
    NtClose(*(HANDLE *)(RegHandle + 48));
  v2 = *(void **)(RegHandle + 200);
  if ( v2 )
  {
    EtwpDereferenceUmGuidEntry(v2);
    *(_DWORD *)(RegHandle + 200) = 0;
  }
  if ( Context )
    *Context = *(PVOID *)(RegHandle + 32);
  EtwpFreeRegistration(RegHandle);
  return 0;
}
