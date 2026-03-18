/*
 * XREFs of ?vGradientFill8@@YGXPAVSURFACE@@PAU_TRIANGLEDATA@@@Z @ 0x23DDDF
 * Callers:
 *     <none>
 * Callees:
 *     __allmul @ 0xF91DF (__allmul.c)
 *     ?XLATEOBJ_pGetXlate555@@YGPAEPAU_XLATEOBJ@@@Z @ 0x225AD1 (-XLATEOBJ_pGetXlate555@@YGPAEPAU_XLATEOBJ@@@Z.c)
 */

void __stdcall vGradientFill8(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  struct _TRIANGLEDATA *v2; // ebx
  char *v3; // esi
  int v4; // edx
  int v5; // ecx
  int v6; // edi
  unsigned __int8 **v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  char *v11; // esi
  int v12; // eax
  char v13; // al
  unsigned int v14; // edx
  bool v15; // cf
  int v16; // [esp+Ch] [ebp-74h]
  unsigned __int8 *Xlate555; // [esp+10h] [ebp-70h]
  char *v18; // [esp+14h] [ebp-6Ch]
  int v19; // [esp+18h] [ebp-68h]
  int v20; // [esp+1Ch] [ebp-64h]
  unsigned int v21; // [esp+1Ch] [ebp-64h]
  int v22; // [esp+20h] [ebp-60h]
  int v23; // [esp+24h] [ebp-5Ch]
  int v24; // [esp+24h] [ebp-5Ch]
  int v25; // [esp+28h] [ebp-58h]
  unsigned int v26; // [esp+28h] [ebp-58h]
  unsigned int v27; // [esp+2Ch] [ebp-54h]
  unsigned int v28; // [esp+30h] [ebp-50h]
  unsigned int v29; // [esp+34h] [ebp-4Ch]
  unsigned int v30; // [esp+38h] [ebp-48h]
  unsigned int v31; // [esp+3Ch] [ebp-44h]
  unsigned int v32; // [esp+40h] [ebp-40h]
  unsigned int v33; // [esp+44h] [ebp-3Ch]
  int v34; // [esp+44h] [ebp-3Ch]
  char *v35; // [esp+48h] [ebp-38h]
  int v36; // [esp+4Ch] [ebp-34h]
  _BYTE *v37; // [esp+50h] [ebp-30h]
  int v38; // [esp+54h] [ebp-2Ch]
  int v39; // [esp+58h] [ebp-28h]
  char *v40; // [esp+5Ch] [ebp-24h]
  unsigned int v41; // [esp+60h] [ebp-20h]
  unsigned int v42; // [esp+64h] [ebp-1Ch]
  unsigned int v43; // [esp+68h] [ebp-18h]
  unsigned __int8 **v44; // [esp+6Ch] [ebp-14h]
  int v45; // [esp+70h] [ebp-10h]
  unsigned int v46; // [esp+74h] [ebp-Ch]
  unsigned int v47; // [esp+78h] [ebp-8h]
  unsigned int v48; // [esp+7Ch] [ebp-4h]

  v2 = a2;
  v3 = (char *)a2 + 160;
  v4 = *((_DWORD *)a2 + 37);
  v39 = *((_DWORD *)a2 + 28);
  v16 = *((_DWORD *)a1 + 13);
  v5 = *(_DWORD *)(v4 + 44);
  v40 = (char *)a2 + 160;
  v6 = *((_DWORD *)a1 + 12) + v16 * v39;
  v32 = *((_DWORD *)a2 + 4);
  v31 = *((_DWORD *)a2 + 5);
  v30 = *((_DWORD *)a2 + 6);
  v29 = *((_DWORD *)a2 + 7);
  v28 = *((_DWORD *)a2 + 8);
  v36 = v6;
  v27 = *((_DWORD *)a2 + 9);
  if ( (*(_DWORD *)(v5 + 16) & 0x100000) != 0 )
  {
    v35 = (char *)&gDitherMatrix16x16Halftone;
    v44 = (unsigned __int8 **)&HalftoneSaturationTable;
  }
  else
  {
    v35 = (char *)&gDitherMatrix16x16Default;
    v44 = &DefaultSaturationTable;
  }
  v23 = *(_DWORD *)(v4 + 56);
  if ( (v23 & 0x800) != 0 )
  {
    if ( (struct PALETTE *)v5 == ppalDefault )
    {
      v7 = (unsigned __int8 **)&unk_26DF84;
    }
    else
    {
      if ( (v23 & 0x1000) != 0 )
      {
        v45 = *(_DWORD *)(v5 + 56) + 4;
        v3 = (char *)a2 + 160;
        goto LABEL_12;
      }
      v7 = (unsigned __int8 **)(*(_DWORD *)(v5 + 52) + 4);
    }
  }
  else
  {
    v7 = &vTranslateIdentity;
  }
  v45 = (int)v7;
LABEL_12:
  Xlate555 = XLATEOBJ_pGetXlate555(v4, (unsigned int *)a2);
  if ( Xlate555 )
  {
    v8 = *((_DWORD *)a2 + 3);
    v24 = v8;
    if ( v8 >= *((_DWORD *)a2 + 29) )
    {
      v8 = *((_DWORD *)a2 + 29);
      v24 = v8;
    }
    v22 = *((_DWORD *)a2 + 33);
    v19 = *((_DWORD *)a2 + 32);
    v9 = v39;
    if ( v39 < v8 )
    {
      do
      {
        v43 = *((_DWORD *)v3 + 2);
        v48 = *((_DWORD *)v3 + 3);
        v42 = *((_DWORD *)v3 + 4);
        v47 = *((_DWORD *)v3 + 5);
        v41 = *((_DWORD *)v3 + 6);
        v46 = *((_DWORD *)v3 + 7);
        v20 = *(_DWORD *)v3;
        v25 = *(_DWORD *)v2;
        v38 = *(_DWORD *)v3;
        if ( *(_DWORD *)v3 <= *(_DWORD *)v2 )
          v38 = *(_DWORD *)v2;
        v10 = *((_DWORD *)v3 + 1);
        if ( v10 >= *((_DWORD *)v2 + 2) )
          v10 = *((_DWORD *)v2 + 2);
        v18 = &v35[16 * (((_BYTE)v9 + (_BYTE)v22) & 0xF)];
        v11 = v40;
        v37 = (_BYTE *)(v38 + v6);
        v2 = a2;
        if ( *((_DWORD *)a1 + 11) <= (unsigned int)(v38 + v6) && v38 < v10 )
        {
          v33 = v10 + v6;
          v12 = v25 - v20;
          if ( v25 - v20 > 0 )
          {
            v48 = (v12 * __PAIR64__(v31, v32) + __PAIR64__(v48, v43)) >> 32;
            v43 += v12 * v32;
            v47 = (v12 * __PAIR64__(v29, v30) + __PAIR64__(v47, v42)) >> 32;
            v42 += v12 * v30;
            v6 = v36;
            v46 = (v12 * __PAIR64__(v27, v28) + __PAIR64__(v46, v41)) >> 32;
            v41 += v12 * v28;
            v11 = v40;
            v9 = v39;
          }
          v26 = 0;
          v21 = (v33 - (_DWORD)v37) & ~((v33 - (unsigned __int64)(unsigned int)v37) >> 32);
          if ( v21 )
          {
            v13 = v19 + v38;
            v14 = v48;
            v34 = v19 + v38;
            do
            {
              *v37 = *(_BYTE *)(Xlate555[(*((unsigned __int8 *)v44 + (unsigned __int8)v18[v13 & 0xF] + HIBYTE(v46)) >> 3) | (4 * (*((_BYTE *)v44 + (unsigned __int8)v18[v13 & 0xF] + HIBYTE(v47)) & 0xF8 | (32 * (*((_BYTE *)v44 + (unsigned __int8)v18[v13 & 0xF] + HIBYTE(v14)) & 0xF8))))]
                              + v45);
              v13 = v34 + 1;
              v14 = (__PAIR64__(v48, v32) + __PAIR64__(v31, v43)) >> 32;
              v43 += v32;
              v15 = __CFADD__(v30, v42);
              v42 += v30;
              v47 += v29 + v15;
              v15 = __CFADD__(v28, v41);
              v41 += v28;
              v46 += v27 + v15;
              ++v37;
              v48 = v14;
              ++v34;
              ++v26;
            }
            while ( v26 < v21 );
            v2 = a2;
            v6 = v36;
            v11 = v40;
            v9 = v39;
          }
        }
        v6 += v16;
        v3 = v11 + 40;
        ++v9;
        v36 = v6;
        v40 = v3;
        v39 = v9;
      }
      while ( v9 < v24 );
    }
  }
}
