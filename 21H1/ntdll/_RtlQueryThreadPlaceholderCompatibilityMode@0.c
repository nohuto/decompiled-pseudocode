/*
 * XREFs of _RtlQueryThreadPlaceholderCompatibilityMode@0 @ 0x4B2EB950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CHAR RtlQueryThreadPlaceholderCompatibilityMode(void)
{
  struct _TEB *v0; // eax

  v0 = NtCurrentTeb();
  if ( v0 )
    return v0->PlaceholderCompatibilityMode;
  else
    return -2;
}
