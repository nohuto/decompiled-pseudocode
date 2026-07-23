/*
 * XREFs of _RtlAbortRXact@4 @ 0x4B345550
 * Callers:
 *     _RtlApplyRXact@4 @ 0x4B345770 (_RtlApplyRXact@4.c)
 *     _RtlApplyRXactNoFlush@4 @ 0x4B345800 (_RtlApplyRXactNoFlush@4.c)
 *     _RtlInitializeRXact@12 @ 0x4B345820 (_RtlInitializeRXact@12.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

int __stdcall RtlAbortRXact(int a1)
{
  int result; // eax

  if ( !*(_DWORD *)(a1 + 12) )
    return -1073741540;
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)(a1 + 12));
  *(_DWORD *)(a1 + 12) = 0;
  result = 0;
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}
