/*
 * XREFs of _DrawFrame@16 @ 0xC2994
 * Callers:
 *     _xxxDrawCaptionBar@12 @ 0x8F42C (_xxxDrawCaptionBar@12.c)
 *     ?DrawSwitchWndHilite@@YGXPAUtagSwitchWndInfo@@PAUHDC__@@HHH@Z @ 0x15C04A (-DrawSwitchWndHilite@@YGXPAUtagSwitchWndInfo@@PAUHDC__@@HHH@Z.c)
 *     _xxxMNDrawFullNC@12 @ 0x1A99B8 (_xxxMNDrawFullNC@12.c)
 * Callees:
 *     _GrePolyPatBlt@20 @ 0x722C4 (_GrePolyPatBlt@20.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall DrawFrame(HDC a1, int *a2, int a3, int a4)
{
  int v4; // ebx
  int v5; // edi
  int v6; // eax
  int v7; // edx
  int v9; // [esp+10h] [ebp-68h]
  int v10; // [esp+18h] [ebp-60h]
  _DWORD v11[3]; // [esp+20h] [ebp-58h] BYREF
  int v12; // [esp+2Ch] [ebp-4Ch]
  int v13; // [esp+30h] [ebp-48h]
  int v14; // [esp+34h] [ebp-44h]
  int v15; // [esp+38h] [ebp-40h]
  int v16; // [esp+3Ch] [ebp-3Ch]
  int v17; // [esp+40h] [ebp-38h]
  int v18; // [esp+44h] [ebp-34h]
  int v19; // [esp+48h] [ebp-30h]
  int v20; // [esp+4Ch] [ebp-2Ch]
  int v21; // [esp+50h] [ebp-28h]
  int v22; // [esp+54h] [ebp-24h]
  int v23; // [esp+58h] [ebp-20h]
  int v24; // [esp+5Ch] [ebp-1Ch]
  int v25; // [esp+60h] [ebp-18h]
  int v26; // [esp+64h] [ebp-14h]
  int v27; // [esp+68h] [ebp-10h]
  int v28; // [esp+6Ch] [ebp-Ch]

  v4 = a2[1];
  v9 = a2[2] - a3;
  v5 = *a2;
  v10 = v9 - *a2;
  v6 = a2[3];
  if ( (a4 & 0xFFFFFFF8) == 0xF8 )
    v7 = *(_DWORD *)(_gpsi + 4416);
  else
    v7 = *(_DWORD *)(_gpsi + 4 * (a4 >> 3) + 4292);
  v12 = v6 - a3 - v4;
  v14 = v5 + a3;
  v16 = v10;
  v21 = v10;
  v24 = v9;
  v25 = v4 + a3;
  v27 = v12;
  v11[0] = v5;
  v11[2] = a3;
  v13 = v7;
  v17 = a3;
  v18 = v7;
  v19 = v5;
  v22 = a3;
  v23 = v7;
  v26 = a3;
  v28 = v7;
  v11[1] = v4;
  v15 = v4;
  v20 = v6 - a3;
  GrePolyPatBlt(a1, (a4 & 4) != 0 ? 5898313 : 15728673, (struct XDCOBJ *)v11, 4u, a3);
  return 1;
}
