/*
 * XREFs of _DxgkEngAddRedirBitmapD3DDirtyRgn@8 @ 0xB9366
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QAEXXZ @ 0x7AB50 (-vAltUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     _GreAddBitmapD3DDirtyRgn@12 @ 0xB93E6 (_GreAddBitmapD3DDirtyRgn@12.c)
 */

void __stdcall DxgkEngAddRedirBitmapD3DDirtyRgn(int a1, _DWORD *a2)
{
  int *v2; // eax
  int *v3; // esi
  int v4; // ecx
  int v5; // eax
  void (__stdcall *v6)(int, _DWORD *); // edx
  int *v7[3]; // [esp+4h] [ebp-Ch] BYREF

  v7[1] = 0;
  v7[2] = 0;
  v2 = (int *)HmgShareLockEx(a1, 1, 0);
  v3 = v2;
  v7[0] = v2;
  if ( v2 )
  {
    v4 = v2[9];
    if ( v4 )
    {
      v5 = v2[126];
      if ( (*(_BYTE *)(v5 + 76) & 1) != 0 )
      {
        ++*(_DWORD *)(v5 + 56);
        v6 = *(void (__stdcall **)(int, _DWORD *))(v4 + 2292);
        if ( v6 )
          v6(v3[126] != 0 ? v3[126] + 16 : 0, a2);
      }
    }
    if ( a2 )
      GreAddBitmapD3DDirtyRgn(v3[122], *a2, a2[1]);
    XDCOBJ::vAltUnlockFast(v7);
  }
}
