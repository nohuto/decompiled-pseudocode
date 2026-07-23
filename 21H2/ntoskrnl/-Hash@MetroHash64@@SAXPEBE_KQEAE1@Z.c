/*
 * XREFs of ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x140225B74
 * Callers:
 *     SmHpBufferProtectEx @ 0x140275470 (SmHpBufferProtectEx.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14028841C (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x140288B10 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     RtlHashBytes2 @ 0x1403F8A54 (RtlHashBytes2.c)
 *     MiAddMdlTracker @ 0x140530A94 (MiAddMdlTracker.c)
 *     MiValidateMdlTracker @ 0x140531218 (MiValidateMdlTracker.c)
 *     SmFixSingleBitCorruption @ 0x14059D310 (SmFixSingleBitCorruption.c)
 * Callees:
 *     <none>
 */

void __fastcall MetroHash64::Hash(const unsigned __int8 *a1, unsigned __int64 a2, unsigned __int8 *const a3)
{
  const unsigned __int8 *v3; // r11
  const unsigned __int8 *v5; // r10
  __int64 v6; // r9
  __m128i si128; // xmm0
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rax

  v3 = &a1[a2];
  v5 = a1;
  v6 = 0x52BC33FEDBE4CBB5LL;
  if ( a2 >= 0x20 )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v8 = si128.m128i_i64[1];
    v9 = si128.m128i_i64[1];
    v10 = si128.m128i_i64[0];
    v11 = si128.m128i_i64[0];
    do
    {
      v11 = v10 + __ROR8__(3603962101LL * *(_QWORD *)v5 + v11, 29);
      v12 = 1654206401LL * *((_QWORD *)v5 + 2) + v10;
      v13 = 817650473LL * *((_QWORD *)v5 + 3);
      v14 = __ROR8__(2729050939LL * *((_QWORD *)v5 + 1) + v8, 29);
      v5 += 32;
      v8 = v9 + v14;
      v10 = v11 + __ROR8__(v12, 29);
      v9 = v8 + __ROR8__(v13 + v9, 29);
    }
    while ( v5 <= v3 - 32 );
    v15 = v10 ^ (2729050939LL * __ROR8__(v8 + 3603962101LL * (v9 + v11), 37));
    v16 = v9 ^ (3603962101LL * __ROR8__(v11 + 2729050939LL * (v15 + v8), 37));
    v6 = (v11 ^ v8 ^ (2729050939LL * __ROR8__(v16 + 3603962101LL * (v11 + v15), 37)) ^ (3603962101LL
                                                                                      * __ROR8__(
                                                                                          v15
                                                                                        + 2729050939LL * (v16 + v8),
                                                                                          37)))
       + 0x52BC33FEDBE4CBB5LL;
  }
  if ( v3 - v5 >= 16 )
  {
    v20 = 1654206401LL * *(_QWORD *)v5;
    v21 = *((_QWORD *)v5 + 1);
    v5 += 16;
    v22 = 817650473LL * __ROR8__(v6 + v20, 29);
    v23 = 817650473LL * __ROR8__(v6 + 1654206401 * v21, 29);
    v6 += v23 ^ (__ROR8__(817650473 * v23, 21) + (v22 ^ (v23 + __ROR8__(3603962101LL * v22, 21))));
  }
  if ( v3 - v5 >= 8 )
  {
    v18 = 817650473LL * *(_QWORD *)v5;
    v5 += 8;
    v6 = (2729050939LL * __ROR8__(v18 + v6, 55)) ^ (v18 + v6);
  }
  if ( v3 - v5 >= 4 )
  {
    v24 = *(unsigned int *)v5;
    v5 += 4;
    v6 = (2729050939LL * __ROR8__(817650473 * v24 + v6, 26)) ^ (817650473 * v24 + v6);
  }
  if ( v3 - v5 >= 2 )
  {
    v19 = *(unsigned __int16 *)v5;
    v5 += 2;
    v6 = (2729050939LL * __ROR8__(817650473 * v19 + v6, 48)) ^ (817650473 * v19 + v6);
  }
  if ( v3 - v5 >= 1 )
    v6 = (2729050939LL * __ROR8__(817650473LL * *v5 + v6, 37)) ^ (817650473LL * *v5 + v6);
  v17 = 3603962101u * (v6 ^ __ROR8__(v6, 28));
  *(_QWORD *)a3 = v17 ^ __ROR8__(v17, 29);
}
