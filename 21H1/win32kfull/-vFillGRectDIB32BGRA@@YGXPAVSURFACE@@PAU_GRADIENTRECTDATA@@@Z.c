/*
 * XREFs of ?vFillGRectDIB32BGRA@@YGXPAVSURFACE@@PAU_GRADIENTRECTDATA@@@Z @ 0xBEF84
 * Callers:
 *     <none>
 * Callees:
 *     __allmul @ 0xF91DF (__allmul.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

void __stdcall vFillGRectDIB32BGRA(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  struct _GRADIENTRECTDATA *v2; // ebx
  int v3; // eax
  int v4; // esi
  int v5; // edi
  int v6; // ecx
  int *v7; // edx
  int v8; // eax
  int *v9; // edi
  unsigned int v10; // edx
  unsigned int v11; // ebx
  int v12; // esi
  unsigned int v13; // eax
  int v14; // ecx
  bool v15; // cf
  char *v16; // edi
  char *v17; // esi
  struct _GRADIENTRECTDATA *v18; // edx
  int v19; // edi
  unsigned int v20; // ecx
  char *v21; // edi
  int v22; // eax
  struct _GRADIENTRECTDATA *v23; // ecx
  unsigned int v24; // kr48_4
  unsigned int v25; // edx
  unsigned int v26; // edx
  unsigned int v27; // edx
  struct SURFACE *v28; // edx
  unsigned int v29; // edx
  unsigned int v30; // edx
  unsigned int v31; // [esp+Ch] [ebp-54h]
  unsigned int v32; // [esp+Ch] [ebp-54h]
  int v33; // [esp+18h] [ebp-48h]
  unsigned int v34; // [esp+18h] [ebp-48h]
  unsigned int v35; // [esp+1Ch] [ebp-44h]
  __int64 v36; // [esp+1Ch] [ebp-44h]
  unsigned int v37; // [esp+20h] [ebp-40h]
  unsigned int v38; // [esp+24h] [ebp-3Ch]
  __int64 v39; // [esp+24h] [ebp-3Ch]
  unsigned int v40; // [esp+28h] [ebp-38h]
  unsigned int v41; // [esp+2Ch] [ebp-34h]
  __int64 v42; // [esp+2Ch] [ebp-34h]
  unsigned int v43; // [esp+30h] [ebp-30h]
  unsigned int v44; // [esp+34h] [ebp-2Ch]
  int v45; // [esp+38h] [ebp-28h]
  unsigned int v46; // [esp+3Ch] [ebp-24h]
  int v47; // [esp+40h] [ebp-20h]
  char *v48; // [esp+44h] [ebp-1Ch]
  unsigned int v49; // [esp+44h] [ebp-1Ch]
  unsigned int v50; // [esp+48h] [ebp-18h]
  unsigned int v51; // [esp+48h] [ebp-18h]
  unsigned int v52; // [esp+4Ch] [ebp-14h]
  unsigned int v53; // [esp+4Ch] [ebp-14h]
  unsigned int v54; // [esp+50h] [ebp-10h]
  __int64 v55; // [esp+50h] [ebp-10h]
  unsigned int v56; // [esp+54h] [ebp-Ch]
  unsigned int v57; // [esp+58h] [ebp-8h]
  unsigned int v58; // [esp+58h] [ebp-8h]
  unsigned int v59; // [esp+5Ch] [ebp-4h]
  unsigned int v60; // [esp+5Ch] [ebp-4h]
  struct SURFACE *v61; // [esp+68h] [ebp+8h]
  struct _GRADIENTRECTDATA *v62; // [esp+6Ch] [ebp+Ch]

  v2 = a2;
  v3 = *((_DWORD *)a1 + 13);
  v4 = *((_DWORD *)a2 + 11);
  v47 = v3;
  v45 = v4;
  if ( *((_DWORD *)a2 + 38) )
  {
    v18 = (struct _GRADIENTRECTDATA *)*((_DWORD *)a2 + 13);
    v34 = *((_DWORD *)a2 + 21);
    v49 = *((_DWORD *)a2 + 12);
    v36 = *((_QWORD *)a2 + 11);
    v51 = *((_DWORD *)a2 + 14);
    v58 = *((_DWORD *)a2 + 15);
    v39 = *((_QWORD *)a2 + 12);
    v53 = *((_DWORD *)a2 + 16);
    v60 = *((_DWORD *)a2 + 17);
    v42 = *((_QWORD *)a2 + 13);
    v55 = *((_QWORD *)a2 + 9);
    v19 = *((_DWORD *)a2 + 42);
    v20 = *((_DWORD *)a2 + 20);
    v62 = v18;
    v32 = v20;
    if ( v19 > 0 )
    {
      v24 = v19 * v20 + v49;
      v23 = (struct _GRADIENTRECTDATA *)((v19 * __PAIR64__(v34, v20) + __PAIR64__((unsigned int)v18, v49)) >> 32);
      v49 = v24;
      v62 = v23;
      v25 = (v19 * v36 + __PAIR64__(v58, v51)) >> 32;
      v51 += v19 * v36;
      v58 = v25;
      v26 = (v19 * v39 + __PAIR64__(v60, v53)) >> 32;
      v53 += v19 * v39;
      v60 = v26;
      v18 = (struct _GRADIENTRECTDATA *)((unsigned __int64)(v19 * v42 + v55) >> 32);
      v3 = *((_DWORD *)a1 + 13);
      v55 += v19 * v42;
      BYTE2(v18) = BYTE2(v23);
    }
    v21 = (char *)(*((_DWORD *)a1 + 12) + v3 * *((_DWORD *)v2 + 9) + 4 * *((_DWORD *)v2 + 8));
    if ( v4 )
    {
      BYTE2(v22) = BYTE6(v55);
      do
      {
        RtlFillMemoryUlong(
          v21,
          4 * *((_DWORD *)v2 + 10),
          BYTE2(v60) | ((BYTE2(v58) | ((BYTE2(v18) | (BYTE2(v22) << 8)) << 8)) << 8));
        v18 = (struct _GRADIENTRECTDATA *)((__PAIR64__((unsigned int)v62, v32) + __PAIR64__(v34, v49)) >> 32);
        v49 += v32;
        v58 = (v36 + __PAIR64__(v58, v51)) >> 32;
        v51 += v36;
        v60 = (v39 + __PAIR64__(v60, v53)) >> 32;
        v53 += v39;
        v22 = (unsigned __int64)(v42 + v55) >> 32;
        v21 += v47;
        v62 = v18;
        v55 += v42;
        --v4;
      }
      while ( v4 );
    }
  }
  else
  {
    v5 = *((_DWORD *)a1 + 12) + v3 * *((_DWORD *)a2 + 9);
    v6 = *((_DWORD *)a2 + 10);
    v33 = v5;
    if ( (unsigned int)(v6 - 1) <= 0x9C3FFF )
    {
      v7 = (int *)AllocFreeTmpBuffer(4 * v6);
      v48 = (char *)v7;
      if ( v7 )
      {
        v56 = *((_DWORD *)a2 + 12);
        v46 = *((_DWORD *)a2 + 13);
        v54 = *((_DWORD *)a2 + 14);
        v61 = (struct SURFACE *)*((_DWORD *)a2 + 15);
        v52 = *((_DWORD *)a2 + 16);
        v59 = *((_DWORD *)a2 + 17);
        v50 = *((_DWORD *)a2 + 18);
        v57 = *((_DWORD *)a2 + 19);
        v44 = *((_DWORD *)a2 + 29);
        v43 = *((_DWORD *)a2 + 30);
        v41 = *((_DWORD *)a2 + 31);
        v40 = *((_DWORD *)a2 + 32);
        v38 = *((_DWORD *)a2 + 33);
        v37 = *((_DWORD *)a2 + 34);
        v35 = *((_DWORD *)a2 + 35);
        v8 = *((_DWORD *)a2 + 41);
        v31 = *((_DWORD *)a2 + 28);
        if ( v8 > 0 )
        {
          v27 = (v8 * *((_QWORD *)a2 + 14) + __PAIR64__(v46, v56)) >> 32;
          v56 += v8 * *((_DWORD *)a2 + 28);
          v46 = v27;
          v28 = (struct SURFACE *)((v8 * __PAIR64__(v41, v43) + __PAIR64__((unsigned int)v61, v54)) >> 32);
          v54 += v8 * v43;
          v61 = v28;
          v29 = (v8 * __PAIR64__(v38, v40) + __PAIR64__(v59, v52)) >> 32;
          v52 += v8 * v40;
          v59 = v29;
          v30 = (v8 * __PAIR64__(v35, v37) + __PAIR64__(v57, v50)) >> 32;
          v50 += v8 * v37;
          v57 = v30;
          v7 = (int *)v48;
        }
        if ( (&v7[*((_DWORD *)a2 + 10)] >= v7 ? (unsigned int)(4 * *((_DWORD *)a2 + 10)) >> 2 : 0) != 0 )
        {
          v9 = v7;
          v10 = &v7[*((_DWORD *)a2 + 10)] >= v7 ? (unsigned int)(4 * *((_DWORD *)a2 + 10)) >> 2 : 0;
          v11 = v46;
          v12 = 0;
          BYTE2(v13) = BYTE2(v57);
          do
          {
            v14 = BYTE2(v59) | ((BYTE2(v61) | ((BYTE2(v11) | (BYTE2(v13) << 8)) << 8)) << 8);
            v11 = (__PAIR64__(v11, v31) + __PAIR64__(v44, v56)) >> 32;
            v56 += v31;
            v15 = __CFADD__(v43, v54);
            v54 += v43;
            v61 = (struct SURFACE *)((char *)v61 + v41 + v15);
            v15 = __CFADD__(v40, v52);
            v52 += v40;
            v59 += v38 + v15;
            v13 = (__PAIR64__(v57, v37) + __PAIR64__(v35, v50)) >> 32;
            v50 += v37;
            ++v12;
            *v9++ = v14;
            v57 = v13;
          }
          while ( v12 != v10 );
          v2 = a2;
          v4 = v45;
          v7 = (int *)v48;
          v5 = v33;
        }
        v16 = (char *)(v5 + 4 * *((_DWORD *)v2 + 8));
        v17 = &v16[v47 * v4];
        while ( v16 != v17 )
        {
          memcpy(v16, v7, 4 * *((_DWORD *)v2 + 10));
          v7 = (int *)v48;
          v16 += v47;
        }
        FreeTmpBuffer(v7);
      }
    }
  }
}
