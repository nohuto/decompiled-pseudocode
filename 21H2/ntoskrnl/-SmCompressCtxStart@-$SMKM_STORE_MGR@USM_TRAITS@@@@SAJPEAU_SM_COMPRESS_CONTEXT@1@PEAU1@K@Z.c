/*
 * XREFs of ?SmCompressCtxStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x1403C9028
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1402A2388 (-SmFirstTimeInit@@YAJKK@Z.c)
 * Callees:
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x140250C60 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     RtlGetCompressionWorkSpaceSize @ 0x140290A50 (RtlGetCompressionWorkSpaceSize.c)
 */

int __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxStart(__int64 a1, __int64 a2, USHORT a3)
{
  int result; // eax
  ULONG CompressFragmentWorkSpaceSize; // [rsp+30h] [rbp+8h] BYREF

  CompressFragmentWorkSpaceSize = 0;
  result = RtlGetCompressionWorkSpaceSize(a3, (PULONG)(a1 + 132), &CompressFragmentWorkSpaceSize);
  if ( result >= 0 )
  {
    result = SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThread(a1, a2, 0);
    if ( result >= 0 )
    {
      *(_DWORD *)(a1 + 88) = 1;
      result = SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThread(a1, a2, 1u);
      if ( result >= 0 )
        return 0;
    }
  }
  return result;
}
