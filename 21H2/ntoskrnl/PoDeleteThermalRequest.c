/*
 * XREFs of PoDeleteThermalRequest @ 0x1408E29D0
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x140282BD8 (PoDestroyReasonContext.c)
 *     PopDeactiveThermalRequest @ 0x1408E2BE8 (PopDeactiveThermalRequest.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall PoDeleteThermalRequest(_QWORD **P)
{
  PopDeactiveThermalRequest();
  PoDestroyReasonContext(P[3]);
  ExFreePoolWithTag(P, 0x6C6F4350u);
}
