/*
 * XREFs of ?IsActive@DXGADAPTER@@QEBAHXZ @ 0x1C000A800
 * Callers:
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x1C03B62E0 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DXGADAPTER::IsActive(DXGADAPTER *this)
{
  return *((_DWORD *)this + 50) == 1;
}
