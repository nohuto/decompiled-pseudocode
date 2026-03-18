/*
 * XREFs of ?vFillGRectDIB24Bitfields@@YGXPAVSURFACE@@PAU_GRADIENTRECTDATA@@@Z @ 0x23B557
 * Callers:
 *     <none>
 * Callees:
 *     __allmul @ 0xF91DF (__allmul.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

void __stdcall vFillGRectDIB24Bitfields(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  struct SURFACE *v2; // edx
  struct _GRADIENTRECTDATA *v3; // ebx
  int v4; // eax
  int v5; // esi
  unsigned int v6; // ecx
  int v7; // ecx
  int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  char *v12; // eax
  char *v13; // edi
  unsigned int v14; // edi
  char *v15; // ebx
  char *v16; // esi
  int v17; // eax
  bool v18; // cf
  unsigned int v19; // kr08_4
  char *v20; // edi
  int i; // esi
  int v22; // edi
  unsigned int v23; // edx
  unsigned int v24; // edx
  unsigned int v25; // edx
  int v26; // edi
  unsigned int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // edx
  struct SURFACE *v30; // eax
  char *Src; // [esp+Ch] [ebp-48h]
  char *v32; // [esp+10h] [ebp-44h]
  char v33; // [esp+10h] [ebp-44h]
  unsigned int v34; // [esp+18h] [ebp-3Ch]
  int v35; // [esp+1Ch] [ebp-38h]
  unsigned int v36; // [esp+20h] [ebp-34h]
  __int64 v37; // [esp+20h] [ebp-34h]
  unsigned int v38; // [esp+24h] [ebp-30h]
  unsigned int v39; // [esp+28h] [ebp-2Ch]
  __int64 v40; // [esp+28h] [ebp-2Ch]
  unsigned int v41; // [esp+2Ch] [ebp-28h]
  unsigned int v42; // [esp+30h] [ebp-24h]
  unsigned int v43; // [esp+30h] [ebp-24h]
  int v44; // [esp+34h] [ebp-20h]
  int v45; // [esp+38h] [ebp-1Ch]
  unsigned int v46; // [esp+3Ch] [ebp-18h]
  unsigned int v47; // [esp+40h] [ebp-14h]
  unsigned int v48; // [esp+44h] [ebp-10h]
  unsigned int v49; // [esp+48h] [ebp-Ch]
  unsigned int v50; // [esp+4Ch] [ebp-8h]
  unsigned int v51; // [esp+50h] [ebp-4h]
  struct SURFACE *v52; // [esp+5Ch] [ebp+8h]
  struct SURFACE *v53; // [esp+5Ch] [ebp+8h]

  v2 = a1;
  v3 = a2;
  v4 = *((_DWORD *)a1 + 13);
  v5 = *((_DWORD *)a2 + 11);
  v35 = *((_DWORD *)a2 + 40);
  v49 = *((_DWORD *)a2 + 12);
  v48 = *((_DWORD *)a2 + 13);
  v47 = *((_DWORD *)a2 + 14);
  v51 = *((_DWORD *)a2 + 15);
  v46 = *((_DWORD *)a2 + 16);
  v6 = *((_DWORD *)a2 + 17);
  v45 = v4;
  v44 = v5;
  v50 = v6;
  if ( *((_DWORD *)a2 + 38) )
  {
    v37 = *((_QWORD *)a2 + 10);
    v40 = *((_QWORD *)a2 + 11);
    v43 = *((_DWORD *)a2 + 24);
    v34 = *((_DWORD *)a2 + 25);
    v22 = *((_DWORD *)a2 + 42);
    if ( v22 > 0 )
    {
      v23 = (v22 * v37 + __PAIR64__(v48, v49)) >> 32;
      v49 += v22 * v37;
      v48 = v23;
      v24 = (v22 * v40 + __PAIR64__(v51, v47)) >> 32;
      v47 += v22 * v40;
      v51 = v24;
      v5 = *((_DWORD *)a2 + 11);
      v25 = (v22 * __PAIR64__(v34, v43) + __PAIR64__(v6, v46)) >> 32;
      v46 += v22 * v43;
      v4 = *((_DWORD *)a1 + 13);
      v6 = v25;
      v2 = a1;
      v50 = v6;
    }
    v26 = *((_DWORD *)v2 + 12) + 3 * *((_DWORD *)a2 + 8) + v4 * *((_DWORD *)a2 + 9);
    while ( v5 )
    {
      --v5;
      v53 = (struct SURFACE *)(v26 + 3 * *((_DWORD *)v3 + 10));
      v27 = XEPALOBJ::ulDispatchGFPEFunction(
              v35,
              *(_DWORD *)(*(_DWORD *)v35 + 68),
              BYTE2(v48) | ((BYTE2(v51) | (BYTE2(v6) << 8)) << 8));
      v33 = v27;
      if ( (struct SURFACE *)v26 != v53 )
      {
        v28 = v27 >> 8;
        v29 = HIWORD(v27);
        v30 = (struct SURFACE *)v26;
        do
        {
          *(_BYTE *)v30 = v33;
          *((_BYTE *)v30 + 1) = v28;
          *((_BYTE *)v30 + 2) = v29;
          v30 = (struct SURFACE *)((char *)v30 + 3);
        }
        while ( v30 != v53 );
        v3 = a2;
      }
      v48 = (v37 + __PAIR64__(v48, v49)) >> 32;
      v49 += v37;
      v51 = (v40 + __PAIR64__(v51, v47)) >> 32;
      v47 += v40;
      v6 = (__PAIR64__(v50, v43) + __PAIR64__(v34, v46)) >> 32;
      v46 += v43;
      v26 += v45;
      v50 = v6;
    }
  }
  else
  {
    v52 = (struct SURFACE *)*((_DWORD *)a2 + 28);
    v42 = *((_DWORD *)a2 + 29);
    v7 = *((_DWORD *)v2 + 12) + v4 * *((_DWORD *)a2 + 9);
    v41 = *((_DWORD *)a2 + 30);
    v39 = *((_DWORD *)a2 + 31);
    v38 = *((_DWORD *)a2 + 32);
    v36 = *((_DWORD *)a2 + 33);
    v8 = *((_DWORD *)a2 + 41);
    if ( v8 <= 0 )
    {
      BYTE2(v11) = BYTE2(v50);
    }
    else
    {
      v9 = (v8 * __PAIR64__(v42, (unsigned int)v52) + __PAIR64__(v48, v49)) >> 32;
      v49 += v8 * (_DWORD)v52;
      v48 = v9;
      v10 = (v8 * __PAIR64__(v39, v41) + __PAIR64__(v51, v47)) >> 32;
      v47 += v8 * v41;
      v51 = v10;
      v5 = *((_DWORD *)a2 + 11);
      v11 = (v8 * __PAIR64__(v36, v38) + __PAIR64__(v50, v46)) >> 32;
      v46 += v8 * v38;
      v50 = v11;
    }
    v12 = (char *)(v7 + 3 * *((_DWORD *)a2 + 8));
    v13 = v12;
    Src = v12;
    v32 = v12;
    if ( v12 != &v12[3 * *((_DWORD *)a2 + 10)] )
    {
      v14 = v48;
      v15 = (char *)(v7 + 3 * *((_DWORD *)a2 + 8));
      v16 = &v12[3 * *((_DWORD *)a2 + 10)];
      do
      {
        v17 = XEPALOBJ::ulDispatchGFPEFunction(
                v35,
                *(_DWORD *)(*(_DWORD *)v35 + 68),
                BYTE2(v14) | ((BYTE2(v51) | (BYTE2(v11) << 8)) << 8));
        *v15 = v17;
        v15[2] = BYTE2(v17);
        v14 = (__PAIR64__(v14, (unsigned int)v52) + __PAIR64__(v42, v49)) >> 32;
        v49 += (unsigned int)v52;
        v18 = __CFADD__(v41, v47);
        v47 += v41;
        v51 += v39 + v18;
        v19 = v46;
        v46 += v38;
        v15[1] = BYTE1(v17);
        v11 = (__PAIR64__(v36, v38) + __PAIR64__(v50, v19)) >> 32;
        v15 += 3;
        v50 = v11;
      }
      while ( v15 != v16 );
      v3 = a2;
      v5 = v44;
      v13 = v32;
    }
    v20 = &v13[v45];
    for ( i = v5 - 1; i > 0; --i )
    {
      memcpy(v20, Src, 3 * *((_DWORD *)v3 + 10));
      v20 += v45;
    }
  }
}
