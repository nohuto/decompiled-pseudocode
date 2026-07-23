/*
 * XREFs of TppCallbackSendAndDestroyAlpcMessage @ 0x1800549F0
 * Callers:
 *     TppWorkerThread @ 0x180052AD0 (TppWorkerThread.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x180111EF0 (TpCallbackSendPendingAlpcMessage.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     ZwAlpcSendWaitReceivePort @ 0x18009DF80 (ZwAlpcSendWaitReceivePort.c)
 */

__int64 __fastcall TppCallbackSendAndDestroyAlpcMessage(__int64 a1)
{
  unsigned __int32 v2; // ebx

  v2 = ZwAlpcSendWaitReceivePort(
         *(HANDLE *)(a1 + 216),
         *(_DWORD *)(a1 + 224),
         *(PPORT_MESSAGE *)(a1 + 208),
         0LL,
         0LL,
         0LL,
         0LL,
         0LL);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)(a1 + 208));
  return v2;
}
