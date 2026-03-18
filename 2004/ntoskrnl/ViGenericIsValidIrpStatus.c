/*
 * XREFs of ViGenericIsValidIrpStatus @ 0x1409C4510
 * Callers:
 *     <none>
 * Callees:
 *     IoIsValidIrpStatus @ 0x1409C43C0 (IoIsValidIrpStatus.c)
 */

bool __fastcall ViGenericIsValidIrpStatus(__int64 a1, unsigned int a2)
{
  return IoIsValidIrpStatus(a2);
}
