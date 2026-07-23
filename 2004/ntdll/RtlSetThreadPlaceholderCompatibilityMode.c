/*
 * XREFs of RtlSetThreadPlaceholderCompatibilityMode @ 0x18007CA80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CHAR __cdecl RtlSetThreadPlaceholderCompatibilityMode(CHAR Mode)
{
  struct _TEB *v1; // rdx
  CHAR result; // al

  if ( (unsigned __int8)Mode > 3u )
    return -1;
  v1 = NtCurrentTeb();
  if ( !v1 )
    return -2;
  result = v1->PlaceholderCompatibilityMode;
  v1->PlaceholderCompatibilityMode = Mode;
  return result;
}
