/*
 * XREFs of KiEnterDeferredReadyState @ 0x140244D40
 * Callers:
 *     KiReadyOutSwappedThreads @ 0x140244A20 (KiReadyOutSwappedThreads.c)
 *     KiSwapThread @ 0x140265350 (KiSwapThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140265FF0 (KiSearchForNewThreadOnProcessor.c)
 *     KiFastReadyThread @ 0x1403299AC (KiFastReadyThread.c)
 *     KiSearchForNewThread @ 0x1403306F4 (KiSearchForNewThread.c)
 *     KiQueueReadyThread @ 0x140333090 (KiQueueReadyThread.c)
 *     KiInsertDeferredReadyList @ 0x140337C30 (KiInsertDeferredReadyList.c)
 *     KiSetThreadSchedulingGroup @ 0x14035B1E8 (KiSetThreadSchedulingGroup.c)
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
