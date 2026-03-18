/*
 * XREFs of _EditionCancelCoolSwitch@4 @ 0x15D016
 * Callers:
 *     <none>
 * Callees:
 *     _xxxCancelCoolSwitch@0 @ 0x15D2FA (_xxxCancelCoolSwitch@0.c)
 */

int __stdcall EditionCancelCoolSwitch(_DWORD *a1)
{
  int result; // eax

  result = xxxCancelCoolSwitch();
  if ( a1 )
    *a1 = result;
  return result;
}
