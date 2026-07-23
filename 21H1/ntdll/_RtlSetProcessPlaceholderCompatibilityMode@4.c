/*
 * XREFs of _RtlSetProcessPlaceholderCompatibilityMode@4 @ 0x4B3668A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CHAR __cdecl RtlSetProcessPlaceholderCompatibilityMode(CHAR Mode)
{
  struct _PEB *v1; // ecx
  CHAR result; // al

  if ( (unsigned __int8)Mode > 3u )
    return -1;
  v1 = NtCurrentPeb();
  if ( !v1 )
    return -3;
  result = v1->PlaceholderCompatibilityMode;
  v1->PlaceholderCompatibilityMode = Mode;
  return result;
}
