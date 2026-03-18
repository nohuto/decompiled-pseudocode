/*
 * XREFs of GetguiKeyboardCorrectionCalloutTimeout @ 0x1C012BEE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int *__fastcall GetguiKeyboardCorrectionCalloutTimeout(_QWORD *a1)
{
  int *result; // rax

  result = &guiKeyboardCorrectionCalloutTimeout;
  *a1 = &guiKeyboardCorrectionCalloutTimeout;
  return result;
}
