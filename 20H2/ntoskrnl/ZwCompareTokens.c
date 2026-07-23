/*
 * XREFs of ZwCompareTokens @ 0x1403F9510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCompareTokens(HANDLE FirstTokenHandle, HANDLE SecondTokenHandle, PBOOLEAN Equal)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FirstTokenHandle);
}
