/*
 * XREFs of ?vGradientFill16Bitfields@@YGXPAVSURFACE@@PAU_TRIANGLEDATA@@@Z @ 0x23C730
 * Callers:
 *     <none>
 * Callees:
 *     __allmul @ 0xF91DF (__allmul.c)
 */

void __stdcall vGradientFill16Bitfields(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  struct _TRIANGLEDATA *v2; // ebx
  int v3; // ecx
  int *v4; // eax
  int v5; // edi
  int v6; // esi
  int v7; // edx
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // ebx
  char v15; // al
  _WORD *v16; // edi
  bool v17; // cf
  int v18; // [esp+Ch] [ebp-60h]
  int v19; // [esp+10h] [ebp-5Ch]
  char *v20; // [esp+14h] [ebp-58h]
  int v21; // [esp+18h] [ebp-54h]
  int v22; // [esp+1Ch] [ebp-50h]
  char *v23; // [esp+20h] [ebp-4Ch]
  unsigned int v24; // [esp+24h] [ebp-48h]
  unsigned int v25; // [esp+28h] [ebp-44h]
  unsigned int v26; // [esp+2Ch] [ebp-40h]
  unsigned int v27; // [esp+30h] [ebp-3Ch]
  unsigned int v28; // [esp+34h] [ebp-38h]
  unsigned int v29; // [esp+38h] [ebp-34h]
  unsigned int v30; // [esp+3Ch] [ebp-30h]
  _WORD *v31; // [esp+40h] [ebp-2Ch]
  int v32; // [esp+44h] [ebp-28h]
  int v33; // [esp+44h] [ebp-28h]
  int v34; // [esp+48h] [ebp-24h]
  int v35; // [esp+4Ch] [ebp-20h]
  int v36; // [esp+50h] [ebp-1Ch]
  unsigned int v37; // [esp+54h] [ebp-18h]
  unsigned int v38; // [esp+58h] [ebp-14h]
  unsigned int v39; // [esp+5Ch] [ebp-10h]
  unsigned int v40; // [esp+60h] [ebp-Ch]
  unsigned int v41; // [esp+64h] [ebp-8h]
  unsigned int v42; // [esp+68h] [ebp-4h]

  v2 = a2;
  v18 = *((_DWORD *)a1 + 13);
  v3 = *((_DWORD *)a2 + 28);
  v19 = *((_DWORD *)a2 + 38);
  v30 = *((_DWORD *)a2 + 4);
  v4 = (int *)((char *)a2 + 160);
  v29 = *((_DWORD *)a2 + 5);
  v28 = *((_DWORD *)a2 + 6);
  v27 = *((_DWORD *)a2 + 7);
  v26 = *((_DWORD *)a2 + 8);
  v5 = *((_DWORD *)a2 + 3);
  v25 = *((_DWORD *)a2 + 9);
  v36 = *((_DWORD *)a1 + 12) + v18 * v3;
  v23 = (char *)a2 + 160;
  if ( v5 >= *((_DWORD *)a2 + 29) )
    v5 = *((_DWORD *)a2 + 29);
  v21 = *((_DWORD *)a2 + 32);
  v6 = *((_DWORD *)a1 + 12) + v18 * *((_DWORD *)a2 + 28);
  if ( v3 < v5 )
  {
    v7 = v3 + *((_DWORD *)a2 + 33);
    v8 = v5 - v3;
    v22 = v7;
    v35 = v8;
    do
    {
      v34 = v4[1];
      v20 = (char *)&gulDither32 + 16 * (v7 & 3);
      v39 = v4[2];
      v42 = v4[3];
      v38 = v4[4];
      v41 = v4[5];
      v37 = v4[6];
      v40 = v4[7];
      if ( v34 >= *((_DWORD *)v2 + 2) )
        v34 = *((_DWORD *)v2 + 2);
      v9 = *v4;
      v10 = *(_DWORD *)v2;
      if ( v9 <= *(_DWORD *)v2 )
      {
        v11 = *(_DWORD *)v2;
        v32 = *(_DWORD *)v2;
      }
      else
      {
        v11 = v9;
        v32 = v9;
      }
      v2 = a2;
      if ( *((_DWORD *)a1 + 11) <= (unsigned int)(v11 + v6) && v11 < v34 )
      {
        v12 = v10 - v9;
        v31 = (_WORD *)(v6 + 2 * v11);
        v13 = v6 + 2 * v34;
        v2 = a2;
        if ( v12 > 0 )
        {
          v42 = (v12 * __PAIR64__(v29, v30) + __PAIR64__(v42, v39)) >> 32;
          v39 += v12 * v30;
          v41 = (v12 * __PAIR64__(v27, v28) + __PAIR64__(v41, v38)) >> 32;
          v38 += v12 * v28;
          v6 = v36;
          v40 = (v12 * __PAIR64__(v25, v26) + __PAIR64__(v40, v37)) >> 32;
          v37 += v12 * v26;
          v8 = v35;
          v11 = v32;
        }
        v24 = 0;
        if ( (v13 >= (unsigned int)v31 ? (v13 - (unsigned int)v31 + 1) >> 1 : 0) != 0 )
        {
          v14 = v13 >= (unsigned int)v31 ? (v13 - (unsigned int)v31 + 1) >> 1 : 0;
          v15 = v11 + v21;
          v16 = v31;
          v33 = v11 + v21;
          do
          {
            *v16++ = XEPALOBJ::ulDispatchGFPEFunction(
                       v19,
                       *(_DWORD *)(*(_DWORD *)v19 + 68),
                       8
                     * (*((unsigned __int8 *)&Saturation16_5 + ((*(_DWORD *)&v20[4 * (v15 & 3)] + (v42 >> 11)) >> 16)) | ((*((unsigned __int8 *)&Saturation16_5 + ((*(_DWORD *)&v20[4 * (v15 & 3)] + (v41 >> 11)) >> 16)) | (*((unsigned __int8 *)&Saturation16_5 + ((*(_DWORD *)&v20[4 * (v15 & 3)] + (v40 >> 11)) >> 16)) << 8)) << 8)));
            v17 = __CFADD__(v30, v39);
            v39 += v30;
            v42 += v29 + v17;
            v17 = __CFADD__(v28, v38);
            v38 += v28;
            v41 += v27 + v17;
            v17 = __CFADD__(v26, v37);
            v37 += v26;
            v40 += v25 + v17;
            v15 = ++v33;
            ++v24;
          }
          while ( v24 < v14 );
          v2 = a2;
          v6 = v36;
          v8 = v35;
        }
      }
      v6 += v18;
      v4 = (int *)(v23 + 40);
      LOBYTE(v7) = v22 + 1;
      v36 = v6;
      --v8;
      v23 += 40;
      ++v22;
      v35 = v8;
    }
    while ( v8 );
  }
}
