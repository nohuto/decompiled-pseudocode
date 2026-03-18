/*
 * XREFs of ?vFillGRectDIB16_565@@YGXPAVSURFACE@@PAU_GRADIENTRECTDATA@@@Z @ 0x23ACAC
 * Callers:
 *     <none>
 * Callees:
 *     __allmul @ 0xF91DF (__allmul.c)
 */

void __stdcall vFillGRectDIB16_565(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  struct _GRADIENTRECTDATA *v2; // ebx
  unsigned int v3; // edi
  struct SURFACE *v4; // esi
  unsigned int v5; // edx
  int v6; // eax
  unsigned int v7; // ecx
  unsigned __int64 v8; // kr38_8
  __int64 v9; // rdi
  unsigned int v10; // eax
  struct SURFACE *v11; // kr00_4
  char v12; // al
  int v13; // eax
  unsigned __int64 v14; // kr20_8
  unsigned __int64 v15; // kr28_8
  int v16; // ecx
  unsigned int v17; // edi
  _WORD *v18; // esi
  char v19; // al
  bool v20; // cf
  bool v21; // zf
  int v22; // [esp+Ch] [ebp-84h]
  char *v23; // [esp+14h] [ebp-7Ch]
  int v24; // [esp+18h] [ebp-78h]
  int v25; // [esp+1Ch] [ebp-74h]
  unsigned int v26; // [esp+20h] [ebp-70h]
  unsigned int v27; // [esp+24h] [ebp-6Ch]
  unsigned int v28; // [esp+28h] [ebp-68h]
  unsigned int v29; // [esp+2Ch] [ebp-64h]
  unsigned int v30; // [esp+30h] [ebp-60h]
  unsigned int v31; // [esp+34h] [ebp-5Ch]
  unsigned int v32; // [esp+38h] [ebp-58h]
  unsigned int v33; // [esp+3Ch] [ebp-54h]
  unsigned int v34; // [esp+40h] [ebp-50h]
  unsigned int v35; // [esp+44h] [ebp-4Ch]
  unsigned int v36; // [esp+48h] [ebp-48h]
  unsigned int v37; // [esp+4Ch] [ebp-44h]
  int v38; // [esp+50h] [ebp-40h]
  unsigned int v39; // [esp+54h] [ebp-3Ch]
  int v40; // [esp+60h] [ebp-30h]
  int v41; // [esp+64h] [ebp-2Ch]
  int v42; // [esp+64h] [ebp-2Ch]
  unsigned int v43; // [esp+68h] [ebp-28h]
  int v44; // [esp+6Ch] [ebp-24h]
  unsigned int v45; // [esp+70h] [ebp-20h]
  unsigned int v46; // [esp+7Ch] [ebp-14h]
  unsigned int v47; // [esp+80h] [ebp-10h]
  __int64 v48; // [esp+84h] [ebp-Ch]
  unsigned int v49; // [esp+8Ch] [ebp-4h]
  struct SURFACE *v50; // [esp+98h] [ebp+8h]

  v2 = a2;
  v41 = *((_DWORD *)a2 + 9);
  v25 = *((_DWORD *)a2 + 11);
  v3 = *((_DWORD *)a2 + 13);
  v22 = *((_DWORD *)a1 + 13);
  v4 = (struct SURFACE *)*((_DWORD *)a2 + 12);
  v33 = *((_DWORD *)a2 + 28);
  v26 = *((_DWORD *)a2 + 29);
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
  v47 = *((_DWORD *)a2 + 16);
  v46 = *((_DWORD *)a2 + 17);
  v6 = *((_DWORD *)a2 + 42);
  v38 = *((_DWORD *)a1 + 12) + v22 * v41;
  v7 = *((_DWORD *)a2 + 14);
  v50 = v4;
  v49 = v3;
  v48 = *((_QWORD *)a2 + 7);
  v8 = __PAIR64__(v3, (unsigned int)v4);
  if ( v6 )
  {
    v9 = v6;
    v11 = (struct SURFACE *)((char *)v50 + v6 * v32);
    v10 = (v6 * __PAIR64__(v31, v32) + __PAIR64__(v49, (unsigned int)v50)) >> 32;
    v50 = v11;
    v49 = v10;
    v48 += v9 * __PAIR64__(v29, v30);
    v46 = (v9 * __PAIR64__(v27, v28) + __PAIR64__(v46, v47)) >> 32;
    v47 += v9 * v28;
    v5 = HIDWORD(v48);
    v7 = v48;
    v8 = __PAIR64__(v10, (unsigned int)v11);
  }
  v44 = *((_DWORD *)a2 + 37);
  v24 = *((_DWORD *)a2 + 36);
  if ( v41 < v41 + v25 )
  {
    v12 = v44 + v41;
    v42 = v44 + v41;
    do
    {
      v23 = (char *)&gulDither32 + 16 * (v12 & 3);
      v39 = v47;
      v45 = v46;
      v13 = *((_DWORD *)v2 + 41);
      v14 = v8;
      v15 = __PAIR64__(v5, v7);
      if ( v13 )
      {
        v14 = __PAIR64__(v49, (unsigned int)v50) + v13 * __PAIR64__(v26, v33);
        v15 = v48 + v13 * __PAIR64__(v36, v37);
        v5 = HIDWORD(v48);
        v45 = (__PAIR64__(v46, v47) + v13 * __PAIR64__(v34, v35)) >> 32;
        v39 = v47 + v13 * v35;
        v8 = __PAIR64__(v49, (unsigned int)v50);
      }
      v16 = *((_DWORD *)v2 + 8);
      v43 = 0;
      v40 = v16 + v24;
      if ( (2 * *((_DWORD *)v2 + 10) + v38 + 2 * v16 >= (unsigned int)(v38 + 2 * v16)
          ? (unsigned int)(2 * *((_DWORD *)v2 + 10)) >> 1
          : 0) != 0 )
      {
        v17 = 2 * *((_DWORD *)v2 + 10) + v38 + 2 * v16 >= (unsigned int)(v38 + 2 * v16)
            ? (unsigned int)(2 * *((_DWORD *)v2 + 10)) >> 1
            : 0;
        v18 = (_WORD *)(v38 + 2 * v16);
        v19 = v16 + v24;
        do
        {
          *v18 = *((unsigned __int8 *)&Saturation16_5 + ((*(_DWORD *)&v23[4 * (v19 & 3)] + (v45 >> 3)) >> 16)) | (unsigned __int16)(32 * (*((unsigned __int8 *)&Saturation16_6 + ((unsigned int)(*(_DWORD *)&v23[4 * (v19 & 3)] + (HIDWORD(v15) >> 2)) >> 16)) | (*((unsigned __int8 *)&Saturation16_5 + ((unsigned int)(*(_DWORD *)&v23[4 * (v19 & 3)] + (HIDWORD(v14) >> 3)) >> 16)) << 6)));
          v19 = v40 + 1;
          ++v18;
          v20 = __CFADD__(v35, v39);
          v39 += v35;
          v45 += v34 + v20;
          ++v40;
          ++v43;
          v14 += __PAIR64__(v26, v33);
          v15 += __PAIR64__(v36, v37);
        }
        while ( v43 < v17 );
        v5 = HIDWORD(v48);
        v8 = __PAIR64__(v49, (unsigned int)v50);
      }
      v8 += __PAIR64__(v31, v32);
      v7 = v30 + v48;
      v5 += v29 + __CFADD__(v30, (_DWORD)v48);
      v20 = __CFADD__(v28, v47);
      v47 += v28;
      v46 += v27 + v20;
      v12 = v42 + 1;
      v38 += v22;
      v21 = v25-- == 1;
      v2 = a2;
      v49 = HIDWORD(v8);
      v50 = (struct SURFACE *)v8;
      LODWORD(v48) = v30 + v48;
      HIDWORD(v48) = v5;
      ++v42;
    }
    while ( !v21 );
  }
}
