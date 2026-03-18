/*
 * XREFs of PopDiagSleepStudyInitialize @ 0x14077F84C
 * Callers:
 *     PopDiagInitialize @ 0x140A3D2B8 (PopDiagInitialize.c)
 * Callees:
 *     EtwRegister @ 0x14074B4C0 (EtwRegister.c)
 *     PopSleepstudyInitialize @ 0x140A3D094 (PopSleepstudyInitialize.c)
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
