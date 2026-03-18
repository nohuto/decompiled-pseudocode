/*
 * XREFs of PopPepStartDeviceUnregisterActivity @ 0x1403CCAB0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 */

char __fastcall PopPepStartDeviceUnregisterActivity(__int64 a1)
{
  KeSetEvent((PRKEVENT)(a1 + 40), 0, 0);
  return 0;
}
