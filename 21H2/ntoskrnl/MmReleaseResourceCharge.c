/*
 * XREFs of MmReleaseResourceCharge @ 0x14028FDEC
 * Callers:
 *     SmAcquireReleaseCharges @ 0x14028FD10 (SmAcquireReleaseCharges.c)
 *     MmChargeResources @ 0x14028FD5C (MmChargeResources.c)
 * Callees:
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 */

void __fastcall MmReleaseResourceCharge(
        unsigned __int64 a1,
        char a2,
        unsigned __int64 a3,
        __int64 CachedResidentAvailable)
{
  struct _KPRCB *CurrentPrcb; // rbx
  bool v5; // zf
  signed __int32 v6; // eax
  signed __int32 v7; // eax

  if ( (a2 & 2) == 0 )
    goto LABEL_2;
  if ( (_DWORD)a3 )
  {
    if ( (_DWORD)a3 != 1 )
      goto LABEL_2;
    CurrentPrcb = KeGetCurrentPrcb();
    a3 = a1;
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable != -1 )
    {
      if ( CachedResidentAvailable + a1 <= 0x100 )
      {
        do
        {
          if ( a1 >= 0x80000 )
            break;
          v7 = _InterlockedCompareExchange(
                 (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                 CachedResidentAvailable + a1,
                 CachedResidentAvailable);
          v5 = (_DWORD)CachedResidentAvailable == v7;
          CachedResidentAvailable = v7;
          if ( v5 )
            goto LABEL_2;
        }
        while ( v7 != -1 && a1 + v7 <= 0x100 );
      }
      goto LABEL_11;
    }
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    a3 = a1;
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable != -1 )
    {
      if ( CachedResidentAvailable + a1 <= 0x100 )
      {
        do
        {
          if ( a1 >= 0x80000 )
            break;
          v6 = _InterlockedCompareExchange(
                 (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                 CachedResidentAvailable + a1,
                 CachedResidentAvailable);
          v5 = (_DWORD)CachedResidentAvailable == v6;
          CachedResidentAvailable = v6;
          if ( v5 )
            goto LABEL_2;
        }
        while ( v6 != -1 && a1 + v6 <= 0x100 );
      }
LABEL_11:
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        a3 = a1 + (int)CachedResidentAvailable - 192;
      }
    }
  }
  if ( a3 )
    a3 = _InterlockedExchangeAdd64(&qword_140C529C0, a3);
LABEL_2:
  if ( (a2 & 1) != 0 )
    MiReturnCommit(&MiSystemPartition, a1, a3, CachedResidentAvailable);
}
