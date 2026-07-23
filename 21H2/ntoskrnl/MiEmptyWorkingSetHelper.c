/*
 * XREFs of MiEmptyWorkingSetHelper @ 0x140311284
 * Callers:
 *     MiEmptyPte @ 0x1403111D0 (MiEmptyPte.c)
 *     MiUpdateOldPteWorker @ 0x14053C968 (MiUpdateOldPteWorker.c)
 * Callees:
 *     MiWalkVaCheckCommon @ 0x140311474 (MiWalkVaCheckCommon.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140313DD0 (MI_WSLE_LOG_ACCESS.c)
 *     MiFreeWsleList @ 0x140332070 (MiFreeWsleList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiEmptyWorkingSetHelper(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  __int64 v10; // rbx
  BOOL v11; // r9d
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF

  v8 = a2 << 25 >> 16;
  v14 = MI_READ_PTE_LOCK_FREE(a2);
  v9 = v14;
  if ( (unsigned int)MiPteInShadowRange(&v14)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v14 >> 3) & 0x1FF)) & 0x20) != 0 )
        v9 |= 0x20uLL;
    }
  }
  v10 = 48 * ((v9 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v11 = v8 < 0xFFFFF68000000000uLL || v8 > 0xFFFFF6FFFFFFFFFFuLL;
  if ( !(unsigned int)MiWalkVaCheckCommon(a1, a2, v10, v11, (__int64)&v14)
    || *(_WORD *)(v10 + 32) > 1u && (*(_BYTE *)(a1 + 184) & 7) != 0 )
  {
    return 0LL;
  }
  if ( dword_140C4E868 )
    MI_WSLE_LOG_ACCESS(a1, a2);
  MiInsertTbFlushEntry(a3, v8, 1LL, 0LL);
  if ( *(_DWORD *)(a3 + 12) == *(_DWORD *)(a3 + 8) )
    MiFreeWsleList(a1, a3, a4);
  return 1LL;
}
