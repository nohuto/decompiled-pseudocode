/*
 * XREFs of DrawFrame @ 0x1C014CC98
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C005E728 (xxxDrawCaptionBar.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F3270 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     xxxMNDrawFullNC @ 0x1C024DAAC (xxxMNDrawFullNC.c)
 * Callees:
 *     GrePolyPatBlt @ 0x1C0062084 (GrePolyPatBlt.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall DrawFrame(HDC a1, int *a2, int a3, int a4)
{
  int v4; // r14d
  int v5; // r10d
  int v6; // r15d
  int v7; // r11d
  int v8; // ebx
  __int64 v9; // rdx
  _DWORD v11[4]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v12; // [rsp+40h] [rbp-29h]
  int v13; // [rsp+48h] [rbp-21h]
  int v14; // [rsp+4Ch] [rbp-1Dh]
  int v15; // [rsp+50h] [rbp-19h]
  int v16; // [rsp+54h] [rbp-15h]
  __int64 v17; // [rsp+58h] [rbp-11h]
  int v18; // [rsp+60h] [rbp-9h]
  int v19; // [rsp+64h] [rbp-5h]
  int v20; // [rsp+68h] [rbp-1h]
  int v21; // [rsp+6Ch] [rbp+3h]
  __int64 v22; // [rsp+70h] [rbp+7h]
  int v23; // [rsp+78h] [rbp+Fh]
  int v24; // [rsp+7Ch] [rbp+13h]
  int v25; // [rsp+80h] [rbp+17h]
  int v26; // [rsp+84h] [rbp+1Bh]
  __int64 v27; // [rsp+88h] [rbp+1Fh]

  v4 = a2[2] - a3;
  v5 = *a2;
  v6 = a2[3] - a3;
  v7 = a2[1];
  v8 = v4 - *a2;
  if ( (a4 & 0xFFFFFFF8) == 0xF8 )
    v9 = *(_QWORD *)(gpsi + 4944LL);
  else
    v9 = *(_QWORD *)(gpsi + 8 * ((__int64)a4 >> 3) + 4696);
  v11[2] = a3;
  v13 = v5 + a3;
  v11[3] = v6 - v7;
  v12 = v9;
  v16 = a3;
  v17 = v9;
  v21 = a3;
  v22 = v9;
  v25 = a3;
  v26 = v6 - v7;
  v27 = v9;
  v24 = v7 + a3;
  v11[0] = v5;
  v11[1] = v7;
  v14 = v7;
  v15 = v8;
  v18 = v5;
  v19 = v6;
  v20 = v8;
  v23 = v4;
  GrePolyPatBlt(a1, (a4 & 4) != 0 ? 5898313 : 15728673, (struct _POLYPATBLT *)v11, 4u);
  return 1LL;
}
