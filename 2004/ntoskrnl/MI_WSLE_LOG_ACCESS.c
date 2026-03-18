/*
 * XREFs of MI_WSLE_LOG_ACCESS @ 0x140247160
 * Callers:
 *     MiTrimPte @ 0x1402469E0 (MiTrimPte.c)
 *     MiDeleteSystemPagableVm @ 0x140252640 (MiDeleteSystemPagableVm.c)
 *     MiRemoveMappedPtes @ 0x14025A8C0 (MiRemoveMappedPtes.c)
 *     MmProtectPool @ 0x1402704BC (MmProtectPool.c)
 *     MiStealPage @ 0x14031A7E0 (MiStealPage.c)
 *     MiTrimSharedPageFromViews @ 0x14031EC94 (MiTrimSharedPageFromViews.c)
 *     MiEmptyWorkingSetHelper @ 0x14032D8D4 (MiEmptyWorkingSetHelper.c)
 *     MiConvertPrivateToProto @ 0x140367DC0 (MiConvertPrivateToProto.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1405311FC (MiDeprioritizeVirtualAddresses.c)
 *     MiTrimPteWorker @ 0x140536D18 (MiTrimPteWorker.c)
 * Callees:
 *     MiLogPageAccess @ 0x140245760 (MiLogPageAccess.c)
 *     MiGetVaAge @ 0x1402471D0 (MiGetVaAge.c)
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
