/*
 * XREFs of MiEvictPageTableLock @ 0x14030C620
 * Callers:
 *     MiDeleteNonPagedPoolPte @ 0x1402964D0 (MiDeleteNonPagedPoolPte.c)
 *     MiDeleteSystemPageTable @ 0x1402B6DC0 (MiDeleteSystemPageTable.c)
 *     MiTerminateWsle @ 0x140336DB0 (MiTerminateWsle.c)
 *     MiDeleteVa @ 0x140337A80 (MiDeleteVa.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAF0 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiUnlockNestedPageTableWritePte @ 0x14030C84C (MiUnlockNestedPageTableWritePte.c)
 *     MiGetUsedPtesHandle @ 0x14030CA60 (MiGetUsedPtesHandle.c)
 *     MiIsPoolPteInUse @ 0x14030CB2C (MiIsPoolPteInUse.c)
 *     MiGetLeafVa @ 0x14032CE60 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     RtlCompareMemoryUlong @ 0x140408230 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall MiEvictPageTableLock(__int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  unsigned __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx

  MiLockPageTableInternal(a1, a2, 0LL);
  if ( (unsigned __int64)MiGetLeafVa(a2, v8, v9, v10) > 0x7FFFFFFEFFFFLL )
  {
    v13 = *(_QWORD *)a2;
    if ( (unsigned int)MiPteInShadowRange(a2, v11)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v13 & 1) != 0
      && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v17 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
        v18 = v13 | 0x20;
        if ( (v17 & 0x20) == 0 )
          v18 = v13;
        v13 = v18;
        if ( (v17 & 0x42) != 0 )
          v13 = v18 | 0x42;
      }
    }
    if ( (unsigned __int16)*(_DWORD *)(48 * ((v13 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFE8LL) == 1
      && ((a4 & 1) == 0 || RtlCompareMemoryUlong((PVOID)((__int64)(a2 << 25) >> 16), 0x1000uLL, 0) == 4096) )
    {
      if ( (a4 & 2) == 0 )
        goto LABEL_3;
      v14 = (__int64)(a2 << 25) >> 16;
      while ( 1 )
      {
        v15 = MI_READ_PTE_LOCK_FREE(v14);
        if ( (unsigned int)MiIsPoolPteInUse(v15) )
          break;
        v14 += 8LL;
        if ( (v14 & 0xFFF) == 0 )
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
