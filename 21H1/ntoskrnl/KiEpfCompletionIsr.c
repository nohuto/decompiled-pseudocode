/*
 * XREFs of KiEpfCompletionIsr @ 0x14051E660
 * Callers:
 *     KiHvInterruptSubDispatch @ 0x1403FB7D0 (KiHvInterruptSubDispatch.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x14026DC70 (KiInsertQueueDpc.c)
 */

__int64 KiEpfCompletionIsr()
{
  __int64 result; // rax

  if ( KiEpfCompletionQueue )
  {
    result = *(_QWORD *)(KiEpfCompletionQueue + 8);
    if ( *(_QWORD *)KiEpfCompletionQueue != result )
    {
      _InterlockedIncrement(&dword_140C2B028);
      return KiInsertQueueDpc((ULONG_PTR)&KiEpfCompletionDpc, 0LL, 0LL, 0LL, 0);
    }
  }
  return result;
}
