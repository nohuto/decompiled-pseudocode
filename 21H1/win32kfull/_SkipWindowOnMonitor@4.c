/*
 * XREFs of _SkipWindowOnMonitor@4 @ 0x92526
 * Callers:
 *     ?xxxActivateOnMinimize@@YGHPAUtagWND@@@Z @ 0x256DC (-xxxActivateOnMinimize@@YGHPAUtagWND@@@Z.c)
 *     ?NextTopWindow@FindNextTopWindow@@YGPAUtagWND@@PBU2@0W4FindOption@1@@Z @ 0x92358 (-NextTopWindow@FindNextTopWindow@@YGPAUtagWND@@PBU2@0W4FindOption@1@@Z.c)
 *     _lambda_01ca0a41559b7f40c231bae09045841d_::operator() @ 0xEF870 (_lambda_01ca0a41559b7f40c231bae09045841d_--operator().c)
 * Callees:
 *     ?_MonitorFromWindowInternal@@YGPAUtagMONITOR@@PAUtagWND@@KH@Z @ 0x33616 (-_MonitorFromWindowInternal@@YGPAUtagMONITOR@@PAUtagWND@@KH@Z.c)
 */

int __thiscall SkipWindowOnMonitor(_DWORD *this)
{
  int v1; // edi
  int v2; // esi
  _DWORD *v3; // ebx
  _DWORD *i; // edi
  unsigned int v6; // [esp+0h] [ebp-10h]
  unsigned int v7; // [esp+0h] [ebp-10h]
  int v8; // [esp+4h] [ebp-Ch]
  int v9; // [esp+4h] [ebp-Ch]
  struct tagMONITOR *v10; // [esp+Ch] [ebp-4h]

  v1 = this[3];
  v2 = 0;
  if ( v1 && *(_DWORD *)(this[5] + 148) == 1 && *(_DWORD *)(v1 + 176) )
  {
    v3 = (_DWORD *)(v1 + 192);
    v10 = _MonitorFromWindowInternal(0, (int)this, 0, v6, v8);
    for ( i = *(_DWORD **)(v1 + 192); i != v3; i = (_DWORD *)*i )
    {
      if ( i[3] && _MonitorFromWindowInternal(0, i[2], 0, v7, v9) == v10 )
        return 1;
    }
  }
  return v2;
}
