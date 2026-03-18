/*
 * XREFs of MiEmptyWorkingSetHelper @ 0x14032D8D4
 * Callers:
 *     MiEmptyPte @ 0x14032D820 (MiEmptyPte.c)
 *     MiUpdateOldPteWorker @ 0x140537258 (MiUpdateOldPteWorker.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140247160 (MI_WSLE_LOG_ACCESS.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x1402B2F00 (MiFreeWsleList.c)
 *     MiWalkVaCheckCommon @ 0x14032DAC4 (MiWalkVaCheckCommon.c)
 */

__int64 __fastcall MiEmptyWorkingSetHelper(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  __int64 v10; // rbx
  BOOL v11; // r9d
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF

  v8 = (__int64)(a2 << 25) >> 16;
  v14 = MI_READ_PTE_LOCK_FREE(a2);
  v9 = v14;
  if ( MiPteInShadowRange((unsigned __int64)&v14)
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
  if ( dword_140C4E628 )
    MI_WSLE_LOG_ACCESS(a1, a2);
  MiInsertTbFlushEntry(a3, v8, 1LL, 0);
  if ( *(_DWORD *)(a3 + 12) == *(_DWORD *)(a3 + 8) )
    MiFreeWsleList(a1, a3, a4);
  return 1LL;
}
