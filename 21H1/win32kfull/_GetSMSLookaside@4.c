/*
 * XREFs of _GetSMSLookaside@4 @ 0xD4DB4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__stdcall GetSMSLookaside(_DWORD *a1)
{
  _DWORD *result; // eax

  result = a1;
  *a1 = &SMSLookaside;
  return result;
}
