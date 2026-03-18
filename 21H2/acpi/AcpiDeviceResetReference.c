/*
 * XREFs of AcpiDeviceResetReference @ 0x1C0001EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AcpiDeviceResetReference(volatile signed __int32 *a1)
{
  _InterlockedIncrement(a1);
}
