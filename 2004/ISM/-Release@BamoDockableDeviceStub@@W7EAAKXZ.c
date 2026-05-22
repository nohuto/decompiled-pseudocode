/*
 * XREFs of ?Release@BamoDockableDeviceStub@@W7EAAKXZ @ 0x18004A750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoDockableDeviceStub::Release(__int64 a1)
{
  return BamoInputSystemPrincipal::Release((BamoInputSystemPrincipal *)(a1 - 8));
}
