/*
 * XREFs of _xxxEnableNonClientDpiScaling@4 @ 0x1522FC
 * Callers:
 *     _NtUserEnableNonClientDpiScaling@4 @ 0x16144D (_NtUserEnableNonClientDpiScaling@4.c)
 * Callees:
 *     _UpdateWindowSpriteDPI@8 @ 0x23C14 (_UpdateWindowSpriteDPI@8.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 */

int __thiscall xxxEnableNonClientDpiScaling(_DWORD *this)
{
  int *v2; // esi
  int v3; // eax
  int v4; // eax

  v2 = (int *)this[5];
  if ( (v2[46] & 0xF) != 2 || !_IsTopLevelWindow(this) || v2[3] < 0 )
    return 0;
  v3 = v2[36];
  if ( (v3 & 0x10000000) == 0 )
  {
    v2[36] = v3 | 0x10000000;
    *(_DWORD *)(this[5] + 144) |= 0x8000000u;
    v4 = ValidateHmonitorNoRip(*(_DWORD *)(this[5] + 164));
    UpdateWindowSpriteDPI((int)this, v4);
    xxxSetWindowPos((int)this, 0, 0, 0, 0, 0, 55);
  }
  return 1;
}
