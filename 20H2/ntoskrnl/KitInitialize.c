/*
 * XREFs of KitInitialize @ 0x140A747E4
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A40FE0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwRegister @ 0x14075E4C0 (EtwRegister.c)
 *     KitpInitAitSampleRate @ 0x140A7481C (KitpInitAitSampleRate.c)
 */

NTSTATUS KitInitialize()
{
  NTSTATUS result; // eax

  KitpInitAitSampleRate();
  result = EtwRegister(&MS_Windows_AIT_Provider, 0LL, 0LL, &KitEtwHandle);
  if ( result < 0 )
    KitEtwHandle = 0LL;
  return result;
}
