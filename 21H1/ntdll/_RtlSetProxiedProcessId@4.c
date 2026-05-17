/*
 * XREFs of _RtlSetProxiedProcessId@4 @ 0x4B2F2240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __stdcall RtlSetProxiedProcessId(unsigned int a1)
{
  struct _TEB *v1; // edx
  unsigned int result; // eax

  v1 = NtCurrentTeb();
  if ( !v1 )
    return 0;
  result = v1->ProxiedProcessId;
  v1->ProxiedProcessId = a1;
  return result;
}
