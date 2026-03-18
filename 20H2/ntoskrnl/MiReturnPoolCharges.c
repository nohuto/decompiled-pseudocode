/*
 * XREFs of MiReturnPoolCharges @ 0x140262F90
 * Callers:
 *     MiReturnExcessPoolCommit @ 0x1402CB384 (MiReturnExcessPoolCommit.c)
 *     MiInitializePoolCommitPacket @ 0x1402CB7D8 (MiInitializePoolCommitPacket.c)
 *     MiReturnPhysicalPoolPages @ 0x140301A34 (MiReturnPhysicalPoolPages.c)
 *     MiGetPoolPages @ 0x140333D10 (MiGetPoolPages.c)
 *     MmAllocateIndependentPagesEx @ 0x14075E21C (MmAllocateIndependentPagesEx.c)
 *     MmFreeIndependentPages @ 0x1407601B0 (MmFreeIndependentPages.c)
 * Callees:
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 */

void __fastcall MiReturnPoolCharges(unsigned __int64 *a1, int a2)
{
  struct _KPRCB *CurrentPrcb; // r10
  unsigned __int64 v5; // r8
  __int64 CachedResidentAvailable; // r9
  bool v7; // zf
  signed __int32 v8; // eax
  unsigned __int64 v9; // rax

  if ( qword_140C529A8 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v5 = *a1;
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable != -1 )
    {
      if ( v5 + CachedResidentAvailable <= 0x100 )
      {
        do
        {
          if ( v5 >= 0x80000 )
            break;
          v8 = _InterlockedCompareExchange(
                 (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                 CachedResidentAvailable + v5,
                 CachedResidentAvailable);
          v7 = (_DWORD)CachedResidentAvailable == v8;
          LODWORD(CachedResidentAvailable) = v8;
          if ( v7 )
            goto LABEL_6;
        }
        while ( v8 != -1 && v5 + v8 <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v5 += (int)CachedResidentAvailable - 192;
      }
    }
    if ( v5 )
      _InterlockedExchangeAdd64(&qword_140C52800, v5);
LABEL_6:
    MiReturnCommit((__int64)&MiSystemPartition, a1[3] - a1[1]);
    if ( a2 != 2 )
    {
      v9 = -(__int64)a1[3];
      if ( a2 )
        _InterlockedExchangeAdd64(&qword_140C4EE28, v9);
      else
        _InterlockedExchangeAdd64(&qword_140C4EE20, v9);
    }
  }
}
