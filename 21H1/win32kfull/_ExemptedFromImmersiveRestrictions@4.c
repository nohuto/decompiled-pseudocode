/*
 * XREFs of _ExemptedFromImmersiveRestrictions@4 @ 0x141D39
 * Callers:
 *     _xxxEnableWindow@8 @ 0x18A3C (_xxxEnableWindow@8.c)
 *     _zzzAttachThreadInput@12 @ 0xC76E4 (_zzzAttachThreadInput@12.c)
 * Callees:
 *     _IAMThreadAccessGranted@4 @ 0x26140 (_IAMThreadAccessGranted@4.c)
 */

int __thiscall ExemptedFromImmersiveRestrictions(_DWORD *this)
{
  int result; // eax

  if ( *(int *)(this[58] + 8) < 0 )
    return 1;
  if ( IsImmersiveBroker(this[58]) )
    return 1;
  result = IAMThreadAccessGranted(this);
  if ( result )
    return 1;
  return result;
}
