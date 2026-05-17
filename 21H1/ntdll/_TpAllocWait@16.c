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

int __stdcall TpAllocWait(_DWORD *a1, int a2, int a3, int a4)
{
  int Heap; // eax
  int v5; // esi
  int WaitCompletionPacket; // edi
  int v7; // ecx
  int v8; // ecx
  char v9; // dl
  _UNKNOWN *retaddr; // [esp+8h] [ebp+4h]

  if ( !a1 || !a2 || a4 && (*(_DWORD *)(a4 + 28) & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 1835008) | 8, 296);
  v5 = Heap;
  if ( !Heap )
    return -1073741801;
  *(_DWORD *)(Heap + 108) = retaddr;
  WaitCompletionPacket = ZwCreateWaitCompletionPacket(Heap + 228, 1, 0);
  if ( WaitCompletionPacket < 0
    || (WaitCompletionPacket = TppInitializeTimer(a3, a4, TppWaitpCleanupGroupMemberVFuncs, TppWaitpTaskVFuncs),
        WaitCompletionPacket < 0) )
  {
    if ( *(_DWORD *)(v5 + 228) )
      NtClose(*(HANDLE *)(v5 + 228));
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 1835008, v5);
  }
  else
  {
    v7 = *(_DWORD *)(v5 + 92);
    *(_DWORD *)(v5 + 280) = TppWaitCompletion;
    if ( v7 )
    {
      TppGetCurrentThreadNumaNode(v5 + 288);
      v8 = *(_DWORD *)(v5 + 284);
      v9 = *(_BYTE *)(v5 + 288);
    }
    else
    {
      *(_DWORD *)(v5 + 284) = 0;
      v8 = 0;
      *(_BYTE *)(v5 + 288) = 0;
      v9 = 0;
    }
    *(_DWORD *)(v5 + 268) = 0;
    *(_DWORD *)(v5 + 276) = v5 + 272;
    *(_DWORD *)(v5 + 272) = v5 + 272;
    *(_DWORD *)(v5 + 248) = TppDirectTaskVFuncs;
    *(_DWORD *)(v5 + 252) = v8;
    *(_BYTE *)(v5 + 256) = v9;
    *(_DWORD *)(v5 + 48) = a2;
    *a1 = v5;
  }
  return WaitCompletionPacket;
}
