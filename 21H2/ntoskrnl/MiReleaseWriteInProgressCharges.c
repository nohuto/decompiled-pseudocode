/*
 * XREFs of MiReleaseWriteInProgressCharges @ 0x140276D94
 * Callers:
 *     MiGatherPagefilePages @ 0x140256844 (MiGatherPagefilePages.c)
 *     MiWriteComplete @ 0x1402766E0 (MiWriteComplete.c)
 *     MiFreeModWriterEntry @ 0x140276D58 (MiFreeModWriterEntry.c)
 *     MiBuildMappedCluster @ 0x140277640 (MiBuildMappedCluster.c)
 * Callees:
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 */

unsigned __int64 __fastcall MiReleaseWriteInProgressCharges(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 CachedResidentAvailable; // rdx
  bool v9; // zf

  v4 = a2;
  if ( (_DWORD)a3 )
  {
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
LABEL_8:
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
  }
  else
  {
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
        goto LABEL_8;
      }
    }
  }
  if ( v4 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7168), v4);
  return result;
}
