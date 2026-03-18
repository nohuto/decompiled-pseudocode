/*
 * XREFs of KiEpfCompletionIsr @ 0x140522680
 * Callers:
 *     KiHvInterruptSubDispatch @ 0x140402750 (KiHvInterruptSubDispatch.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x14027F690 (KiInsertQueueDpc.c)
 */

__int64 KiEpfCompletionIsr()
{
  __int64 result; // rax

  if ( KiEpfCompletionQueue )
  {
    result = *(_QWORD *)(KiEpfCompletionQueue + 8);
    if ( *(_QWORD *)KiEpfCompletionQueue != result )
    {
      _InterlockedIncrement(&dword_140C2AEE8);
      return KiInsertQueueDpc((ULONG_PTR)&KiEpfCompletionDpc, 0LL, 0LL, 0LL, 0);
    }
  }
  return result;
}
