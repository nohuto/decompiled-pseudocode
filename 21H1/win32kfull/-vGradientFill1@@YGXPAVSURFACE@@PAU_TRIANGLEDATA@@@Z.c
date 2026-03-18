/*
 * XREFs of ?vGradientFill1@@YGXPAVSURFACE@@PAU_TRIANGLEDATA@@@Z @ 0x23CE1C
 * Callers:
 *     <none>
 * Callees:
 *     __allmul @ 0xF91DF (__allmul.c)
 *     ?XLATEOBJ_pGetXlate555@@YGPAEPAU_XLATEOBJ@@@Z @ 0x225AD1 (-XLATEOBJ_pGetXlate555@@YGPAEPAU_XLATEOBJ@@@Z.c)
 */

void __stdcall vGradientFill1(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  struct _TRIANGLEDATA *v2; // ebx
  int *v3; // edi
  int v4; // esi
  int v5; // edx
  int i; // eax
  int v7; // ecx
  unsigned __int64 v8; // rax
  int v9; // ecx
  bool v10; // cf
  int v11; // ebx
  unsigned int v12; // ecx
  int v13; // edx
  int v14; // [esp+Ch] [ebp-68h]
  unsigned __int8 *Xlate555; // [esp+10h] [ebp-64h]
  int v16; // [esp+14h] [ebp-60h]
  char *v17; // [esp+18h] [ebp-5Ch]
  int v18; // [esp+20h] [ebp-54h]
  int v19; // [esp+24h] [ebp-50h]
  char *v20; // [esp+28h] [ebp-4Ch]
  int v21; // [esp+2Ch] [ebp-48h]
  int v22; // [esp+30h] [ebp-44h]
  unsigned int v23; // [esp+34h] [ebp-40h]
  unsigned int v24; // [esp+38h] [ebp-3Ch]
  unsigned int v25; // [esp+3Ch] [ebp-38h]
  unsigned int v26; // [esp+40h] [ebp-34h]
  unsigned int v27; // [esp+44h] [ebp-30h]
  unsigned int v28; // [esp+48h] [ebp-2Ch]
  _BYTE *v29; // [esp+4Ch] [ebp-28h]
  int v30; // [esp+50h] [ebp-24h]
  int v31; // [esp+54h] [ebp-20h]
  int v32; // [esp+58h] [ebp-1Ch]
  int v33; // [esp+5Ch] [ebp-18h]
  unsigned int v34; // [esp+60h] [ebp-14h]
  unsigned int v35; // [esp+64h] [ebp-10h]
  unsigned int v36; // [esp+68h] [ebp-Ch]
  unsigned int v37; // [esp+6Ch] [ebp-8h]
  unsigned int v38; // [esp+70h] [ebp-4h]
  struct SURFACE *v39; // [esp+7Ch] [ebp+8h]

  v2 = a2;
  v3 = (int *)((char *)a2 + 160);
  v30 = *((_DWORD *)a2 + 28);
  v14 = *((_DWORD *)a1 + 13);
  v20 = (char *)a2 + 160;
  v4 = *((_DWORD *)a1 + 12) + v14 * v30;
  v28 = *((_DWORD *)a2 + 4);
  v27 = *((_DWORD *)a2 + 5);
  v26 = *((_DWORD *)a2 + 6);
  v25 = *((_DWORD *)a2 + 7);
  v24 = *((_DWORD *)a2 + 8);
  v21 = v4;
  v23 = *((_DWORD *)a2 + 9);
  Xlate555 = XLATEOBJ_pGetXlate555(*((_DWORD *)a2 + 37), (unsigned int *)a2);
  if ( Xlate555 )
  {
    v5 = *((_DWORD *)a2 + 3);
    v22 = v5;
    if ( v5 >= *((_DWORD *)a2 + 29) )
    {
      v5 = *((_DWORD *)a2 + 29);
      v22 = v5;
    }
    v19 = *((_DWORD *)a2 + 33);
    v16 = *((_DWORD *)a2 + 32);
    for ( i = v30; i < v5; v30 = i )
    {
      v35 = v3[2];
      v38 = v3[3];
      v34 = v3[4];
      v37 = v3[5];
      v33 = v3[6];
      v36 = v3[7];
      v31 = *v3;
      v7 = *(_DWORD *)v2;
      v18 = *(_DWORD *)v2;
      if ( *v3 > *(_DWORD *)v2 )
        v7 = *v3;
      v39 = (struct SURFACE *)v7;
      v32 = v3[1];
      if ( v32 >= *((_DWORD *)v2 + 2) )
        v32 = *((_DWORD *)v2 + 2);
      v17 = (char *)&gDitherMatrix16x16Default + 16 * (((_BYTE)i + (_BYTE)v19) & 0xF);
      if ( v7 < v32 )
      {
        v29 = (_BYTE *)(v4 + v7 / 8);
        LOBYTE(v8) = v7;
        v9 = v18 - v31;
        if ( v18 - v31 > 0 )
        {
          v38 = (v9 * __PAIR64__(v27, v28) + __PAIR64__(v38, v35)) >> 32;
          v35 += v9 * v28;
          v37 = (v9 * __PAIR64__(v25, v26) + __PAIR64__(v37, v34)) >> 32;
          v34 += v9 * v26;
          v8 = v9 * __PAIR64__(v23, v24);
          v10 = __CFADD__((_DWORD)v8, v33);
          v33 += v8;
          LOBYTE(v8) = (_BYTE)v39;
          v36 += HIDWORD(v8) + v10;
        }
        v11 = (unsigned __int8)v39 & 7;
        v12 = v37;
        do
        {
          v13 = (unsigned __int8)(2 * v17[((_BYTE)v16 + (_BYTE)v8) & 0xF]);
          *v29 = *v29 & ~(1 << (7 - v11)) | (*((_BYTE *)&vTranslateIdentity
                                             + Xlate555[(v13 + HIBYTE(v38) < 0xFFu ? 0 : 31744) | (v13 + HIBYTE(v36) < 0xFFu
                                                                                                 ? 0
                                                                                                 : 31) | (v13 + HIBYTE(v12) < 0xFFu ? 0 : 992)]) << (7 - v11));
          if ( v11 == 7 )
            ++v29;
          LODWORD(v8) = (char *)v39 + 1;
          v10 = __CFADD__(v28, v35);
          v35 += v28;
          v38 += v27 + v10;
          v12 = (__PAIR64__(v37, v26) + __PAIR64__(v25, v34)) >> 32;
          v34 += v26;
          v10 = __CFADD__(v24, v33);
          v33 += v24;
          v36 += v23 + v10;
          v39 = (struct SURFACE *)v8;
          v37 = v12;
          v11 = v11 != 7 ? v11 + 1 : 0;
        }
        while ( (int)v8 < v32 );
        v2 = a2;
        v3 = (int *)v20;
        v4 = v21;
        i = v30;
        v5 = v22;
      }
      v4 += v14;
      v3 += 10;
      ++i;
      v21 = v4;
      v20 = (char *)v3;
    }
  }
}
