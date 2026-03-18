/*
 * XREFs of MI_WSLE_LOG_ACCESS @ 0x1402A0190
 * Callers:
 *     MiTrimPte @ 0x14029FA10 (MiTrimPte.c)
 *     MiDeleteSystemPagableVm @ 0x1402AB670 (MiDeleteSystemPagableVm.c)
 *     MiRemoveMappedPtes @ 0x1402B38F0 (MiRemoveMappedPtes.c)
 *     MiTrimSharedPageFromViews @ 0x1402CE864 (MiTrimSharedPageFromViews.c)
 *     MmProtectPool @ 0x1402DFB44 (MmProtectPool.c)
 *     MiEmptyWorkingSetHelper @ 0x1402F1B34 (MiEmptyWorkingSetHelper.c)
 *     MiStealPage @ 0x140349B20 (MiStealPage.c)
 *     MiConvertPrivateToProto @ 0x140367400 (MiConvertPrivateToProto.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140530BAC (MiDeprioritizeVirtualAddresses.c)
 *     MiTrimPteWorker @ 0x1405366C8 (MiTrimPteWorker.c)
 * Callees:
 *     MiLogPageAccess @ 0x14029E790 (MiLogPageAccess.c)
 *     MiGetVaAge @ 0x1402A0200 (MiGetVaAge.c)
 */

void __fastcall MI_WSLE_LOG_ACCESS(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdx

  v4 = a2 << 25 >> 16;
  if ( (v4 >= 0xFFFFF68000000000uLL && v4 <= 0xFFFFF6FFFFFFFFFFuLL
     || (unsigned __int8)MiGetVaAge(0xFFFFF68000000000uLL, v4) != 7)
    && (*(_BYTE *)a2 & 0x20) != 0 )
  {
    MiLogPageAccess(a1, a2);
  }
}
