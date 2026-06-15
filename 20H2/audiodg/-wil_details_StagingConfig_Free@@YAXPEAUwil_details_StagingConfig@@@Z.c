/*
 * XREFs of ?wil_details_StagingConfig_Free@@YAXPEAUwil_details_StagingConfig@@@Z @ 0x140028C10
 * Callers:
 *     ?wil_StagingConfig_RecordFeatureUsage@@YAJIIH@Z @ 0x140028788 (-wil_StagingConfig_RecordFeatureUsage@@YAJIIH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil_details_StagingConfig_Free(LPVOID *a1)
{
  HANDLE ProcessHeap; // rax

  if ( *((_DWORD *)a1 + 20) )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, a1[7]);
    a1[7] = 0LL;
    a1[3] = 0LL;
  }
}
