/*
 * XREFs of wcscmp_0 @ 0x1800EEEAF
 * Callers:
 *     ?IsFeedsAllowedOnSKU@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z @ 0x1800E2034 (-IsFeedsAllowedOnSKU@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z.c)
 *     ?IsCortanaAllowedOnSKU@CortanaAvailability@@YAJPEAE@Z @ 0x1801FA8F8 (-IsCortanaAllowedOnSKU@CortanaAvailability@@YAJPEAE@Z.c)
 *     ?ShouldLaunchCortanaOnPPI@XamlLauncher@@AEAA_NPEAUHSTRING__@@@Z @ 0x18032E484 (-ShouldLaunchCortanaOnPPI@XamlLauncher@@AEAA_NPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcscmp_0(const wchar_t *String1, const wchar_t *String2)
{
  return wcscmp(String1, String2);
}
