/*
 * XREFs of MiRotatedToFrameBuffer @ 0x1402B0538
 * Callers:
 *     MiActOnPte @ 0x14023C5F0 (MiActOnPte.c)
 *     MiLockStealUserVm @ 0x14026AFD4 (MiLockStealUserVm.c)
 *     MiGetWorkingSetInfoList @ 0x14026E89C (MiGetWorkingSetInfoList.c)
 *     MiMakeVaRangeNoAccess @ 0x1402C8854 (MiMakeVaRangeNoAccess.c)
 *     MiProtectPrivateMemory @ 0x14030DA00 (MiProtectPrivateMemory.c)
 *     NtUnlockVirtualMemory @ 0x14032DF30 (NtUnlockVirtualMemory.c)
 *     MiGetPageProtection @ 0x140330DA0 (MiGetPageProtection.c)
 *     MiRevertValidPte @ 0x140334300 (MiRevertValidPte.c)
 *     MiDeleteVa @ 0x140337A80 (MiDeleteVa.c)
 *     MiCheckCommitReleaseFromVad @ 0x14052B10C (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

_BOOL8 __fastcall MiRotatedToFrameBuffer(unsigned __int64 a1)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rdi
  _BOOL8 result; // rax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = MI_READ_PTE_LOCK_FREE(a1);
  result = 0;
  if ( (v6 & 1) != 0 )
  {
    v2 = 6 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v6) >> 12) & 0xFFFFFFFFFLL);
    v3 = 8 * v2 - 0x58000000000LL;
    if ( ((*(_QWORD *)(8 * v2 - 0x57FFFFFFFD8LL) >> 50) & 1) == 0 )
      return 1;
    v4 = *(_QWORD *)(v3 + 8);
    if ( ((v4 | 0x8000000000000000uLL) != a1
       || ((*(_QWORD *)(v3 + 40) ^ ((unsigned __int64)MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12)) & 0xFFFFFFFFFLL) != 0)
      && (!(unsigned int)MI_PFN_IS_PROTO(v3) || (*(_QWORD *)(v3 + 40) & 0x1000000000LL) != 0 || v4 <= 0) )
    {
      return 1;
    }
  }
  return result;
}
