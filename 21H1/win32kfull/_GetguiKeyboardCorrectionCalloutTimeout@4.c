/*
 * XREFs of _GetguiKeyboardCorrectionCalloutTimeout@4 @ 0xECA7C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__stdcall GetguiKeyboardCorrectionCalloutTimeout(_DWORD *a1)
{
  _DWORD *result; // eax

  result = a1;
  *a1 = &guiKeyboardCorrectionCalloutTimeout;
  return result;
}
