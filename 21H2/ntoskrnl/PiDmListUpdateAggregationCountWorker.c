/*
 * XREFs of PiDmListUpdateAggregationCountWorker @ 0x14076A2CC
 * Callers:
 *     PiDmListAddObjectWorker @ 0x14076A1F0 (PiDmListAddObjectWorker.c)
 *     PiDmListRemoveObjectWorker @ 0x1409491C0 (PiDmListRemoveObjectWorker.c)
 * Callees:
 *     PiDmGetCacheKeys @ 0x14077B4E4 (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x14077B534 (PiDmGetCachedKeyIndex.c)
 *     PiDmCacheDataDecode @ 0x14077B594 (PiDmCacheDataDecode.c)
 */

void __fastcall PiDmListUpdateAggregationCountWorker(__int64 a1, __int64 a2, int a3)
{
  char *v3; // rbx
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned int CachedKeyIndex; // eax
  unsigned int v11; // edx
  _DWORD *v12; // rcx
  int v13; // eax
  unsigned int v14; // [rsp+30h] [rbp-20h] BYREF
  int v15; // [rsp+34h] [rbp-1Ch] BYREF
  int v16; // [rsp+38h] [rbp-18h] BYREF
  __int64 v17; // [rsp+40h] [rbp-10h] BYREF
  char v18; // [rsp+98h] [rbp+48h] BYREF

  v17 = 0LL;
  v3 = byte_140002438;
  v14 = 0;
  v16 = 0;
  v15 = 0;
  v18 = 0;
  v7 = 3LL;
  do
  {
    v8 = *((unsigned int *)v3 - 6);
    if ( *(_DWORD *)(a2 + 28) == (_DWORD)v8 && *(_DWORD *)(a1 + 28) == *(_DWORD *)v3 )
    {
      v9 = *((_QWORD *)v3 + 3);
      if ( *(_DWORD *)(a1 + v9) != 0x80000000 )
      {
        PiDmGetCacheKeys(v8, &v17, &v14);
        CachedKeyIndex = PiDmGetCachedKeyIndex(v17, v14, *((_QWORD *)v3 - 2));
        if ( CachedKeyIndex < v11 )
        {
          v12 = (_DWORD *)(a2 + 8 * (CachedKeyIndex + 2 * (CachedKeyIndex + 7LL)));
          if ( *v12 <= 1u )
            goto LABEL_15;
          v13 = PiDmCacheDataDecode(v12, &v15, &v18, 1LL, &v16);
          if ( v13 < 0 )
          {
            if ( v13 != -1073741275 && v13 != -1073741789 )
LABEL_15:
              *(_DWORD *)(a1 + v9) = 0x80000000;
          }
          else if ( v18 == -1 && v15 == 17 )
          {
            *(_DWORD *)(a1 + v9) += a3;
          }
        }
      }
    }
    v3 += 56;
    --v7;
  }
  while ( v7 );
}
