/*
 * XREFs of ?vFillGRectDIB1@@YGXPAVSURFACE@@PAU_GRADIENTRECTDATA@@@Z @ 0x23AF80
 * Callers:
 *     <none>
 * Callees:
 *     __allmul @ 0xF91DF (__allmul.c)
 *     ?XLATEOBJ_pGetXlate555@@YGPAEPAU_XLATEOBJ@@@Z @ 0x225AD1 (-XLATEOBJ_pGetXlate555@@YGPAEPAU_XLATEOBJ@@@Z.c)
 */

void __stdcall vFillGRectDIB1(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  struct _GRADIENTRECTDATA *v2; // ebx
  unsigned int v3; // eax
  int v4; // esi
  unsigned int v5; // eax
  unsigned int v6; // edx
  struct SURFACE *v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // edi
  char v11; // al
  _BYTE *v12; // ebx
  int v13; // edx
  bool v14; // cf
  unsigned int v15; // kr00_4
  unsigned int v16; // edi
  int v17; // [esp+Ch] [ebp-8Ch]
  unsigned __int8 *Xlate555; // [esp+10h] [ebp-88h]
  char *v19; // [esp+14h] [ebp-84h]
  int v20; // [esp+1Ch] [ebp-7Ch]
  int v21; // [esp+20h] [ebp-78h]
  int v22; // [esp+24h] [ebp-74h]
  unsigned int v23; // [esp+28h] [ebp-70h]
  unsigned int v24; // [esp+2Ch] [ebp-6Ch]
  unsigned int v25; // [esp+30h] [ebp-68h]
  unsigned int v26; // [esp+34h] [ebp-64h]
  unsigned int v27; // [esp+38h] [ebp-60h]
  unsigned int v28; // [esp+3Ch] [ebp-5Ch]
  int v29; // [esp+40h] [ebp-58h]
  unsigned int v30; // [esp+44h] [ebp-54h]
  unsigned int v31; // [esp+48h] [ebp-50h]
  unsigned int v32; // [esp+4Ch] [ebp-4Ch]
  unsigned int v33; // [esp+50h] [ebp-48h]
  unsigned int v34; // [esp+54h] [ebp-44h]
  unsigned int v35; // [esp+58h] [ebp-40h]
  int v36; // [esp+5Ch] [ebp-3Ch]
  unsigned int v37; // [esp+60h] [ebp-38h]
  unsigned int v38; // [esp+64h] [ebp-34h]
  unsigned int v39; // [esp+68h] [ebp-30h]
  int v40; // [esp+6Ch] [ebp-2Ch]
  int v41; // [esp+70h] [ebp-28h]
  int v42; // [esp+74h] [ebp-24h]
  int v43; // [esp+78h] [ebp-20h]
  int v44; // [esp+78h] [ebp-20h]
  int v45; // [esp+7Ch] [ebp-1Ch]
  int v46; // [esp+80h] [ebp-18h]
  int v47; // [esp+80h] [ebp-18h]
  unsigned int v48; // [esp+84h] [ebp-14h]
  unsigned int v49; // [esp+88h] [ebp-10h]
  unsigned int v50; // [esp+8Ch] [ebp-Ch]
  unsigned int v51; // [esp+90h] [ebp-8h]
  unsigned int v52; // [esp+94h] [ebp-4h]
  struct SURFACE *v53; // [esp+A0h] [ebp+8h]

  v2 = a2;
  v29 = *((_DWORD *)a2 + 10);
  v17 = *((_DWORD *)a1 + 13);
  v22 = *((_DWORD *)a2 + 9) + *((_DWORD *)a2 + 11);
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
  v45 = *((_DWORD *)a2 + 9);
  v36 = *((_DWORD *)a1 + 12) + v17 * v45;
  v23 = *((_DWORD *)a2 + 25);
  Xlate555 = XLATEOBJ_pGetXlate555(*((_DWORD *)a2 + 39), (unsigned int *)a2);
  if ( Xlate555 )
  {
    v3 = *((_DWORD *)a2 + 12);
    v49 = *((_DWORD *)a2 + 16);
    v48 = *((_DWORD *)a2 + 17);
    v46 = *((_DWORD *)a2 + 42);
    v4 = v45;
    v51 = v3;
    v53 = (struct SURFACE *)*((_DWORD *)a2 + 13);
    v50 = *((_DWORD *)a2 + 14);
    v52 = *((_DWORD *)a2 + 15);
    if ( v46 )
    {
      v51 = v46 * v28 + v3;
      v53 = (struct SURFACE *)((v46 * __PAIR64__(v27, v28) + __PAIR64__((unsigned int)v53, v3)) >> 32);
      v5 = (v46 * __PAIR64__(v25, v26) + __PAIR64__(v52, v50)) >> 32;
      v50 += v46 * v26;
      v52 = v5;
      v4 = v45;
      v48 = (v46 * __PAIR64__(v23, v24) + __PAIR64__(v48, v49)) >> 32;
      v49 += v46 * v24;
      v3 = v51;
    }
    v21 = *((_DWORD *)a2 + 37);
    v20 = *((_DWORD *)a2 + 36);
    v6 = v50;
    while ( v4 < v22 )
    {
      v7 = v53;
      v43 = *((_DWORD *)v2 + 8);
      v39 = v3;
      v37 = v49;
      v40 = v48;
      v8 = *((_DWORD *)v2 + 41);
      v19 = (char *)&gDitherMatrix16x16Default + 16 * (((_BYTE)v4 + (_BYTE)v21) & 0xF);
      v42 = (int)v53;
      v38 = v6;
      v41 = v52;
      if ( v8 )
      {
        v42 = (__PAIR64__((unsigned int)v53, v51) + v8 * __PAIR64__(v34, v35)) >> 32;
        v39 = v51 + v8 * v35;
        v41 = (__PAIR64__(v52, v50) + v8 * __PAIR64__(v32, v33)) >> 32;
        v38 = v50 + v8 * v33;
        v4 = v45;
        v37 = v49 + v8 * v31;
        v7 = v53;
        v40 = (__PAIR64__(v48, v49) + v8 * __PAIR64__(v30, v31)) >> 32;
      }
      v9 = v36;
      v10 = *((_DWORD *)v2 + 8) & 7;
      if ( v43 < v29 + v43 )
      {
        v11 = v43 + v20;
        v12 = (_BYTE *)(v36 + v43 / 8);
        v44 = v43 + v20;
        v47 = v29;
        do
        {
          v13 = (unsigned __int8)(2 * v19[v11 & 0xF]);
          *v12 = *v12 & ~(1 << (7 - v10)) | (*((_BYTE *)&vTranslateIdentity
                                             + Xlate555[(v13 + (unsigned int)BYTE2(v42) < 0xFF ? 0 : 31744) | (v13 + (unsigned int)BYTE2(v40) < 0xFF ? 0 : 31) | (v13 + (unsigned int)BYTE2(v41) < 0xFF ? 0 : 992)]) << (7 - v10));
          if ( v10 == 7 )
            ++v12;
          v14 = __CFADD__(v35, v39);
          v39 += v35;
          v42 += v34 + v14;
          v14 = __CFADD__(v33, v38);
          v38 += v33;
          v41 += v32 + v14;
          v14 = __CFADD__(v31, v37);
          v37 += v31;
          v40 += v30 + v14;
          v11 = ++v44;
          v10 = v10 != 7 ? v10 + 1 : 0;
          --v47;
        }
        while ( v47 );
        v4 = v45;
        v9 = v36;
        v7 = v53;
      }
      v36 = v17 + v9;
      v15 = v51;
      v51 += v28;
      v3 = v28 + v15;
      v6 = v26 + v50;
      v53 = (struct SURFACE *)((__PAIR64__(v27, v28) + __PAIR64__((unsigned int)v7, v15)) >> 32);
      v16 = v25 + __CFADD__(v26, v50) + v52;
      v14 = __CFADD__(v24, v49);
      v49 += v24;
      v48 += v23 + v14;
      ++v4;
      v2 = a2;
      v50 += v26;
      v52 = v16;
      v45 = v4;
    }
  }
}
