/*
 * XREFs of ExAllocateCacheAwareRundownProtection @ 0x1406C97D0
 * Callers:
 *     MmCreatePartition @ 0x1403CAB14 (MmCreatePartition.c)
 *     RawInitializeVcb @ 0x1406C9600 (RawInitializeVcb.c)
 *     EtwInitializeSiloState @ 0x14079ADF8 (EtwInitializeSiloState.c)
 * Callees:
 *     KeGetRecommendedSharedDataAlignment @ 0x1402A5D50 (KeGetRecommendedSharedDataAlignment.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

PEX_RUNDOWN_REF_CACHE_AWARE __stdcall ExAllocateCacheAwareRundownProtection(POOL_TYPE PoolType, ULONG PoolTag)
{
  struct _EX_RUNDOWN_REF_CACHE_AWARE *PoolWithTag; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v5; // rbx
  unsigned int v6; // edi
  ULONG RecommendedSharedDataAlignment; // esi
  unsigned __int64 v8; // rax
  unsigned int Number; // edx
  __int64 v10; // rdi
  _EX_RUNDOWN_REF *v11; // rcx
  unsigned int v12; // r8d
  int v13; // edx

  PoolWithTag = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)ExAllocatePoolWithTag(PoolType, 0x18uLL, PoolTag);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return v5;
  v6 = KeNumberProcessors_0;
  PoolWithTag->Number = KeNumberProcessors_0;
  if ( v6 <= 1 )
    RecommendedSharedDataAlignment = 8;
  else
    RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
  v5->RunRefSize = RecommendedSharedDataAlignment;
  v8 = (unsigned __int64)ExAllocatePoolWithTag(PoolType, RecommendedSharedDataAlignment * v6, PoolTag);
  if ( v8 )
  {
    Number = v5->Number;
    if ( Number <= 1 || (v10 = RecommendedSharedDataAlignment - 1, (v10 & v8) == 0) )
    {
      v11 = (_EX_RUNDOWN_REF *)v8;
LABEL_9:
      v12 = 0;
      v5->PoolToFree = (void *)v8;
      v5->RunRefs = v11;
      if ( Number )
      {
        do
        {
          v13 = v12 % v5->Number;
          ++v12;
          *(unsigned __int64 *)((char *)&v5->RunRefs->Count + v5->RunRefSize * v13) = 0LL;
        }
        while ( v12 < v5->Number );
      }
      return v5;
    }
    ExFreePoolWithTag((PVOID)v8, 0);
    v8 = (unsigned __int64)ExAllocatePoolWithTag(PoolType, RecommendedSharedDataAlignment * (v5->Number + 1), PoolTag);
    if ( v8 )
    {
      Number = v5->Number;
      v11 = (_EX_RUNDOWN_REF *)(~v10 & (v10 + v8));
      goto LABEL_9;
    }
  }
  ExFreePoolWithTag(v5, 0);
  return 0LL;
}
