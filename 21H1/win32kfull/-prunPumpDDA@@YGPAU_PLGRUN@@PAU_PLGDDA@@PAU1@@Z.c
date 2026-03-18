/*
 * XREFs of ?prunPumpDDA@@YGPAU_PLGRUN@@PAU_PLGDDA@@PAU1@@Z @ 0x244F18
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

struct _PLGRUN *__fastcall prunPumpDDA(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // edi
  int v3; // esi
  int v4; // edx
  int v5; // ebx
  _DWORD *v6; // ecx
  int v7; // eax
  int v8; // edx
  unsigned int v9; // edx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // esi
  int v13; // eax
  int v14; // eax
  unsigned int v15; // esi
  unsigned int v16; // eax
  int v17; // eax
  bool v18; // cf
  int v19; // ebx
  int v20; // esi
  int v22; // [esp+Ch] [ebp-2Ch]
  int v24; // [esp+18h] [ebp-20h]
  unsigned int v25; // [esp+18h] [ebp-20h]
  int v26; // [esp+1Ch] [ebp-1Ch]
  unsigned int v27; // [esp+20h] [ebp-18h]
  int v29; // [esp+28h] [ebp-10h]
  int v30; // [esp+2Ch] [ebp-Ch]
  unsigned int v31; // [esp+30h] [ebp-8h]
  unsigned int v32; // [esp+34h] [ebp-4h]
  unsigned int v33; // [esp+34h] [ebp-4h]

  v2 = a1;
  v3 = a1[27];
  v4 = a1[29];
  v5 = a1[17];
  v24 = a1[25];
  v27 = a1[26];
  v31 = a1[28];
  v32 = a1[30];
  v30 = a1[31];
  v26 = a1[32];
  v29 = v3;
  v22 = v4;
  a2[1] = v5;
  v6 = a2 + 3;
  if ( v5 < v2[19] )
  {
    do
    {
      if ( v24 >= v3 )
      {
        *v6 = v3;
        v7 = v24 - v3;
      }
      else
      {
        *v6 = v24;
        v7 = v3 - v24;
      }
      v6[1] = v7;
      ++a2[2];
      v27 += v2[82];
      v8 = v2[81] + v24;
      v24 = v8;
      if ( v27 >= v2[83] )
      {
        v24 = v8 + 1;
        v27 -= v2[83];
      }
      v31 += v2[85];
      v3 = v2[84] + v29;
      v9 = v2[86];
      v29 = v3;
      if ( v31 >= v9 )
      {
        v29 = ++v3;
        v31 -= v9;
      }
      v6 += 2;
      ++v5;
    }
    while ( v5 < v2[19] );
    v4 = v22;
  }
  while ( v5 < v2[21] )
  {
    if ( v4 >= v3 )
    {
      *v6 = v3;
      v10 = v4 - v3;
    }
    else
    {
      *v6 = v4;
      v10 = v3 - v4;
    }
    v6[1] = v10;
    ++a2[2];
    v32 += v2[88];
    v4 += v2[87];
    if ( v32 >= v2[89] )
    {
      ++v4;
      v32 -= v2[89];
    }
    v3 = v2[84] + v29;
    v11 = v2[85];
    v2 = a1;
    v31 += v11;
    v29 = v3;
    v25 = a1[86];
    if ( v31 >= v25 )
    {
      v29 = ++v3;
      v31 -= v25;
    }
    v6 += 2;
    ++v5;
  }
  if ( v5 < v2[23] )
  {
    v12 = v32;
    v13 = v30;
    do
    {
      if ( v4 >= v13 )
      {
        v2 = a1;
        *v6 = v13;
        v14 = v4 - v30;
      }
      else
      {
        *v6 = v4;
        v14 = v13 - v4;
      }
      v6[1] = v14;
      ++a2[2];
      v15 = v2[88] + v12;
      v4 += v2[87];
      v16 = v2[89];
      v33 = v15;
      if ( v15 >= v16 )
      {
        ++v4;
        v33 = v15 - v16;
      }
      v17 = v2[90];
      v2 = a1;
      v30 += v17;
      v18 = (unsigned int)(a1[91] + v26) < a1[92];
      v26 += a1[91];
      v12 = v33;
      v13 = v30;
      if ( !v18 )
      {
        v13 = v30 + 1;
        v26 -= a1[92];
        v12 = v33;
        ++v30;
      }
      v6 += 2;
      ++v5;
    }
    while ( v5 < a1[23] );
    v3 = v29;
  }
  v19 = v5 - a2[1];
  a2[2] = v19;
  if ( *v2 && !v19 )
  {
    if ( v4 >= v3 )
    {
      *v6 = v3;
      v20 = v4 - v3;
    }
    else
    {
      *v6 = v4;
      v20 = v3 - v4;
    }
    v6[1] = v20;
    v6 += 2;
    a2[2] = 1;
  }
  return (struct _PLGRUN *)v6;
}
