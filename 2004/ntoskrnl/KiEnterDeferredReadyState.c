/*
 * XREFs of KiEnterDeferredReadyState @ 0x140281520
 * Callers:
 *     KiSwapThread @ 0x14020C300 (KiSwapThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x14020CFA0 (KiSearchForNewThreadOnProcessor.c)
 *     KiReadyOutSwappedThreads @ 0x140281200 (KiReadyOutSwappedThreads.c)
 *     KiFastReadyThread @ 0x1402E4884 (KiFastReadyThread.c)
 *     KiSearchForNewThread @ 0x1402EB5B4 (KiSearchForNewThread.c)
 *     KiQueueReadyThread @ 0x1402EDF50 (KiQueueReadyThread.c)
 *     KiInsertDeferredReadyList @ 0x14032BAB8 (KiInsertDeferredReadyList.c)
 *     KiSetThreadSchedulingGroup @ 0x14034E548 (KiSetThreadSchedulingGroup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiEnterDeferredReadyState(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 388);
  if ( (_BYTE)result == 1 )
  {
    *(_DWORD *)(a1 + 116) |= 2u;
    *(_BYTE *)(a1 + 388) = 7;
  }
  else
  {
    if ( (_BYTE)result == 5 )
    {
      result = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 436));
      if ( *(_BYTE *)(a1 + 391) )
        *(_QWORD *)(a1 + 1000) += result;
      else
        *(_QWORD *)(a1 + 992) += result;
    }
    *(_BYTE *)(a1 + 388) = 7;
  }
  return result;
}
