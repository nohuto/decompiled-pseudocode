/*
 * XREFs of MiEvictPageTableLock @ 0x14032E85C
 * Callers:
 *     MiTerminateWsle @ 0x140234900 (MiTerminateWsle.c)
 *     MiDeleteVa @ 0x140242B90 (MiDeleteVa.c)
 *     MiDeleteNonPagedPoolPte @ 0x14032DE00 (MiDeleteNonPagedPoolPte.c)
 *     MiDeleteSystemPageTable @ 0x14032E4E0 (MiDeleteSystemPageTable.c)
 * Callees:
 *     MiGetLeafVa @ 0x1402374D0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiGetUsedPtesHandle @ 0x140245EC0 (MiGetUsedPtesHandle.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiLockPageTableInternal @ 0x1402A0AD0 (MiLockPageTableInternal.c)
 *     MiUnlockNestedPageTableWritePte @ 0x14032EA88 (MiUnlockNestedPageTableWritePte.c)
 *     MiIsPoolPteInUse @ 0x14032EC94 (MiIsPoolPteInUse.c)
 *     RtlCompareMemoryUlong @ 0x1403FF8F0 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall MiEvictPageTableLock(__int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx

  MiLockPageTableInternal(a1, a2, 0LL);
  if ( MiGetLeafVa(a2) > 0x7FFFFFFEFFFFLL )
  {
    v9 = *(_QWORD *)a2;
    if ( MiPteInShadowRange(a2)
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
