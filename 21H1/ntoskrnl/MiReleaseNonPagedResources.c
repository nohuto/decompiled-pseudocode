/*
 * XREFs of MiReleaseNonPagedResources @ 0x1402FA2F8
 * Callers:
 *     MiReturnMdlExcess @ 0x14052E68C (MiReturnMdlExcess.c)
 *     MiFreeLargePageCharges @ 0x14055898C (MiFreeLargePageCharges.c)
 *     MiAllocateProcessShadow @ 0x1406F128C (MiAllocateProcessShadow.c)
 *     MiChargeSystemImageCommitment @ 0x140747544 (MiChargeSystemImageCommitment.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1408D6028 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 */

unsigned __int64 __fastcall MiReleaseNonPagedResources(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v7; // zf

  v2 = a2;
  MiReturnCommit(a1, a2);
  result = (unsigned __int64)&MiSystemPartition;
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable != -1 )
    {
      for ( ; v2 + CachedResidentAvailable <= 0x100; result = v2 + (int)result )
      {
        if ( v2 >= 0x80000 )
          break;
        result = (unsigned int)_InterlockedCompareExchange(
                                 (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                 CachedResidentAvailable + v2,
                                 CachedResidentAvailable);
        v7 = (_DWORD)CachedResidentAvailable == (_DWORD)result;
        CachedResidentAvailable = (int)result;
        if ( v7 )
          return result;
        if ( (_DWORD)result == -1 )
          break;
      }
      if ( (int)CachedResidentAvailable > 192 )
      {
        result = (unsigned int)_InterlockedCompareExchange(
                                 (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                 192,
                                 CachedResidentAvailable);
        if ( (_DWORD)CachedResidentAvailable == (_DWORD)result )
        {
          result = (unsigned int)(CachedResidentAvailable - 192);
          v2 += (int)result;
        }
      }
    }
  }
  if ( v2 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7168), v2);
  return result;
}
