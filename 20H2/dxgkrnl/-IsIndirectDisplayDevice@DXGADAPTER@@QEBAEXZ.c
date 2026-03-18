/*
 * XREFs of ?IsIndirectDisplayDevice@DXGADAPTER@@QEBAEXZ @ 0x1C0006528
 * Callers:
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0176AD0 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DXGADAPTER::IsIndirectDisplayDevice(DXGADAPTER *this)
{
  return BYTE1(*((_DWORD *)this + 87)) & 1;
}
