/*
 * XREFs of HUBPSM20_EnablingInterruptsAndGettingPortEvent @ 0x1C0011430
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_Get20PortChangeEvent @ 0x1C00045EC (HUBHTX_Get20PortChangeEvent.c)
 *     HUBMUX_ReEnableInterruptTransfer @ 0x1C000F800 (HUBMUX_ReEnableInterruptTransfer.c)
 */

__int64 __fastcall HUBPSM20_EnablingInterruptsAndGettingPortEvent(__int64 a1)
{
  volatile signed __int32 *v1; // rbx
  unsigned int v2; // edi

  v1 = *(volatile signed __int32 **)(a1 + 960);
  v2 = HUBHTX_Get20PortChangeEvent((__int64)v1);
  HUBMUX_ReEnableInterruptTransfer(v1);
  return v2;
}
