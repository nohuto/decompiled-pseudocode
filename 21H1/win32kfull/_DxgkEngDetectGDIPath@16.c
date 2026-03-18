/*
 * XREFs of _DxgkEngDetectGDIPath@16 @ 0x1D42D7
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalSpritesCollision@@YGHPAUHDEV__@@PAUHWND__@@PAUHRGN__@@@Z @ 0x1D3470 (-InternalSpritesCollision@@YGHPAUHDEV__@@PAUHWND__@@PAUHRGN__@@@Z.c)
 *     ?OverlapCheck@@YGHPAUHDEV__@@PAUHRGN__@@@Z @ 0x1D370A (-OverlapCheck@@YGHPAUHDEV__@@PAUHRGN__@@@Z.c)
 *     ?StateFlags@PDEVOBJ@@QBEKXZ @ 0x1D37A5 (-StateFlags@PDEVOBJ@@QBEKXZ.c)
 */

int __stdcall DxgkEngDetectGDIPath(int a1, _DWORD *a2, int a3, HDEV a4)
{
  int v4; // esi
  int i; // eax
  char v6; // al
  int v7; // eax
  int v8; // ebx
  HWND v11; // [esp+0h] [ebp-10h]
  HRGN v12; // [esp+4h] [ebp-Ch]
  int v13; // [esp+Ch] [ebp-4h] BYREF

  if ( UserIsRemoteConnection() )
    return 1;
  if ( ((unsigned int)&loc_20000 & a2[6]) != 0 )
  {
    v4 = 0;
    for ( i = hdevEnumerate(0); ; i = hdevEnumerate(v8) )
    {
      v8 = i;
      if ( !i )
        break;
      v13 = i;
      if ( *(_DWORD **)(i + 16) == a2 && ((unsigned int)&loc_20400 & *(_DWORD *)(i + 24)) == 0 && !v4 )
      {
        v6 = PDEVOBJ::StateFlags((PDEVOBJ *)&v13);
        if ( (v6 & 8) != 0 && (v6 & 1) != 0 )
        {
          v4 = 1;
        }
        else
        {
          if ( *(_DWORD *)(*(_DWORD *)(v8 + 1832) + 200) == a1 && *(_DWORD *)(v8 + 1444) > 8u )
            v7 = InternalSpritesCollision(a3, v8, a4, v11, v12);
          else
            v7 = OverlapCheck(v8, a4);
          v4 = v7;
        }
      }
    }
  }
  else if ( *(_DWORD *)(a2[458] + 200) == a1 && a2[361] > 8u )
  {
    return InternalSpritesCollision(a3, (int)a2, a4, v11, v12);
  }
  else
  {
    return OverlapCheck((int)a2, a4);
  }
  return v4;
}
