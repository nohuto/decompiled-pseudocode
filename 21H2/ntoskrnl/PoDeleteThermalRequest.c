/*
 * XREFs of PoDeleteThermalRequest @ 0x1408E2B30
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x140270E84 (PoDestroyReasonContext.c)
 *     PopDeactiveThermalRequest @ 0x1408E2D48 (PopDeactiveThermalRequest.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall PoDeleteThermalRequest(_QWORD **P)
{
  PopDeactiveThermalRequest();
  PoDestroyReasonContext(P[3]);
  ExFreePoolWithTag(P, 0x6C6F4350u);
}
