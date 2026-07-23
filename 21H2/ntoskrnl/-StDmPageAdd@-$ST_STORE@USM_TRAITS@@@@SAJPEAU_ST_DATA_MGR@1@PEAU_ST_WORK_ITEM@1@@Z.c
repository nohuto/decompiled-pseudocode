/*
 * XREFs of ?StDmPageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14028BC50
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14028B860 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14028841C (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     SmMapPage @ 0x14028D2E0 (SmMapPage.c)
 *     StIoCountsMovePeriod @ 0x14059D710 (StIoCountsMovePeriod.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageAdd(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm1
  __int64 v4; // xmm0_8
  __int64 v6; // rax
  int v7; // edx
  unsigned int v8; // r14d
  unsigned int v9; // edi
  unsigned int v10; // ecx
  unsigned int v11; // eax
  __int64 v12; // r8
  int v13; // r10d
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // rcx
  _DWORD *v17; // rax
  __m128i v18; // [rsp+20h] [rbp-20h] BYREF
  __int64 v19; // [rsp+30h] [rbp-10h]
  unsigned int v20; // [rsp+68h] [rbp+28h] BYREF
  unsigned int v21; // [rsp+70h] [rbp+30h] BYREF

  v2 = *(__m128i *)(a2 + 8);
  v20 = 0;
  v4 = *(_QWORD *)(a2 + 24);
  v18 = v2;
  v19 = v4;
  v6 = SmMapPage(_mm_srli_si128(v2, 8).m128i_u64[0], &v20);
  v7 = v2.m128i_i32[0];
  if ( v6 )
  {
    if ( v2.m128i_i32[0] >= 0 )
    {
      v8 = 0;
      v9 = v20 >> 12;
    }
    else
    {
      v8 = v20;
      v9 = 1;
    }
    for ( v18.m128i_i64[1] = v6; ; v18.m128i_i64[1] += 4096LL )
    {
      v10 = v7 >= 0 ? 1 : (v8 + *(_DWORD *)(a1 + 824) + 15) >> 4;
      v21 = v10;
      do
      {
        v11 = ST_STORE<SM_TRAITS>::StDmpSinglePageAdd(a1, (__int64)&v18, a2, (int *)&v21);
        v12 = v11;
      }
      while ( v11 == -1073741267 );
      if ( v11 )
        break;
      v18.m128i_i32[0] ^= (v18.m128i_i32[0] ^ ((v18.m128i_i32[0] & 0xFFFFFFF8) + 8)) & 0x3FFFFFF8;
      v7 = v18.m128i_i32[0];
      if ( (((unsigned __int32)v18.m128i_i32[0] >> 3) & 0x7FFFFFF) >= v9 )
        goto LABEL_11;
      LODWORD(v19) = v19 + 1;
    }
    v7 = v18.m128i_i32[0];
    if ( v11 == -1073741818 )
    {
      v7 = v18.m128i_i32[0] & 0xC0000007;
      goto LABEL_14;
    }
LABEL_11:
    v13 = ((unsigned int)v7 >> 3) & 0x7FFFFFF;
    if ( v13 )
    {
      v14 = *(_QWORD *)(a1 + 1816);
      if ( v14 )
      {
        v16 = v14 + 24;
        v17 = *(_DWORD **)v16;
        if ( MEMORY[0xFFFFF78000000008] >= *(_QWORD *)(v16 + 16) )
          v17 = (_DWORD *)StIoCountsMovePeriod(v16, MEMORY[0xFFFFF78000000008], v12);
        *v17 += v13;
        v7 = v18.m128i_i32[0];
      }
      LODWORD(v12) = 0;
    }
  }
  else
  {
    LODWORD(v12) = -1073741670;
  }
LABEL_14:
  result = (unsigned int)v12;
  *(_DWORD *)(a2 + 8) ^= (*(_DWORD *)(a2 + 8) ^ v7) & 0x3FFFFFF8;
  return result;
}
