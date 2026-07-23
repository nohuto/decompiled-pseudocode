/*
 * XREFs of _TpAllocWait@16 @ 0x4B2B4140
 * Callers:
 *     _RtlpWnfRegisterTpNotification@0 @ 0x4B2AE96C (_RtlpWnfRegisterTpNotification@0.c)
 *     _EtwpRegisterTpNotificationOnce@12 @ 0x4B2B1C90 (_EtwpRegisterTpNotificationOnce@12.c)
 *     _RtlRegisterWait@24 @ 0x4B2B2020 (_RtlRegisterWait@24.c)
 * Callees:
 *     _TppInitializeTimer@24 @ 0x4B2B4877 (_TppInitializeTimer@24.c)
 *     _TppGetCurrentThreadNumaNode@12 @ 0x4B2B49C9 (_TppGetCurrentThreadNumaNode@12.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwCreateWaitCompletionPacket@12 @ 0x4B2F3610 (_ZwCreateWaitCompletionPacket@12.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

NTSTATUS __cdecl TpAllocWait(
        PTP_WAIT *WaitReturn,
        PTP_WAIT_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  int v4; // edi
  HANDLE *Heap; // eax
  HANDLE *v6; // esi
  int WaitCompletionPacket; // edi
  HANDLE v8; // ecx
  HANDLE v9; // ecx
  char v10; // dl
  SIZE_T v12; // [esp-Ch] [ebp-10h]
  void *retaddr; // [esp+8h] [ebp+4h]

  if ( !WaitReturn
    || !Callback
    || CallbackEnviron && (CallbackEnviron->u.Flags & 0xFFFFFFFC) != 0
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
  }
  HIDWORD(v12) = v4;
  LODWORD(v12) = 296;
  Heap = (HANDLE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 1835008) | 8, v12);
  v6 = Heap;
  if ( !Heap )
    return -1073741801;
  Heap[27] = retaddr;
  WaitCompletionPacket = ZwCreateWaitCompletionPacket(Heap + 57, 1u, 0);
  if ( WaitCompletionPacket < 0
    || (WaitCompletionPacket = TppInitializeTimer(
                                 Context,
                                 CallbackEnviron,
                                 &TppWaitpCleanupGroupMemberVFuncs,
                                 &TppWaitpTaskVFuncs),
        WaitCompletionPacket < 0) )
  {
    if ( v6[57] )
      NtClose(v6[57]);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 1835008, v6);
  }
  else
  {
    v8 = v6[23];
    v6[70] = TppWaitCompletion;
    if ( v8 )
    {
      TppGetCurrentThreadNumaNode(v6 + 72);
      v9 = v6[71];
      v10 = *((_BYTE *)v6 + 288);
    }
    else
    {
      v6[71] = 0;
      v9 = 0;
      *((_BYTE *)v6 + 288) = 0;
      v10 = 0;
    }
    v6[67] = 0;
    v6[69] = v6 + 68;
    v6[68] = v6 + 68;
    v6[62] = TppDirectTaskVFuncs;
    v6[63] = v9;
    *((_BYTE *)v6 + 256) = v10;
    v6[12] = Callback;
    *WaitReturn = (PTP_WAIT)v6;
  }
  return WaitCompletionPacket;
}
