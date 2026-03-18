/*
 * XREFs of _GetDpiSetting@8 @ 0xEAD44
 * Callers:
 *     <none>
 * Callees:
 *     _GetDpiSettingWithNoDefault@8 @ 0xEAD64 (_GetDpiSettingWithNoDefault@8.c)
 */

int __stdcall GetDpiSetting(int a1, _DWORD *a2)
{
  *a2 = 96;
  return GetDpiSettingWithNoDefault(a1, a2);
}
