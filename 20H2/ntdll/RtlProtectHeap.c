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

void __fastcall RtlProtectHeap(_DWORD *a1, char a2)
{
  __int64 v4; // r8
  unsigned int HeapProtection; // eax
  unsigned int v6; // edi
  int v7; // eax
  int v8; // eax

  if ( a1[4] == -571548178 || (a1[29] & 0x1000000) == 0 )
  {
    RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
    if ( a1[4] == -571548178 )
      HeapProtection = RtlpHpHeapValidateProtection(a1, (a1[5] & 0x40000000) != 0 ? 64 : 4, v4);
    else
      HeapProtection = RtlpGetHeapProtection(a1, 1LL);
    v6 = HeapProtection;
    if ( a2 )
    {
      RtlpMoveHeapBetweenLists(a1, 1LL, 2LL);
      v7 = 2;
      if ( v6 == 64 )
        v7 = 32;
      v6 = v7;
    }
    if ( a1[4] == -571548178 )
      v8 = RtlpHpHeapProtect(a1, v6);
    else
      v8 = RtlpProtectHeap(a1, v6);
    if ( v8 >= 0 && !a2 )
      RtlpMoveHeapBetweenLists(a1, 2LL, 1LL);
    RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
  }
}
