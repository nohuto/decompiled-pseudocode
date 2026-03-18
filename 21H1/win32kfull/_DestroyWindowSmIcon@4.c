/*
 * XREFs of _DestroyWindowSmIcon@4 @ 0x71B5C
 * Callers:
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     ?xxxSetClassIconEnum@@YGHPAUtagWND@@J@Z @ 0x19C6E6 (-xxxSetClassIconEnum@@YGHPAUtagWND@@J@Z.c)
 *     _xxxRecreateSmallIcons@4 @ 0x1A12BF (_xxxRecreateSmallIcons@4.c)
 * Callees:
 *     @HMValidateHandleNoRip@8 @ 0x16F4A (@HMValidateHandleNoRip@8.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     ?_DestroyCursor@@YG_NPAUtagCURSOR@@K@Z @ 0x785EE (-_DestroyCursor@@YG_NPAUtagCURSOR@@K@Z.c)
 */

int __thiscall DestroyWindowSmIcon(_DWORD *this)
{
  int v2; // ecx
  int v4; // eax
  struct tagCURSOR *v5; // [esp+0h] [ebp-Ch]
  unsigned int v6; // [esp+4h] [ebp-8h]

  v2 = *(_DWORD *)(this[5] + 168);
  if ( !v2 )
    return 0;
  v4 = HMValidateHandleNoRip(v2, 3);
  if ( !v4 || *(char *)(v4 + 44) >= 0 )
    return 0;
  SetOrClrWF(0, (int)this, 0x720u, 1);
  *(_DWORD *)(this[5] + 168) = 0;
  _DestroyCursor(v5, v6);
  return 1;
}
