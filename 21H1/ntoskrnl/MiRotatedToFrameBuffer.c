/*
 * XREFs of MiRotatedToFrameBuffer @ 0x140300408
 * Callers:
 *     MiRevertValidPte @ 0x14021C800 (MiRevertValidPte.c)
 *     MiGetPageProtection @ 0x14021F920 (MiGetPageProtection.c)
 *     MiActOnPte @ 0x140228A50 (MiActOnPte.c)
 *     MiDeleteVa @ 0x14029BBC0 (MiDeleteVa.c)
 *     MiProtectPrivateMemory @ 0x1402ADD80 (MiProtectPrivateMemory.c)
 *     NtUnlockVirtualMemory @ 0x1402AF520 (NtUnlockVirtualMemory.c)
 *     MiMakeVaRangeNoAccess @ 0x140319094 (MiMakeVaRangeNoAccess.c)
 *     MiGetWorkingSetInfoList @ 0x140347A3C (MiGetWorkingSetInfoList.c)
 *     MiLockStealUserVm @ 0x14034C738 (MiLockStealUserVm.c)
 *     MiCheckCommitReleaseFromVad @ 0x1405255EC (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 */

_BOOL8 __fastcall MiRotatedToFrameBuffer(unsigned __int64 a1)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rsi
  __int64 v6; // rdi
  _BOOL8 result; // rax
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = MI_READ_PTE_LOCK_FREE(a1);
  result = 0;
  if ( (v8 & 1) != 0 )
  {
    v2 = 6 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v8) >> 12) & 0xFFFFFFFFFLL);
    v5 = 8 * v2 - 0x58000000000LL;
    if ( ((*(_QWORD *)(8 * v2 - 0x57FFFFFFFD8LL) >> 50) & 1) == 0 )
      return 1;
    v6 = *(_QWORD *)(v5 + 8);
    if ( ((v6 | 0x8000000000000000uLL) != a1
       || ((*(_QWORD *)(v5 + 40) ^ ((unsigned __int64)MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12)) & 0xFFFFFFFFFLL) != 0)
      && (!(unsigned int)MI_PFN_IS_PROTO(v5, v3, v4) || (*(_QWORD *)(v5 + 40) & 0x1000000000LL) != 0 || v6 <= 0) )
    {
      return 1;
    }
  }
  return result;
}
