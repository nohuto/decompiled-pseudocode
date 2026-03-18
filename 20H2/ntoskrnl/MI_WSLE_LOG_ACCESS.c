/*
 * XREFs of MI_WSLE_LOG_ACCESS @ 0x1402CFBA0
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x140236D90 (MiDeleteSystemPagableVm.c)
 *     MmProtectPool @ 0x1402385B4 (MmProtectPool.c)
 *     MiRemoveMappedPtes @ 0x1402CF020 (MiRemoveMappedPtes.c)
 *     MiTrimPte @ 0x1402CF420 (MiTrimPte.c)
 *     MiEmptyWorkingSetHelper @ 0x140310234 (MiEmptyWorkingSetHelper.c)
 *     MiStealPage @ 0x1403523FC (MiStealPage.c)
 *     MiTrimSharedPageFromViews @ 0x140354B14 (MiTrimSharedPageFromViews.c)
 *     MiConvertPrivateToProto @ 0x140369DA0 (MiConvertPrivateToProto.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140534BCC (MiDeprioritizeVirtualAddresses.c)
 *     MiTrimPteWorker @ 0x14053A6E8 (MiTrimPteWorker.c)
 * Callees:
 *     MiLogPageAccess @ 0x1402BDB30 (MiLogPageAccess.c)
 *     MiGetVaAge @ 0x1402CFC10 (MiGetVaAge.c)
 */

void __fastcall MI_WSLE_LOG_ACCESS(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdx

  v4 = a2 << 25 >> 16;
  if ( (v4 >= 0xFFFFF68000000000uLL && v4 <= 0xFFFFF6FFFFFFFFFFuLL || (unsigned __int8)MiGetVaAge() != 7)
    && (*(_BYTE *)a2 & 0x20) != 0 )
  {
    MiLogPageAccess(a1, a2);
  }
}
