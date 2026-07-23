/*
 * XREFs of NtAlertThreadByThreadId @ 0x140666720
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeAlertThreadByThreadId @ 0x14027D880 (KeAlertThreadByThreadId.c)
 *     PsLookupThreadByThreadId @ 0x140666140 (PsLookupThreadByThreadId.c)
 */

NTSTATUS __cdecl NtAlertThreadByThreadId(HANDLE ThreadId)
{
  struct _KTHREAD *CurrentThread; // rbx
  NTSTATUS v2; // edi
  NTSTATUS result; // eax
  __int64 v4; // rdx
  _KPROCESS *Process; // rax
  struct _DMA_ADAPTER *v6; // rbx
  PETHREAD Thread; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  Thread = 0LL;
  result = PsLookupThreadByThreadId(ThreadId, &Thread);
  if ( result >= 0 )
  {
    Process = CurrentThread->Process;
    v6 = (struct _DMA_ADAPTER *)Thread;
    if ( Thread->Process == Process )
      KeAlertThreadByThreadId((__int64)Thread, v4);
    else
      v2 = -1073741790;
    HalPutDmaAdapter(v6);
    return v2;
  }
  return result;
}
