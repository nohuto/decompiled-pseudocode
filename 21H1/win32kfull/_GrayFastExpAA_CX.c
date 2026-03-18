/*
 * XREFs of _GrayFastExpAA_CX @ 0x1CA2E4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl GrayFastExpAA_CX(int a1, int a2, _WORD *a3, _WORD *a4, int a5)
{
  _WORD *v5; // ebx
  unsigned __int16 *v6; // esi
  int v7; // eax
  __int16 v8; // di
  unsigned __int8 *v9; // ecx
  unsigned __int16 v10; // dx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  _WORD *v14; // ecx
  unsigned int v15; // eax
  _WORD *v16; // ebx
  _WORD *v17; // ebx
  unsigned int v18; // eax
  unsigned int v19; // eax
  _WORD *v20; // ebx
  int v21; // ecx
  unsigned __int16 v22; // [esp+4h] [ebp-3Ch]
  unsigned __int16 v23; // [esp+8h] [ebp-38h]
  unsigned __int16 v24; // [esp+Ch] [ebp-34h]
  unsigned __int16 v25; // [esp+10h] [ebp-30h]
  unsigned __int16 v26; // [esp+14h] [ebp-2Ch]
  unsigned __int16 v27; // [esp+18h] [ebp-28h]
  unsigned __int16 v28; // [esp+20h] [ebp-20h]
  unsigned __int16 v29; // [esp+24h] [ebp-1Ch]
  unsigned __int16 v30; // [esp+28h] [ebp-18h]
  unsigned __int16 v31; // [esp+2Ch] [ebp-14h]
  int v32; // [esp+2Ch] [ebp-14h]
  unsigned __int16 v33; // [esp+30h] [ebp-10h]
  int v34; // [esp+34h] [ebp-Ch]
  unsigned __int16 v35; // [esp+38h] [ebp-8h]
  unsigned __int16 v36; // [esp+3Ch] [ebp-4h]
  unsigned __int8 *v37; // [esp+4Ch] [ebp+Ch]
  _WORD *v38; // [esp+50h] [ebp+10h]

  if ( a2 )
  {
    v5 = a3;
    v6 = *(unsigned __int16 **)(a1 + 72);
    v7 = *(unsigned __int8 *)(a1 + 68);
    v8 = GrayIdxWORD[*(unsigned __int8 *)(v7 + a2 - 1)];
    v9 = (unsigned __int8 *)(v7 + a2 + 1);
    v10 = GrayIdxWORD[*(unsigned __int8 *)(v7 + a2)];
    while ( 1 )
    {
      v22 = v8;
      v23 = v10;
      v24 = v8;
      v25 = v10;
      v26 = v8;
      v27 = v10;
      v28 = v8;
      v29 = v10;
      v31 = v10;
      v33 = v8;
      v34 = *v6;
      v11 = *v9++;
      v8 = v10;
      v35 = v10;
      v10 = GrayIdxWORD[v11];
      v37 = v9;
      v30 = v10;
      v36 = v10;
      if ( v34 == 1 )
      {
        v15 = v10 + v22 + 2 * (v23 + 8 + 2 * (v10 + v22 + 5 * v23));
LABEL_15:
        v19 = v15 >> 5;
        goto LABEL_16;
      }
      if ( v34 == 2 )
        break;
      switch ( v34 )
      {
        case 3:
          *v5 = (v26 + v27 + 2 * (v26 + 2 * ((unsigned int)v27 + 1))) >> 3;
          v20 = (_WORD *)((char *)v5 + a5);
          *v20 = (v10 + 14 * v27 + v26 + 8) >> 4;
          v5 = (_WORD *)((char *)v20 + a5);
          v18 = v10 + v27 + 2 * (v10 + 2 * (v27 + 1));
LABEL_11:
          v8 = v35;
          v19 = v18 >> 3;
LABEL_16:
          v10 = v36;
LABEL_17:
          v9 = v37;
          *v5 = v19;
          goto LABEL_18;
        case 4:
          *v5 = (v28 + v29 + 2 * (v28 + 2 * ((unsigned int)v29 + 1))) >> 3;
          v16 = (_WORD *)((char *)v5 + a5);
          *v16 = (v10 + 3 * (v28 + 4 * (unsigned int)v29) + 8) >> 4;
          v17 = (_WORD *)((char *)v16 + a5);
          *v17 = (v28 + 8 + 3 * (v10 + 4 * (unsigned int)v29)) >> 4;
          v5 = (_WORD *)((char *)v17 + a5);
          v18 = v10 + 4 + v29 + 2 * (v10 + 2 * v29);
          goto LABEL_11;
        case 5:
          v12 = v31;
          v32 = 19 * v31;
          *a3 = (v32 + 16 + 13 * (unsigned int)v33) >> 5;
          v38 = (_WORD *)((char *)a3 + a5);
          v13 = 25 * v12 + 16;
          *v38 = (v30 + 25 * v12 + 6 * (unsigned int)v33 + 16) >> 5;
          *(_WORD *)((char *)v38 + a5) = (v33 + v30 + 2 * (v33 + (unsigned int)v30 + 13 * v12 + 8)) >> 5;
          v14 = (_WORD *)((char *)v38 + a5 + a5);
          v8 = v35;
          *v14 = (v13 + v33 + 6 * (unsigned int)v30) >> 5;
          v15 = v32 + 16 + 13 * v30;
          v5 = (_WORD *)((char *)v14 + a5);
          goto LABEL_15;
      }
      v5 = (_WORD *)((char *)v5 + a5 * (v34 - 1));
LABEL_18:
      v5 = (_WORD *)((char *)v5 + a5);
      ++v6;
      a3 = v5;
      if ( v5 == a4 )
        return;
    }
    v21 = 3 * v25;
    *v5 = (v21 + (unsigned int)v24 + 2) >> 2;
    v5 = (_WORD *)((char *)v5 + a5);
    v19 = (v21 + 2 + (unsigned int)v10) >> 2;
    goto LABEL_17;
  }
}
