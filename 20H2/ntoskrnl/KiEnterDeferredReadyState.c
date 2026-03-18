/*
 * XREFs of KiEnterDeferredReadyState @ 0x14028D730
 * Callers:
 *     KiSwapThread @ 0x14021C4C0 (KiSwapThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x14021D160 (KiSearchForNewThreadOnProcessor.c)
 *     KiInsertDeferredReadyList @ 0x14028D3E0 (KiInsertDeferredReadyList.c)
 *     KiReadyOutSwappedThreads @ 0x14028D410 (KiReadyOutSwappedThreads.c)
 *     KiFastReadyThread @ 0x1402D80A0 (KiFastReadyThread.c)
 *     KiSearchForNewThread @ 0x1402D9CEC (KiSearchForNewThread.c)
 *     KiQueueReadyThread @ 0x1402DC4D0 (KiQueueReadyThread.c)
 *     KiSetThreadSchedulingGroup @ 0x14035F01C (KiSetThreadSchedulingGroup.c)
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
