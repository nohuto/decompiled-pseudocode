/*
 * XREFs of HUBPSM20_GettingPortLostChangesOnStart @ 0x1C0011900
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_GetPortLostChangeEvent @ 0x1C0004E68 (HUBHTX_GetPortLostChangeEvent.c)
 */

__int64 __fastcall HUBPSM20_GettingPortLostChangesOnStart(__int64 a1)
{
  return HUBHTX_GetPortLostChangeEvent(*(_QWORD *)(a1 + 960));
}
