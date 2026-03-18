/*
 * XREFs of _GetglpSetupPrograms@4 @ 0xD4DCC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__stdcall GetglpSetupPrograms(_DWORD *a1)
{
  _DWORD *result; // eax

  result = a1;
  *a1 = &glpSetupPrograms;
  return result;
}
