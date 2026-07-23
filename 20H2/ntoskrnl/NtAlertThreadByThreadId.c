/*
 * XREFs of NtAlertThreadByThreadId @ 0x14063B510
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     KeAlertThreadByThreadId @ 0x14023F1C0 (KeAlertThreadByThreadId.c)
 *     PsLookupThreadByThreadId @ 0x14063AEE0 (PsLookupThreadByThreadId.c)
 */

NTSTATUS __cdecl NtAlertThreadByThreadId(HANDLE ThreadId)
{
  struct _KTHREAD *CurrentThread; // rbx
  NTSTATUS v2; // edi
  NTSTATUS result; // eax
  _KPROCESS *Process; // rax
  struct _DMA_ADAPTER *v5; // rbx
  PETHREAD Thread; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  Thread = 0LL;
  result = PsLookupThreadByThreadId(ThreadId, &Thread);
  if ( result >= 0 )
  {
    Process = CurrentThread->Process;
    v5 = (struct _DMA_ADAPTER *)Thread;
    if ( Thread->Process == Process )
      KeAlertThreadByThreadId((__int64)Thread);
    else
      v2 = -1073741790;
    HalPutDmaAdapter(v5);
    return v2;
  }
  return result;
}
