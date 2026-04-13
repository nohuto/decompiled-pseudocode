/*
 * XREFs of ?CloseHeapPointer@@YGXPAX@Z @ 0x100021F6
 * Callers:
 *     _TelIsOsInProcessorMode@4 @ 0x10003070 (_TelIsOsInProcessorMode@4.c)
 *     _TelGetRegionalSettingsValue@12 @ 0x10003210 (_TelGetRegionalSettingsValue@12.c)
 * Callees:
 *     <none>
 */

void __stdcall CloseHeapPointer(void *lpMem)
{
  HANDLE ProcessHeap; // eax

  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, lpMem);
}
