/*
 * XREFs of ?xxxMoveFocusAway@@YGXPBUtagWND@@@Z @ 0x72D9A
 * Callers:
 *     _xxxDW_SendDestroyMessages@4 @ 0x72C7C (_xxxDW_SendDestroyMessages@4.c)
 *     ?xxxShowWindowEx@@YGHPAUtagWND@@EK@Z @ 0xF511E (-xxxShowWindowEx@@YGHPAUtagWND@@EK@Z.c)
 * Callees:
 *     ?xxxSetFocus@@YGPAUtagWND@@PAU1@@Z @ 0x17FFC (-xxxSetFocus@@YGPAUtagWND@@PAU1@@Z.c)
 *     _zzzDestroyCaret@0 @ 0x7DA96 (_zzzDestroyCaret@0.c)
 */

void __thiscall xxxMoveFocusAway(_DWORD *this)
{
  int v2; // eax
  int v3; // ecx
  _DWORD v4[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( this == *(_DWORD **)(*(_DWORD *)(_gptiCurrent + 236) + 60) )
  {
    if ( (*(_BYTE *)(this[5] + 23) & 0xC0) == 0x40 )
    {
      v2 = *(_DWORD *)(_gptiCurrent + 228);
      v3 = this[14];
      v4[2] = 0;
      v4[0] = v2;
      *(_DWORD *)(_gptiCurrent + 228) = v4;
      v4[1] = v3;
      if ( v3 )
        HMLockObject(v3);
      xxxSetFocus((int *)this[14]);
      ThreadUnlock1();
    }
    else
    {
      xxxSetFocus(0);
    }
  }
  if ( this == *(_DWORD **)(*(_DWORD *)(_gptiCurrent + 236) + 216) )
    zzzDestroyCaret();
}
