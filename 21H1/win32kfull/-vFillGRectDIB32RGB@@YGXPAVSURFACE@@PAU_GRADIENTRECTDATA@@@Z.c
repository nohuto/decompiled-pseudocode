/*
 * XREFs of ?vFillGRectDIB32RGB@@YGXPAVSURFACE@@PAU_GRADIENTRECTDATA@@@Z @ 0x23BD90
 * Callers:
 *     <none>
 * Callees:
 *     __allmul @ 0xF91DF (__allmul.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

void __stdcall vFillGRectDIB32RGB(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  struct _GRADIENTRECTDATA *v2; // ebx
  int v3; // eax
  int v4; // edi
  unsigned int v5; // edx
  int v6; // ecx
  int v7; // esi
  struct SURFACE *v8; // edx
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // eax
  unsigned int v14; // edi
  unsigned int v15; // esi
  __int64 v16; // rcx
  char *v17; // esi
  char *v18; // edi
  int v19; // ecx
  unsigned int v20; // edx
  unsigned int v21; // edx
  char *v22; // esi
  unsigned int v23; // eax
  unsigned int v24; // [esp+Ch] [ebp-48h]
  int v25; // [esp+14h] [ebp-40h]
  unsigned int v26; // [esp+14h] [ebp-40h]
  int v27; // [esp+18h] [ebp-3Ch]
  __int64 v28; // [esp+18h] [ebp-3Ch]
  int *v29; // [esp+1Ch] [ebp-38h]
  unsigned int v30; // [esp+20h] [ebp-34h]
  __int64 v31; // [esp+20h] [ebp-34h]
  unsigned int v32; // [esp+24h] [ebp-30h]
  unsigned int v33; // [esp+28h] [ebp-2Ch]
  unsigned int v34; // [esp+2Ch] [ebp-28h]
  unsigned int v35; // [esp+30h] [ebp-24h]
  int v36; // [esp+34h] [ebp-20h]
  int v37; // [esp+38h] [ebp-1Ch]
  unsigned int v38; // [esp+3Ch] [ebp-18h]
  unsigned int v39; // [esp+40h] [ebp-14h]
  unsigned int v40; // [esp+44h] [ebp-10h]
  unsigned int v41; // [esp+48h] [ebp-Ch]
  unsigned int v42; // [esp+4Ch] [ebp-8h]
  unsigned int v43; // [esp+50h] [ebp-4h]
  struct SURFACE *v44; // [esp+5Ch] [ebp+8h]
  struct _GRADIENTRECTDATA *v45; // [esp+60h] [ebp+Ch]

  v2 = a2;
  v3 = *((_DWORD *)a1 + 13);
  v4 = *((_DWORD *)a2 + 11);
  v5 = *((_DWORD *)a2 + 13);
  v43 = *((_DWORD *)a2 + 12);
  v41 = *((_DWORD *)a2 + 14);
  v40 = *((_DWORD *)a2 + 15);
  v39 = *((_DWORD *)a2 + 16);
  v38 = *((_DWORD *)a2 + 17);
  v37 = v3;
  v36 = v4;
  v42 = v5;
  v27 = 0;
  if ( *((_DWORD *)a2 + 38) )
  {
    v45 = (struct _GRADIENTRECTDATA *)*((_DWORD *)a2 + 20);
    v26 = *((_DWORD *)v2 + 21);
    v28 = *((_QWORD *)v2 + 11);
    v31 = *((_QWORD *)v2 + 12);
    v19 = *((_DWORD *)v2 + 42);
    if ( v19 > 0 )
    {
      v20 = (v19 * __PAIR64__(v26, (unsigned int)v45) + __PAIR64__(v5, v43)) >> 32;
      v43 += v19 * (_DWORD)v45;
      v42 = v20;
      v21 = (v19 * v28 + __PAIR64__(v40, v41)) >> 32;
      v41 += v19 * v28;
      v40 = v21;
      v5 = (v19 * v31 + __PAIR64__(v38, v39)) >> 32;
      v39 += v19 * v31;
      v3 = *((_DWORD *)a1 + 13);
      v38 = v5;
      BYTE2(v5) = BYTE2(v42);
    }
    v22 = (char *)(*((_DWORD *)a1 + 12) + v3 * *((_DWORD *)v2 + 9) + 4 * *((_DWORD *)v2 + 8));
    if ( v4 )
    {
      BYTE2(v23) = BYTE2(v38);
      do
      {
        RtlFillMemoryUlong(v22, 4 * *((_DWORD *)v2 + 10), BYTE2(v5) | ((BYTE2(v40) | (BYTE2(v23) << 8)) << 8));
        v5 = (__PAIR64__(v42, (unsigned int)v45) + __PAIR64__(v26, v43)) >> 32;
        v43 += (unsigned int)v45;
        v40 = (v28 + __PAIR64__(v40, v41)) >> 32;
        v41 += v28;
        v23 = (v31 + __PAIR64__(v38, v39)) >> 32;
        v39 += v31;
        v22 += v37;
        v42 = v5;
        v38 = v23;
        --v4;
      }
      while ( v4 );
    }
  }
  else
  {
    v6 = *((_DWORD *)a2 + 10);
    v7 = *((_DWORD *)a1 + 12) + v3 * *((_DWORD *)a2 + 9);
    v25 = v7;
    if ( (unsigned int)(v6 - 1) <= 0x9C3FFF )
    {
      v8 = (struct SURFACE *)AllocFreeTmpBuffer(4 * v6);
      v44 = v8;
      if ( v8 )
      {
        v35 = *((_DWORD *)a2 + 29);
        v34 = *((_DWORD *)a2 + 30);
        v33 = *((_DWORD *)a2 + 31);
        v32 = *((_DWORD *)a2 + 32);
        v30 = *((_DWORD *)a2 + 33);
        v9 = *((_DWORD *)a2 + 41);
        v24 = *((_DWORD *)a2 + 28);
        if ( v9 > 0 )
        {
          v10 = (v9 * *((_QWORD *)a2 + 14) + __PAIR64__(v42, v43)) >> 32;
          v43 += v9 * *((_DWORD *)a2 + 28);
          v42 = v10;
          v11 = (v9 * __PAIR64__(v33, v34) + __PAIR64__(v40, v41)) >> 32;
          v41 += v9 * v34;
          v40 = v11;
          v12 = (v9 * __PAIR64__(v30, v32) + __PAIR64__(v38, v39)) >> 32;
          v39 += v9 * v32;
          v38 = v12;
          v8 = v44;
        }
        v29 = (int *)v8;
        v13 = (struct SURFACE *)((char *)v8 + 4 * *((_DWORD *)a2 + 10)) >= v8
            ? (unsigned int)(4 * *((_DWORD *)a2 + 10)) >> 2
            : 0;
        if ( v13 )
        {
          v14 = v42;
          v15 = v40;
          HIDWORD(v16) = v38;
          do
          {
            *v29 = BYTE2(v14) | ((BYTE2(v15) | (BYTE6(v16) << 8)) << 8);
            v14 = (__PAIR64__(v14, v24) + __PAIR64__(v35, v43)) >> 32;
            v43 += v24;
            LODWORD(v16) = v32;
            v15 = (__PAIR64__(v15, v34) + __PAIR64__(v33, v41)) >> 32;
            v41 += v34;
            HIDWORD(v16) = (v16 + __PAIR64__(v30, v39)) >> 32;
            v39 += v32;
            ++v29;
            ++v27;
          }
          while ( v27 != v13 );
          v2 = a2;
          v4 = v36;
          v8 = v44;
          v7 = v25;
        }
        v17 = (char *)(v7 + 4 * *((_DWORD *)v2 + 8));
        v18 = &v17[v37 * v4];
        while ( v17 != v18 )
        {
          memcpy(v17, v8, 4 * *((_DWORD *)v2 + 10));
          v8 = v44;
          v17 += v37;
        }
        FreeTmpBuffer(v8);
      }
    }
  }
}
