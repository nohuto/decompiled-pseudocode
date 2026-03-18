/*
 * XREFs of _IsWindowHolographicForHitTest@4 @ 0x268C0
 * Callers:
 *     ?IsCompositionInputWindowForHitTest@@YGHPAUtagWND@@@Z @ 0x11E02 (-IsCompositionInputWindowForHitTest@@YGHPAUtagWND@@@Z.c)
 *     ?xxxDCEWindowHitTest2Internal@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x26470 (-xxxDCEWindowHitTest2Internal@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagDCE_WINDOW_HIT_TEST_ARGS.c)
 *     _IsWindowEffectivelyCloaked@4 @ 0xAB818 (_IsWindowEffectivelyCloaked@4.c)
 * Callees:
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 */

int __thiscall IsWindowHolographicForHitTest(_DWORD *this)
{
  _DWORD *v1; // esi
  int result; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // ebx
  int v6; // edx
  int v7; // ecx
  const void *Prop; // eax
  __int16 v9; // di
  _DWORD v10[9]; // [esp+Ch] [ebp-24h] BYREF

  v1 = this;
  if ( !this )
    return 0;
  v10[0] = 0;
  do
  {
    result = v1[14];
    if ( result )
    {
      v3 = v1[3];
      v4 = 0;
      if ( v3 )
      {
        v5 = *(_DWORD *)(v3 + 4);
        if ( v5 )
          v4 = *(_DWORD *)(v5 + 12);
      }
      if ( result == v4 )
        break;
    }
    v1 = (_DWORD *)v1[14];
  }
  while ( result );
  v6 = 0;
  if ( v3 )
  {
    v7 = *(_DWORD *)(v3 + 4);
    if ( v7 )
      v6 = *(_DWORD *)(v7 + 12);
  }
  if ( (result == v6 || (*(_BYTE *)(v1[5] + 18) & 8) != 0 && _GetTopLevelWindow(v1))
    && ((Prop = (const void *)RealGetProp(v1[20], (unsigned __int16)atomDWMProp, 1)) == 0
      ? (v9 = 0)
      : (qmemcpy(v10, Prop, sizeof(v10)), v9 = v10[0]),
        (v9 & 0x2000) != 0) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
