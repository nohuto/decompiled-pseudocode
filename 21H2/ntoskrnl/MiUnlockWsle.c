/*
 * XREFs of MiUnlockWsle @ 0x14026FC1C
 * Callers:
 *     MiUnlockVa @ 0x14026FB00 (MiUnlockVa.c)
 *     MmUnmapViewInSystemCache @ 0x140313AE0 (MmUnmapViewInSystemCache.c)
 *     MiTerminateWsle @ 0x140336DB0 (MiTerminateWsle.c)
 *     MiDeleteVa @ 0x140337A80 (MiDeleteVa.c)
 *     MiTerminateWsleCluster @ 0x14033AD20 (MiTerminateWsleCluster.c)
 * Callees:
 *     MiUnlockPageTableCharges @ 0x14026FD98 (MiUnlockPageTableCharges.c)
 *     MiGetEffectivePagePriorityThread @ 0x140270E84 (MiGetEffectivePagePriorityThread.c)
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 *     MiSetVaAgeList @ 0x14032D6B0 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiUnlockWsle(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rdx
  unsigned int EffectivePagePriorityThread; // eax
  unsigned __int8 v10; // dl
  __int64 v11; // r9
  __int64 result; // rax
  unsigned __int64 v13; // rax

  if ( (unsigned int)MI_PFN_IS_PROTO(a3) && (*(_DWORD *)(v6 + 16) & 0x400LL) != 0 && (*(_BYTE *)(a1 + 184) & 7) == 0 )
  {
    v7 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v6 + 40) >> 39) & 0x3FFLL));
    MiReturnCommit(v7, 1LL);
    _InterlockedDecrement64((volatile signed __int64 *)(v7 + 7616));
  }
  v8 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  LOBYTE(v8) = (v8 & 0x20) == 0;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(KeGetCurrentThread(), v8);
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
