/*
 * XREFs of PopDiagSleepStudyInitialize @ 0x14077F03C
 * Callers:
 *     PopDiagInitialize @ 0x140A42B6C (PopDiagInitialize.c)
 * Callees:
 *     EtwRegister @ 0x14074F8E0 (EtwRegister.c)
 *     PopSleepstudyInitialize @ 0x140A3CCEC (PopSleepstudyInitialize.c)
 */

__int64 PopDiagSleepStudyInitialize()
{
  NTSTATUS v0; // ebx

  if ( PopDiagSleepStudyHandleRegistered )
  {
    v0 = -1073740008;
  }
  else
  {
    v0 = EtwRegister(&SLEEPSTUDY_ETW_PROVIDER, 0LL, 0LL, &PopDiagSleepStudyHandle);
    if ( v0 >= 0 )
      PopDiagSleepStudyHandleRegistered = 1;
  }
  PopSleepstudyInitialize();
  return (unsigned int)v0;
}
