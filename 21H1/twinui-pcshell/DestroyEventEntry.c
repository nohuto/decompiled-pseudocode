/*
 * XREFs of DestroyEventEntry @ 0x180119E18
 * Callers:
 *     FlushEventEntryList @ 0x180119FAC (FlushEventEntryList.c)
 *     InsertEventEntryInLookUpTable @ 0x18011A130 (InsertEventEntryInLookUpTable.c)
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
