/*
 * XREFs of MiDeleteDeferredCloneDescriptors @ 0x1405545D0
 * Callers:
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
 *     MiDeleteCloneZombies @ 0x1403199AC (MiDeleteCloneZombies.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140296CC0 (RtlAvlRemoveNode.c)
 *     RtlpInterlockedFlushSList @ 0x1403FDDE0 (RtlpInterlockedFlushSList.c)
 */

unsigned __int64 *__fastcall MiDeleteDeferredCloneDescriptors(__int64 a1)
{
  unsigned __int64 *v2; // rsi
  PSLIST_ENTRY v3; // rdi
  unsigned __int64 *v4; // rbp
  unsigned __int64 *v5; // rbx

  v2 = 0LL;
  v3 = RtlpInterlockedFlushSList((PSLIST_HEADER)(*(_QWORD *)(a1 + 1680) + 368LL));
  if ( v3 )
  {
    v4 = (unsigned __int64 *)(a1 + 1264);
    do
    {
      v5 = (unsigned __int64 *)&v3[-5];
      v3 = v3->Next;
      RtlAvlRemoveNode(v4, v5);
      *v5 = (unsigned __int64)v2;
      v2 = v5;
    }
    while ( v3 );
  }
  return v2;
}
