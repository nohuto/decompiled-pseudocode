/*
 * XREFs of ViGenericIsValidIrpStatus @ 0x1409C4500
 * Callers:
 *     <none>
 * Callees:
 *     IoIsValidIrpStatus @ 0x1409C43B0 (IoIsValidIrpStatus.c)
 */

bool __fastcall ViGenericIsValidIrpStatus(__int64 a1, unsigned int a2)
{
  return IoIsValidIrpStatus(a2);
}
