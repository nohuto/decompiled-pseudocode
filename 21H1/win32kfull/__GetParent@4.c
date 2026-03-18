/*
 * XREFs of __GetParent@4 @ 0xB5390
 * Callers:
 *     __GetAncestor@8 @ 0xB52FC (__GetAncestor@8.c)
 *     ?IsPwndComponentWebview@@YG_NPBUtagWND@@@Z @ 0xC42C2 (-IsPwndComponentWebview@@YG_NPBUtagWND@@@Z.c)
 *     _xxxHelpLoop@4 @ 0x1AC7AC (_xxxHelpLoop@4.c)
 * Callees:
 *     <none>
 */

int __thiscall _GetParent(_DWORD *this)
{
  char v1; // al

  v1 = *(_BYTE *)(this[5] + 23) & 0xC0;
  if ( !v1 )
    return 0;
  if ( v1 == 64 )
    return this[14];
  return this[16];
}
