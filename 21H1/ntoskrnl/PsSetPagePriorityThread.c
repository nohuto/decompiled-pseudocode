/*
 * XREFs of PsSetPagePriorityThread @ 0x140234D94
 * Callers:
 *     IoApplyPriorityInfoThread @ 0x140234CF0 (IoApplyPriorityInfoThread.c)
 *     CcCompleteAsyncRead @ 0x140234DF0 (CcCompleteAsyncRead.c)
 *     CcPerformReadAhead @ 0x1402BDB04 (CcPerformReadAhead.c)
 *     SmSetThreadPagePriority @ 0x14030A170 (SmSetThreadPagePriority.c)
 *     NtSetInformationThread @ 0x1405FBA80 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     MiInitSystem @ 0x140A4C4D4 (MiInitSystem.c)
 * Callees:
 *     EtwTracePriority @ 0x1405A22E4 (EtwTracePriority.c)
 */

__int64 __fastcall PsSetPagePriorityThread(__int64 a1, int a2)
{
  signed __int32 v2; // eax
  unsigned __int32 v3; // ebx
  unsigned int v4; // ebx

  v2 = *(_DWORD *)(a1 + 1296);
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1296), (a2 << 12) | v2 & 0xFFFF8FFF, v2);
  }
  while ( v2 != v3 );
  v4 = (v3 >> 12) & 7;
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(a1, 1331, v4, a2, 0LL);
  return v4;
}
