/*
 * XREFs of ?vAdvXDDA@@YGXPAU_PLGDDA@@@Z @ 0x24513B
 * Callers:
 *     ?prunPlgRead16@@YGPAU_PLGRUN@@PAU_PLGDDA@@PAU1@PAE2PAU_XLATEOBJ@@JJJ@Z @ 0x2447EA (-prunPlgRead16@@YGPAU_PLGRUN@@PAU_PLGDDA@@PAU1@PAE2PAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead1@@YGPAU_PLGRUN@@PAU_PLGDDA@@PAU1@PAE2PAU_XLATEOBJ@@JJJ@Z @ 0x2448F1 (-prunPlgRead1@@YGPAU_PLGRUN@@PAU_PLGDDA@@PAU1@PAE2PAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead24@@YGPAU_PLGRUN@@PAU_PLGDDA@@PAU1@PAE2PAU_XLATEOBJ@@JJJ@Z @ 0x244A60 (-prunPlgRead24@@YGPAU_PLGRUN@@PAU_PLGDDA@@PAU1@PAE2PAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead32@@YGPAU_PLGRUN@@PAU_PLGDDA@@PAU1@PAE2PAU_XLATEOBJ@@JJJ@Z @ 0x244B9D (-prunPlgRead32@@YGPAU_PLGRUN@@PAU_PLGDDA@@PAU1@PAE2PAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead4@@YGPAU_PLGRUN@@PAU_PLGDDA@@PAU1@PAE2PAU_XLATEOBJ@@JJJ@Z @ 0x244CA1 (-prunPlgRead4@@YGPAU_PLGRUN@@PAU_PLGDDA@@PAU1@PAE2PAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead8@@YGPAU_PLGRUN@@PAU_PLGDDA@@PAU1@PAE2PAU_XLATEOBJ@@JJJ@Z @ 0x244E0C (-prunPlgRead8@@YGPAU_PLGRUN@@PAU_PLGDDA@@PAU1@PAE2PAU_XLATEOBJ@@JJJ@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall vAdvXDDA(_DWORD *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // ecx
  unsigned int v5; // eax
  unsigned int v6; // edx
  unsigned int v7; // edi
  unsigned int v8; // eax
  int v9; // edx
  unsigned int v10; // ecx
  int v11; // edx
  int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // edi
  int v15; // ecx
  int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // edi
  unsigned int v20; // eax
  int v21; // edx
  unsigned int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // edx
  unsigned int v27; // edi
  unsigned int v28; // eax
  int v29; // edx
  unsigned int v30; // ecx
  int v31; // edx
  int v32; // edx
  unsigned int v33; // ecx
  unsigned int v34; // edi
  int v35; // edx
  int v36; // edx
  unsigned int v37; // ecx
  unsigned int v38; // edi
  int v39; // edx
  int v40; // edx
  unsigned int v41; // ecx
  unsigned int v42; // edi
  int v43; // edx
  int v44; // edx
  unsigned int v45; // ecx
  unsigned int v46; // edi
  int v47; // edx
  int v48; // edx
  unsigned int v49; // ecx
  unsigned int v50; // edi

  v2 = this[34];
  v3 = this[33];
  this[18] += v2;
  v4 = this[17] + v3;
  v5 = this[18];
  v6 = this[35];
  this[17] = v4;
  if ( v5 >= v6 )
  {
    v7 = this[95];
    v8 = v5 - v6;
    v9 = this[25] + this[93];
    this[18] = v8;
    this[17] = v4 + 1;
    this[26] += this[94];
    v10 = this[26];
    this[25] = v9;
    if ( v10 >= v7 )
    {
      this[25] = v9 + 1;
      this[26] = v10 - v7;
    }
    v11 = this[96];
    this[28] += this[97];
    v12 = this[27] + v11;
    v13 = this[28];
    v14 = this[98];
    this[27] = v12;
    if ( v13 >= v14 )
    {
      this[27] = v12 + 1;
      this[28] = v13 - v14;
    }
  }
  v15 = this[36];
  this[20] += this[37];
  v16 = this[19] + v15;
  v17 = this[20];
  v18 = this[38];
  this[19] = v16;
  if ( v17 >= v18 )
  {
    v19 = this[98];
    v20 = v17 - v18;
    v21 = this[29] + this[96];
    this[20] = v20;
    this[19] = v16 + 1;
    this[30] += this[97];
    v22 = this[30];
    this[29] = v21;
    if ( v22 >= v19 )
    {
      this[29] = v21 + 1;
      this[30] = v22 - v19;
    }
  }
  v23 = this[39];
  this[22] += this[40];
  v24 = this[21] + v23;
  v25 = this[22];
  v26 = this[41];
  this[21] = v24;
  if ( v25 >= v26 )
  {
    v27 = this[95];
    v28 = v25 - v26;
    v29 = this[31] + this[93];
    this[22] = v28;
    this[21] = v24 + 1;
    this[32] += this[94];
    v30 = this[32];
    this[31] = v29;
    if ( v30 >= v27 )
    {
      this[31] = v29 + 1;
      this[32] = v30 - v27;
    }
  }
  v31 = this[42];
  this[24] += this[43];
  v32 = this[23] + v31;
  v33 = this[24];
  v34 = this[44];
  this[23] = v32;
  if ( v33 >= v34 )
  {
    this[23] = v32 + 1;
    this[24] = v33 - v34;
  }
  v35 = this[57];
  this[26] += this[58];
  v36 = this[25] + v35;
  v37 = this[26];
  v38 = this[59];
  this[25] = v36;
  if ( v37 >= v38 )
  {
    this[25] = v36 + 1;
    this[26] = v37 - v38;
  }
  v39 = this[60];
  this[28] += this[61];
  v40 = this[27] + v39;
  v41 = this[28];
  v42 = this[62];
  this[27] = v40;
  if ( v41 >= v42 )
  {
    this[27] = v40 + 1;
    this[28] = v41 - v42;
  }
  v43 = this[63];
  this[30] += this[64];
  v44 = this[29] + v43;
  v45 = this[30];
  v46 = this[65];
  this[29] = v44;
  if ( v45 >= v46 )
  {
    this[29] = v44 + 1;
    this[30] = v45 - v46;
  }
  v47 = this[66];
  this[32] += this[67];
  v48 = this[31] + v47;
  v49 = this[32];
  v50 = this[68];
  this[31] = v48;
  if ( v49 >= v50 )
  {
    this[31] = v48 + 1;
    this[32] = v49 - v50;
  }
}
