/*
 * XREFs of MiUnlockWsle @ 0x14025DBBC
 * Callers:
 *     MiUnlockVa @ 0x14025DAA0 (MiUnlockVa.c)
 *     MmUnmapViewInSystemCache @ 0x14031E830 (MmUnmapViewInSystemCache.c)
 *     MiTerminateWsle @ 0x140341B00 (MiTerminateWsle.c)
 *     MiDeleteVa @ 0x1403427D0 (MiDeleteVa.c)
 *     MiTerminateWsleCluster @ 0x140345A70 (MiTerminateWsleCluster.c)
 * Callees:
 *     MiUnlockPageTableCharges @ 0x14025DD38 (MiUnlockPageTableCharges.c)
 *     MiGetEffectivePagePriorityThread @ 0x14025EE24 (MiGetEffectivePagePriorityThread.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiSetVaAgeList @ 0x140338400 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiUnlockWsle(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  unsigned int EffectivePagePriorityThread; // eax
  unsigned __int8 v10; // dl
  __int64 v11; // r9
  __int64 result; // rax
  unsigned __int64 v13; // rax

  if ( (unsigned int)MI_PFN_IS_PROTO(a3) && (*(_DWORD *)(v6 + 16) & 0x400LL) != 0 && (*(_BYTE *)(a1 + 184) & 7) == 0 )
  {
    v8 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v6 + 40) >> 39) & 0x3FFLL));
    MiReturnCommit(v8, 1LL, v6, v7);
    _InterlockedDecrement64((volatile signed __int64 *)(v8 + 7616));
  }
  MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(KeGetCurrentThread());
  v11 = v10;
  if ( EffectivePagePriorityThread < 5 )
    v11 = 7LL;
  MiSetVaAgeList(a1, a2, 1LL, v11);
  result = 0xFFFF800000000000uLL;
  if ( a2 < 0xFFFF800000000000uLL )
  {
    if ( (unsigned int)MI_PFN_IS_PROTO(a3) )
      MiUnlockPageTableCharges(48 * (*(_QWORD *)(a3 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    v13 = MI_READ_PTE_LOCK_FREE(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    return MiUnlockPageTableCharges(48 * ((v13 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  }
  return result;
}
