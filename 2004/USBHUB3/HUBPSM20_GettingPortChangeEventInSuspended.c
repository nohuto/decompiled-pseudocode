/*
 * XREFs of HUBPSM20_GettingPortChangeEventInSuspended @ 0x1C00116F0
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_Get20PortChangeEvent @ 0x1C00045EC (HUBHTX_Get20PortChangeEvent.c)
 */

__int64 __fastcall HUBPSM20_GettingPortChangeEventInSuspended(__int64 a1)
{
  return HUBHTX_Get20PortChangeEvent(*(_QWORD *)(a1 + 960));
}
