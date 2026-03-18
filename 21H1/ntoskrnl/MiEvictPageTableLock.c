/*
 * XREFs of MiEvictPageTableLock @ 0x1402F2ABC
 * Callers:
 *     MiTerminateWsle @ 0x14028D950 (MiTerminateWsle.c)
 *     MiDeleteVa @ 0x14029BBC0 (MiDeleteVa.c)
 *     MiDeleteNonPagedPoolPte @ 0x1402F2060 (MiDeleteNonPagedPoolPte.c)
 *     MiDeleteSystemPageTable @ 0x1402F2740 (MiDeleteSystemPageTable.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiGetLeafVa @ 0x140290520 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiGetUsedPtesHandle @ 0x14029EEF0 (MiGetUsedPtesHandle.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402F2CE8 (MiUnlockNestedPageTableWritePte.c)
 *     MiIsPoolPteInUse @ 0x1402F2EF4 (MiIsPoolPteInUse.c)
 *     RtlCompareMemoryUlong @ 0x1403FE660 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall MiEvictPageTableLock(__int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  __int64 v8; // r8
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx

  MiLockPageTableInternal(a1, a2, 0LL);
  if ( MiGetLeafVa(a2) > 0x7FFFFFFEFFFFLL )
  {
    v10 = *(_QWORD *)a2;
    if ( MiPteInShadowRange(a2)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v10 & 1) != 0
      && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v14 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
        v15 = v10 | 0x20;
        if ( (v14 & 0x20) == 0 )
          v15 = v10;
        v10 = v15;
        if ( (v14 & 0x42) != 0 )
          v10 = v15 | 0x42;
      }
    }
    if ( (unsigned __int16)*(_DWORD *)(48 * ((v10 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFE8LL) == 1
      && ((a4 & 1) == 0 || RtlCompareMemoryUlong((PVOID)((__int64)(a2 << 25) >> 16), 0x1000uLL, 0) == 4096) )
    {
      if ( (a4 & 2) == 0 )
        goto LABEL_3;
      v11 = (__int64)(a2 << 25) >> 16;
      while ( 1 )
      {
        v12 = MI_READ_PTE_LOCK_FREE(v11);
        if ( (unsigned int)MiIsPoolPteInUse(v12) )
          break;
        v11 += 8LL;
        if ( (v11 & 0xFFF) == 0 )
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
  MiUnlockPageTableInternal(a1, a2, v8);
  return 0LL;
}
