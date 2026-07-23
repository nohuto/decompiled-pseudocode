/*
 * XREFs of MiReturnPoolCharges @ 0x140273E90
 * Callers:
 *     MiReturnPhysicalPoolPages @ 0x14021B214 (MiReturnPhysicalPoolPages.c)
 *     MiGetPoolPages @ 0x1402629AC (MiGetPoolPages.c)
 *     MiReturnExcessPoolCommit @ 0x1403165E4 (MiReturnExcessPoolCommit.c)
 *     MiInitializePoolCommitPacket @ 0x140316928 (MiInitializePoolCommitPacket.c)
 *     MmAllocateIndependentPagesEx @ 0x140762BCC (MmAllocateIndependentPagesEx.c)
 *     MmFreeIndependentPages @ 0x140764790 (MmFreeIndependentPages.c)
 * Callees:
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 */

void __fastcall MiReturnPoolCharges(unsigned __int64 *a1, int a2)
{
  struct _KPRCB *CurrentPrcb; // r10
  unsigned __int64 v5; // r8
  __int64 CachedResidentAvailable; // r9
  bool v7; // zf
  signed __int32 v8; // eax
  unsigned __int64 v9; // rax

  if ( qword_140C52B68 )
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
          CachedResidentAvailable = v8;
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
      v5 = _InterlockedExchangeAdd64(&qword_140C529C0, v5);
LABEL_6:
    MiReturnCommit(&MiSystemPartition, a1[3] - a1[1], v5, CachedResidentAvailable);
    if ( a2 != 2 )
    {
      v9 = -(__int64)a1[3];
      if ( a2 )
        _InterlockedExchangeAdd64(&qword_140C4EFE8, v9);
      else
        _InterlockedExchangeAdd64(&qword_140C4EFE0, v9);
    }
  }
}
