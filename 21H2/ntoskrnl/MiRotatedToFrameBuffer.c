/*
 * XREFs of MiRotatedToFrameBuffer @ 0x1402433D0
 * Callers:
 *     MiMakeVaRangeNoAccess @ 0x14024D7F4 (MiMakeVaRangeNoAccess.c)
 *     NtUnlockVirtualMemory @ 0x1402CD9C0 (NtUnlockVirtualMemory.c)
 *     MiGetWorkingSetInfoList @ 0x1402E67E8 (MiGetWorkingSetInfoList.c)
 *     MiLockStealUserVm @ 0x1402EACBC (MiLockStealUserVm.c)
 *     MiGetPageProtection @ 0x140319160 (MiGetPageProtection.c)
 *     MiRevertValidPte @ 0x14032E130 (MiRevertValidPte.c)
 *     MiProtectPrivateMemory @ 0x14032EA60 (MiProtectPrivateMemory.c)
 *     MiDeleteVa @ 0x140330730 (MiDeleteVa.c)
 *     MiActOnPte @ 0x14033E970 (MiActOnPte.c)
 *     MiCheckCommitReleaseFromVad @ 0x14057FA8C (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 */

_BOOL8 __fastcall MiRotatedToFrameBuffer(unsigned __int64 a1)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rsi
  _BOOL8 result; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = MI_READ_PTE_LOCK_FREE(a1);
  result = 0;
  if ( (v7 & 1) != 0 )
  {
    v2 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v7) >> 12) & 0xFFFFFFFFFFLL;
    v3 = 6 * v2;
    if ( v2 > qword_140C50840 || ((*(_QWORD *)(48 * v2 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
      return 1;
    v4 = *(_QWORD *)(48 * v2 - 0x220000000000LL + 8);
    if ( (v4 | 0x8000000000000000uLL) != a1
      || ((*(_QWORD *)(48 * v2 - 0x220000000000LL + 40) ^ ((unsigned __int64)MI_READ_PTE_LOCK_FREE(
                                                                               ((a1 >> 9) & 0x7FFFFFFFF8LL)
                                                                             - 0x98000000000LL) >> 12)) & 0xFFFFFFFFFFLL) != 0 )
    {
      v6 = *(_QWORD *)(8 * v3 - 0x220000000000LL + 40);
      if ( v6 >= 0 || (v6 & 0x10000000000LL) != 0 || v4 < 0 || !v4 )
        return 1;
    }
  }
  return result;
}
