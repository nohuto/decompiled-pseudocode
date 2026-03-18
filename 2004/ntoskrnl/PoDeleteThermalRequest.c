/*
 * XREFs of PoDeleteThermalRequest @ 0x1408DF390
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x140276B88 (PoDestroyReasonContext.c)
 *     PopDeactiveThermalRequest @ 0x1408DF5A8 (PopDeactiveThermalRequest.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall PoDeleteThermalRequest(_QWORD **P)
{
  PopDeactiveThermalRequest();
  PoDestroyReasonContext(P[3]);
  ExFreePoolWithTag(P, 0x6C6F4350u);
}
