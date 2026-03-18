/*
 * XREFs of MiUnlockWsle @ 0x14025DF90
 * Callers:
 *     MiTerminateWsle @ 0x140234900 (MiTerminateWsle.c)
 *     MiTerminateWsleCluster @ 0x140241DE0 (MiTerminateWsleCluster.c)
 *     MiDeleteVa @ 0x140242B90 (MiDeleteVa.c)
 *     MmUnmapViewInSystemCache @ 0x140247350 (MmUnmapViewInSystemCache.c)
 *     MiUnlockVa @ 0x1403479AC (MiUnlockVa.c)
 * Callees:
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiSetVaAgeList @ 0x140237D20 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetEffectivePagePriorityThread @ 0x14025AF90 (MiGetEffectivePagePriorityThread.c)
 *     MiUnlockPageTableCharges @ 0x14025E10C (MiUnlockPageTableCharges.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiUnlockWsle(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 v7; // rbx
  unsigned int EffectivePagePriorityThread; // eax
  unsigned __int8 v9; // dl
  unsigned __int8 v10; // r9
  __int64 result; // rax
  unsigned __int64 v12; // rax

  if ( (unsigned int)MI_PFN_IS_PROTO(a3) && (*(_DWORD *)(v6 + 16) & 0x400LL) != 0 && (*(_BYTE *)(a1 + 184) & 7) == 0 )
  {
    v7 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v6 + 40) >> 39) & 0x3FFLL));
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
    if ( (unsigned int)MI_PFN_IS_PROTO(a3) )
      MiUnlockPageTableCharges(48 * (*(_QWORD *)(a3 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    v12 = MI_READ_PTE_LOCK_FREE(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    return MiUnlockPageTableCharges(48 * ((v12 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  }
  return result;
}
