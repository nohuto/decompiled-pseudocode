/*
 * XREFs of InitMessageTables @ 0x1C0393BA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0040298 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall InitMessageTables(int a1)
{
  __int64 v1; // rdx
  unsigned __int16 v2; // di
  unsigned __int16 v3; // ax
  unsigned int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // r9
  unsigned __int16 v7; // di
  __int64 v8; // rdx
  unsigned __int16 v9; // ax
  unsigned int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // r9
  unsigned __int16 v13; // di
  __int64 v14; // rdx
  unsigned __int16 v15; // ax
  unsigned int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rdx
  unsigned __int16 v20; // ax
  unsigned int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // r9
  unsigned __int16 v24; // ax
  unsigned __int16 v25; // di
  __int64 v26; // rdx
  unsigned __int16 v27; // ax
  unsigned int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // r9
  unsigned __int16 v31; // di
  __int64 v32; // rdx
  unsigned __int16 v33; // ax
  unsigned int v34; // ecx
  __int64 v35; // rax
  __int64 v36; // r9
  unsigned __int16 v37; // di
  __int64 v38; // rdx
  unsigned __int16 v39; // ax
  unsigned int v40; // ecx
  __int64 v41; // rax
  __int64 v42; // r9
  unsigned __int16 v43; // di
  __int64 v44; // rdx
  unsigned __int16 v45; // ax
  unsigned int v46; // ecx
  __int64 v47; // rax
  __int64 v48; // r9
  unsigned __int16 v49; // di
  __int64 v50; // rdx
  unsigned __int16 v51; // ax
  unsigned int v52; // ecx
  __int64 v53; // rax
  __int64 v54; // r9
  unsigned __int16 v55; // ax
  unsigned __int16 v56; // si
  __int64 v57; // rdx
  unsigned __int16 v58; // ax
  unsigned int v59; // ecx
  __int64 v60; // rax
  __int64 v61; // r9
  __int64 v62; // rdx
  unsigned __int16 v63; // ax
  unsigned int v64; // ecx
  __int64 v65; // rax
  __int64 v66; // r9
  unsigned __int16 v67; // di
  __int64 v68; // rdx
  unsigned __int16 v69; // ax
  unsigned int v70; // ecx
  __int64 v71; // rax
  __int64 v72; // r9
  unsigned __int16 v73; // di
  __int64 v74; // rdx
  unsigned __int16 v75; // ax
  unsigned int v76; // ecx
  __int64 v77; // rax
  __int64 v78; // r9
  unsigned __int16 v79; // di
  __int64 v80; // rdx
  unsigned __int16 v81; // ax
  unsigned int v82; // ecx
  __int64 result; // rax
  __int64 v84; // r9

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(a1, 4, 3, 12, (__int64)&WPP_5beb818f3182338190d7890059714f79_Traceguids);
  LODWORD(v1) = 0;
  LODWORD(gSharedInfo[67]) = 0;
  v2 = 51;
  v3 = 51;
  do
  {
    v4 = v3;
    if ( (unsigned int)v3 > LODWORD(gSharedInfo[67]) )
      LODWORD(gSharedInfo[67]) = v3;
    else
      v4 = gSharedInfo[67];
    v1 = (unsigned int)(v1 + 1);
    v3 = word_1C02E6860[v1];
  }
  while ( v3 );
  v5 = SharedAlloc((v4 >> 3) + 1);
  gSharedInfo[68] = v5;
  if ( v5 )
  {
    LODWORD(v6) = 0;
    do
    {
      v6 = (unsigned int)(v6 + 1);
      *(_BYTE *)(((unsigned __int64)v2 >> 3) + gSharedInfo[68]) |= 1 << (v2 & 7);
      v2 = word_1C02E6860[v6];
    }
    while ( v2 );
  }
  v7 = 6;
  LODWORD(v8) = 0;
  v9 = 6;
  LODWORD(gSharedInfo[69]) = 0;
  do
  {
    v10 = v9;
    if ( (unsigned int)v9 > LODWORD(gSharedInfo[69]) )
      LODWORD(gSharedInfo[69]) = v9;
    else
      v10 = gSharedInfo[69];
    v8 = (unsigned int)(v8 + 1);
    v9 = word_1C02E67C0[v8];
  }
  while ( v9 );
  v11 = SharedAlloc((v10 >> 3) + 1);
  gSharedInfo[70] = v11;
  if ( v11 )
  {
    LODWORD(v12) = 0;
    do
    {
      v12 = (unsigned int)(v12 + 1);
      *(_BYTE *)(((unsigned __int64)v7 >> 3) + gSharedInfo[70]) |= 1 << (v7 & 7);
      v7 = word_1C02E67C0[v12];
    }
    while ( v7 );
  }
  v13 = 57;
  LODWORD(v14) = 0;
  v15 = 57;
  LODWORD(gSharedInfo[25]) = 0;
  do
  {
    v16 = v15;
    if ( (unsigned int)v15 > LODWORD(gSharedInfo[25]) )
      LODWORD(gSharedInfo[25]) = v15;
    else
      v16 = gSharedInfo[25];
    v14 = (unsigned int)(v14 + 1);
    v15 = word_1C02E6C30[v14];
  }
  while ( v15 );
  v17 = SharedAlloc((v16 >> 3) + 1);
  gSharedInfo[26] = v17;
  if ( v17 )
  {
    LODWORD(v18) = 0;
    do
    {
      v18 = (unsigned int)(v18 + 1);
      *(_BYTE *)(((unsigned __int64)v13 >> 3) + gSharedInfo[26]) |= 1 << (v13 & 7);
      v13 = word_1C02E6C30[v18];
    }
    while ( v13 );
  }
  LODWORD(v19) = 0;
  v20 = 1;
  LODWORD(gSharedInfo[5]) = 0;
  do
  {
    v21 = v20;
    if ( (unsigned int)v20 > LODWORD(gSharedInfo[5]) )
      LODWORD(gSharedInfo[5]) = v20;
    else
      v21 = gSharedInfo[5];
    v19 = (unsigned int)(v19 + 1);
    v20 = word_1C02E6BA0[v19];
  }
  while ( v20 );
  v22 = SharedAlloc((v21 >> 3) + 1);
  gSharedInfo[6] = v22;
  if ( v22 )
  {
    LODWORD(v23) = 0;
    v24 = 1;
    do
    {
      v23 = (unsigned int)(v23 + 1);
      *(_BYTE *)(((unsigned __int64)v24 >> 3) + gSharedInfo[6]) |= 1 << (v24 & 7);
      v24 = word_1C02E6BA0[v23];
    }
    while ( v24 );
  }
  v25 = 129;
  LODWORD(v26) = 0;
  v27 = 129;
  LODWORD(gSharedInfo[9]) = 0;
  do
  {
    v28 = v27;
    if ( (unsigned int)v27 > LODWORD(gSharedInfo[9]) )
      LODWORD(gSharedInfo[9]) = v27;
    else
      v28 = gSharedInfo[9];
    v26 = (unsigned int)(v26 + 1);
    v27 = word_1C02E6BE0[v26];
  }
  while ( v27 );
  v29 = SharedAlloc((v28 >> 3) + 1);
  gSharedInfo[10] = v29;
  if ( v29 )
  {
    LODWORD(v30) = 0;
    do
    {
      v30 = (unsigned int)(v30 + 1);
      *(_BYTE *)(((unsigned __int64)v25 >> 3) + gSharedInfo[10]) |= 1 << (v25 & 7);
      v25 = word_1C02E6BE0[v30];
    }
    while ( v25 );
  }
  v31 = 15;
  LODWORD(v32) = 0;
  v33 = 15;
  LODWORD(gSharedInfo[11]) = 0;
  do
  {
    v34 = v33;
    if ( (unsigned int)v33 > LODWORD(gSharedInfo[11]) )
      LODWORD(gSharedInfo[11]) = v33;
    else
      v34 = gSharedInfo[11];
    v32 = (unsigned int)(v32 + 1);
    v33 = word_1C02E6BD0[v32];
  }
  while ( v33 );
  v35 = SharedAlloc((v34 >> 3) + 1);
  gSharedInfo[12] = v35;
  if ( v35 )
  {
    LODWORD(v36) = 0;
    do
    {
      v36 = (unsigned int)(v36 + 1);
      *(_BYTE *)(((unsigned __int64)v31 >> 3) + gSharedInfo[12]) |= 1 << (v31 & 7);
      v31 = word_1C02E6BD0[v36];
    }
    while ( v31 );
  }
  v37 = 369;
  LODWORD(v38) = 0;
  v39 = 369;
  LODWORD(gSharedInfo[33]) = 0;
  do
  {
    v40 = v39;
    if ( (unsigned int)v39 > LODWORD(gSharedInfo[33]) )
      LODWORD(gSharedInfo[33]) = v39;
    else
      v40 = gSharedInfo[33];
    v38 = (unsigned int)(v38 + 1);
    v39 = word_1C02E6B68[v38];
  }
  while ( v39 );
  v41 = SharedAlloc((v40 >> 3) + 1);
  gSharedInfo[34] = v41;
  if ( v41 )
  {
    LODWORD(v42) = 0;
    do
    {
      v42 = (unsigned int)(v42 + 1);
      *(_BYTE *)(((unsigned __int64)v37 >> 3) + gSharedInfo[34]) |= 1 << (v37 & 7);
      v37 = word_1C02E6B68[v42];
    }
    while ( v37 );
  }
  v43 = 132;
  LODWORD(v44) = 0;
  v45 = 132;
  LODWORD(gSharedInfo[19]) = 0;
  do
  {
    v46 = v45;
    if ( (unsigned int)v45 > LODWORD(gSharedInfo[19]) )
      LODWORD(gSharedInfo[19]) = v45;
    else
      v46 = gSharedInfo[19];
    v44 = (unsigned int)(v44 + 1);
    v45 = word_1C02E6B20[v44];
  }
  while ( v45 );
  v47 = SharedAlloc((v46 >> 3) + 1);
  gSharedInfo[20] = v47;
  if ( v47 )
  {
    LODWORD(v48) = 0;
    do
    {
      v48 = (unsigned int)(v48 + 1);
      *(_BYTE *)(((unsigned __int64)v43 >> 3) + gSharedInfo[20]) |= 1 << (v43 & 7);
      v43 = word_1C02E6B20[v48];
    }
    while ( v43 );
  }
  v49 = 398;
  LODWORD(v50) = 0;
  v51 = 398;
  LODWORD(gSharedInfo[29]) = 0;
  do
  {
    v52 = v51;
    if ( (unsigned int)v51 > LODWORD(gSharedInfo[29]) )
      LODWORD(gSharedInfo[29]) = v51;
    else
      v52 = gSharedInfo[29];
    v50 = (unsigned int)(v50 + 1);
    v51 = word_1C02E6A60[v50];
  }
  while ( v51 );
  v53 = SharedAlloc((v52 >> 3) + 1);
  gSharedInfo[30] = v53;
  if ( v53 )
  {
    LODWORD(v54) = 0;
    v55 = 398;
    do
    {
      v54 = (unsigned int)(v54 + 1);
      *(_BYTE *)(((unsigned __int64)v55 >> 3) + gSharedInfo[30]) |= 1 << (v55 & 7);
      v55 = word_1C02E6A60[v54];
    }
    while ( v55 );
  }
  v56 = 359;
  LODWORD(v57) = 0;
  v58 = 359;
  LODWORD(gSharedInfo[21]) = 0;
  do
  {
    v59 = v58;
    if ( (unsigned int)v58 > LODWORD(gSharedInfo[21]) )
      LODWORD(gSharedInfo[21]) = v58;
    else
      v59 = gSharedInfo[21];
    v57 = (unsigned int)(v57 + 1);
    v58 = word_1C02E69B0[v57];
  }
  while ( v58 );
  v60 = SharedAlloc((v59 >> 3) + 1);
  gSharedInfo[22] = v60;
  if ( v60 )
  {
    LODWORD(v61) = 0;
    do
    {
      v61 = (unsigned int)(v61 + 1);
      *(_BYTE *)(((unsigned __int64)v56 >> 3) + gSharedInfo[22]) |= 1 << (v56 & 7);
      v56 = word_1C02E69B0[v61];
    }
    while ( v56 );
  }
  LODWORD(v62) = 0;
  v63 = 398;
  LODWORD(gSharedInfo[23]) = 0;
  do
  {
    v64 = v63;
    if ( (unsigned int)v63 > LODWORD(gSharedInfo[23]) )
      LODWORD(gSharedInfo[23]) = v63;
    else
      v64 = gSharedInfo[23];
    v62 = (unsigned int)(v62 + 1);
    v63 = word_1C02E6A60[v62];
  }
  while ( v63 );
  v65 = SharedAlloc((v64 >> 3) + 1);
  gSharedInfo[24] = v65;
  if ( v65 )
  {
    LODWORD(v66) = 0;
    do
    {
      v66 = (unsigned int)(v66 + 1);
      *(_BYTE *)(((unsigned __int64)v49 >> 3) + gSharedInfo[24]) |= 1 << (v49 & 7);
      v49 = word_1C02E6A60[v66];
    }
    while ( v49 );
  }
  v67 = 198;
  LODWORD(v68) = 0;
  v69 = 198;
  LODWORD(gSharedInfo[27]) = 0;
  do
  {
    v70 = v69;
    if ( (unsigned int)v69 > LODWORD(gSharedInfo[27]) )
      LODWORD(gSharedInfo[27]) = v69;
    else
      v70 = gSharedInfo[27];
    v68 = (unsigned int)(v68 + 1);
    v69 = word_1C02E68F0[v68];
  }
  while ( v69 );
  v71 = SharedAlloc((v70 >> 3) + 1);
  gSharedInfo[28] = v71;
  if ( v71 )
  {
    LODWORD(v72) = 0;
    do
    {
      v72 = (unsigned int)(v72 + 1);
      *(_BYTE *)(((unsigned __int64)v67 >> 3) + gSharedInfo[28]) |= 1 << (v67 & 7);
      v67 = word_1C02E68F0[v72];
    }
    while ( v67 );
  }
  v73 = 20;
  LODWORD(v74) = 0;
  v75 = 20;
  LODWORD(gSharedInfo[35]) = 0;
  do
  {
    v76 = v75;
    if ( (unsigned int)v75 > LODWORD(gSharedInfo[35]) )
      LODWORD(gSharedInfo[35]) = v75;
    else
      v76 = gSharedInfo[35];
    v74 = (unsigned int)(v74 + 1);
    v75 = word_1C02E68C8[v74];
  }
  while ( v75 );
  v77 = SharedAlloc((v76 >> 3) + 1);
  gSharedInfo[36] = v77;
  if ( v77 )
  {
    LODWORD(v78) = 0;
    do
    {
      v78 = (unsigned int)(v78 + 1);
      *(_BYTE *)(((unsigned __int64)v73 >> 3) + gSharedInfo[36]) |= 1 << (v73 & 7);
      v73 = word_1C02E68C8[v78];
    }
    while ( v73 );
  }
  v79 = 2;
  LODWORD(v80) = 0;
  v81 = 2;
  LODWORD(gSharedInfo[37]) = 0;
  do
  {
    v82 = v81;
    if ( (unsigned int)v81 > LODWORD(gSharedInfo[37]) )
      LODWORD(gSharedInfo[37]) = v81;
    else
      v82 = gSharedInfo[37];
    v80 = (unsigned int)(v80 + 1);
    v81 = word_1C02E68B8[v80];
  }
  while ( v81 );
  result = SharedAlloc((v82 >> 3) + 1);
  gSharedInfo[38] = result;
  if ( result )
  {
    LODWORD(v84) = 0;
    do
    {
      v84 = (unsigned int)(v84 + 1);
      result = v79 & 7;
      *(_BYTE *)(((unsigned __int64)v79 >> 3) + gSharedInfo[38]) |= 1 << result;
      v79 = word_1C02E68B8[v84];
    }
    while ( v79 );
  }
  return result;
}
