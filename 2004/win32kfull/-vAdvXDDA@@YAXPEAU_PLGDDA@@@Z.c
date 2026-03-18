/*
 * XREFs of ?vAdvXDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C02D8AA8
 * Callers:
 *     ?prunPlgRead16@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02D7E20 (-prunPlgRead16@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead1@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02D7FA0 (-prunPlgRead1@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02D81C0 (-prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02D8380 (-prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead4@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02D8500 (-prunPlgRead4@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead8@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02D8760 (-prunPlgRead8@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vAdvXDDA(struct _PLGDDA *a1)
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

  v2 = *((_DWORD *)a1 + 33);
  *((_DWORD *)a1 + 18) += *((_DWORD *)a1 + 34);
  v3 = *((_DWORD *)a1 + 17) + v2;
  v4 = *((_DWORD *)a1 + 18);
  v5 = *((_DWORD *)a1 + 35);
  *((_DWORD *)a1 + 17) = v3;
  if ( v4 >= v5 )
  {
    v6 = *((_DWORD *)a1 + 95);
    v7 = v4 - v5;
    v8 = *((_DWORD *)a1 + 25) + *((_DWORD *)a1 + 93);
    *((_DWORD *)a1 + 18) = v7;
    *((_DWORD *)a1 + 17) = v3 + 1;
    *((_DWORD *)a1 + 26) += *((_DWORD *)a1 + 94);
    v9 = *((_DWORD *)a1 + 26);
    *((_DWORD *)a1 + 25) = v8;
    if ( v9 >= v6 )
    {
      *((_DWORD *)a1 + 25) = v8 + 1;
      *((_DWORD *)a1 + 26) = v9 - v6;
    }
    v10 = *((_DWORD *)a1 + 27) + *((_DWORD *)a1 + 96);
    *((_DWORD *)a1 + 28) += *((_DWORD *)a1 + 97);
    v11 = *((_DWORD *)a1 + 28);
    v12 = *((_DWORD *)a1 + 98);
    *((_DWORD *)a1 + 27) = v10;
    if ( v11 >= v12 )
    {
      *((_DWORD *)a1 + 27) = v10 + 1;
      *((_DWORD *)a1 + 28) = v11 - v12;
    }
  }
  *((_DWORD *)a1 + 20) += *((_DWORD *)a1 + 37);
  v13 = *((_DWORD *)a1 + 19) + *((_DWORD *)a1 + 36);
  v14 = *((_DWORD *)a1 + 20);
  v15 = *((_DWORD *)a1 + 38);
  *((_DWORD *)a1 + 19) = v13;
  if ( v14 >= v15 )
  {
    v16 = *((_DWORD *)a1 + 98);
    *((_DWORD *)a1 + 20) = v14 - v15;
    v17 = v13 + 1;
    v18 = *((_DWORD *)a1 + 29) + *((_DWORD *)a1 + 96);
    *((_DWORD *)a1 + 19) = v17;
    *((_DWORD *)a1 + 30) += *((_DWORD *)a1 + 97);
    v19 = *((_DWORD *)a1 + 30);
    *((_DWORD *)a1 + 29) = v18;
    if ( v19 >= v16 )
    {
      *((_DWORD *)a1 + 29) = v18 + 1;
      *((_DWORD *)a1 + 30) = v19 - v16;
    }
  }
  *((_DWORD *)a1 + 22) += *((_DWORD *)a1 + 40);
  v20 = *((_DWORD *)a1 + 21) + *((_DWORD *)a1 + 39);
  v21 = *((_DWORD *)a1 + 22);
  v22 = *((_DWORD *)a1 + 41);
  *((_DWORD *)a1 + 21) = v20;
  if ( v21 >= v22 )
  {
    v23 = *((_DWORD *)a1 + 95);
    *((_DWORD *)a1 + 22) = v21 - v22;
    v24 = v20 + 1;
    v25 = *((_DWORD *)a1 + 31) + *((_DWORD *)a1 + 93);
    *((_DWORD *)a1 + 21) = v24;
    *((_DWORD *)a1 + 32) += *((_DWORD *)a1 + 94);
    v26 = *((_DWORD *)a1 + 32);
    *((_DWORD *)a1 + 31) = v25;
    if ( v26 >= v23 )
    {
      *((_DWORD *)a1 + 31) = v25 + 1;
      *((_DWORD *)a1 + 32) = v26 - v23;
    }
  }
  v27 = *((_DWORD *)a1 + 23) + *((_DWORD *)a1 + 42);
  *((_DWORD *)a1 + 24) += *((_DWORD *)a1 + 43);
  v28 = *((_DWORD *)a1 + 24);
  v29 = *((_DWORD *)a1 + 44);
  *((_DWORD *)a1 + 23) = v27;
  if ( v28 >= v29 )
  {
    *((_DWORD *)a1 + 23) = v27 + 1;
    *((_DWORD *)a1 + 24) = v28 - v29;
  }
  v30 = *((_DWORD *)a1 + 25) + *((_DWORD *)a1 + 57);
  *((_DWORD *)a1 + 26) += *((_DWORD *)a1 + 58);
  v31 = *((_DWORD *)a1 + 26);
  v32 = *((_DWORD *)a1 + 59);
  *((_DWORD *)a1 + 25) = v30;
  if ( v31 >= v32 )
  {
    *((_DWORD *)a1 + 25) = v30 + 1;
    *((_DWORD *)a1 + 26) = v31 - v32;
  }
  v33 = *((_DWORD *)a1 + 27) + *((_DWORD *)a1 + 60);
  *((_DWORD *)a1 + 28) += *((_DWORD *)a1 + 61);
  v34 = *((_DWORD *)a1 + 28);
  v35 = *((_DWORD *)a1 + 62);
  *((_DWORD *)a1 + 27) = v33;
  if ( v34 >= v35 )
  {
    *((_DWORD *)a1 + 27) = v33 + 1;
    *((_DWORD *)a1 + 28) = v34 - v35;
  }
  v36 = *((_DWORD *)a1 + 29) + *((_DWORD *)a1 + 63);
  *((_DWORD *)a1 + 30) += *((_DWORD *)a1 + 64);
  v37 = *((_DWORD *)a1 + 30);
  v38 = *((_DWORD *)a1 + 65);
  *((_DWORD *)a1 + 29) = v36;
  if ( v37 >= v38 )
  {
    *((_DWORD *)a1 + 29) = v36 + 1;
    *((_DWORD *)a1 + 30) = v37 - v38;
  }
  v39 = *((_DWORD *)a1 + 31) + *((_DWORD *)a1 + 66);
  *((_DWORD *)a1 + 32) += *((_DWORD *)a1 + 67);
  v40 = *((_DWORD *)a1 + 32);
  v41 = *((_DWORD *)a1 + 68);
  *((_DWORD *)a1 + 31) = v39;
  if ( v40 >= v41 )
  {
    *((_DWORD *)a1 + 31) = v39 + 1;
    *((_DWORD *)a1 + 32) = v40 - v41;
  }
}
