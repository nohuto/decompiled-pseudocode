/*
 * XREFs of _RtlActivateActivationContext@12 @ 0x4B2E34B0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlActivateActivationContextEx@16 @ 0x4B2E3500 (_RtlActivateActivationContextEx@16.c)
 */

int __stdcall RtlActivateActivationContext(int a1, int a2, _DWORD *a3)
{
  int result; // eax

  if ( a3 )
    *a3 = 0;
  if ( a1 || !a3 )
    return -1073741811;
  result = RtlActivateActivationContextEx(0, NtCurrentTeb(), a2, a3);
  if ( result >= 0 )
    return 0;
  return result;
}
