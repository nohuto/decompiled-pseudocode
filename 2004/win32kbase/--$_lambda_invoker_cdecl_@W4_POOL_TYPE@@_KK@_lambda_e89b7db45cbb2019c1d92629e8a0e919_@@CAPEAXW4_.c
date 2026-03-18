/*
 * XREFs of ??$_lambda_invoker_cdecl_@W4_POOL_TYPE@@_KK@_lambda_e89b7db45cbb2019c1d92629e8a0e919_@@CAPEAXW4_POOL_TYPE@@_KK@Z @ 0x1C00CF040
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00D3880 (memset.c)
 */

PVOID __fastcall _lambda_e89b7db45cbb2019c1d92629e8a0e919_::_lambda_invoker_cdecl_<enum _POOL_TYPE,unsigned __int64,unsigned long>(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag)
{
  PVOID PoolWithTag; // rax
  PVOID v5; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, NumberOfBytes, 0x6F736955u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, NumberOfBytes);
  return v5;
}
