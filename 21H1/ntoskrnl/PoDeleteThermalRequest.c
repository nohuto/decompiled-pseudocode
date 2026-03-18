/*
 * XREFs of PoDeleteThermalRequest @ 0x1408DE130
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x14033D208 (PoDestroyReasonContext.c)
 *     PopDeactiveThermalRequest @ 0x1408DE348 (PopDeactiveThermalRequest.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PoDeleteThermalRequest(_QWORD **P)
{
  PopDeactiveThermalRequest();
  PoDestroyReasonContext(P[3]);
  ExFreePoolWithTag(P, 0x6C6F4350u);
}
