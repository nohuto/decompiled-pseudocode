/*
 * XREFs of ?vFillGRectDIB16_555@@YGXPAVSURFACE@@PAU_GRADIENTRECTDATA@@@Z @ 0x23A9E0
 * Callers:
 *     <none>
 * Callees:
 *     __allmul @ 0xF91DF (__allmul.c)
 */

void __stdcall vFillGRectDIB16_555(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  struct _GRADIENTRECTDATA *v2; // ebx
  unsigned int v3; // edi
  struct SURFACE *v4; // esi
  unsigned int v5; // edx
  int v6; // eax
  unsigned int v7; // ecx
  unsigned __int64 v8; // kr40_8
  __int64 v9; // rdi
  unsigned int v10; // eax
  struct SURFACE *v11; // kr00_4
  char v12; // al
  int v13; // eax
  unsigned __int64 v14; // kr28_8
  int v15; // ecx
  unsigned int v16; // eax
  int v17; // esi
  unsigned int v18; // ecx
  int v19; // edx
  bool v20; // cf
  bool v21; // zf
  int v22; // [esp+Ch] [ebp-80h]
  char *v23; // [esp+18h] [ebp-74h]
  int v24; // [esp+1Ch] [ebp-70h]
  int v25; // [esp+20h] [ebp-6Ch]
  int v26; // [esp+20h] [ebp-6Ch]
  unsigned int v27; // [esp+24h] [ebp-68h]
  unsigned int v28; // [esp+28h] [ebp-64h]
  unsigned int v29; // [esp+2Ch] [ebp-60h]
  unsigned int v30; // [esp+30h] [ebp-5Ch]
  unsigned int v31; // [esp+34h] [ebp-58h]
  unsigned int v32; // [esp+38h] [ebp-54h]
  unsigned int v33; // [esp+3Ch] [ebp-50h]
  unsigned int v34; // [esp+40h] [ebp-4Ch]
  unsigned int v35; // [esp+44h] [ebp-48h]
  unsigned int v36; // [esp+48h] [ebp-44h]
  unsigned int v37; // [esp+4Ch] [ebp-40h]
  unsigned int v38; // [esp+50h] [ebp-3Ch]
  unsigned int v39; // [esp+54h] [ebp-38h]
  int v40; // [esp+58h] [ebp-34h]
  int v41; // [esp+5Ch] [ebp-30h]
  _WORD *v42; // [esp+5Ch] [ebp-30h]
  unsigned int v43; // [esp+60h] [ebp-2Ch]
  char *v44; // [esp+68h] [ebp-24h]
  unsigned int v45; // [esp+6Ch] [ebp-20h]
  unsigned int v46; // [esp+74h] [ebp-18h]
  unsigned int v47; // [esp+78h] [ebp-14h]
  unsigned int v48; // [esp+7Ch] [ebp-10h]
  __int64 v49; // [esp+80h] [ebp-Ch]
  unsigned int v50; // [esp+88h] [ebp-4h]
  struct SURFACE *v51; // [esp+94h] [ebp+8h]

  v2 = a2;
  v25 = *((_DWORD *)a2 + 9);
  v24 = *((_DWORD *)a2 + 11);
  v3 = *((_DWORD *)a2 + 13);
  v22 = *((_DWORD *)a1 + 13);
  v4 = (struct SURFACE *)*((_DWORD *)a2 + 12);
  v39 = *((_DWORD *)a2 + 28);
  v38 = *((_DWORD *)a2 + 29);
  v37 = *((_DWORD *)a2 + 30);
  v36 = *((_DWORD *)a2 + 31);
  v5 = *((_DWORD *)a2 + 15);
  v35 = *((_DWORD *)a2 + 32);
  v34 = *((_DWORD *)a2 + 33);
  v32 = *((_DWORD *)a2 + 20);
  v31 = *((_DWORD *)a2 + 21);
  v30 = *((_DWORD *)a2 + 22);
  v29 = *((_DWORD *)a2 + 23);
  v28 = *((_DWORD *)a2 + 24);
  v27 = *((_DWORD *)a2 + 25);
  v48 = *((_DWORD *)a2 + 16);
  v47 = *((_DWORD *)a2 + 17);
  v6 = *((_DWORD *)a2 + 42);
  v40 = *((_DWORD *)a1 + 12) + v22 * v25;
  v7 = *((_DWORD *)a2 + 14);
  v51 = v4;
  v50 = v3;
  v49 = *((_QWORD *)a2 + 7);
  v8 = __PAIR64__(v3, (unsigned int)v4);
  if ( v6 )
  {
    v9 = v6;
    v11 = (struct SURFACE *)((char *)v51 + v6 * v32);
    v10 = (v6 * __PAIR64__(v31, v32) + __PAIR64__(v50, (unsigned int)v51)) >> 32;
    v51 = v11;
    v50 = v10;
    v49 += v9 * __PAIR64__(v29, v30);
    v47 = (v9 * __PAIR64__(v27, v28) + __PAIR64__(v47, v48)) >> 32;
    v48 += v9 * v28;
    v5 = HIDWORD(v49);
    v7 = v49;
    v8 = __PAIR64__(v10, (unsigned int)v11);
  }
  v41 = *((_DWORD *)a2 + 37);
  if ( v25 < v25 + v24 )
  {
    v12 = v41 + v25;
    v26 = v41 + v25;
    do
    {
      v46 = HIDWORD(v8);
      v44 = (char *)v8;
      v23 = (char *)&gulDither32 + 16 * (v12 & 3);
      v43 = v48;
      v45 = v47;
      v13 = *((_DWORD *)v2 + 41);
      v14 = __PAIR64__(v5, v7);
      if ( v13 )
      {
        v46 = (__PAIR64__(v50, (unsigned int)v51) + v13 * __PAIR64__(v38, v39)) >> 32;
        v44 = (char *)v51 + v13 * v39;
        v14 = v49 + v13 * __PAIR64__(v36, v37);
        v5 = HIDWORD(v49);
        v45 = (__PAIR64__(v47, v48) + v13 * __PAIR64__(v34, v35)) >> 32;
        v43 = v48 + v13 * v35;
        v8 = __PAIR64__(v50, (unsigned int)v51);
      }
      v15 = *((_DWORD *)v2 + 8);
      v33 = 0;
      v42 = (_WORD *)(v40 + 2 * v15);
      v16 = &v42[*((_DWORD *)v2 + 10)] >= v42 ? (unsigned int)(2 * *((_DWORD *)v2 + 10)) >> 1 : 0;
      if ( v16 )
      {
        v17 = v15 + *((_DWORD *)v2 + 36);
        v18 = v46;
        do
        {
          v19 = *(_DWORD *)&v23[4 * (v17++ & 3)];
          *v42 = *((unsigned __int8 *)&Saturation16_5 + ((v19 + (v45 >> 3)) >> 16)) | (unsigned __int16)(32 * (*((unsigned __int8 *)&Saturation16_5 + ((unsigned int)(v19 + (HIDWORD(v14) >> 3)) >> 16)) | (unsigned __int16)(32 * *((unsigned __int8 *)&Saturation16_5 + ((v19 + (v18 >> 3)) >> 16)))));
          v18 = (__PAIR64__(v46, v39) + __PAIR64__(v38, (unsigned int)v44)) >> 32;
          v44 += v39;
          v20 = __CFADD__(v35, v43);
          v43 += v35;
          v45 += v34 + v20;
          ++v42;
          v46 = v18;
          ++v33;
          v14 += __PAIR64__(v36, v37);
        }
        while ( v33 < v16 );
        v5 = HIDWORD(v49);
        v8 = __PAIR64__(v50, (unsigned int)v51);
      }
      v8 += __PAIR64__(v31, v32);
      v7 = v30 + v49;
      v5 += v29 + __CFADD__(v30, (_DWORD)v49);
      v20 = __CFADD__(v28, v48);
      v48 += v28;
      v47 += v27 + v20;
      v12 = v26 + 1;
      v40 += v22;
      v21 = v24-- == 1;
      v2 = a2;
      v50 = HIDWORD(v8);
      v51 = (struct SURFACE *)v8;
      LODWORD(v49) = v30 + v49;
      HIDWORD(v49) = v5;
      ++v26;
    }
    while ( !v21 );
  }
}
