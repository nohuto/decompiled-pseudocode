/*
 * XREFs of _RtlSetProcessPlaceholderCompatibilityMode@4 @ 0x4B3668A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __stdcall RtlSetProcessPlaceholderCompatibilityMode(unsigned __int8 a1)
{
  struct _PEB *v1; // ecx
  char result; // al

  if ( a1 > 3u )
    return -1;
  v1 = NtCurrentPeb();
  if ( !v1 )
    return -3;
  result = v1->PlaceholderCompatibilityMode;
  v1->PlaceholderCompatibilityMode = a1;
  return result;
}
