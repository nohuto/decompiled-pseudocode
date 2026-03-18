/*
 * XREFs of MiChargeForWriteInProgressPage @ 0x140355018
 * Callers:
 *     MiReferencePageForModifiedWrite @ 0x1403536FC (MiReferencePageForModifiedWrite.c)
 *     MiAllocateModWriterEntry @ 0x1403543FC (MiAllocateModWriterEntry.c)
 * Callees:
 *     MiChargeCommit @ 0x14021A460 (MiChargeCommit.c)
 *     MiChargeResident @ 0x1403550AC (MiChargeResident.c)
 */

__int64 __fastcall MiChargeForWriteInProgressPage(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rbx
  unsigned int v7; // esi
  unsigned int v8; // ebp
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v12; // zf
  signed __int32 v13; // eax

  v5 = 1LL;
  v7 = (a2 & 2) != 0 ? 0xFFFFFFFC : 0;
  v8 = MiChargeResident(a1, 1LL, (unsigned int)-((a2 & 2) != 0), a4);
  if ( v8 )
  {
    if ( (a2 & 1) == 0 || (unsigned int)MiChargeCommit(a1, 1uLL, v7 + 8) )
      return v8;
    if ( (ULONG_PTR *)a1 != &MiSystemPartition )
      goto LABEL_16;
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable == -1 )
      goto LABEL_16;
    if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
    {
      do
      {
        v13 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                CachedResidentAvailable + 1,
                CachedResidentAvailable);
        v12 = (_DWORD)CachedResidentAvailable == v13;
        LODWORD(CachedResidentAvailable) = v13;
        if ( v12 )
          return 0LL;
      }
      while ( v13 != -1 && (unsigned __int64)(v13 + 1LL) <= 0x100 );
    }
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v5 = (int)CachedResidentAvailable - 192 + 1LL;
    }
    if ( v5 )
LABEL_16:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7168), v5);
  }
  return 0LL;
}
