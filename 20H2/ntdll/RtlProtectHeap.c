/*
 * XREFs of RtlProtectHeap @ 0x18000E0E0
 * Callers:
 *     LdrEnsureMrdataHeapExists @ 0x18000787C (LdrEnsureMrdataHeapExists.c)
 *     LdrProtectMrdataHeap @ 0x18000EED4 (LdrProtectMrdataHeap.c)
 *     RtlDeleteFunctionTable @ 0x1800679F0 (RtlDeleteFunctionTable.c)
 *     RtlAddFunctionTable @ 0x180067BD0 (RtlAddFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180067EC0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x180068410 (RtlInstallFunctionTableCallback.c)
 *     RtlpCallVectoredHandlers @ 0x180078A44 (RtlpCallVectoredHandlers.c)
 *     RtlSetProtectedPolicy @ 0x180080C30 (RtlSetProtectedPolicy.c)
 *     RtlpAddVectoredHandler @ 0x180081790 (RtlpAddVectoredHandler.c)
 *     RtlpRemoveVectoredHandler @ 0x180082190 (RtlpRemoveVectoredHandler.c)
 *     RtlGrowFunctionTable @ 0x1800E0E20 (RtlGrowFunctionTable.c)
 * Callees:
 *     RtlpProtectHeap @ 0x18000E1C0 (RtlpProtectHeap.c)
 *     RtlpMoveHeapBetweenLists @ 0x18000E2A8 (RtlpMoveHeapBetweenLists.c)
 *     RtlpGetHeapProtection @ 0x18000EE34 (RtlpGetHeapProtection.c)
 *     RtlpHpHeapValidateProtection @ 0x18000EE64 (RtlpHpHeapValidateProtection.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpHpHeapProtect @ 0x18010E5A4 (RtlpHpHeapProtect.c)
 */

void __cdecl RtlProtectHeap(PVOID HeapHandle, BOOLEAN MakeReadOnly)
{
  ULONG HeapProtection; // eax
  ULONG v5; // edi
  int v6; // eax
  int v7; // eax

  if ( *((_DWORD *)HeapHandle + 4) == -571548178 || (*((_DWORD *)HeapHandle + 29) & 0x1000000) == 0 )
  {
    RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
    if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
      HeapProtection = RtlpHpHeapValidateProtection(HeapHandle);
    else
      HeapProtection = RtlpGetHeapProtection(HeapHandle, 1LL);
    v5 = HeapProtection;
    if ( MakeReadOnly )
    {
      RtlpMoveHeapBetweenLists(HeapHandle, 1LL, 2LL);
      v6 = 2;
      if ( v5 == 64 )
        v6 = 32;
      v5 = v6;
    }
    if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
      v7 = RtlpHpHeapProtect(HeapHandle, v5);
    else
      v7 = RtlpProtectHeap(HeapHandle, v5);
    if ( v7 >= 0 && !MakeReadOnly )
      RtlpMoveHeapBetweenLists(HeapHandle, 2LL, 1LL);
    RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
  }
}
