/*
 * XREFs of _IsNonClientDpiScalingEnabledX@4 @ 0x1512C0
 * Callers:
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 * Callees:
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 */

BOOL __thiscall IsNonClientDpiScalingEnabledX(_DWORD *this)
{
  int v1; // esi

  v1 = this[5];
  return (*(_DWORD *)(v1 + 184) & 0xF) == 2 && _IsTopLevelWindow(this) && (*(_DWORD *)(v1 + 144) & 0x10000000) != 0;
}
