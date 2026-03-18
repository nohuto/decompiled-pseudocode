/*
 * XREFs of KitInitialize @ 0x140B2DD5C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 *     KitpInitAitSampleRate @ 0x140B2DD94 (KitpInitAitSampleRate.c)
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
