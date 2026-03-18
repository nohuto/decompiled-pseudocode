/*
 * XREFs of ?vFillGRectDIB4@@YGXPAVSURFACE@@PAU_GRADIENTRECTDATA@@@Z @ 0x23C05C
 * Callers:
 *     <none>
 * Callees:
 *     __allmul @ 0xF91DF (__allmul.c)
 *     ?XLATEOBJ_pGetXlate555@@YGPAEPAU_XLATEOBJ@@@Z @ 0x225AD1 (-XLATEOBJ_pGetXlate555@@YGPAEPAU_XLATEOBJ@@@Z.c)
 */

void __stdcall vFillGRectDIB4(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  int v2; // edi
  int v3; // ecx
  int v4; // edx
  int v5; // esi
  int v6; // esi
  struct SURFACE *v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // edx
  int v10; // esi
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  int v13; // esi
  int v14; // eax
  int v15; // ecx
  char v16; // al
  _BYTE *v17; // edi
  char *v18; // esi
  char v19; // dl
  char v20; // al
  char v21; // al
  bool v22; // cf
  int v23; // [esp+Ch] [ebp-90h]
  int v24; // [esp+10h] [ebp-8Ch]
  unsigned __int8 *Xlate555; // [esp+14h] [ebp-88h]
  int v26; // [esp+18h] [ebp-84h]
  int v27; // [esp+20h] [ebp-7Ch]
  int v28; // [esp+24h] [ebp-78h]
  int v29; // [esp+28h] [ebp-74h]
  unsigned int v30; // [esp+2Ch] [ebp-70h]
  unsigned int v31; // [esp+30h] [ebp-6Ch]
  unsigned int v32; // [esp+34h] [ebp-68h]
  unsigned int v33; // [esp+38h] [ebp-64h]
  unsigned int v34; // [esp+3Ch] [ebp-60h]
  unsigned int v35; // [esp+40h] [ebp-5Ch]
  unsigned int v36; // [esp+44h] [ebp-58h]
  unsigned int v37; // [esp+48h] [ebp-54h]
  unsigned int v38; // [esp+4Ch] [ebp-50h]
  unsigned int v39; // [esp+50h] [ebp-4Ch]
  unsigned int v40; // [esp+54h] [ebp-48h]
  unsigned int v41; // [esp+58h] [ebp-44h]
  int v42; // [esp+5Ch] [ebp-40h]
  char *v43; // [esp+60h] [ebp-3Ch]
  _BYTE *v44; // [esp+60h] [ebp-3Ch]
  unsigned int v45; // [esp+64h] [ebp-38h]
  struct SURFACE *v46; // [esp+68h] [ebp-34h]
  int v47; // [esp+6Ch] [ebp-30h]
  int v48; // [esp+70h] [ebp-2Ch]
  int v49; // [esp+74h] [ebp-28h]
  int v50; // [esp+78h] [ebp-24h]
  int v51; // [esp+7Ch] [ebp-20h]
  unsigned __int8 **v52; // [esp+80h] [ebp-1Ch]
  unsigned int v53; // [esp+84h] [ebp-18h]
  unsigned int v54; // [esp+88h] [ebp-14h]
  unsigned int v55; // [esp+8Ch] [ebp-10h]
  unsigned int v56; // [esp+90h] [ebp-Ch]
  unsigned int v57; // [esp+94h] [ebp-8h]
  unsigned int v58; // [esp+98h] [ebp-4h]
  struct SURFACE *v59; // [esp+A4h] [ebp+8h]

  v2 = *((_DWORD *)a2 + 9);
  v23 = *((_DWORD *)a1 + 13);
  v29 = v2 + *((_DWORD *)a2 + 11);
  v47 = v2;
  v41 = *((_DWORD *)a2 + 28);
  v40 = *((_DWORD *)a2 + 29);
  v39 = *((_DWORD *)a2 + 30);
  v38 = *((_DWORD *)a2 + 31);
  v37 = *((_DWORD *)a2 + 32);
  v36 = *((_DWORD *)a2 + 33);
  v35 = *((_DWORD *)a2 + 20);
  v34 = *((_DWORD *)a2 + 21);
  v48 = *((_DWORD *)a1 + 12) + v23 * v2;
  v3 = *((_DWORD *)a2 + 39);
  v33 = *((_DWORD *)a2 + 22);
  v32 = *((_DWORD *)a2 + 23);
  v4 = *(_DWORD *)(v3 + 56);
  v31 = *((_DWORD *)a2 + 24);
  v30 = *((_DWORD *)a2 + 25);
  if ( (v4 & 0x800) != 0 )
  {
    v5 = *(_DWORD *)(v3 + 44);
    if ( (struct PALETTE *)v5 == ppalDefault )
    {
      v52 = (unsigned __int8 **)&unk_26DF84;
    }
    else
    {
      if ( (v4 & 0x1000) != 0 )
        v6 = *(_DWORD *)(v5 + 56);
      else
        v6 = *(_DWORD *)(v5 + 52);
      v52 = (unsigned __int8 **)(v6 + 4);
    }
  }
  else
  {
    v52 = &vTranslateIdentity;
  }
  Xlate555 = XLATEOBJ_pGetXlate555(v3, (unsigned int *)a2);
  if ( Xlate555 )
  {
    v7 = (struct SURFACE *)*((_DWORD *)a2 + 12);
    v8 = *((_DWORD *)a2 + 13);
    v9 = *((_DWORD *)a2 + 14);
    v56 = *((_DWORD *)a2 + 15);
    v55 = *((_DWORD *)a2 + 16);
    v54 = *((_DWORD *)a2 + 17);
    v10 = *((_DWORD *)a2 + 42);
    v59 = v7;
    v58 = v8;
    v57 = v9;
    if ( v10 )
    {
      v11 = v10;
      v59 = (struct SURFACE *)((char *)v7 + v11 * v35);
      v58 = (v11 * __PAIR64__(v34, v35) + __PAIR64__(v8, (unsigned int)v7)) >> 32;
      v56 = (v11 * __PAIR64__(v32, v33) + __PAIR64__(v56, v9)) >> 32;
      v57 = v11 * v33 + v9;
      v12 = v11 * __PAIR64__(v30, v31);
      v2 = v47;
      v54 = (v12 + __PAIR64__(v54, v55)) >> 32;
      v55 += v12;
      v7 = v59;
      v8 = v58;
      v9 = v57;
    }
    v26 = *((_DWORD *)a2 + 37);
    v27 = *((_DWORD *)a2 + 36);
    if ( v2 < v29 )
    {
      v13 = v48;
      do
      {
        v46 = v7;
        v50 = v56;
        v43 = (char *)&gDitherMatrix16x16Default + 16 * (((_BYTE)v2 + (_BYTE)v26) & 0xF);
        v45 = v55;
        v49 = v54;
        v14 = *((_DWORD *)a2 + 41);
        v51 = v8;
        v53 = v9;
        if ( v14 )
        {
          v51 = (__PAIR64__(v58, (unsigned int)v59) + v14 * __PAIR64__(v40, v41)) >> 32;
          v46 = (struct SURFACE *)((char *)v59 + v14 * v41);
          v53 = v57 + v14 * v39;
          v50 = (__PAIR64__(v56, v57) + v14 * __PAIR64__(v38, v39)) >> 32;
          v2 = v47;
          v13 = v48;
          v49 = (__PAIR64__(v54, v55) + v14 * __PAIR64__(v36, v37)) >> 32;
          v45 = v55 + v14 * v37;
        }
        v15 = *((_DWORD *)a2 + 8);
        v28 = v15;
        v24 = v15 + *((_DWORD *)a2 + 10);
        if ( v15 < v24 )
        {
          v16 = v15 + v27;
          v17 = (_BYTE *)(v13 + v15 / 2);
          v18 = v43;
          v42 = v15 + v27;
          do
          {
            v44 = v17;
            v19 = *((_BYTE *)v52
                  + Xlate555[(*((unsigned __int8 *)&DefaultSaturationTable + BYTE2(v49)
                                                                           + (unsigned __int8)v18[v16 & 0xF]) >> 3) | (4 * (*((_BYTE *)&DefaultSaturationTable + BYTE2(v50) + (unsigned __int8)v18[v16 & 0xF]) & 0xF8 | (32 * (*((_BYTE *)&DefaultSaturationTable + BYTE2(v51) + (unsigned __int8)v18[v16 & 0xF]) & 0xF8))))]);
            v20 = *v17;
            if ( (v28 & 1) != 0 )
            {
              ++v17;
              v21 = v20 & 0xF0;
            }
            else
            {
              v21 = v20 & 0xF;
              v19 *= 16;
            }
            ++v28;
            *v44 = v19 | v21;
            v16 = v42 + 1;
            v22 = __CFADD__(v41, v46);
            v46 = (struct SURFACE *)((char *)v46 + v41);
            v51 += v40 + v22;
            v22 = __CFADD__(v39, v53);
            v53 += v39;
            v50 += v38 + v22;
            v22 = __CFADD__(v37, v45);
            v45 += v37;
            v49 += v36 + v22;
            ++v42;
          }
          while ( v28 < v24 );
          v2 = v47;
          v13 = v48;
        }
        v13 += v23;
        v7 = (struct SURFACE *)((char *)v59 + v35);
        v8 = v34 + __CFADD__(v35, v59) + v58;
        v9 = v33 + v57;
        v56 += v32 + __CFADD__(v33, v57);
        v22 = __CFADD__(v31, v55);
        v55 += v31;
        v54 += v30 + v22;
        ++v2;
        v48 = v13;
        v59 = (struct SURFACE *)((char *)v59 + v35);
        v58 = v8;
        v57 += v33;
        v47 = v2;
      }
      while ( v2 < v29 );
    }
  }
}
