/*
 * XREFs of MI_WSLE_LOG_ACCESS @ 0x140313DD0
 * Callers:
 *     MiStealPage @ 0x140259C44 (MiStealPage.c)
 *     MmProtectPool @ 0x1402F8098 (MmProtectPool.c)
 *     MiTrimSharedPageFromViews @ 0x1402FA994 (MiTrimSharedPageFromViews.c)
 *     MiDeleteSystemPagableVm @ 0x1403107D0 (MiDeleteSystemPagableVm.c)
 *     MiEmptyWorkingSetHelper @ 0x140311284 (MiEmptyWorkingSetHelper.c)
 *     MiRemoveMappedPtes @ 0x140313250 (MiRemoveMappedPtes.c)
 *     MiTrimPte @ 0x140313650 (MiTrimPte.c)
 *     MiConvertPrivateToProto @ 0x14036A200 (MiConvertPrivateToProto.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14053690C (MiDeprioritizeVirtualAddresses.c)
 *     MiTrimPteWorker @ 0x14053C428 (MiTrimPteWorker.c)
 * Callees:
 *     MiGetVaAge @ 0x140313E40 (MiGetVaAge.c)
 *     MiLogPageAccess @ 0x1403453A0 (MiLogPageAccess.c)
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
