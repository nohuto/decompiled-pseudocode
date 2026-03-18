/*
 * XREFs of MmReleaseResourceCharge @ 0x140262FAC
 * Callers:
 *     SmAcquireReleaseCharges @ 0x140262ED4 (SmAcquireReleaseCharges.c)
 *     MmChargeResources @ 0x140262F20 (MmChargeResources.c)
 * Callees:
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 */

void __fastcall MmReleaseResourceCharge(unsigned __int64 a1, char a2, int a3)
{
  struct _KPRCB *CurrentPrcb; // r10
  unsigned __int64 v5; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v7; // zf
  signed __int32 v8; // eax

  if ( (a2 & 2) != 0 && !a3 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v5 = a1;
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
          v7 = (_DWORD)CachedResidentAvailable == v8;
          LODWORD(CachedResidentAvailable) = v8;
          if ( v7 )
            goto LABEL_2;
        }
        while ( v8 != -1 && a1 + v8 <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v5 = a1 + (int)CachedResidentAvailable - 192;
      }
    }
    if ( v5 )
      _InterlockedExchangeAdd64(&qword_140C591C0, v5);
  }
LABEL_2:
  if ( (a2 & 1) != 0 )
    MiReturnCommit(&MiSystemPartition, a1);
}
