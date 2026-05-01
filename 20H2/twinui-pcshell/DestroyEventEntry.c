/*
 * XREFs of DestroyEventEntry @ 0x18013E2F8
 * Callers:
 *     FlushEventEntryList @ 0x18013E48C (FlushEventEntryList.c)
 *     InsertEventEntryInLookUpTable @ 0x18013E610 (InsertEventEntryInLookUpTable.c)
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
