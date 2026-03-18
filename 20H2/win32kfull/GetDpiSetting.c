/*
 * XREFs of GetDpiSetting @ 0x1C0086360
 * Callers:
 *     <none>
 * Callees:
 *     GetDpiSettingWithNoDefault @ 0x1C0086380 (GetDpiSettingWithNoDefault.c)
 */

__int64 __fastcall GetDpiSetting(__int64 a1, _DWORD *a2)
{
  *a2 = 96;
  return GetDpiSettingWithNoDefault();
}
