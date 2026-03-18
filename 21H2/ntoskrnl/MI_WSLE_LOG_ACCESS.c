/*
 * XREFs of MI_WSLE_LOG_ACCESS @ 0x140274D10
 * Callers:
 *     MiEmptyWorkingSetHelper @ 0x140226EE0 (MiEmptyWorkingSetHelper.c)
 *     MiConvertPrivateToProto @ 0x140272A10 (MiConvertPrivateToProto.c)
 *     MiRemoveMappedPtes @ 0x140274860 (MiRemoveMappedPtes.c)
 *     MiTrimSharedPageFromViews @ 0x14027B820 (MiTrimSharedPageFromViews.c)
 *     MiDeleteSystemPagableVm @ 0x14027E810 (MiDeleteSystemPagableVm.c)
 *     MiStealPage @ 0x1402E97D4 (MiStealPage.c)
 *     MmProtectPool @ 0x140367190 (MmProtectPool.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140374BBC (MiDeprioritizeVirtualAddresses.c)
 *     MiTrimPteWorker @ 0x1405972B4 (MiTrimPteWorker.c)
 * Callees:
 *     MiGetVaAge @ 0x140274D80 (MiGetVaAge.c)
 *     MiLogPageAccess @ 0x140333040 (MiLogPageAccess.c)
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
