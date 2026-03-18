/*
 * XREFs of CmGetCallbackVersion @ 0x140866550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall CmGetCallbackVersion(PULONG Major, PULONG Minor)
{
  if ( Major )
    *Major = 1;
  if ( Minor )
    *Minor = 1;
}
