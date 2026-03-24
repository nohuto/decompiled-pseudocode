/*
 * XREFs of MI_WSLE_LOG_ACCESS @ 0x140309080
 * Callers:
 *     MiStealPage @ 0x14026BCA4 (MiStealPage.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC44 (MiTrimSharedPageFromViews.c)
 *     MiDeleteSystemPagableVm @ 0x140305A80 (MiDeleteSystemPagableVm.c)
 *     MiEmptyWorkingSetHelper @ 0x140306534 (MiEmptyWorkingSetHelper.c)
 *     MiRemoveMappedPtes @ 0x140308500 (MiRemoveMappedPtes.c)
 *     MiTrimPte @ 0x140308900 (MiTrimPte.c)
 *     MmProtectPool @ 0x140362D68 (MmProtectPool.c)
 *     MiConvertPrivateToProto @ 0x14036A050 (MiConvertPrivateToProto.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1405366CC (MiDeprioritizeVirtualAddresses.c)
 *     MiTrimPteWorker @ 0x14053C1E8 (MiTrimPteWorker.c)
 * Callees:
 *     MiGetVaAge @ 0x1403090F0 (MiGetVaAge.c)
 *     MiLogPageAccess @ 0x14033A650 (MiLogPageAccess.c)
 */

__int64 __fastcall MI_WSLE_LOG_ACCESS(__int64 a1, _BYTE *a2)
{
  unsigned __int64 v4; // rdx
  __int64 result; // rax

  v4 = (__int64)((_QWORD)a2 << 25) >> 16;
  if ( v4 >= 0xFFFFF68000000000uLL && (result = 0xFFFFF6FFFFFFFFFFuLL, v4 <= 0xFFFFF6FFFFFFFFFFuLL)
    || (result = MiGetVaAge(0xFFFFF68000000000uLL, v4), (_BYTE)result != 7) )
  {
    if ( (*a2 & 0x20) != 0 )
      return MiLogPageAccess(a1, a2);
  }
  return result;
}
