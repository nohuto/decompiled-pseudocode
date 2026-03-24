/*
 * XREFs of KiEnterDeferredReadyState @ 0x140248780
 * Callers:
 *     KiReadyOutSwappedThreads @ 0x140248460 (KiReadyOutSwappedThreads.c)
 *     KiSearchForNewThread @ 0x140256CB8 (KiSearchForNewThread.c)
 *     KiQueueReadyThread @ 0x1402593B0 (KiQueueReadyThread.c)
 *     KiFastReadyThread @ 0x140278190 (KiFastReadyThread.c)
 *     KiInsertDeferredReadyList @ 0x1402EA540 (KiInsertDeferredReadyList.c)
 *     KiSetThreadSchedulingGroup @ 0x1402EC058 (KiSetThreadSchedulingGroup.c)
 *     KiSwapThread @ 0x1403466D0 (KiSwapThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140347370 (KiSearchForNewThreadOnProcessor.c)
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
