/*
 * XREFs of ?vGradientFill16_555@@YGXPAVSURFACE@@PAU_TRIANGLEDATA@@@Z @ 0x23C98E
 * Callers:
 *     <none>
 * Callees:
 *     __allmul @ 0xF91DF (__allmul.c)
 */

void __stdcall vGradientFill16_555(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  struct _TRIANGLEDATA *v2; // ebx
  int v3; // ecx
  int *v4; // eax
  int v5; // edi
  int v6; // esi
  int v7; // edx
  int v8; // edi
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  unsigned int v13; // eax
  unsigned int v14; // edx
  char v15; // al
  _WORD *v16; // edi
  bool v17; // cf
  int v18; // [esp+Ch] [ebp-5Ch]
  char *v19; // [esp+10h] [ebp-58h]
  int v20; // [esp+14h] [ebp-54h]
  int v21; // [esp+18h] [ebp-50h]
  char *v22; // [esp+1Ch] [ebp-4Ch]
  unsigned int v23; // [esp+20h] [ebp-48h]
  unsigned int v24; // [esp+24h] [ebp-44h]
  unsigned int v25; // [esp+28h] [ebp-40h]
  unsigned int v26; // [esp+2Ch] [ebp-3Ch]
  unsigned int v27; // [esp+30h] [ebp-38h]
  unsigned int v28; // [esp+34h] [ebp-34h]
  unsigned int v29; // [esp+38h] [ebp-30h]
  _WORD *v30; // [esp+3Ch] [ebp-2Ch]
  int v31; // [esp+40h] [ebp-28h]
  int v32; // [esp+40h] [ebp-28h]
  int v33; // [esp+44h] [ebp-24h]
  int v34; // [esp+48h] [ebp-20h]
  int v35; // [esp+4Ch] [ebp-1Ch]
  unsigned int v36; // [esp+50h] [ebp-18h]
  unsigned int v37; // [esp+54h] [ebp-14h]
  unsigned int v38; // [esp+58h] [ebp-10h]
  unsigned int v39; // [esp+5Ch] [ebp-Ch]
  unsigned int v40; // [esp+60h] [ebp-8h]
  unsigned int v41; // [esp+64h] [ebp-4h]

  v2 = a2;
  v18 = *((_DWORD *)a1 + 13);
  v3 = *((_DWORD *)a2 + 28);
  v29 = *((_DWORD *)a2 + 4);
  v28 = *((_DWORD *)a2 + 5);
  v4 = (int *)((char *)a2 + 160);
  v27 = *((_DWORD *)a2 + 6);
  v26 = *((_DWORD *)a2 + 7);
  v25 = *((_DWORD *)a2 + 8);
  v5 = *((_DWORD *)a2 + 3);
  v24 = *((_DWORD *)a2 + 9);
  v35 = *((_DWORD *)a1 + 12) + v18 * v3;
  v22 = (char *)a2 + 160;
  if ( v5 >= *((_DWORD *)a2 + 29) )
    v5 = *((_DWORD *)a2 + 29);
  v20 = *((_DWORD *)a2 + 32);
  v6 = *((_DWORD *)a1 + 12) + v18 * *((_DWORD *)a2 + 28);
  if ( v3 < v5 )
  {
    v7 = v3 + *((_DWORD *)a2 + 33);
    v8 = v5 - v3;
    v21 = v7;
    v34 = v8;
    do
    {
      v19 = (char *)&gulDither32 + 16 * (v7 & 3);
      v38 = v4[2];
      v41 = v4[3];
      v37 = v4[4];
      v40 = v4[5];
      v36 = v4[6];
      v39 = v4[7];
      v33 = v4[1];
      if ( v33 >= *((_DWORD *)v2 + 2) )
        v33 = *((_DWORD *)v2 + 2);
      v9 = *v4;
      v10 = *(_DWORD *)v2;
      if ( v9 <= *(_DWORD *)v2 )
      {
        v11 = *(_DWORD *)v2;
        v31 = *(_DWORD *)v2;
      }
      else
      {
        v11 = v9;
        v31 = v9;
      }
      v2 = a2;
      if ( *((_DWORD *)a1 + 11) <= (unsigned int)(v11 + v6) && v11 < v33 )
      {
        v12 = v10 - v9;
        v30 = (_WORD *)(v6 + 2 * v11);
        v13 = v6 + 2 * v33;
        v2 = a2;
        if ( v12 > 0 )
        {
          v41 = (v12 * __PAIR64__(v28, v29) + __PAIR64__(v41, v38)) >> 32;
          v38 += v12 * v29;
          v40 = (v12 * __PAIR64__(v26, v27) + __PAIR64__(v40, v37)) >> 32;
          v37 += v12 * v27;
          v6 = v35;
          v39 = (v12 * __PAIR64__(v24, v25) + __PAIR64__(v39, v36)) >> 32;
          v36 += v12 * v25;
          v8 = v34;
          v11 = v31;
        }
        v23 = 0;
        if ( (v13 >= (unsigned int)v30 ? (v13 - (unsigned int)v30 + 1) >> 1 : 0) != 0 )
        {
          v14 = v13 >= (unsigned int)v30 ? (v13 - (unsigned int)v30 + 1) >> 1 : 0;
          v15 = v11 + v20;
          v16 = v30;
          v32 = v11 + v20;
          do
          {
            *v16 = *((unsigned __int8 *)&Saturation16_5 + ((*(_DWORD *)&v19[4 * (v15 & 3)] + (v39 >> 11)) >> 16)) | (unsigned __int16)(32 * (*((unsigned __int8 *)&Saturation16_5 + ((*(_DWORD *)&v19[4 * (v15 & 3)] + (v40 >> 11)) >> 16)) | (unsigned __int16)(32 * *((unsigned __int8 *)&Saturation16_5 + ((*(_DWORD *)&v19[4 * (v15 & 3)] + (v41 >> 11)) >> 16)))));
            v15 = v32 + 1;
            ++v16;
            v17 = __CFADD__(v29, v38);
            v38 += v29;
            v41 += v28 + v17;
            v17 = __CFADD__(v27, v37);
            v37 += v27;
            v40 += v26 + v17;
            v17 = __CFADD__(v25, v36);
            v36 += v25;
            v39 += v24 + v17;
            ++v32;
            ++v23;
          }
          while ( v23 < v14 );
          v2 = a2;
          v6 = v35;
          v8 = v34;
        }
      }
      v6 += v18;
      v4 = (int *)(v22 + 40);
      LOBYTE(v7) = v21 + 1;
      v35 = v6;
      --v8;
      v22 += 40;
      ++v21;
      v34 = v8;
    }
    while ( v8 );
  }
}
