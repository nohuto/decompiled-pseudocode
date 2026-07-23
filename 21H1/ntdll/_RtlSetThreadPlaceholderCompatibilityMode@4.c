/*
 * XREFs of _RtlSetThreadPlaceholderCompatibilityMode@4 @ 0x4B2E8670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CHAR __cdecl RtlSetThreadPlaceholderCompatibilityMode(CHAR Mode)
{
  struct _TEB *v1; // ecx
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
