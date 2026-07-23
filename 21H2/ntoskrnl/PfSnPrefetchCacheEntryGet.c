/*
 * XREFs of PfSnPrefetchCacheEntryGet @ 0x1406788A4
 * Callers:
 *     PfSnCheckActionsNeeded @ 0x140679AEC (PfSnCheckActionsNeeded.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x1406B38CC (PfSnPrefetchCacheEntryUpdate.c)
 * Callees:
 *     memcmp @ 0x1403D2B50 (memcmp.c)
 *     memset @ 0x140414300 (memset.c)
 *     PfSnPrefetchCacheCtxStart @ 0x1407C8940 (PfSnPrefetchCacheCtxStart.c)
 */

__int64 __fastcall PfSnPrefetchCacheEntryGet(__int64 a1, _OWORD *a2, __int64 a3, int *a4)
{
  unsigned int v4; // r12d
  __int64 v7; // r14
  int v8; // esi
  __int64 v9; // rbx
  __int64 v10; // rbp
  int v11; // eax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rdi
  _QWORD *v16; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rbx
  __int64 v20; // rcx
  _QWORD *i; // rdx
  __int128 v22; // xmm1
  unsigned int v23; // r8d
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // [rsp+60h] [rbp+8h]
  __int64 v27; // [rsp+60h] [rbp+8h]
  __int64 v28; // [rsp+60h] [rbp+8h]
  _OWORD *Buf2; // [rsp+68h] [rbp+10h]

  Buf2 = a2;
  v4 = *(_DWORD *)(a1 + 4);
  v7 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
  v8 = 1;
  v9 = 0LL;
  v10 = a3 & v7;
  v26 = a3 & v7;
  while ( 1 )
  {
    if ( v9 )
      goto LABEL_5;
    if ( !(v4 >> 5) )
      break;
    a2 = Buf2;
    v9 = *(_QWORD *)(a1 + 8)
       + 8LL
       * ((37
         * (BYTE6(v26)
          + 37
          * (BYTE5(v26)
           + 37
           * (BYTE4(v26)
            + 37 * (BYTE3(v26) + 37 * (BYTE2(v26) + 37 * (BYTE1(v26) + 37 * ((unsigned __int8)v10 + 11623883)))))))
         + HIBYTE(v26)) & ((v4 >> 5) - 1));
LABEL_5:
    while ( 1 )
    {
      v9 = *(_QWORD *)v9;
      if ( (v9 & 1) != 0 )
        break;
      if ( v10 == (v7 & *(_QWORD *)(v9 + 8)) )
        goto LABEL_7;
    }
    v9 = 0LL;
LABEL_7:
    if ( !v9 )
      break;
    v11 = memcmp((const void *)(v9 + 32), a2, 0x40uLL);
    a2 = Buf2;
    if ( !v11 )
    {
      v12 = (_QWORD *)(v9 + 16);
      v13 = *(_QWORD *)(v9 + 16);
      if ( *(_QWORD *)(v13 + 8) == v9 + 16 )
      {
        v14 = *(_QWORD **)(v9 + 24);
        if ( (_QWORD *)*v14 == v12 )
        {
          *v14 = v13;
          v15 = a1 + 16;
          *(_QWORD *)(v13 + 8) = v14;
          v16 = *(_QWORD **)(v15 + 8);
          if ( *v16 == v15 )
          {
            v8 = 0;
            goto LABEL_13;
          }
        }
      }
FatalListEntryError_84:
      __fastfail(3u);
    }
  }
  if ( !a4 )
    return 0LL;
  if ( *(_QWORD *)(a1 + 8) || (int)PfSnPrefetchCacheCtxStart(a1) >= 0 )
  {
    v9 = *(_QWORD *)(a1 + 32);
    if ( v9 )
    {
      *(_QWORD *)(a1 + 32) = *(_QWORD *)v9;
    }
    else
    {
      v18 = (_QWORD *)(a1 + 16);
      v19 = *(_QWORD **)(a1 + 16);
      if ( v19[1] != a1 + 16 )
        goto FatalListEntryError_84;
      v20 = *v19;
      if ( *(_QWORD **)(*v19 + 8LL) != v19 )
        goto FatalListEntryError_84;
      *v18 = v20;
      v9 = (__int64)(v19 - 2);
      *(_QWORD *)(v20 + 8) = v18;
      v27 = *(_QWORD *)(v9 + 8) & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
      for ( i = (_QWORD *)(*(_QWORD *)(a1 + 8)
                         + 8LL
                         * ((37
                           * (BYTE6(v27)
                            + 37
                            * (BYTE5(v27)
                             + 37
                             * (BYTE4(v27)
                              + 37
                              * (BYTE3(v27)
                               + 37 * (BYTE2(v27) + 37 * (BYTE1(v27) + 37 * ((unsigned __int8)v27 + 11623883)))))))
                           + HIBYTE(v27)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1)));
            (*i & 1) == 0;
            i = (_QWORD *)*i )
      {
        if ( *i == v9 )
        {
          *i = *(_QWORD *)v9;
          --*(_DWORD *)a1;
          *(_QWORD *)v9 |= 0x8000000000000002uLL;
          break;
        }
      }
    }
    memset((void *)v9, 0, 0x78uLL);
    *(_OWORD *)(v9 + 32) = *Buf2;
    *(_OWORD *)(v9 + 48) = Buf2[1];
    *(_OWORD *)(v9 + 64) = Buf2[2];
    v22 = Buf2[3];
    *(_QWORD *)(v9 + 8) = a3;
    *(_OWORD *)(v9 + 80) = v22;
    v23 = *(_DWORD *)(a1 + 4);
    v28 = a3 & (-1LL << (v23 & 0x1F));
    v24 = *(_QWORD *)(a1 + 8);
    v25 = (37
         * (BYTE6(v28)
          + 37
          * (BYTE5(v28)
           + 37
           * (BYTE4(v28)
            + 37 * (BYTE3(v28) + 37 * (BYTE2(v28) + 37 * (BYTE1(v28) + 37 * ((unsigned __int8)v28 + 11623883)))))))
         + HIBYTE(v28)) & ((v23 >> 5) - 1);
    *(_QWORD *)v9 = *(_QWORD *)(v24 + 8 * v25);
    v12 = (_QWORD *)(v9 + 16);
    *(_QWORD *)(v24 + 8 * v25) = v9;
    ++*(_DWORD *)a1;
    v15 = a1 + 16;
    v16 = *(_QWORD **)(v15 + 8);
    if ( *v16 != v15 )
      goto FatalListEntryError_84;
LABEL_13:
    *v12 = v15;
    v12[1] = v16;
    *v16 = v12;
    *(_QWORD *)(v15 + 8) = v12;
  }
  else
  {
    v9 = 0LL;
  }
  if ( a4 )
    *a4 = v8;
  return v9;
}
