/*
 * XREFs of TppInitializeTimerSubQueue @ 0x180061DA4
 * Callers:
 *     TppInitializeTimerQueue @ 0x180061D30 (TppInitializeTimerQueue.c)
 * Callees:
 *     TppGetCurrentThreadNumaNode @ 0x180012338 (TppGetCurrentThreadNumaNode.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     ZwAssociateWaitCompletionPacket @ 0x18009E2A0 (ZwAssociateWaitCompletionPacket.c)
 *     NtCreateTimer2 @ 0x18009E900 (NtCreateTimer2.c)
 *     NtCreateWaitCompletionPacket @ 0x18009E9C0 (NtCreateWaitCompletionPacket.c)
 */

__int64 __fastcall TppInitializeTimerSubQueue(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  HANDLE *v3; // rsi
  __int64 v6; // r15
  __int64 result; // rax
  int WaitCompletionPacket; // edi
  char v9; // dl
  int v10; // ecx
  char v11; // [rsp+60h] [rbp+8h] BYREF

  *(_QWORD *)a1 = 0LL;
  v3 = (HANDLE *)(a1 + 24);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v6 = a3;
  result = NtCreateTimer2(a1 + 24, 0LL, 0LL, 8LL, 1048578);
  if ( (int)result >= 0 )
  {
    WaitCompletionPacket = NtCreateWaitCompletionPacket(a1 + 32, 1LL);
    if ( WaitCompletionPacket < 0 )
    {
      NtClose(*v3);
    }
    else
    {
      ZwAssociateWaitCompletionPacket(*(_QWORD *)(a1 + 32), *(_QWORD *)(a2 + 64), *v3, a1 + 40, a2 + 112, 0, v6, &v11);
      *(_QWORD *)(a1 + 96) = TppTimerQueueExpiration;
      TppGetCurrentThreadNumaNode(a2, (_DWORD *)(a1 + 104), (_BYTE *)(a1 + 108));
      *(_QWORD *)(a1 + 72) = 0LL;
      v9 = *(_BYTE *)(a1 + 108);
      v10 = *(_DWORD *)(a1 + 104);
      *(_QWORD *)(a1 + 88) = a1 + 80;
      *(_QWORD *)(a1 + 80) = a1 + 80;
      *(_QWORD *)(a1 + 40) = TppDirectTaskVFuncs;
      *(_DWORD *)(a1 + 48) = v10;
      *(_BYTE *)(a1 + 52) = v9;
    }
    return (unsigned int)WaitCompletionPacket;
  }
  return result;
}
