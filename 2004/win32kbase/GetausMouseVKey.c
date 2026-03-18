/*
 * XREFs of GetausMouseVKey @ 0x1C005FA00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall GetausMouseVKey(_QWORD *a1)
{
  void *result; // rax

  result = &ausMouseVKey;
  *a1 = &ausMouseVKey;
  return result;
}
