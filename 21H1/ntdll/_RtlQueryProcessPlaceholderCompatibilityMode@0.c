/*
 * XREFs of _RtlQueryProcessPlaceholderCompatibilityMode@0 @ 0x4B366880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CHAR RtlQueryProcessPlaceholderCompatibilityMode(void)
{
  struct _PEB *v0; // eax

  v0 = NtCurrentPeb();
  if ( v0 )
    return v0->PlaceholderCompatibilityMode;
  else
    return -3;
}
