/*
 * XREFs of KiEpfCompletionIsr @ 0x14045B8A0
 * Callers:
 *     KiHvInterruptSubDispatch @ 0x1404270A0 (KiHvInterruptSubDispatch.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140345190 (KiInsertQueueDpc.c)
 */

__int64 KiEpfCompletionIsr()
{
  __int64 result; // rax

  if ( KiEpfCompletionQueue )
  {
    result = *(_QWORD *)(KiEpfCompletionQueue + 8);
    if ( *(_QWORD *)KiEpfCompletionQueue != result )
    {
      _InterlockedIncrement(&dword_140C2A8A8);
      return KiInsertQueueDpc((ULONG_PTR)&KiEpfCompletionDpc, 0LL, 0LL, 0LL, 0);
    }
  }
  return result;
}
