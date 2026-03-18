/*
 * XREFs of _TouchTargetingCreateContact@16 @ 0x1B8BA5
 * Callers:
 *     _xxxPerformTargetingWithinPwnd@12 @ 0x17C0BC (_xxxPerformTargetingWithinPwnd@12.c)
 *     _xxxPointerSpeedHitTest@20 @ 0x17C2EC (_xxxPointerSpeedHitTest@20.c)
 *     _xxxPointerWindowHitTest@48 @ 0x17C5CD (_xxxPointerWindowHitTest@48.c)
 * Callees:
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     ?_TTAdjustContactSide@@YGXJPAJ0J@Z @ 0x1B8521 (-_TTAdjustContactSide@@YGXJPAJ0J@Z.c)
 */

int __fastcall TouchTargetingCreateContact(int *a1, int *a2, int a3, int a4)
{
  int v4; // edx
  int *v5; // edi
  BOOL v6; // eax
  bool v7; // zf
  int v8; // esi
  int v9; // edx
  int v10; // edi
  int v11; // ecx
  int v12; // ebx
  int v13; // edi
  int v14; // ecx
  int v15; // esi
  int v16; // ecx
  int result; // eax
  int v18; // esi
  int v19; // ecx
  int *v20; // [esp+0h] [ebp-28h]
  int *v21; // [esp+0h] [ebp-28h]
  int *v22; // [esp+0h] [ebp-28h]
  int *v23; // [esp+0h] [ebp-28h]
  int v24; // [esp+4h] [ebp-24h]
  int v25; // [esp+4h] [ebp-24h]
  int v26; // [esp+4h] [ebp-24h]
  int v27; // [esp+4h] [ebp-24h]
  int v28; // [esp+Ch] [ebp-1Ch]
  int v29; // [esp+10h] [ebp-18h]
  int v31; // [esp+14h] [ebp-14h]
  int v33; // [esp+20h] [ebp-8h]
  int v34; // [esp+24h] [ebp-4h]

  *(_DWORD *)(a4 + 32) = a1[1];
  *(_DWORD *)(a4 + 36) = a1[2];
  *(_DWORD *)(a4 + 180) = 1;
  *(_DWORD *)(a4 + 40) = a1[11];
  *(_DWORD *)(a4 + 16) = a1[3];
  v4 = *(_DWORD *)(a4 + 184);
  *(_DWORD *)(a4 + 20) = a1[4];
  *(_DWORD *)(a4 + 24) = a1[5];
  *(_DWORD *)(a4 + 28) = a1[6];
  *(_DWORD *)a4 = a1[7];
  *(_DWORD *)(a4 + 4) = a1[8];
  *(_DWORD *)(a4 + 8) = a1[9];
  *(_DWORD *)(a4 + 12) = a1[10];
  if ( !v4 )
  {
    *(_DWORD *)(a4 + 188) = 26458;
    v4 = 26458;
    *(_DWORD *)(a4 + 184) = 26458;
  }
  _TTAdjustContactSide((int *)(a4 + 16), a1[1], (int *)(a4 + 24), (int *)v4, v20, v24);
  _TTAdjustContactSide((int *)a4, a1[1], (int *)(a4 + 8), *(int **)(a4 + 184), v21, v25);
  _TTAdjustContactSide((int *)(a4 + 20), a1[2], (int *)(a4 + 28), *(int **)(a4 + 188), v22, v26);
  _TTAdjustContactSide((int *)(a4 + 4), a1[2], (int *)(a4 + 12), *(int **)(a4 + 188), v23, v27);
  v5 = (int *)(a4 + 16);
  if ( a2 )
  {
    if ( IntersectRect((_DWORD *)(a4 + 16), (int *)(a4 + 16), a2) )
      IntersectRect((_DWORD *)a4, (int *)a4, a2);
    else
      *(_DWORD *)(a4 + 180) = 0;
  }
  v6 = PtInRect((_DWORD *)a4, a1[1], a1[2]);
  v7 = *(_DWORD *)(a4 + 184) == 0;
  *(_DWORD *)(a4 + 176) = v6;
  if ( v7 )
  {
    *(_DWORD *)(a4 + 188) = 26458;
    *(_DWORD *)(a4 + 184) = 26458;
  }
  v8 = *v5;
  v9 = *(_DWORD *)(a4 + 24);
  v10 = v9 - *v5;
  *(_DWORD *)(a4 + 44) = 12;
  if ( v10 < 4 || (v11 = *(_DWORD *)(a4 + 28), v33 = *(_DWORD *)(a4 + 20), v34 = v11, v11 - v33 < 4) )
  {
    v19 = *(_DWORD *)(a4 + 20);
    result = *(_DWORD *)(a4 + 28);
    *(_DWORD *)(a4 + 44) = 4;
    *(_DWORD *)(a4 + 48) = v8;
    *(_DWORD *)(a4 + 52) = v19;
    *(_DWORD *)(a4 + 56) = v8;
    *(_DWORD *)(a4 + 60) = result;
    *(_DWORD *)(a4 + 64) = v9;
    *(_DWORD *)(a4 + 68) = result;
    *(_DWORD *)(a4 + 72) = v9;
    *(_DWORD *)(a4 + 76) = v19;
  }
  else
  {
    *(_DWORD *)(a4 + 48) = v8;
    *(_DWORD *)(a4 + 52) = (v11 + v33) / 2;
    v28 = (v11 + v33) / 2;
    v31 = v8 + 7 * v10 / 100;
    *(_DWORD *)(a4 + 56) = v31;
    *(_DWORD *)(a4 + 60) = v11 + 25 * (v33 - v11) / 100;
    v12 = v8 + 25 * v10 / 100;
    v13 = 7 * (v33 - v11) / 100 + v11;
    *(_DWORD *)(a4 + 64) = v12;
    *(_DWORD *)(a4 + 68) = v13;
    v29 = (v9 + v8) / 2;
    *(_DWORD *)(a4 + 72) = v29;
    *(_DWORD *)(a4 + 76) = v11;
    v14 = v9 + v8;
    v15 = v9 + v8 - v31;
    v16 = v14 - v12;
    *(_DWORD *)(a4 + 88) = v15;
    *(_DWORD *)(a4 + 80) = v16;
    *(_DWORD *)(a4 + 84) = v13;
    *(_DWORD *)(a4 + 92) = v34 + 25 * (v33 - v34) / 100;
    *(_DWORD *)(a4 + 96) = v9;
    *(_DWORD *)(a4 + 100) = v28;
    *(_DWORD *)(a4 + 112) = v16;
    *(_DWORD *)(a4 + 104) = v15;
    result = v33 - 25 * (v33 - v34) / 100;
    v18 = v33 - 7 * (v33 - v34) / 100;
    *(_DWORD *)(a4 + 108) = result;
    *(_DWORD *)(a4 + 116) = v18;
    *(_DWORD *)(a4 + 120) = v29;
    *(_DWORD *)(a4 + 124) = v33;
    *(_DWORD *)(a4 + 128) = v12;
    *(_DWORD *)(a4 + 132) = v18;
    *(_DWORD *)(a4 + 136) = v31;
    *(_DWORD *)(a4 + 140) = result;
  }
  return result;
}
