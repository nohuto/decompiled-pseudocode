/*
 * XREFs of ?bQueryValueKey@@YAHPEBGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z @ 0x1C001C2EC
 * Callers:
 *     bInitOneStockFont @ 0x1C03931B0 (bInitOneStockFont.c)
 *     InitializeDefaultFamilyFonts @ 0x1C039320C (InitializeDefaultFamilyFonts.c)
 *     hfontInitDefaultGuiFont @ 0x1C039334C (hfontInitDefaultGuiFont.c)
 *     bInitStockFontsInternal @ 0x1C039353C (bInitStockFontsInternal.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bQueryValueKey(PCWSTR SourceString, HANDLE KeyHandle, PVOID KeyValueInformation, ULONG Length)
{
  ULONG ResultLength; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+38h] [rbp-20h] BYREF

  ResultLength = 0;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, SourceString);
  return ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, Length, &ResultLength) >= 0;
}
