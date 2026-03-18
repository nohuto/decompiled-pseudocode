/*
 * XREFs of ?vGradientFill4@@YGXPAVSURFACE@@PAU_TRIANGLEDATA@@@Z @ 0x23DB4C
 * Callers:
 *     <none>
 * Callees:
 *     __allmul @ 0xF91DF (__allmul.c)
 *     ?XLATEOBJ_pGetXlate555@@YGPAEPAU_XLATEOBJ@@@Z @ 0x225AD1 (-XLATEOBJ_pGetXlate555@@YGPAEPAU_XLATEOBJ@@@Z.c)
 */

void __stdcall vGradientFill4(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  struct _TRIANGLEDATA *v2; // ebx
  char *v3; // edi
  int v4; // edx
  int v5; // esi
  int v6; // ecx
  unsigned __int8 **v7; // eax
  int v8; // edx
  int i; // eax
  int v10; // ecx
  _BYTE *v11; // edx
  int v12; // eax
  unsigned __int64 v13; // rax
  char *v14; // edi
  int v15; // ebx
  int v16; // ecx
  char v17; // cl
  char v18; // al
  char v19; // al
  bool v20; // cf
  int v21; // [esp+Ch] [ebp-6Ch]
  unsigned __int8 *Xlate555; // [esp+10h] [ebp-68h]
  int v23; // [esp+14h] [ebp-64h]
  char *v24; // [esp+18h] [ebp-60h]
  _BYTE *v25; // [esp+18h] [ebp-60h]
  int v26; // [esp+1Ch] [ebp-5Ch]
  int v27; // [esp+20h] [ebp-58h]
  char *v28; // [esp+24h] [ebp-54h]
  int v29; // [esp+28h] [ebp-50h]
  unsigned int v30; // [esp+2Ch] [ebp-4Ch]
  unsigned int v31; // [esp+30h] [ebp-48h]
  unsigned int v32; // [esp+34h] [ebp-44h]
  unsigned int v33; // [esp+38h] [ebp-40h]
  unsigned int v34; // [esp+3Ch] [ebp-3Ch]
  unsigned int v35; // [esp+40h] [ebp-38h]
  int v36; // [esp+44h] [ebp-34h]
  int v37; // [esp+48h] [ebp-30h]
  int v38; // [esp+4Ch] [ebp-2Ch]
  _BYTE *v39; // [esp+50h] [ebp-28h]
  int v40; // [esp+58h] [ebp-20h]
  int v41; // [esp+5Ch] [ebp-1Ch]
  unsigned int v42; // [esp+60h] [ebp-18h]
  unsigned int v43; // [esp+64h] [ebp-14h]
  unsigned int v44; // [esp+68h] [ebp-10h]
  int v45; // [esp+6Ch] [ebp-Ch]
  unsigned int v46; // [esp+70h] [ebp-8h]
  unsigned int v47; // [esp+74h] [ebp-4h]
  struct SURFACE *v48; // [esp+80h] [ebp+8h]
  struct SURFACE *v49; // [esp+80h] [ebp+8h]

  v2 = a2;
  v3 = (char *)a2 + 160;
  v4 = *((_DWORD *)a2 + 37);
  v36 = *((_DWORD *)a2 + 28);
  v21 = *((_DWORD *)a1 + 13);
  v28 = (char *)a2 + 160;
  v5 = *((_DWORD *)a1 + 12) + v21 * v36;
  v35 = *((_DWORD *)a2 + 4);
  v34 = *((_DWORD *)a2 + 5);
  v33 = *((_DWORD *)a2 + 6);
  v32 = *((_DWORD *)a2 + 7);
  v31 = *((_DWORD *)a2 + 8);
  v30 = *((_DWORD *)a2 + 9);
  v37 = v5;
  v48 = *(struct SURFACE **)(v4 + 56);
  if ( ((unsigned __int16)v48 & 0x800) != 0 )
  {
    v6 = *(_DWORD *)(v4 + 44);
    if ( (struct PALETTE *)v6 == ppalDefault )
    {
      v7 = (unsigned __int8 **)&unk_26DF84;
    }
    else
    {
      if ( ((unsigned __int16)v48 & 0x1000) != 0 )
      {
        v45 = *(_DWORD *)(v6 + 56) + 4;
        goto LABEL_9;
      }
      v7 = (unsigned __int8 **)(*(_DWORD *)(v6 + 52) + 4);
    }
  }
  else
  {
    v7 = &vTranslateIdentity;
  }
  v45 = (int)v7;
LABEL_9:
  Xlate555 = XLATEOBJ_pGetXlate555(v4, (unsigned int *)a2);
  if ( Xlate555 )
  {
    v8 = *((_DWORD *)a2 + 3);
    v29 = v8;
    if ( v8 >= *((_DWORD *)a2 + 29) )
    {
      v8 = *((_DWORD *)a2 + 29);
      v29 = v8;
    }
    v27 = *((_DWORD *)a2 + 33);
    v23 = *((_DWORD *)a2 + 32);
    for ( i = v36; i < v8; v36 = i )
    {
      v44 = *((_DWORD *)v3 + 2);
      v49 = (struct SURFACE *)*((_DWORD *)v3 + 3);
      v43 = *((_DWORD *)v3 + 4);
      v47 = *((_DWORD *)v3 + 5);
      v42 = *((_DWORD *)v3 + 6);
      v46 = *((_DWORD *)v3 + 7);
      v40 = *(_DWORD *)v3;
      v10 = *(_DWORD *)v2;
      v26 = *(_DWORD *)v2;
      if ( *(_DWORD *)v3 > *(_DWORD *)v2 )
        v10 = *(_DWORD *)v3;
      v41 = *((_DWORD *)v3 + 1);
      if ( v41 >= *((_DWORD *)v2 + 2) )
        v41 = *((_DWORD *)v2 + 2);
      v24 = (char *)&gDitherMatrix16x16Default + 16 * (((_BYTE)i + (_BYTE)v27) & 0xF);
      if ( v10 < v41 )
      {
        v38 = v10 & 1;
        v11 = (_BYTE *)(v5 + v10 / 2);
        v12 = v26 - v40;
        v39 = v11;
        if ( v26 - v40 > 0 )
        {
          v49 = (struct SURFACE *)((v12 * __PAIR64__(v34, v35) + __PAIR64__((unsigned int)v49, v44)) >> 32);
          v44 += v12 * v35;
          v47 = (v12 * __PAIR64__(v32, v33) + __PAIR64__(v47, v43)) >> 32;
          v43 += v12 * v33;
          v13 = v12 * __PAIR64__(v30, v31);
          v46 = (v13 + __PAIR64__(v46, v42)) >> 32;
          v42 += v13;
          v11 = (_BYTE *)(v5 + v10 / 2);
        }
        v14 = v24;
        v15 = v10;
        do
        {
          v25 = v11;
          v16 = (unsigned __int8)v14[((_BYTE)v15 + (_BYTE)v23) & 0xF];
          v11 = v39;
          v17 = *(_BYTE *)(Xlate555[(*((unsigned __int8 *)&DefaultSaturationTable + HIBYTE(v46) + v16) >> 3) | (4 * (*((_BYTE *)&DefaultSaturationTable + HIBYTE(v47) + v16) & 0xF8 | (32 * (*((_BYTE *)&DefaultSaturationTable + ((unsigned int)v49 >> 24) + v16) & 0xF8))))]
                         + v45);
          v18 = *v39;
          if ( v38 )
          {
            v38 = 0;
            v11 = ++v39;
            v19 = v18 & 0xF0;
          }
          else
          {
            v19 = v18 & 0xF;
            v38 = 1;
            v17 *= 16;
          }
          ++v15;
          *v25 = v17 | v19;
          v20 = __CFADD__(v35, v44);
          v44 += v35;
          v49 = (struct SURFACE *)((char *)v49 + v34 + v20);
          v20 = __CFADD__(v33, v43);
          v43 += v33;
          v47 += v32 + v20;
          v20 = __CFADD__(v31, v42);
          v42 += v31;
          v46 += v30 + v20;
        }
        while ( v15 < v41 );
        v2 = a2;
        v3 = v28;
        v5 = v37;
        i = v36;
        v8 = v29;
      }
      v5 += v21;
      v3 += 40;
      ++i;
      v37 = v5;
      v28 = v3;
    }
  }
}
