/*
 * XREFs of MiReleaseNonPagedResources @ 0x140217EF8
 * Callers:
 *     MiReturnMdlExcess @ 0x1405343EC (MiReturnMdlExcess.c)
 *     MiFreeLargePageCharges @ 0x14055E6BC (MiFreeLargePageCharges.c)
 *     MiAllocateProcessShadow @ 0x1406A7A1C (MiAllocateProcessShadow.c)
 *     MiChargeSystemImageCommitment @ 0x14075ED24 (MiChargeSystemImageCommitment.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1408DAAD8 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 */

unsigned __int64 __fastcall MiReleaseNonPagedResources(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v9; // zf

  v4 = a2;
  MiReturnCommit(a1, a2, a3, a4);
  result = (unsigned __int64)&MiSystemPartition;
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable != -1 )
    {
      for ( ; v4 + CachedResidentAvailable <= 0x100; result = v4 + (int)result )
      {
        if ( v4 >= 0x80000 )
          break;
        result = (unsigned int)_InterlockedCompareExchange(
                                 (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                 CachedResidentAvailable + v4,
                                 CachedResidentAvailable);
        v9 = (_DWORD)CachedResidentAvailable == (_DWORD)result;
        CachedResidentAvailable = (int)result;
        if ( v9 )
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
          v4 += (int)result;
        }
      }
    }
  }
  if ( v4 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7168), v4);
  return result;
}
