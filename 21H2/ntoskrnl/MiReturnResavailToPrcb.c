/*
 * XREFs of MiReturnResavailToPrcb @ 0x14028CD10
 * Callers:
 *     MmMarkPhysicalMemoryAsBad @ 0x14058F250 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiReturnResavailToPrcb(ULONG_PTR *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rcx
  bool v5; // zf
  signed __int32 v6; // eax

  v2 = a2;
  if ( a1 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable != -1 )
    {
      if ( a2 + CachedResidentAvailable <= 0x100 )
      {
        while ( a2 < 0x80000 )
        {
          v6 = _InterlockedCompareExchange(
                 (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                 a2 + CachedResidentAvailable,
                 CachedResidentAvailable);
          v5 = (_DWORD)CachedResidentAvailable == v6;
          LODWORD(CachedResidentAvailable) = v6;
          if ( v5 )
            return 0LL;
          if ( v6 == -1 || a2 + v6 > 0x100 )
            break;
        }
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        return (int)CachedResidentAvailable - 192 + a2;
      }
    }
  }
  return v2;
}
