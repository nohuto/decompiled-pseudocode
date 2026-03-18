/*
 * XREFs of MiReturnPoolCharges @ 0x140228AA0
 * Callers:
 *     MiReturnPhysicalPoolPages @ 0x1402287C8 (MiReturnPhysicalPoolPages.c)
 *     MiGetPoolPages @ 0x140284A20 (MiGetPoolPages.c)
 *     MiInitializePoolCommitPacket @ 0x1403523C0 (MiInitializePoolCommitPacket.c)
 *     MiReturnExcessPoolCommit @ 0x140352D04 (MiReturnExcessPoolCommit.c)
 *     MmAllocateIndependentPagesEx @ 0x140829CBC (MmAllocateIndependentPagesEx.c)
 *     MmFreeIndependentPages @ 0x14096ED20 (MmFreeIndependentPages.c)
 * Callees:
 *     MiReturnSystemCharges @ 0x140229640 (MiReturnSystemCharges.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 */

void __fastcall MiReturnPoolCharges(unsigned __int64 *a1, int a2, char a3)
{
  unsigned __int64 v6; // rdi
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int64 v8; // rdx
  __int64 CachedResidentAvailable; // r8
  bool v10; // zf
  signed __int32 v11; // eax
  unsigned __int64 v12; // rax

  if ( qword_140C593D8 )
  {
    v6 = a1[4] - a1[1];
    MiReturnCommit(&MiSystemPartition, v6);
    if ( a2 == 2 )
    {
      MiReturnSystemCharges(&MiSystemPartition, v6, (a3 & 4) != 0 ? 15 : 5);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v8 = *a1;
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( v8 + CachedResidentAvailable <= 0x100 )
        {
          do
          {
            if ( v8 >= 0x80000 )
              break;
            v11 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                    CachedResidentAvailable + v8,
                    CachedResidentAvailable);
            v10 = (_DWORD)CachedResidentAvailable == v11;
            LODWORD(CachedResidentAvailable) = v11;
            if ( v10 )
              goto LABEL_7;
          }
          while ( v11 != -1 && v8 + v11 <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v8 += (int)CachedResidentAvailable - 192;
        }
      }
      if ( v8 )
        _InterlockedExchangeAdd64(&qword_140C591C0, v8);
LABEL_7:
      v12 = -(__int64)a1[4];
      if ( a2 )
        _InterlockedExchangeAdd64(&qword_140C53520, v12);
      else
        _InterlockedExchangeAdd64(&qword_140C53518, v12);
    }
  }
}
