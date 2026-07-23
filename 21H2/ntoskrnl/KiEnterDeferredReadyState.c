/*
 * XREFs of KiEnterDeferredReadyState @ 0x1402ECFD0
 * Callers:
 *     KiFastReadyThread @ 0x140266130 (KiFastReadyThread.c)
 *     KiSearchForNewThread @ 0x140278228 (KiSearchForNewThread.c)
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     KiInsertDeferredReadyList @ 0x14029B890 (KiInsertDeferredReadyList.c)
 *     KiSetThreadSchedulingGroup @ 0x14029D3A8 (KiSetThreadSchedulingGroup.c)
 *     KiReadyOutSwappedThreads @ 0x1402ECCB0 (KiReadyOutSwappedThreads.c)
 *     KiSwapThread @ 0x140351420 (KiSwapThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1403520C0 (KiSearchForNewThreadOnProcessor.c)
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
