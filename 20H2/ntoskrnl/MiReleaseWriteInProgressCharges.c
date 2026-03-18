/*
 * XREFs of MiReleaseWriteInProgressCharges @ 0x140344D68
 * Callers:
 *     MiGatherPagefilePages @ 0x140341EC0 (MiGatherPagefilePages.c)
 *     MiFreeModWriterEntry @ 0x140344D2C (MiFreeModWriterEntry.c)
 *     MiBuildMappedCluster @ 0x140345BF8 (MiBuildMappedCluster.c)
 *     MiWriteComplete @ 0x140346420 (MiWriteComplete.c)
 * Callees:
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 */

unsigned __int64 __fastcall MiReleaseWriteInProgressCharges(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 CachedResidentAvailable; // rdx
  bool v8; // zf

  v3 = a2;
  if ( a3 )
  {
    MiReturnCommit(a1, a2);
    result = (unsigned __int64)&MiSystemPartition;
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        for ( ; v3 + CachedResidentAvailable <= 0x100; result = v3 + (int)result )
        {
          if ( v3 >= 0x80000 )
            break;
          result = (unsigned int)_InterlockedCompareExchange(
                                   (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                   CachedResidentAvailable + v3,
                                   CachedResidentAvailable);
          v8 = (_DWORD)CachedResidentAvailable == (_DWORD)result;
          CachedResidentAvailable = (int)result;
          if ( v8 )
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
            v3 += (int)result;
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
        for ( ; v3 + CachedResidentAvailable <= 0x100; result = v3 + (int)result )
        {
          if ( v3 >= 0x80000 )
            break;
          result = (unsigned int)_InterlockedCompareExchange(
                                   (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                   CachedResidentAvailable + v3,
                                   CachedResidentAvailable);
          v8 = (_DWORD)CachedResidentAvailable == (_DWORD)result;
          CachedResidentAvailable = (int)result;
          if ( v8 )
            return result;
          if ( (_DWORD)result == -1 )
            break;
        }
        goto LABEL_8;
      }
    }
  }
  if ( v3 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7168), v3);
  return result;
}
