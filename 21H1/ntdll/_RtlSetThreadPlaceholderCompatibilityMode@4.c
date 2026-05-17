/*
 * XREFs of _RtlSetThreadPlaceholderCompatibilityMode@4 @ 0x4B2E8670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __stdcall RtlSetThreadPlaceholderCompatibilityMode(unsigned __int8 a1)
{
  struct _TEB *v1; // ecx
  char result; // al

  if ( a1 > 3u )
    return -1;
  v1 = NtCurrentTeb();
  if ( !v1 )
    return -2;
  result = v1->PlaceholderCompatibilityMode;
  v1->PlaceholderCompatibilityMode = a1;
  return result;
}
