/*
 * XREFs of PoDeleteThermalRequest @ 0x1408E51D0
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x1403622D4 (PoDestroyReasonContext.c)
 *     PopDeactiveThermalRequest @ 0x1408E53E8 (PopDeactiveThermalRequest.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PoDeleteThermalRequest(_QWORD **P)
{
  PopDeactiveThermalRequest();
  PoDestroyReasonContext(P[3]);
  ExFreePoolWithTag(P, 0x6C6F4350u);
}
