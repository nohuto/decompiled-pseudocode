/*
 * XREFs of MiFreeClonePool @ 0x1405BAEEC
 * Callers:
 *     MiProcessDereferenceList @ 0x140393EC0 (MiProcessDereferenceList.c)
 *     MiDereferenceSegmentThread @ 0x1403CBBF0 (MiDereferenceSegmentThread.c)
 *     MiDeletePartitionResources @ 0x1405BDFF8 (MiDeletePartitionResources.c)
 * Callees:
 *     MiUnlockPagedAddress @ 0x14025D494 (MiUnlockPagedAddress.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY __fastcall MiFreeClonePool(union _SLIST_HEADER *a1)
{
  union _SLIST_HEADER *v1; // rbp
  __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  PSLIST_ENTRY result; // rax
  PSLIST_ENTRY v5; // rbx

  v1 = a1 + 125;
  while ( 1 )
  {
    result = RtlpInterlockedPopEntrySList(v1);
    v5 = result;
    if ( !result )
      break;
    v2 = *((_QWORD *)&result[1].Next + 1);
    if ( v2 )
    {
      v3 = (unsigned __int64)result;
      do
      {
        MiUnlockPagedAddress(v3);
        v3 += 4096LL;
        --v2;
      }
      while ( v2 );
    }
    ExFreePoolWithTag(v5, 0);
  }
  return result;
}
