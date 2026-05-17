/*
 * XREFs of _RtlGetSecurityDescriptorRMControl@8 @ 0x4B346410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __stdcall RtlGetSecurityDescriptorRMControl(int a1, _BYTE *a2)
{
  if ( (*(_WORD *)(a1 + 2) & 0x4000) != 0 )
  {
    *a2 = *(_BYTE *)(a1 + 1);
    return 1;
  }
  else
  {
    *a2 = 0;
    return 0;
  }
}
