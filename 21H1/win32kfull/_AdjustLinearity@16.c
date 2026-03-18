/*
 * XREFs of _AdjustLinearity@16 @ 0x13E922
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall AdjustLinearity(int a1, INT *a2, INT *a3, _DWORD *a4)
{
  int v4; // ecx
  INT v5; // edi
  INT v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // esi
  int v10; // ecx
  int v11; // edi
  int v12; // eax
  int v13; // edx
  int v14; // esi
  unsigned __int16 v15; // di
  unsigned __int16 v16; // cx
  unsigned __int16 v17; // dx
  unsigned __int16 v18; // cx
  unsigned __int16 v19; // bx
  int v20; // edi
  int v21; // ebx
  int v22; // eax
  unsigned __int16 v24; // cx
  int v25; // edi
  int v26; // eax
  int v27; // edi
  INT v28; // ecx
  INT v29; // edx
  int v30; // eax
  INT v31; // edi
  int v32; // edi
  unsigned __int16 v33; // [esp+4h] [ebp-40h]
  unsigned __int16 v34; // [esp+Ch] [ebp-38h]
  unsigned __int16 v35; // [esp+Ch] [ebp-38h]
  unsigned __int16 v36; // [esp+10h] [ebp-34h]
  unsigned __int16 v37; // [esp+10h] [ebp-34h]
  unsigned __int16 v38; // [esp+14h] [ebp-30h]
  unsigned __int16 v39; // [esp+20h] [ebp-24h]
  unsigned __int16 v40; // [esp+24h] [ebp-20h]
  int v41; // [esp+28h] [ebp-1Ch]
  int v42; // [esp+2Ch] [ebp-18h]
  unsigned __int16 v43; // [esp+2Ch] [ebp-18h]
  unsigned __int16 v44; // [esp+2Ch] [ebp-18h]
  int v45; // [esp+30h] [ebp-14h]
  int v46; // [esp+34h] [ebp-10h]
  INT v47; // [esp+38h] [ebp-Ch]
  int v48; // [esp+3Ch] [ebp-8h]
  int v49; // [esp+40h] [ebp-4h]
  int v50; // [esp+4Ch] [ebp+8h]

  if ( !a2 || !a3 || !a1 || *(_DWORD *)a1 > 0x8000u || *(_DWORD *)(a1 + 4) > 0x8000u )
    return;
  if ( a4 )
  {
    v4 = a4[2];
    if ( *a4 == v4 || a4[1] == a4[3] )
      return;
    v5 = EngMulDiv(*a2 - *a4, *(_DWORD *)a1, v4 - *a4);
    v47 = v5;
    v6 = EngMulDiv(*a3 - a4[1], *(_DWORD *)(a1 + 4), a4[3] - a4[1]);
  }
  else
  {
    v5 = *a2;
    v6 = *a3;
    v47 = *a2;
  }
  v7 = *(unsigned __int16 *)(a1 + 8);
  v42 = 0;
  v48 = v6;
  v49 = *(unsigned __int16 *)(a1 + 10);
  v45 = *(unsigned __int16 *)(a1 + 12);
  v41 = v7;
  v8 = v7 + v49 * v45;
  v9 = v7 + v45 * (v49 + 1);
  do
  {
    if ( v5 >= *(unsigned __int16 *)(a1 + 8 * v8 + 20) || v5 >= *(unsigned __int16 *)(a1 + 8 * v9 + 20) )
    {
      if ( *(unsigned __int16 *)(a1 + 8 * v8 + 28) > v5 || *(unsigned __int16 *)(a1 + 8 * v9 + 28) > v5 )
      {
        v11 = 0;
        goto LABEL_20;
      }
      v10 = v7 + 2 < (unsigned __int16)v45;
    }
    else
    {
      v10 = -(v7 != 0);
    }
    v11 = v10;
LABEL_20:
    if ( v48 >= *(unsigned __int16 *)(a1 + 8 * v8 + 22) || v48 >= *(unsigned __int16 *)(a1 + 8 * v8 + 30) )
      v12 = *(unsigned __int16 *)(a1 + 8 * v9 + 22) <= v48
         && *(unsigned __int16 *)(a1 + 8 * v9 + 30) <= v48
         && v49 + 2 < *(unsigned __int16 *)(a1 + 14);
    else
      v12 = -(v49 != 0);
    if ( !v11 && !v12 )
      break;
    v7 = v11 + v41;
    v41 = v7;
    ++v42;
    v13 = (v12 + v49) * v45;
    v14 = v45 * (v12 + v49 + 1);
    v49 += v12;
    v5 = v47;
    v8 = v7 + v13;
    v9 = v7 + v14;
  }
  while ( v42 <= v45 + *(unsigned __int16 *)(a1 + 14) );
  v15 = *(_WORD *)(a1 + 8 * v8 + 22);
  v46 = v8;
  v39 = *(_WORD *)(a1 + 8 * v9 + 22);
  v40 = v15;
  if ( v39 != v15 )
  {
    v38 = *(_WORD *)(a1 + 8 * v8 + 30);
    v36 = *(_WORD *)(a1 + 8 * v9 + 30);
    if ( v36 != v38 )
    {
      v16 = *(_WORD *)(a1 + 8 * v8 + 28);
      v17 = *(_WORD *)(a1 + 8 * v8 + 20);
      v43 = v16;
      if ( v16 != v17 )
      {
        v18 = *(_WORD *)(a1 + 8 * v9 + 28);
        v19 = *(_WORD *)(a1 + 8 * v9 + 20);
        v34 = v19;
        if ( v18 != v19 )
        {
          v33 = v17 + (v19 - v17) * (v48 - v15) / (v39 - v15);
          v20 = v43;
          v21 = v36;
          v44 = v43 + (v18 - v43) * (v48 - v38) / (v36 - v38);
          v37 = v40 + (v47 - v17) * (v38 - v40) / (v20 - v17);
          v22 = (v21 - v39) * (v47 - v34);
          v24 = v39 + v22 / (v18 - v34);
          *(_WORD *)(a1 + 8) = v41;
          v35 = v24;
          *(_WORD *)(a1 + 10) = v49;
          if ( v44 != v33 && v24 != v37 )
          {
            v25 = *(unsigned __int16 *)(a1 + 8 * v46 + 16);
            v26 = v25 + (v47 - v33) * (*(unsigned __int16 *)(a1 + 8 * v46 + 24) - v25) / (v44 - v33);
            v27 = *(unsigned __int16 *)(a1 + 8 * v46 + 18);
            v50 = v26;
            v28 = *(_DWORD *)a1;
            v29 = v26;
            v30 = v27 + (v48 - v37) * (*(unsigned __int16 *)(a1 + 8 * v9 + 18) - v27) / (v35 - v37);
            if ( v50 >= 0 )
            {
              if ( v28 <= v29 )
                v29 = v28 - 1;
            }
            else
            {
              v29 = 0;
            }
            if ( v30 >= 0 )
            {
              v32 = *(_DWORD *)(a1 + 4);
              if ( v32 > v30 )
                v31 = v30;
              else
                v31 = v32 - 1;
            }
            else
            {
              v31 = 0;
            }
            if ( v28 )
            {
              if ( *(_DWORD *)(a1 + 4) )
              {
                *a2 = *a4 + EngMulDiv(v29, a4[2] - *a4, v28);
                *a3 = a4[1] + EngMulDiv(v31, a4[3] - a4[1], *(_DWORD *)(a1 + 4));
              }
            }
          }
        }
      }
    }
  }
}
