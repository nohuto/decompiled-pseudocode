/*
 * XREFs of ?vFillGRectDIB8@@YGXPAVSURFACE@@PAU_GRADIENTRECTDATA@@@Z @ 0x23C3B4
 * Callers:
 *     <none>
 * Callees:
 *     __allmul @ 0xF91DF (__allmul.c)
 *     ?XLATEOBJ_pGetXlate555@@YGPAEPAU_XLATEOBJ@@@Z @ 0x225AD1 (-XLATEOBJ_pGetXlate555@@YGPAEPAU_XLATEOBJ@@@Z.c)
 */

void __stdcall vFillGRectDIB8(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  struct _GRADIENTRECTDATA *v2; // ebx
  int v3; // edi
  int v4; // esi
  int v5; // edx
  int v6; // eax
  int v7; // eax
  struct SURFACE *v8; // esi
  unsigned __int64 v9; // rax
  unsigned int v10; // ecx
  unsigned __int64 v11; // rax
  unsigned int v12; // kr00_4
  struct SURFACE *v13; // esi
  char v14; // al
  bool v15; // cf
  bool v16; // zf
  int v17; // [esp+Ch] [ebp-94h]
  unsigned __int8 *Xlate555; // [esp+10h] [ebp-90h]
  char *v19; // [esp+14h] [ebp-8Ch]
  int v20; // [esp+18h] [ebp-88h]
  int v21; // [esp+1Ch] [ebp-84h]
  int v22; // [esp+20h] [ebp-80h]
  unsigned int v23; // [esp+24h] [ebp-7Ch]
  unsigned int v24; // [esp+28h] [ebp-78h]
  unsigned int v25; // [esp+2Ch] [ebp-74h]
  unsigned int v26; // [esp+30h] [ebp-70h]
  unsigned int v27; // [esp+34h] [ebp-6Ch]
  unsigned int v28; // [esp+38h] [ebp-68h]
  _BYTE *v29; // [esp+3Ch] [ebp-64h]
  unsigned int v30; // [esp+40h] [ebp-60h]
  unsigned int v31; // [esp+44h] [ebp-5Ch]
  unsigned int v32; // [esp+48h] [ebp-58h]
  unsigned int v33; // [esp+4Ch] [ebp-54h]
  unsigned int v34; // [esp+50h] [ebp-50h]
  unsigned int v35; // [esp+54h] [ebp-4Ch]
  int v36; // [esp+58h] [ebp-48h]
  unsigned int v37; // [esp+5Ch] [ebp-44h]
  unsigned int v38; // [esp+60h] [ebp-40h]
  struct SURFACE *v39; // [esp+64h] [ebp-3Ch]
  unsigned __int8 **v40; // [esp+68h] [ebp-38h]
  char *v41; // [esp+6Ch] [ebp-34h]
  int v42; // [esp+70h] [ebp-30h]
  int v43; // [esp+70h] [ebp-30h]
  int v44; // [esp+74h] [ebp-2Ch]
  int v45; // [esp+78h] [ebp-28h]
  int v46; // [esp+7Ch] [ebp-24h]
  unsigned __int8 **v47; // [esp+80h] [ebp-20h]
  int v48; // [esp+84h] [ebp-1Ch]
  int v49; // [esp+84h] [ebp-1Ch]
  int v50; // [esp+88h] [ebp-18h]
  unsigned int v51; // [esp+8Ch] [ebp-14h]
  unsigned int v52; // [esp+90h] [ebp-10h]
  unsigned __int64 v53; // [esp+94h] [ebp-Ch]
  unsigned int v54; // [esp+9Ch] [ebp-4h]
  struct SURFACE *v55; // [esp+A8h] [ebp+8h]

  v2 = a2;
  v3 = *((_DWORD *)a2 + 9);
  v4 = *((_DWORD *)a2 + 39);
  v22 = v3 + *((_DWORD *)a2 + 11);
  v17 = *((_DWORD *)a1 + 13);
  v50 = v3;
  v35 = *((_DWORD *)a2 + 28);
  v34 = *((_DWORD *)a2 + 29);
  v33 = *((_DWORD *)a2 + 30);
  v32 = *((_DWORD *)a2 + 31);
  v31 = *((_DWORD *)a2 + 32);
  v30 = *((_DWORD *)a2 + 33);
  v28 = *((_DWORD *)a2 + 20);
  v27 = *((_DWORD *)a2 + 21);
  v26 = *((_DWORD *)a2 + 22);
  v25 = *((_DWORD *)a2 + 23);
  v24 = *((_DWORD *)a2 + 24);
  v23 = *((_DWORD *)a2 + 25);
  v36 = *((_DWORD *)a1 + 12) + v17 * v3;
  if ( (*(_DWORD *)(*(_DWORD *)(v4 + 44) + 16) & 0x100000) != 0 )
  {
    v41 = (char *)&gDitherMatrix16x16Halftone;
    v40 = (unsigned __int8 **)&HalftoneSaturationTable;
  }
  else
  {
    v41 = (char *)&gDitherMatrix16x16Default;
    v40 = &DefaultSaturationTable;
  }
  Xlate555 = XLATEOBJ_pGetXlate555(v4, (unsigned int *)a2);
  if ( Xlate555 )
  {
    v5 = *(_DWORD *)(v4 + 56);
    if ( (v5 & 0x800) != 0 )
    {
      v6 = *(_DWORD *)(v4 + 44);
      if ( (struct PALETTE *)v6 == ppalDefault )
      {
        v47 = (unsigned __int8 **)&unk_26DF84;
        v41 = (char *)&gDitherMatrix16x16Default;
        v40 = &DefaultSaturationTable;
      }
      else
      {
        if ( (v5 & 0x1000) != 0 )
          v7 = *(_DWORD *)(v6 + 56);
        else
          v7 = *(_DWORD *)(v6 + 52);
        v47 = (unsigned __int8 **)(v7 + 4);
      }
    }
    else
    {
      v47 = &vTranslateIdentity;
    }
    v8 = (struct SURFACE *)*((_DWORD *)a2 + 12);
    LODWORD(v9) = *((_DWORD *)a2 + 13);
    v10 = *((_DWORD *)a2 + 14);
    v52 = *((_DWORD *)a2 + 16);
    v51 = *((_DWORD *)a2 + 17);
    v42 = *((_DWORD *)a2 + 42);
    v55 = v8;
    LODWORD(v53) = v9;
    v54 = v10;
    HIDWORD(v53) = *((_DWORD *)a2 + 15);
    if ( v42 )
    {
      LODWORD(v9) = (v42 * __PAIR64__(v27, v28) + __PAIR64__(v9, (unsigned int)v8)) >> 32;
      v55 = (struct SURFACE *)((char *)v8 + v42 * v28);
      LODWORD(v53) = v9;
      v54 = v42 * v26 + v10;
      HIDWORD(v53) = (v42 * __PAIR64__(v25, v26) + __PAIR64__(HIDWORD(v53), v10)) >> 32;
      v51 = (v42 * __PAIR64__(v23, v24) + __PAIR64__(v51, v52)) >> 32;
      v52 += v42 * v24;
      v8 = v55;
      v10 = v54;
    }
    v20 = *((_DWORD *)a2 + 36);
    v21 = *((_DWORD *)a2 + 37);
    HIDWORD(v9) = HIDWORD(v53);
    while ( v3 < v22 )
    {
      v46 = v9;
      v37 = v52;
      v44 = v51;
      LODWORD(v9) = *((_DWORD *)v2 + 41);
      v39 = v8;
      v38 = v10;
      v45 = HIDWORD(v9);
      if ( (_DWORD)v9 )
      {
        v46 = (__PAIR64__(v53, (unsigned int)v55) + (int)v9 * __PAIR64__(v34, v35)) >> 32;
        v39 = (struct SURFACE *)((char *)v55 + v9 * v35);
        v45 = (__PAIR64__(HIDWORD(v53), v54) + (int)v9 * __PAIR64__(v32, v33)) >> 32;
        v38 = v54 + v9 * v33;
        v11 = (int)v9 * __PAIR64__(v30, v31);
        v3 = v50;
        v12 = v11;
        v9 = __PAIR64__(HIDWORD(v53), HIDWORD(v11));
        v37 = v52 + v12;
        v10 = v54;
        v44 = (__PAIR64__(v51, v52) + __PAIR64__(v9, v12)) >> 32;
      }
      v48 = *((_DWORD *)v2 + 8);
      v29 = (_BYTE *)(v48 + v36);
      v43 = *((_DWORD *)v2 + 10);
      v13 = v55;
      if ( v48 < v48 + v43 )
      {
        v14 = v20 + v48;
        v49 = v20 + v48;
        do
        {
          v19 = &v41[16 * (((_BYTE)v3 + (_BYTE)v21) & 0xF)];
          *v29++ = *((_BYTE *)v47
                   + Xlate555[(*((unsigned __int8 *)v40 + (unsigned __int8)v19[v14 & 0xF] + BYTE2(v44)) >> 3) | (4 * (*((_BYTE *)v40 + (unsigned __int8)v19[v14 & 0xF] + BYTE2(v45)) & 0xF8 | (32 * (*((_BYTE *)v40 + (unsigned __int8)v19[v14 & 0xF] + BYTE2(v46)) & 0xF8))))]);
          v14 = v49 + 1;
          v15 = __CFADD__(v35, v39);
          v39 = (struct SURFACE *)((char *)v39 + v35);
          v46 += v34 + v15;
          v15 = __CFADD__(v33, v38);
          v38 += v33;
          v45 += v32 + v15;
          v15 = __CFADD__(v31, v37);
          v37 += v31;
          v44 += v30 + v15;
          v16 = v43-- == 1;
          ++v49;
        }
        while ( !v16 );
        v3 = v50;
        v13 = v55;
        v10 = v54;
        HIDWORD(v9) = HIDWORD(v53);
      }
      v36 += v17;
      LODWORD(v9) = (__PAIR64__(v27, v28) + __PAIR64__(v53, (unsigned int)v13)) >> 32;
      v8 = (struct SURFACE *)((char *)v13 + v28);
      HIDWORD(v9) = (__PAIR64__(v25, v26) + __PAIR64__(HIDWORD(v9), v10)) >> 32;
      v10 += v26;
      v15 = __CFADD__(v24, v52);
      v52 += v24;
      v51 += v23 + v15;
      ++v3;
      v2 = a2;
      v55 = v8;
      v53 = v9;
      v54 = v10;
      v50 = v3;
    }
  }
}
