/*
 * XREFs of _TppCallbackSendAndDestroyAlpcMessage@4 @ 0x4B2ABDD8
 * Callers:
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 *     _TpCallbackSendPendingAlpcMessage@4 @ 0x4B384650 (_TpCallbackSendPendingAlpcMessage@4.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _NtAlpcSendWaitReceivePort@32 @ 0x4B2F3240 (_NtAlpcSendWaitReceivePort@32.c)
 */

int __thiscall TppCallbackSendAndDestroyAlpcMessage(_DWORD *this)
{
  int v2; // esi

  v2 = NtAlpcSendWaitReceivePort(this[31], this[32], this[30], 0, 0, 0, 0, 0);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, this[30]);
  return v2;
}
