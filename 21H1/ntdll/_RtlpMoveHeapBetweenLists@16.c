/*
 * XREFs of _RtlpMoveHeapBetweenLists@16 @ 0x4B2A914A
 * Callers:
 *     _RtlDestroyHeap@4 @ 0x4B2AF870 (_RtlDestroyHeap@4.c)
 *     _RtlCreateHeap@24 @ 0x4B2C0F40 (_RtlCreateHeap@24.c)
 * Callees:
 *     _RtlpAddHeapToProtectedList@4 @ 0x4B2A91B0 (_RtlpAddHeapToProtectedList@4.c)
 *     _RtlpRemoveHeapFromProtectedList@4 @ 0x4B2A9206 (_RtlpRemoveHeapFromProtectedList@4.c)
 *     _RtlpRemoveHeapFromUnprotectedList@4 @ 0x4B2AFAAC (_RtlpRemoveHeapFromUnprotectedList@4.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlpAddHeapToUnprotectedList@4 @ 0x4B2E663D (_RtlpAddHeapToUnprotectedList@4.c)
 */

NTSTATUS __fastcall RtlpMoveHeapBetweenLists(int a1, int a2, NTSTATUS a3, int a4)
{
  int v6; // esi
  NTSTATUS result; // eax

  if ( !a4 )
    RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
  if ( a2 )
  {
    v6 = a2 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
        RtlpRemoveHeapFromProtectedList(a1);
    }
    else
    {
      RtlpRemoveHeapFromUnprotectedList(a1);
    }
  }
  result = a3;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      result = RtlpAddHeapToUnprotectedList(a1);
    }
    else
    {
      result = a3 - 2;
      if ( a3 == 2 )
        result = RtlpAddHeapToProtectedList(a1);
    }
  }
  if ( !a4 )
    return RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
  return result;
}
