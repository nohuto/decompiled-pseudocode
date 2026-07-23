/*
 * XREFs of _TppCallbackSendAndDestroyAlpcMessage@4 @ 0x4B2ABDD8
 * Callers:
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 *     _TpCallbackSendPendingAlpcMessage@4 @ 0x4B384650 (_TpCallbackSendPendingAlpcMessage@4.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _NtAlpcSendWaitReceivePort@32 @ 0x4B2F3240 (_NtAlpcSendWaitReceivePort@32.c)
 */

NTSTATUS __thiscall TppCallbackSendAndDestroyAlpcMessage(int this)
{
  NTSTATUS v2; // esi

  v2 = NtAlpcSendWaitReceivePort(
         *(HANDLE *)(this + 124),
         *(_DWORD *)(this + 128),
         *(PPORT_MESSAGE *)(this + 120),
         0,
         0,
         0,
         0,
         0);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)(this + 120));
  return v2;
}
