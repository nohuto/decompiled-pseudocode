/*
 * XREFs of MiRotatedToFrameBuffer @ 0x14033CD08
 * Callers:
 *     MiDeleteVa @ 0x140242B90 (MiDeleteVa.c)
 *     MiProtectPrivateMemory @ 0x140254D50 (MiProtectPrivateMemory.c)
 *     NtUnlockVirtualMemory @ 0x1402564F0 (NtUnlockVirtualMemory.c)
 *     MiRevertValidPte @ 0x1402AF480 (MiRevertValidPte.c)
 *     MiGetPageProtection @ 0x1402B25A0 (MiGetPageProtection.c)
 *     MiActOnPte @ 0x1402BB6D0 (MiActOnPte.c)
 *     MiGetWorkingSetInfoList @ 0x1403186FC (MiGetWorkingSetInfoList.c)
 *     MiLockStealUserVm @ 0x14031D3F8 (MiLockStealUserVm.c)
 *     MiMakeVaRangeNoAccess @ 0x140356C84 (MiMakeVaRangeNoAccess.c)
 *     MiCheckCommitReleaseFromVad @ 0x140525C3C (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
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
    v2 = 6 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v6) >> 12) & 0xFFFFFFFFFLL);
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
