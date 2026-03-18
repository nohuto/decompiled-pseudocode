/*
 * XREFs of _AdjustSrcDevGamma @ 0x1BCB73
 * Callers:
 *     _pDCIAdjClr @ 0x1BEB31 (_pDCIAdjClr.c)
 * Callees:
 *     _MulFD6 @ 0xED8A8 (_MulFD6.c)
 *     _DivFD6 @ 0xED9D4 (_DivFD6.c)
 *     _Log @ 0x1BC88F (_Log.c)
 *     _RaisePower @ 0x1BC9A2 (_RaisePower.c)
 */

int __fastcall AdjustSrcDevGamma(int a1, unsigned int *a2, unsigned __int16 *a3, unsigned __int8 a4, char a5)
{
  int v6; // eax
  unsigned int *v7; // edx
  int v8; // ebx
  int v9; // eax
  void *v10; // esi
  void *v11; // edi
  int v12; // eax
  unsigned __int8 v13; // al
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v22; // eax
  int v23; // esi
  int v24; // [esp+Ch] [ebp-28h]
  int v25; // [esp+10h] [ebp-24h]
  int v26; // [esp+14h] [ebp-20h]
  int v27; // [esp+18h] [ebp-1Ch]
  int v28; // [esp+1Ch] [ebp-18h]
  int v29; // [esp+20h] [ebp-14h]
  int v32; // [esp+2Ch] [ebp-8h]
  int v33; // [esp+30h] [ebp-4h]
  int v34; // [esp+44h] [ebp+10h]
  int v35; // [esp+44h] [ebp+10h]

  v33 = 0;
  v24 = DivFD6(a3[3], 10000);
  v25 = DivFD6(a3[4], 10000);
  v6 = DivFD6(a3[5], 10000);
  v7 = a2;
  v26 = v6;
  v32 = 1000000;
  v8 = 1000000;
  *a2 &= ~0x1000u;
  if ( (a5 & 8) == 0 )
  {
    v34 = 1000000;
    if ( (*(_BYTE *)(a1 + 164) & 2) != 0 )
    {
      if ( a4 > 0xFDu )
      {
        if ( a4 == 254 )
        {
          v8 = (int)&loc_FA3E8;
          v10 = &loc_FA3E8;
          v11 = &loc_FA3E8;
          goto LABEL_14;
        }
        if ( a4 != 255 )
          return 0;
      }
      else
      {
        if ( a4 >= 0xFCu )
        {
LABEL_9:
          v10 = &loc_F423E + 2;
          v11 = &loc_F423E + 2;
LABEL_14:
          v28 = (int)v10;
          v29 = v8;
          v27 = (int)v11;
          goto LABEL_37;
        }
        if ( !a4 )
          return 0;
        if ( a4 > 2u )
        {
          if ( (unsigned int)a4 - 5 <= 1 )
            goto LABEL_9;
          return 0;
        }
      }
      v8 = 1325000;
      v29 = 1325000;
      v10 = &loc_1437C5 + 3;
      v11 = &loc_1437C5 + 3;
      v28 = 1325000;
      a3[6] += 550;
      a3[7] -= 300;
      v27 = 1325000;
LABEL_37:
      v24 = MulFD6(v24, v34);
      v25 = MulFD6(v25, v34);
      v26 = MulFD6(v26, v34);
      if ( v32 != 1000000 )
      {
        v27 = MulFD6((int)v11, v32);
        v28 = MulFD6((int)v10, v32);
        v8 = MulFD6(v8, v32);
        v29 = v8;
      }
      v9 = 0;
      v7 = a2;
      goto LABEL_40;
    }
    v12 = RaisePower(1050000, *(unsigned __int8 *)(a1 + 22) - 3, 2);
    v35 = MulFD6((int)&loc_E3A94, v12);
    v27 = *(_DWORD *)(a1 + 132);
    v28 = *(_DWORD *)(a1 + 136);
    v29 = *(_DWORD *)(a1 + 140);
    *a2 |= 0x1000u;
    v13 = *(_BYTE *)(a1 + 145);
    if ( v13 <= 0xFu )
    {
      v14 = (v13 >> 1) + 41;
      v8 = 25000 * v14;
      if ( a4 == 1 )
        v8 = MulFD6(25000 * v14, 1125000);
    }
    v15 = *(_DWORD *)(a1 + 172);
    if ( v15 <= 1000000 )
    {
      if ( v15 >= 1000000 )
        goto LABEL_23;
      v19 = Log(v15 / 3);
      v18 = DivFD6(v19, -477121);
    }
    else
    {
      v16 = DivFD6(333333, *(_DWORD *)(a1 + 172));
      v17 = Log(v16);
      v18 = DivFD6(-477121, v17);
    }
    v32 = v18;
LABEL_23:
    if ( a4 > 0xFDu )
    {
      if ( a4 == 254 )
      {
        v20 = v35;
        if ( (*(_DWORD *)(a1 + 164) & 0x300) == 0x100 )
        {
          v20 = DivFD6(v35, (int)&loc_E3A94);
          v32 = 1000000;
        }
        goto LABEL_36;
      }
      if ( a4 != 255 )
        return 0;
      goto LABEL_35;
    }
    if ( a4 < 0xFCu )
    {
      if ( !a4 )
        return 0;
      if ( a4 <= 2u )
        goto LABEL_35;
      if ( (unsigned int)a4 - 5 > 1 )
        return 0;
    }
    if ( (*(_DWORD *)(a1 + 164) & 0x400) == 0 )
    {
      *a2 &= ~0x1000u;
      v20 = 1000000;
LABEL_36:
      v22 = MulFD6(v8, v20);
      v8 = v29;
      v10 = (void *)v28;
      v11 = (void *)v27;
      v34 = v22;
      goto LABEL_37;
    }
LABEL_35:
    v20 = v35;
    goto LABEL_36;
  }
  v29 = 1000000;
  v9 = 1;
  v33 = 1;
  v28 = 1000000;
  v27 = 1000000;
LABEL_40:
  if ( v24 != 1000000 || v25 != 1000000 || v26 != 1000000 )
    v33 = v9 | 2;
  if ( v24 == v7[1] && v25 == v7[2] && v26 == v7[3] )
  {
    v23 = 0;
  }
  else
  {
    v7[1] = v24;
    v7[2] = v25;
    v7[3] = v26;
    v23 = 1;
  }
  if ( v27 != 1000000 || v28 != 1000000 || v8 != 1000000 )
    v33 |= 4u;
  if ( v27 != v7[4] || v28 != v7[5] || v8 != v7[6] )
  {
    v7[4] = v27;
    v7[5] = v28;
    v7[6] = v29;
    v23 = 1;
  }
  if ( (*v7 & 7) != v33 )
    v23 = 1;
  if ( v23 )
    *v7 = v33 | *v7 & 0xFFFFFFF8;
  return v23;
}
