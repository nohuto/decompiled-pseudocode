/*
 * XREFs of PopDiagSleepStudyInitialize @ 0x140796D90
 * Callers:
 *     PopDiagInitialize @ 0x140A41D18 (PopDiagInitialize.c)
 * Callees:
 *     EtwRegister @ 0x140762E70 (EtwRegister.c)
 *     PopSleepstudyInitialize @ 0x140A41C80 (PopSleepstudyInitialize.c)
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
