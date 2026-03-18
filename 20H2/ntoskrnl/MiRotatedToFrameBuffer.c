/*
 * XREFs of MiRotatedToFrameBuffer @ 0x14030F8A8
 * Callers:
 *     MiProtectPrivateMemory @ 0x1402349C0 (MiProtectPrivateMemory.c)
 *     NtUnlockVirtualMemory @ 0x1402B1340 (NtUnlockVirtualMemory.c)
 *     MiGetPageProtection @ 0x1402B41B0 (MiGetPageProtection.c)
 *     MiRevertValidPte @ 0x1402B7550 (MiRevertValidPte.c)
 *     MiDeleteVa @ 0x1402BAF60 (MiDeleteVa.c)
 *     MiMakeVaRangeNoAccess @ 0x140327684 (MiMakeVaRangeNoAccess.c)
 *     MiLockStealUserVm @ 0x1403415B0 (MiLockStealUserVm.c)
 *     MiActOnPte @ 0x1403476D0 (MiActOnPte.c)
 *     MiGetWorkingSetInfoList @ 0x14034F6A8 (MiGetWorkingSetInfoList.c)
 *     MiCheckCommitReleaseFromVad @ 0x14052960C (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
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
