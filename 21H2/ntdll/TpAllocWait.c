/*
 * XREFs of TpAllocWait @ 0x18000DF40
 * Callers:
 *     RtlRegisterWait @ 0x18000BE70 (RtlRegisterWait.c)
 *     RtlpWnfRegisterTpNotification @ 0x18007D484 (RtlpWnfRegisterTpNotification.c)
 *     EtwpRegisterTpNotificationOnce @ 0x18007E400 (EtwpRegisterTpNotificationOnce.c)
 * Callees:
 *     TppInitializeTimer @ 0x180010960 (TppInitializeTimer.c)
 *     TppGetCurrentThreadNumaNode @ 0x180012338 (TppGetCurrentThreadNumaNode.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     NtClose @ 0x18009D820 (NtClose.c)
 *     NtCreateWaitCompletionPacket @ 0x18009EF70 (NtCreateWaitCompletionPacket.c)
 *     TppRaiseInvalidParameter @ 0x1801124DC (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAllocWait(__int64 *a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // esi
  __int64 Heap; // rbx
  HANDLE *v9; // r14
  int v10; // edx
  int WaitCompletionPacket; // edi
  __int64 v12; // rcx
  int v13; // ecx
  char v14; // dl
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a4;
  if ( !a1 || !a2 || a4 && (*(_DWORD *)(a4 + 56) & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return 3221225485LL;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 1835008) | 8u, 472LL);
    if ( Heap )
    {
      v9 = (HANDLE *)(Heap + 368);
      *(_QWORD *)(Heap + 176) = retaddr;
      WaitCompletionPacket = NtCreateWaitCompletionPacket(Heap + 368, 1LL);
      if ( WaitCompletionPacket < 0
        || (LOBYTE(v10) = 1,
            WaitCompletionPacket = TppInitializeTimer(
                                     Heap,
                                     v10,
                                     a3,
                                     v4,
                                     (__int64)TppWaitpCleanupGroupMemberVFuncs,
                                     (__int64)TppWaitpTaskVFuncs),
            WaitCompletionPacket < 0) )
      {
        if ( *v9 )
          NtClose(*v9);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 1835008), Heap);
      }
      else
      {
        v12 = *(_QWORD *)(Heap + 144);
        *(_QWORD *)(Heap + 448) = TppWaitCompletion;
        if ( v12 )
        {
          TppGetCurrentThreadNumaNode(v12, Heap + 456, Heap + 460);
          v13 = *(_DWORD *)(Heap + 456);
          v14 = *(_BYTE *)(Heap + 460);
        }
        else
        {
          *(_DWORD *)(Heap + 456) = 0;
          v13 = 0;
          *(_BYTE *)(Heap + 460) = 0;
          v14 = 0;
        }
        *(_QWORD *)(Heap + 424) = 0LL;
        *(_QWORD *)(Heap + 440) = Heap + 432;
        *(_QWORD *)(Heap + 432) = Heap + 432;
        *(_QWORD *)(Heap + 392) = TppDirectTaskVFuncs;
        *(_DWORD *)(Heap + 400) = v13;
        *(_BYTE *)(Heap + 404) = v14;
        *(_QWORD *)(Heap + 80) = a2;
        *a1 = Heap;
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
    return (unsigned int)WaitCompletionPacket;
  }
}
