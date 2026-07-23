/*
 * XREFs of _RtlActivateActivationContext@12 @ 0x4B2E34B0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlActivateActivationContextEx@16 @ 0x4B2E3500 (_RtlActivateActivationContextEx@16.c)
 */

NTSTATUS __cdecl RtlActivateActivationContext(ULONG Flags, PACTIVATION_CONTEXT ActivationContext, PULONG_PTR Cookie)
{
  NTSTATUS result; // eax

  if ( Cookie )
    *(_DWORD *)Cookie = 0;
  if ( Flags || !Cookie )
    return -1073741811;
  result = RtlActivateActivationContextEx(0, NtCurrentTeb(), ActivationContext, Cookie);
  if ( result >= 0 )
    return 0;
  return result;
}
