/*
 * XREFs of _DrawThumb2@24 @ 0xC1CFA
 * Callers:
 *     ?xxxDrawSB2@@YGXPAUtagWND@@PAUtagSBCALC@@PAUHDC__@@HI@Z @ 0xC1B60 (-xxxDrawSB2@@YGXPAUtagWND@@PAUtagSBCALC@@PAUHDC__@@HI@Z.c)
 *     ?DrawCtlThumb@@YGXPAUtagSBWND@@@Z @ 0x1A28A9 (-DrawCtlThumb@@YGXPAUtagSBWND@@@Z.c)
 *     ?xxxDrawThumb@@YGXPAUtagWND@@PAUtagSBCALC@@H@Z @ 0x1A2EF2 (-xxxDrawThumb@@YGXPAUtagWND@@PAUtagSBCALC@@H@Z.c)
 *     ?xxxMoveThumb@@YGXPAUtagWND@@PAUtagSBCALC@@H@Z @ 0x1A30D9 (-xxxMoveThumb@@YGXPAUtagWND@@PAUtagSBCALC@@H@Z.c)
 *     _xxxSBWndProc@16 @ 0x1A3EEF (_xxxSBWndProc@16.c)
 * Callees:
 *     _NtGdiPatBlt@24 @ 0x56C7C (_NtGdiPatBlt@24.c)
 *     _DrawPushButton@16 @ 0x904D2 (_DrawPushButton@16.c)
 *     ?DrawGroove@@YGXPAUHDC__@@PAUHBRUSH__@@PAUtagRECT@@H@Z @ 0xC1DEE (-DrawGroove@@YGXPAUHDC__@@PAUHBRUSH__@@PAUtagRECT@@H@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?RecalcTrackRect@@YGXPAUtagSBTRACK@@@Z @ 0x1A2C4E (-RecalcTrackRect@@YGXPAUtagSBTRACK@@@Z.c)
 */

void __fastcall DrawThumb2(int a1, _DWORD *a2, HDC a3, int a4, HBRUSH a5, char a6)
{
  int v7; // ecx
  int v8; // edx
  struct HDC__ *v9; // edi
  struct HDC__ *v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // edx
  int v15; // eax
  _DWORD *v16; // edi
  int v17; // ecx
  int *v18; // eax
  int v19; // edx
  int v20; // ecx
  struct tagRECT *v21; // [esp+0h] [ebp-30h]
  int v22; // [esp+4h] [ebp-2Ch]
  struct HDC__ v24; // [esp+1Ch] [ebp-14h] BYREF
  _BYTE v25[12]; // [esp+20h] [ebp-10h] BYREF

  v24.unused = 0;
  memset(v25, 0, sizeof(v25));
  if ( a2[4] < a2[5] )
  {
    v7 = a2[6];
    v8 = a2[7];
    if ( v7 < v8 )
    {
      v9 = &v24;
      if ( a5 )
      {
        v10 = &v24;
        v9 = (struct HDC__ *)v25;
      }
      else
      {
        v10 = (struct HDC__ *)v25;
      }
      *(_DWORD *)v10 = v7;
      *((_DWORD *)v10 + 2) = v8;
      if ( (a6 & 3) == 3 || (v11 = a2[10], v12 = a2[9], v11 - v12 < a2[8]) )
      {
        *(_DWORD *)v9 = (struct HDC__)a2[9];
        v9[2] = (struct HDC__)a2[10];
        DrawGroove(&v24, a5, v21, v22);
      }
      else
      {
        v13 = a2[13];
        if ( v12 < v13 )
        {
          *((_DWORD *)v9 + 2) = v13;
          *(_DWORD *)v9 = v12;
          DrawGroove(&v24, a5, v21, v22);
          v11 = a2[10];
        }
        v14 = a2[12];
        if ( v14 < v11 )
        {
          *(_DWORD *)v9 = v14;
          *((_DWORD *)v9 + 2) = v11;
          DrawGroove(&v24, a5, v21, v22);
          v14 = a2[12];
        }
        v15 = a2[13];
        *((_DWORD *)v9 + 2) = v14;
        *(_DWORD *)v9 = v15;
        DrawPushButton(a3, &v24, 0, 0);
        v16 = *(_DWORD **)(*(_DWORD *)(a1 + 8) + 392);
        if ( v16 )
        {
          v17 = v16[9];
          if ( (v17 == 2 || v17 == 3) && a1 == v16[1] && (HBRUSH)((*v16 >> 1) & 1) == a5 )
          {
            if ( (*v16 & 8) != 0 )
            {
              RecalcTrackRect((struct tagSBTRACK *)v21);
              *v16 &= ~8u;
              v17 = v16[9];
            }
            v18 = v16 + 4;
            if ( a5 )
              v18 = v16 + 5;
            if ( v17 == 2 )
            {
              v19 = a2[13];
              v20 = *v18;
              v18[2] = v19;
            }
            else
            {
              v20 = a2[12];
              v19 = v18[2];
              *v18 = v20;
            }
            if ( v20 < v19 )
              NtGdiPatBlt(
                a3,
                v16[4],
                (struct XDCOBJ *)v16[5],
                v16[6] - v16[4],
                v16[7] - v16[5],
                (struct EXFORMOBJ *)0x550009);
          }
        }
      }
    }
  }
}
