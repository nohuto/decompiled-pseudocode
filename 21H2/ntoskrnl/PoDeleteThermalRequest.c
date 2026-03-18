/*
 * XREFs of PoDeleteThermalRequest @ 0x14098B2F0
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x14036B090 (PoDestroyReasonContext.c)
 *     PopDeactiveThermalRequest @ 0x14098B5B8 (PopDeactiveThermalRequest.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PoDeleteThermalRequest(_QWORD **P)
{
  PopDeactiveThermalRequest();
  PoDestroyReasonContext(P[3]);
  ExFreePoolWithTag(P, 0x6C6F4350u);
}
