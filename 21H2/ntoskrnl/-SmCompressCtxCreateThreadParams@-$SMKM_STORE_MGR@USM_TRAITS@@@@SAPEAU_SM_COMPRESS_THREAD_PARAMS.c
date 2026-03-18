/*
 * XREFs of ?SmCompressCtxCreateThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS@1@PEAU_SM_COMPRESS_CONTEXT@1@K@Z @ 0x1403899C8
 * Callers:
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x1403898C4 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThreadParams(__int64 a1, int a2)
{
  __int64 v4; // rbx
  SIZE_T v5; // rdx
  _QWORD *PoolWithTag; // rax

  v4 = 0LL;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 120)) )
  {
    v5 = 40LL;
    if ( a2 )
      v5 = *(unsigned int *)(a1 + 132) + 4136LL;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x74436D73u);
    if ( PoolWithTag )
    {
      PoolWithTag[1] = 0LL;
      PoolWithTag[2] = 0LL;
      PoolWithTag[3] = 0LL;
      PoolWithTag[4] = 0LL;
      *PoolWithTag = a1;
      if ( a2 )
      {
        PoolWithTag[3] = PoolWithTag + 5;
        PoolWithTag[4] = (char *)PoolWithTag + *(unsigned int *)(a1 + 132) + 40;
      }
      return PoolWithTag;
    }
    else
    {
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 120));
    }
  }
  return (_QWORD *)v4;
}
