/*
 * XREFs of DestroyEventEntry @ 0x18013E438
 * Callers:
 *     FlushEventEntryList @ 0x18013E5CC (FlushEventEntryList.c)
 *     InsertEventEntryInLookUpTable @ 0x18013E750 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  HANDLE ProcessHeap; // rax

  if ( a1 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, *(LPVOID *)(a1 + 16));
  }
}
