/*
 * XREFs of ?MNDrawInsertionBar@@YGXPAUHDC__@@PAUtagITEM@@@Z @ 0xB632E
 * Callers:
 *     _xxxMenuDraw@12 @ 0xB5D6E (_xxxMenuDraw@12.c)
 *     _xxxDrawMenuItem@24 @ 0xB61DA (_xxxDrawMenuItem@24.c)
 * Callees:
 *     _GrePolyPatBlt@20 @ 0x722C4 (_GrePolyPatBlt@20.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __fastcall MNDrawInsertionBar(HDC a1, int a2)
{
  _DWORD *v2; // ebx
  int v3; // ecx
  int v4; // edi
  int v5; // edx
  int v6; // eax
  int v7; // esi
  int v8; // ecx
  int v10; // [esp+20h] [ebp-50h]
  int v11; // [esp+28h] [ebp-48h]
  int v12; // [esp+2Ch] [ebp-44h]
  _DWORD v13[6]; // [esp+30h] [ebp-40h] BYREF
  int v14; // [esp+48h] [ebp-28h]
  int v15; // [esp+4Ch] [ebp-24h]
  int v16; // [esp+50h] [ebp-20h]
  int v17; // [esp+54h] [ebp-1Ch]
  int v18; // [esp+58h] [ebp-18h]
  int v19; // [esp+5Ch] [ebp-14h]
  int v20; // [esp+60h] [ebp-10h]
  int v21; // [esp+64h] [ebp-Ch]
  int v22; // [esp+68h] [ebp-8h]

  v2 = *(_DWORD **)a2;
  v3 = *(_DWORD *)(*(_DWORD *)a2 + 4);
  v10 = v3;
  if ( v3 < 0 || (v3 & 0x40000000) != 0 )
  {
    v4 = v2[10];
    v11 = v2[9];
    v5 = *(_DWORD *)(_gpsi + 1768);
    v13[0] = v5 + v11;
    v6 = *(_DWORD *)(_gpsi + 1772);
    v13[2] = v5;
    v13[3] = v6;
    if ( v3 >= 0 )
      v7 = v4 + v2[12] - v6;
    else
      v7 = v4;
    v13[1] = v7;
    v12 = *(_DWORD *)(_gpsi + 4344);
    v13[4] = v12;
    v8 = v2[11];
    v13[5] = 2 * v5 + v11;
    v15 = v8 - 4 * v5;
    v16 = v6 / 2;
    if ( v10 >= 0 )
      v14 = v4 + v2[12] - v6 / 2;
    else
      v14 = v4;
    v18 = v11 + v8 - 2 * v5;
    v20 = v5;
    v17 = v12;
    v21 = v6;
    v22 = v12;
    v19 = v7;
    GrePolyPatBlt(a1, 0xF00021u, (struct XDCOBJ *)v13, 3u, v6);
  }
}
