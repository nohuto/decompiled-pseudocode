/*
 * XREFs of HUBPSM20_DisablingPortOnPortCycleWithTimer @ 0x1C00107A0
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_DisablePortUsingControlTransfer @ 0x1C0004254 (HUBHTX_DisablePortUsingControlTransfer.c)
 */

__int64 __fastcall HUBPSM20_DisablingPortOnPortCycleWithTimer(__int64 a1)
{
  HUBHTX_DisablePortUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
