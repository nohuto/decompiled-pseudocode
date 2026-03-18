/*
 * XREFs of ?PerformWin8DpiUpgrade@@YGHPAU_UNICODE_STRING@@K@Z @ 0x14341A
 * Callers:
 *     ?PerformLegacyDpiUpgrade@@YGHPAU_UNICODE_STRING@@K@Z @ 0xD6204 (-PerformLegacyDpiUpgrade@@YGHPAU_UNICODE_STRING@@K@Z.c)
 * Callees:
 *     _GetDpiSettingWithNoDefault@8 @ 0xEAD64 (_GetDpiSettingWithNoDefault@8.c)
 */

BOOL __fastcall PerformWin8DpiUpgrade(int a1, int a2)
{
  NTSTATUS v5; // [esp+8h] [ebp-8h] BYREF
  BOOL v6; // [esp+Ch] [ebp-4h] BYREF

  v6 = 0;
  if ( a2 )
  {
    v5 = 0;
    GetDpiSettingWithNoDefault(1, &v5);
    v6 = a2 != v5;
  }
  FastWriteProfileValue(a1, 4, L"Win8DpiScaling", 4, &v6, 4);
  return v6;
}
