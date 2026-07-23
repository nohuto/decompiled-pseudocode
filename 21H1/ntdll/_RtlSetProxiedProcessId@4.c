/*
 * XREFs of _RtlSetProxiedProcessId@4 @ 0x4B2F2240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlSetProxiedProcessId(ULONG ProxiedProcessId)
{
  struct _TEB *v1; // edx
  ULONG result; // eax

  v1 = NtCurrentTeb();
  if ( !v1 )
    return 0;
  result = v1->ProxiedProcessId;
  v1->ProxiedProcessId = ProxiedProcessId;
  return result;
}
