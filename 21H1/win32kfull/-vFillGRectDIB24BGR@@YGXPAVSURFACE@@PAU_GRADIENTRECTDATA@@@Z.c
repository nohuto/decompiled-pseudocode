/*
 * XREFs of ?vFillGRectDIB24BGR@@YGXPAVSURFACE@@PAU_GRADIENTRECTDATA@@@Z @ 0x23B2C3
 * Callers:
 *     <none>
 * Callees:
 *     __allmul @ 0xF91DF (__allmul.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

void __stdcall vFillGRectDIB24BGR(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  struct _GRADIENTRECTDATA *v2; // ebx
  unsigned int v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // edx
  int v9; // ecx
  char *v10; // eax
  char *v11; // ecx
  char *v12; // esi
  char *v13; // edx
  unsigned int v14; // edi
  unsigned int v15; // ecx
  unsigned int v16; // ebx
  char *i; // esi
  int v18; // ecx
  int v19; // eax
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // edx
  _BYTE *v23; // ecx
  _BYTE *v24; // eax
  _BYTE *v25; // edx
  bool v26; // cf
  unsigned int v27; // [esp+Ch] [ebp-3Ch]
  unsigned int v28; // [esp+10h] [ebp-38h]
  __int64 v29; // [esp+10h] [ebp-38h]
  unsigned int v30; // [esp+14h] [ebp-34h]
  unsigned int v31; // [esp+18h] [ebp-30h]
  __int64 v32; // [esp+18h] [ebp-30h]
  unsigned int v33; // [esp+1Ch] [ebp-2Ch]
  unsigned int v34; // [esp+20h] [ebp-28h]
  unsigned int v35; // [esp+20h] [ebp-28h]
  int v36; // [esp+24h] [ebp-24h]
  char *v37; // [esp+28h] [ebp-20h]
  unsigned int v38; // [esp+28h] [ebp-20h]
  int v39; // [esp+2Ch] [ebp-1Ch]
  int v40; // [esp+30h] [ebp-18h]
  unsigned int v41; // [esp+30h] [ebp-18h]
  unsigned int v42; // [esp+34h] [ebp-14h]
  unsigned int v43; // [esp+38h] [ebp-10h]
  unsigned int v44; // [esp+3Ch] [ebp-Ch]
  unsigned int v45; // [esp+40h] [ebp-8h]
  unsigned int v46; // [esp+44h] [ebp-4h]

  v2 = a2;
  v39 = *((_DWORD *)a1 + 13);
  v3 = *((_DWORD *)a2 + 13);
  v46 = *((_DWORD *)a2 + 12);
  v45 = *((_DWORD *)a2 + 14);
  v4 = *((_DWORD *)a2 + 11);
  v44 = *((_DWORD *)a2 + 15);
  v36 = v4;
  v40 = v3;
  v43 = *((_DWORD *)a2 + 16);
  v42 = *((_DWORD *)a2 + 17);
  if ( *((_DWORD *)a2 + 38) )
  {
    v18 = *((_DWORD *)a1 + 12) + v39 * *((_DWORD *)a2 + 9);
    v29 = *((_QWORD *)a2 + 10);
    v32 = *((_QWORD *)a2 + 11);
    v35 = *((_DWORD *)a2 + 24);
    v38 = *((_DWORD *)a2 + 25);
    v19 = *((_DWORD *)a2 + 42);
    if ( v19 > 0 )
    {
      v20 = (v19 * v29 + __PAIR64__(v3, v46)) >> 32;
      v46 += v19 * v29;
      v41 = v20;
      v21 = (v19 * v32 + __PAIR64__(v44, v45)) >> 32;
      v45 += v19 * v32;
      v44 = v21;
      v22 = (v19 * __PAIR64__(v38, v35) + __PAIR64__(v42, v43)) >> 32;
      v43 += v19 * v35;
      v4 = *((_DWORD *)a2 + 11);
      v3 = v41;
      v42 = v22;
    }
    v23 = (_BYTE *)(3 * *((_DWORD *)a2 + 8) + v18);
    while ( v4 )
    {
      --v4;
      v24 = v23;
      v25 = &v23[3 * *((_DWORD *)v2 + 10)];
      if ( v23 != v25 )
      {
        do
        {
          v24[1] = BYTE2(v44);
          v24[2] = BYTE2(v3);
          v2 = a2;
          *v24 = BYTE2(v42);
          v24 += 3;
        }
        while ( v24 != v25 );
      }
      v3 = (v29 + __PAIR64__(v3, v46)) >> 32;
      v46 += v29;
      v44 = (v32 + __PAIR64__(v44, v45)) >> 32;
      v45 += v32;
      v26 = __CFADD__(v35, v43);
      v43 += v35;
      v42 += v38 + v26;
      v23 += v39;
    }
  }
  else
  {
    v34 = *((_DWORD *)a2 + 29);
    v33 = *((_DWORD *)a2 + 30);
    v31 = *((_DWORD *)a2 + 31);
    v30 = *((_DWORD *)a2 + 32);
    v28 = *((_DWORD *)a2 + 33);
    v5 = *((_DWORD *)a2 + 41);
    v27 = *((_DWORD *)a2 + 28);
    if ( v5 > 0 )
    {
      v6 = (v5 * *((_QWORD *)a2 + 14) + __PAIR64__(v3, v46)) >> 32;
      v46 += v5 * *((_DWORD *)a2 + 28);
      v40 = v6;
      v7 = (v5 * __PAIR64__(v31, v33) + __PAIR64__(v44, v45)) >> 32;
      v45 += v5 * v33;
      v44 = v7;
      v4 = *((_DWORD *)a2 + 11);
      v8 = (v5 * __PAIR64__(v28, v30) + __PAIR64__(v42, v43)) >> 32;
      v43 += v5 * v30;
      v42 = v8;
    }
    v9 = *((_DWORD *)a2 + 10);
    if ( (unsigned int)(v9 - 1) <= 0xD05554 )
    {
      v10 = (char *)AllocFreeTmpBuffer(3 * v9);
      v11 = v10;
      v37 = v10;
      if ( v10 )
      {
        v12 = v10;
        v13 = &v10[3 * *((_DWORD *)a2 + 10)];
        if ( v10 != v13 )
        {
          v14 = v40;
          v15 = v44;
          v16 = v42;
          do
          {
            *v12 = BYTE2(v16);
            v12[1] = BYTE2(v15);
            v12[2] = BYTE2(v14);
            v14 = (__PAIR64__(v14, v27) + __PAIR64__(v34, v46)) >> 32;
            v46 += v27;
            v15 = (__PAIR64__(v15, v33) + __PAIR64__(v31, v45)) >> 32;
            v45 += v33;
            v16 = (__PAIR64__(v16, v30) + __PAIR64__(v28, v43)) >> 32;
            v43 += v30;
            v12 += 3;
          }
          while ( v12 != v13 );
          v2 = a2;
          v4 = v36;
          v11 = v10;
        }
        for ( i = (char *)(*((_DWORD *)a1 + 12) + 3 * *((_DWORD *)v2 + 8) + v39 * *((_DWORD *)v2 + 9)); v4; --v4 )
        {
          memcpy(i, v11, 3 * *((_DWORD *)v2 + 10));
          i += v39;
          v11 = v37;
        }
        FreeTmpBuffer(v11);
      }
    }
  }
}
