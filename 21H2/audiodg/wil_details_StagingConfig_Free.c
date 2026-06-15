/*
 * XREFs of wil_details_StagingConfig_Free @ 0x140028F74
 * Callers:
 *     wil_StagingConfig_RecordFeatureUsage @ 0x140028AEC (wil_StagingConfig_RecordFeatureUsage.c)
 * Callees:
 *     <none>
 */

void __fastcall wil_details_StagingConfig_Free(__int64 a1)
{
  HANDLE ProcessHeap; // rax

  if ( *(_DWORD *)(a1 + 80) )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, *(LPVOID *)(a1 + 56));
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
