/*
 * XREFs of MmReleaseResourceCharge @ 0x1402DEA9C
 * Callers:
 *     SmAcquireReleaseCharges @ 0x1402DE9C0 (SmAcquireReleaseCharges.c)
 *     MmChargeResources @ 0x1402DEA0C (MmChargeResources.c)
 * Callees:
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 */

void __fastcall MmReleaseResourceCharge(unsigned __int64 a1, char a2, int a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v4; // r8
  __int64 CachedResidentAvailable; // r9
  bool v6; // zf
  signed __int32 v7; // eax
  signed __int32 v8; // eax

  if ( (a2 & 2) == 0 )
    goto LABEL_2;
  if ( a3 )
  {
    if ( a3 != 1 )
      goto LABEL_2;
    CurrentPrcb = KeGetCurrentPrcb();
    v4 = a1;
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable != -1 )
    {
      if ( CachedResidentAvailable + a1 <= 0x100 )
      {
        do
        {
          if ( a1 >= 0x80000 )
            break;
          v8 = _InterlockedCompareExchange(
                 (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                 CachedResidentAvailable + a1,
                 CachedResidentAvailable);
          v6 = (_DWORD)CachedResidentAvailable == v8;
          LODWORD(CachedResidentAvailable) = v8;
          if ( v6 )
            goto LABEL_2;
        }
        while ( v8 != -1 && a1 + v8 <= 0x100 );
      }
      goto LABEL_11;
    }
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v4 = a1;
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
          v6 = (_DWORD)CachedResidentAvailable == v7;
          LODWORD(CachedResidentAvailable) = v7;
          if ( v6 )
            goto LABEL_2;
        }
        while ( v7 != -1 && a1 + v7 <= 0x100 );
      }
LABEL_11:
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v4 = a1 + (int)CachedResidentAvailable - 192;
      }
    }
  }
  if ( v4 )
    _InterlockedExchangeAdd64(&qword_140C52980, v4);
LABEL_2:
  if ( (a2 & 1) != 0 )
    MiReturnCommit(&MiSystemPartition, a1);
}
