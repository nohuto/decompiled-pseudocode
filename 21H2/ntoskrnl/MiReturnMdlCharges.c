/*
 * XREFs of MiReturnMdlCharges @ 0x140589EE0
 * Callers:
 *     MiReturnMdlExcess @ 0x140589FC0 (MiReturnMdlExcess.c)
 * Callees:
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 */

void __fastcall MiReturnMdlCharges(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rdx
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // r8
  bool v7; // zf
  signed __int32 v8; // eax

  MiReturnCommit(a1, a2);
  v4 = a2;
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable != -1 )
    {
      if ( a2 + CachedResidentAvailable <= 0x100 )
      {
        do
        {
          if ( a2 >= 0x80000 )
            break;
          v8 = _InterlockedCompareExchange(
                 (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                 CachedResidentAvailable + a2,
                 CachedResidentAvailable);
          v7 = (_DWORD)CachedResidentAvailable == v8;
          LODWORD(CachedResidentAvailable) = v8;
          if ( v7 )
            goto LABEL_14;
        }
        while ( v8 != -1 && a2 + v8 <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v4 = a2 + (int)CachedResidentAvailable - 192;
      }
    }
  }
  if ( v4 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16960), v4);
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
LABEL_14:
    _InterlockedExchangeAdd64(&qword_140C53530, -(__int64)a2);
}
