/*
 * XREFs of _IsModalMenuStarted@4 @ 0x15BA82
 * Callers:
 *     ?xxxPointerActivateInternal@@YGXPAUtagWND@@FKPBUtagPOINTEREVENTINT@@H@Z @ 0x15B536 (-xxxPointerActivateInternal@@YGXPAUtagWND@@FKPBUtagPOINTEREVENTINT@@H@Z.c)
 *     _xxxMNDismissIfOffMenu@8 @ 0x1984BA (_xxxMNDismissIfOffMenu@8.c)
 * Callees:
 *     <none>
 */

int __thiscall IsModalMenuStarted(_DWORD *this)
{
  int v1; // eax
  int v2; // ecx

  v1 = this[82];
  if ( !v1 )
    return 0;
  v2 = 1;
  if ( (*(_DWORD *)(v1 + 4) & 0x101) != 1 )
    return 0;
  return v2;
}
