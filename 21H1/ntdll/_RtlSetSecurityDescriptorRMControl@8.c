/*
 * XREFs of _RtlSetSecurityDescriptorRMControl@8 @ 0x4B3472D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __stdcall RtlSetSecurityDescriptorRMControl(int a1, char *a2)
{
  __int16 v2; // ax
  char result; // al

  v2 = *(_WORD *)(a1 + 2);
  if ( a2 )
  {
    *(_WORD *)(a1 + 2) = v2 | 0x4000;
    result = *a2;
  }
  else
  {
    *(_WORD *)(a1 + 2) = v2 & 0xBFFF;
    result = 0;
  }
  *(_BYTE *)(a1 + 1) = result;
  return result;
}
