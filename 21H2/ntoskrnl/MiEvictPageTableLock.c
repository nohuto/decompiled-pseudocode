/*
 * XREFs of MiEvictPageTableLock @ 0x140317370
 * Callers:
 *     MiDeleteNonPagedPoolPte @ 0x14021ADB0 (MiDeleteNonPagedPoolPte.c)
 *     MiDeleteSystemPageTable @ 0x140234FA0 (MiDeleteSystemPageTable.c)
 *     MiTerminateWsle @ 0x140341B00 (MiTerminateWsle.c)
 *     MiDeleteVa @ 0x1403427D0 (MiDeleteVa.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiUnlockNestedPageTableWritePte @ 0x14031759C (MiUnlockNestedPageTableWritePte.c)
 *     MiGetUsedPtesHandle @ 0x1403177B0 (MiGetUsedPtesHandle.c)
 *     MiIsPoolPteInUse @ 0x14031787C (MiIsPoolPteInUse.c)
 *     MiGetLeafVa @ 0x140337BB0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     RtlCompareMemoryUlong @ 0x140408410 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall MiEvictPageTableLock(__int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx

  MiLockPageTableInternal(a1, a2, 0);
  if ( (unsigned __int64)MiGetLeafVa(a2) > 0x7FFFFFFEFFFFLL )
  {
    v9 = *(_QWORD *)a2;
    if ( (unsigned int)MiPteInShadowRange(a2)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v9 & 1) != 0
      && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v13 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
        v14 = v9 | 0x20;
        if ( (v13 & 0x20) == 0 )
          v14 = v9;
        v9 = v14;
        if ( (v13 & 0x42) != 0 )
          v9 = v14 | 0x42;
      }
    }
    if ( (unsigned __int16)*(_DWORD *)(48 * ((v9 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFE8LL) == 1
      && ((a4 & 1) == 0 || RtlCompareMemoryUlong((PVOID)((__int64)(a2 << 25) >> 16), 0x1000uLL, 0) == 4096) )
    {
      if ( (a4 & 2) == 0 )
        goto LABEL_3;
      v10 = (__int64)(a2 << 25) >> 16;
      while ( 1 )
      {
        v11 = MI_READ_PTE_LOCK_FREE(v10);
        if ( (unsigned int)MiIsPoolPteInUse(v11) )
          break;
        v10 += 8LL;
        if ( (v10 & 0xFFF) == 0 )
          goto LABEL_3;
      }
    }
  }
  else if ( (*(_DWORD *)(MiGetUsedPtesHandle((__int64)(a2 << 25) >> 16 << 25 >> 16) + 16) & 0x3FF0000) == 0 )
  {
LABEL_3:
    MiUnlockNestedPageTableWritePte(a1, a2, a3, 0LL);
    return 1LL;
  }
  MiUnlockPageTableInternal(a1, a2);
  return 0LL;
}
