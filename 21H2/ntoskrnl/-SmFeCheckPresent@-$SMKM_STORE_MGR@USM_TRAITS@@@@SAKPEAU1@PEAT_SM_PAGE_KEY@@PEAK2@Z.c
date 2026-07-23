/*
 * XREFs of ?SmFeCheckPresent@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x140291DD4
 * Callers:
 *     ?SmFeReadInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z @ 0x140291CEC (-SmFeReadInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z.c)
 * Callees:
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x140289EDC (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeCheckPresent(__int64 a1, unsigned int *a2, unsigned int *a3, int *a4)
{
  unsigned int v4; // ebx
  unsigned int v7; // esi
  unsigned int v8; // eax
  int v9; // r14d
  unsigned int v10; // r12d
  int v11; // r15d
  __m128i *v12; // rax
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rcx
  unsigned int v18; // [rsp+20h] [rbp-E0h]
  _BYTE *v20; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v21[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v22; // [rsp+58h] [rbp-A8h]
  int v23; // [rsp+5Ch] [rbp-A4h]
  __int64 v24; // [rsp+60h] [rbp-A0h]
  _BYTE v25[136]; // [rsp+68h] [rbp-98h] BYREF

  v4 = *a2;
  memset(v25, 0, 0x80uLL);
  v24 = 1LL;
  v21[0] = 0LL;
  v21[1] = 0LL;
  v20 = v25;
  v7 = 0;
  v8 = *a3;
  v9 = 0;
  v22 = 0;
  v10 = 1024;
  v18 = v8;
  v23 = 8;
  v11 = 1024;
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
    a1 + 448,
    v4,
    (__int64)&v20);
  if ( v22 == -1 || !v22 )
    v12 = (__m128i *)v21;
  else
    v12 = (__m128i *)&v20[16 * (v22 - 1)];
  v13 = v12->m128i_i64[0];
  v14 = _mm_srli_si128(*v12, 8).m128i_u64[0] - 8;
  while ( v13 )
  {
    v14 += 8LL;
    if ( v14 >= v13 + 8 * ((unsigned __int64)(unsigned __int16)*(_DWORD *)v13 + 2) )
    {
      v17 = *(_QWORD *)(v13 + 8);
      if ( v17 )
      {
        v13 = *(_QWORD *)(v13 + 8);
        v14 = v17 + 16;
      }
      v15 = (v17 + 16) & -(__int64)(v17 != 0);
    }
    else
    {
      v15 = v14;
    }
    if ( !v15 || v4 < *(_DWORD *)v15 || (*(_BYTE *)(v15 + 7) & 1) != 0 || ((*(_BYTE *)(v15 + 6) - 1) & 0xFD) != 0 )
      break;
    if ( *(_BYTE *)(v15 + 6) == 1 )
      v9 = 1;
    if ( v7 )
    {
      if ( v11 != *(unsigned __int16 *)(v15 + 4) )
        break;
    }
    else
    {
      v11 = *(unsigned __int16 *)(v15 + 4);
    }
    if ( ++v7 >= v18 )
      break;
    ++v4;
  }
  if ( v7 )
  {
    v10 = v11;
    *a3 = v7;
    *a4 = v9;
  }
  return v10;
}
