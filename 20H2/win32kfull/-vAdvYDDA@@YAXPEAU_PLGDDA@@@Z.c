/*
 * XREFs of ?vAdvYDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C02D78C0
 * Callers:
 *     EngPlgBlt @ 0x1C028B9B0 (EngPlgBlt.c)
 * Callees:
 *     <none>
 */

void __fastcall vAdvYDDA(struct _PLGDDA *a1)
{
  int v2; // ecx
  int v3; // ecx
  unsigned int v4; // eax
  unsigned int v5; // edx
  unsigned int v6; // r9d
  unsigned int v7; // eax
  int v8; // edx
  unsigned int v9; // ecx
  int v10; // edx
  unsigned int v11; // ecx
  unsigned int v12; // r9d
  int v13; // edx
  unsigned int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // r9d
  int v17; // eax
  int v18; // edx
  unsigned int v19; // ecx
  int v20; // edx
  unsigned int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // r9d
  int v24; // eax
  int v25; // edx
  unsigned int v26; // ecx
  int v27; // edx
  unsigned int v28; // ecx
  unsigned int v29; // r9d
  int v30; // edx
  unsigned int v31; // ecx
  unsigned int v32; // r9d
  int v33; // edx
  unsigned int v34; // ecx
  unsigned int v35; // r9d
  int v36; // edx
  unsigned int v37; // ecx
  unsigned int v38; // r9d
  int v39; // edx
  unsigned int v40; // ecx
  unsigned int v41; // r9d

  v2 = *((_DWORD *)a1 + 45);
  *((_DWORD *)a1 + 2) += *((_DWORD *)a1 + 46);
  v3 = *((_DWORD *)a1 + 1) + v2;
  v4 = *((_DWORD *)a1 + 2);
  v5 = *((_DWORD *)a1 + 47);
  *((_DWORD *)a1 + 1) = v3;
  if ( v4 >= v5 )
  {
    v6 = *((_DWORD *)a1 + 95);
    v7 = v4 - v5;
    v8 = *((_DWORD *)a1 + 9) + *((_DWORD *)a1 + 93);
    *((_DWORD *)a1 + 2) = v7;
    *((_DWORD *)a1 + 1) = v3 + 1;
    *((_DWORD *)a1 + 10) += *((_DWORD *)a1 + 94);
    v9 = *((_DWORD *)a1 + 10);
    *((_DWORD *)a1 + 9) = v8;
    if ( v9 >= v6 )
    {
      *((_DWORD *)a1 + 9) = v8 + 1;
      *((_DWORD *)a1 + 10) = v9 - v6;
    }
    v10 = *((_DWORD *)a1 + 11) + *((_DWORD *)a1 + 96);
    *((_DWORD *)a1 + 12) += *((_DWORD *)a1 + 97);
    v11 = *((_DWORD *)a1 + 12);
    v12 = *((_DWORD *)a1 + 98);
    *((_DWORD *)a1 + 11) = v10;
    if ( v11 >= v12 )
    {
      *((_DWORD *)a1 + 11) = v10 + 1;
      *((_DWORD *)a1 + 12) = v11 - v12;
    }
  }
  *((_DWORD *)a1 + 4) += *((_DWORD *)a1 + 49);
  v13 = *((_DWORD *)a1 + 3) + *((_DWORD *)a1 + 48);
  v14 = *((_DWORD *)a1 + 4);
  v15 = *((_DWORD *)a1 + 50);
  *((_DWORD *)a1 + 3) = v13;
  if ( v14 >= v15 )
  {
    v16 = *((_DWORD *)a1 + 98);
    *((_DWORD *)a1 + 4) = v14 - v15;
    v17 = v13 + 1;
    v18 = *((_DWORD *)a1 + 13) + *((_DWORD *)a1 + 96);
    *((_DWORD *)a1 + 3) = v17;
    *((_DWORD *)a1 + 14) += *((_DWORD *)a1 + 97);
    v19 = *((_DWORD *)a1 + 14);
    *((_DWORD *)a1 + 13) = v18;
    if ( v19 >= v16 )
    {
      *((_DWORD *)a1 + 13) = v18 + 1;
      *((_DWORD *)a1 + 14) = v19 - v16;
    }
  }
  *((_DWORD *)a1 + 6) += *((_DWORD *)a1 + 52);
  v20 = *((_DWORD *)a1 + 5) + *((_DWORD *)a1 + 51);
  v21 = *((_DWORD *)a1 + 6);
  v22 = *((_DWORD *)a1 + 53);
  *((_DWORD *)a1 + 5) = v20;
  if ( v21 >= v22 )
  {
    v23 = *((_DWORD *)a1 + 95);
    *((_DWORD *)a1 + 6) = v21 - v22;
    v24 = v20 + 1;
    v25 = *((_DWORD *)a1 + 15) + *((_DWORD *)a1 + 93);
    *((_DWORD *)a1 + 5) = v24;
    *((_DWORD *)a1 + 16) += *((_DWORD *)a1 + 94);
    v26 = *((_DWORD *)a1 + 16);
    *((_DWORD *)a1 + 15) = v25;
    if ( v26 >= v23 )
    {
      *((_DWORD *)a1 + 15) = v25 + 1;
      *((_DWORD *)a1 + 16) = v26 - v23;
    }
  }
  v27 = *((_DWORD *)a1 + 7) + *((_DWORD *)a1 + 54);
  *((_DWORD *)a1 + 8) += *((_DWORD *)a1 + 55);
  v28 = *((_DWORD *)a1 + 8);
  v29 = *((_DWORD *)a1 + 56);
  *((_DWORD *)a1 + 7) = v27;
  if ( v28 >= v29 )
  {
    *((_DWORD *)a1 + 7) = v27 + 1;
    *((_DWORD *)a1 + 8) = v28 - v29;
  }
  v30 = *((_DWORD *)a1 + 9) + *((_DWORD *)a1 + 69);
  *((_DWORD *)a1 + 10) += *((_DWORD *)a1 + 70);
  v31 = *((_DWORD *)a1 + 10);
  v32 = *((_DWORD *)a1 + 71);
  *((_DWORD *)a1 + 9) = v30;
  if ( v31 >= v32 )
  {
    *((_DWORD *)a1 + 9) = v30 + 1;
    *((_DWORD *)a1 + 10) = v31 - v32;
  }
  v33 = *((_DWORD *)a1 + 11) + *((_DWORD *)a1 + 72);
  *((_DWORD *)a1 + 12) += *((_DWORD *)a1 + 73);
  v34 = *((_DWORD *)a1 + 12);
  v35 = *((_DWORD *)a1 + 74);
  *((_DWORD *)a1 + 11) = v33;
  if ( v34 >= v35 )
  {
    *((_DWORD *)a1 + 11) = v33 + 1;
    *((_DWORD *)a1 + 12) = v34 - v35;
  }
  v36 = *((_DWORD *)a1 + 13) + *((_DWORD *)a1 + 75);
  *((_DWORD *)a1 + 14) += *((_DWORD *)a1 + 76);
  v37 = *((_DWORD *)a1 + 14);
  v38 = *((_DWORD *)a1 + 77);
  *((_DWORD *)a1 + 13) = v36;
  if ( v37 >= v38 )
  {
    *((_DWORD *)a1 + 13) = v36 + 1;
    *((_DWORD *)a1 + 14) = v37 - v38;
  }
  v39 = *((_DWORD *)a1 + 15) + *((_DWORD *)a1 + 78);
  *((_DWORD *)a1 + 16) += *((_DWORD *)a1 + 79);
  v40 = *((_DWORD *)a1 + 16);
  v41 = *((_DWORD *)a1 + 80);
  *((_DWORD *)a1 + 15) = v39;
  if ( v40 >= v41 )
  {
    *((_DWORD *)a1 + 15) = v39 + 1;
    *((_DWORD *)a1 + 16) = v40 - v41;
  }
}
