/*
 * XREFs of SshpUninitialize @ 0x140A96734
 * Callers:
 *     SshInitialize @ 0x140A42A1C (SshInitialize.c)
 * Callees:
 *     ExUnsubscribeWnfStateChange @ 0x1406D4F50 (ExUnsubscribeWnfStateChange.c)
 *     EtwUnregister @ 0x14075BB40 (EtwUnregister.c)
 *     SleepstudyHelperDestroyLibrary @ 0x1408FE1E0 (SleepstudyHelperDestroyLibrary.c)
 *     SSHSupportEtwUnregister @ 0x1408FE308 (SSHSupportEtwUnregister.c)
 *     SSHSupportUnregisterPowerSettingCallback @ 0x1408FE324 (SSHSupportUnregisterPowerSettingCallback.c)
 */

__int64 *SshpUninitialize()
{
  REGHANDLE v0; // rcx
  __int64 *result; // rax

  if ( SshpPowerSettingHandleInitialized )
  {
    SSHSupportUnregisterPowerSettingCallback();
    SshpPowerSettingHandleInitialized = 0;
  }
  if ( SshpWnfSubscriptionInitialized )
  {
    ExUnsubscribeWnfStateChange((struct _EX_RUNDOWN_REF *)SshpWnfSubscription);
    SshpWnfSubscriptionInitialized = 0;
  }
  if ( SshpTelemetryHandleRegistered )
  {
    v0 = qword_140C04700;
    qword_140C04700 = 0LL;
    dword_140C046E0 = 0;
    EtwUnregister(v0);
    SshpTelemetryHandleRegistered = 0;
  }
  if ( SshpTraceHandleRegistered )
  {
    SSHSupportEtwUnregister();
    SshpTraceHandleRegistered = 0;
  }
  while ( 1 )
  {
    result = &SshpLibraryList;
    if ( (__int64 *)SshpLibraryList == &SshpLibraryList )
      break;
    SleepstudyHelperDestroyLibrary((ULONG *)SshpLibraryList);
  }
  SshpInitialized = 0;
  return result;
}
