/*
 * XREFs of ?GetCachedDpiScaleValue@DC@@QBEJXZ @ 0x91366
 * Callers:
 *     _GreGetDCDpiScaleValue@4 @ 0x91320 (_GreGetDCDpiScaleValue@4.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __thiscall DC::GetCachedDpiScaleValue(DC *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 255) + 176);
}
