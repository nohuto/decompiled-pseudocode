/*
 * XREFs of ?SmCompressCtxCreateThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS@1@PEAU_SM_COMPRESS_CONTEXT@1@K@Z @ 0x140250D64
 * Callers:
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x140250C60 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThreadParams(__int64 a1, int a2)
{
  BOOLEAN v4; // al
  int v5; // esi
  SIZE_T v6; // rdx
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rax

  v4 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 120));
  v5 = v4;
  if ( !v4 )
    return 0LL;
  v6 = 40LL;
  if ( a2 )
    v6 = *(unsigned int *)(a1 + 132) + 4136LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x74436D73u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    PoolWithTag[3] = 0LL;
    PoolWithTag[4] = 0LL;
    *PoolWithTag = a1;
    if ( a2 )
    {
      v9 = PoolWithTag + 5;
      v8[3] = v9;
      v8[4] = (char *)v9 + *(unsigned int *)(a1 + 132);
    }
    v5 = 0;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v5 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 120));
  return v8;
}
