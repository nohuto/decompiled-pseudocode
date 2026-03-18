/*
 * XREFs of MiUnlockWsle @ 0x1402B6FC0
 * Callers:
 *     MiTerminateWsle @ 0x14028D950 (MiTerminateWsle.c)
 *     MiTerminateWsleCluster @ 0x14029AE10 (MiTerminateWsleCluster.c)
 *     MiDeleteVa @ 0x14029BBC0 (MiDeleteVa.c)
 *     MmUnmapViewInSystemCache @ 0x1402A0380 (MmUnmapViewInSystemCache.c)
 *     MiUnlockVa @ 0x14030B15C (MiUnlockVa.c)
 * Callees:
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiSetVaAgeList @ 0x140290D70 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402B3FC0 (MiGetEffectivePagePriorityThread.c)
 *     MiUnlockPageTableCharges @ 0x1402B713C (MiUnlockPageTableCharges.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiUnlockWsle(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 v7; // rbx
  unsigned int EffectivePagePriorityThread; // eax
  unsigned __int8 v9; // dl
  unsigned __int8 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 result; // rax
  unsigned __int64 v14; // rax

  if ( (unsigned int)MI_PFN_IS_PROTO(a3, a2, a3)
    && (*(_DWORD *)(v6 + 16) & 0x400LL) != 0
    && (*(_BYTE *)(a1 + 184) & 7) == 0 )
  {
    v7 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v6 + 40) >> 39) & 0x3FFLL));
    MiReturnCommit(v7, 1LL);
    _InterlockedDecrement64((volatile signed __int64 *)(v7 + 7616));
  }
  MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)KeGetCurrentThread());
  v10 = v9;
  if ( EffectivePagePriorityThread < 5 )
    v10 = 7;
  MiSetVaAgeList(a1, a2, 1u, v10);
  result = 0xFFFF800000000000uLL;
  if ( a2 < 0xFFFF800000000000uLL )
  {
    if ( (unsigned int)MI_PFN_IS_PROTO(a3, v11, v12) )
      MiUnlockPageTableCharges(48 * (*(_QWORD *)(a3 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    v14 = MI_READ_PTE_LOCK_FREE(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    return MiUnlockPageTableCharges(48 * ((v14 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  }
  return result;
}
