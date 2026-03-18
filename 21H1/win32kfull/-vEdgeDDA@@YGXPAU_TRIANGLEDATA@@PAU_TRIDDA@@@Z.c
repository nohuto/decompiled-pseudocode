/*
 * XREFs of ?vEdgeDDA@@YGXPAU_TRIANGLEDATA@@PAU_TRIDDA@@@Z @ 0x1EAD37
 * Callers:
 *     ?vCalculateLine@@YGXPAU_TRIVERTEX@@0PAU_TRIANGLEDATA@@@Z @ 0x1EA921 (-vCalculateLine@@YGXPAU_TRIVERTEX@@0PAU_TRIANGLEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vEdgeDDA(_QWORD *a1, _DWORD *a2)
{
  int v2; // ebx
  int v3; // esi
  _DWORD *v5; // ecx
  int v6; // eax
  bool v7; // cf
  unsigned __int64 v8; // kr00_8
  unsigned __int64 v9; // kr08_8
  unsigned __int64 v10; // kr10_8
  unsigned __int64 v11; // kr18_8
  int v12; // [esp+Ch] [ebp-50h]
  int v13; // [esp+10h] [ebp-4Ch]
  int v14; // [esp+14h] [ebp-48h]
  int v15; // [esp+18h] [ebp-44h]
  int v16; // [esp+1Ch] [ebp-40h]
  int v17; // [esp+20h] [ebp-3Ch]
  int v18; // [esp+24h] [ebp-38h]
  int v19; // [esp+28h] [ebp-34h]
  int v20; // [esp+2Ch] [ebp-30h]
  int v21; // [esp+30h] [ebp-2Ch]
  int v22; // [esp+34h] [ebp-28h]
  int v23; // [esp+38h] [ebp-24h]
  unsigned int v24; // [esp+3Ch] [ebp-20h]
  unsigned int v25; // [esp+40h] [ebp-1Ch]
  unsigned int v26; // [esp+44h] [ebp-18h]
  unsigned int v27; // [esp+48h] [ebp-14h]
  unsigned int v28; // [esp+4Ch] [ebp-10h]
  unsigned int v29; // [esp+50h] [ebp-Ch]
  unsigned int v30; // [esp+54h] [ebp-8h]
  unsigned int v31; // [esp+58h] [ebp-4h]

  v31 = a2[16];
  v30 = a2[17];
  v29 = a2[18];
  v28 = a2[19];
  v27 = a2[20];
  v2 = a2[14];
  v26 = a2[21];
  v25 = a2[22];
  v24 = a2[23];
  v23 = a2[9];
  v3 = a2[10];
  v22 = a2[13];
  if ( v2 )
  {
    v21 = a2[6];
    v20 = a2[7];
    v19 = a2[24];
    v18 = a2[25];
    v17 = a2[26];
    v16 = a2[27];
    v15 = a2[28];
    v14 = a2[29];
    v13 = a2[30];
    v12 = a2[31];
    v5 = &a1[5 * a2[13] + 20];
    do
    {
      v6 = v22;
      --v2;
      if ( v22 >= 0 )
      {
        if ( v3 < *v5 )
        {
          v5[2] = v31;
          v5[3] = v30;
          v5[4] = v29;
          v5[5] = v28;
          v5[6] = v27;
          v5[7] = v26;
          v5[8] = v25;
          v5[9] = v24;
          v6 = v22;
          *v5 = v3;
        }
        if ( v3 > v5[1] )
          v5[1] = v3;
      }
      v3 += v21;
      v22 = v6 + 1;
      v5 += 10;
      v23 -= v20;
      v7 = __CFADD__(v19, v31);
      v31 += v19;
      v30 += v18 + v7;
      v7 = __CFADD__(v17, v29);
      v29 += v17;
      v28 += v16 + v7;
      v7 = __CFADD__(v15, v27);
      v27 += v15;
      v26 += v14 + v7;
      v7 = __CFADD__(v13, v25);
      v25 += v13;
      v24 += v12 + v7;
      if ( v23 < 0 )
      {
        v3 += a2[12];
        v8 = a1[2] + __PAIR64__(v30, v31);
        v30 = HIDWORD(v8);
        v31 = v8;
        v9 = a1[3] + __PAIR64__(v28, v29);
        v28 = HIDWORD(v9);
        v29 = v9;
        v10 = a1[4] + __PAIR64__(v26, v27);
        v26 = HIDWORD(v10);
        v27 = v10;
        v11 = a1[5] + __PAIR64__(v24, v25);
        v24 = HIDWORD(v11);
        v25 = v11;
        v23 += a2[3];
      }
    }
    while ( v2 );
  }
}
