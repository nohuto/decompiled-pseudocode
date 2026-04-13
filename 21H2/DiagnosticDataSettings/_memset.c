/*
 * XREFs of _memset @ 0x10004BC6
 * Callers:
 *     _TelpReadUsersPolicySetting@12 @ 0x10002C36 (_TelpReadUsersPolicySetting@12.c)
 *     _TelIsOsInProcessorMode@4 @ 0x10003070 (_TelIsOsInProcessorMode@4.c)
 *     _TelGetRegionalSettingsValue@12 @ 0x10003210 (_TelGetRegionalSettingsValue@12.c)
 *     _McGenControlCallbackV2@36 @ 0x10003630 (_McGenControlCallbackV2@36.c)
 *     ?WilFailFast@details@wil@@YGXABUFailureInfo@2@@Z @ 0x10003D06 (-WilFailFast@details@wil@@YGXABUFailureInfo@2@@Z.c)
 *     ___scrt_fastfail @ 0x10004661 (___scrt_fastfail.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset(void *a1, int Val, size_t Size)
{
  return _memset(a1, Val, Size);
}
