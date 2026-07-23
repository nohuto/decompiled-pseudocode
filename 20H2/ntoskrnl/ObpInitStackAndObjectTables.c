/*
 * XREFs of ObpInitStackAndObjectTables @ 0x1408E11B0
 * Callers:
 *     ObpStartRuntimeStackTrace @ 0x1408E17F8 (ObpStartRuntimeStackTrace.c)
 *     ObpInitStackTrace @ 0x140A73A30 (ObpInitStackTrace.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     RtlpInterlockedPushEntrySList @ 0x140405300 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x140405340 (RtlpInterlockedFlushSList.c)
 *     memset @ 0x140411300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 ObpInitStackAndObjectTables()
{
  char *PoolWithTag; // rax
  char *v1; // rbx
  PVOID v2; // rax
  _WORD *v3; // rbx
  PVOID v4; // rax
  int v5; // ebx
  _SLIST_ENTRY *v6; // rax
  PSLIST_ENTRY v8; // rbx
  PSLIST_ENTRY v9; // rcx
  void *v10; // rcx

  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x8088uLL, 0x7452624Fu);
  ObpStackTable = PoolWithTag;
  v1 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x88uLL);
    memset(v1 + 136, 255, 0x7FFAuLL);
    v2 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20000uLL, 0x7452624Fu);
    v3 = ObpStackTable;
    *((_QWORD *)ObpStackTable + 1) = v2;
    if ( v2 )
    {
      memset(v2, 0, 0x20000uLL);
      v3[1] = 1024;
      v4 = ExAllocatePoolWithTag(NonPagedPoolNx, 0xC88uLL, 0x7452624Fu);
      ObpObjectTable = v4;
      if ( !v4 )
      {
LABEL_14:
        v10 = (void *)*((_QWORD *)ObpStackTable + 1);
        if ( v10 )
          ExFreePoolWithTag(v10, 0x7452624Fu);
        ExFreePoolWithTag(ObpStackTable, 0x7452624Fu);
        return 3221225495LL;
      }
      memset(v4, 0, 0xC88uLL);
      if ( ((unsigned __int8)&ObpWorkItemFreeList & 0xF) != 0 )
        RtlRaiseStatus(-2147483646);
      v5 = 0;
      ObpWorkItemFreeList = 0LL;
      while ( 1 )
      {
        v6 = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xB0uLL, 0x7452624Fu);
        if ( !v6 )
          break;
        RtlpInterlockedPushEntrySList(&ObpWorkItemFreeList, v6);
        if ( (unsigned int)++v5 >= 0x1F4 )
          return 0LL;
      }
      v8 = RtlpInterlockedFlushSList(&ObpWorkItemFreeList);
      while ( v8 )
      {
        v9 = v8;
        v8 = v8->Next;
        ExFreePoolWithTag(v9, 0x7452624Fu);
      }
    }
    if ( ObpObjectTable )
      ExFreePoolWithTag(ObpObjectTable, 0x7452624Fu);
    goto LABEL_14;
  }
  return 3221225495LL;
}
