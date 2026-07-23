/*
 * XREFs of _TppInitializeTimerSubQueue@12 @ 0x4B2B407F
 * Callers:
 *     _TppInitializeTimerQueue@8 @ 0x4B2B4037 (_TppInitializeTimerQueue@8.c)
 * Callees:
 *     _TppGetCurrentThreadNumaNode@12 @ 0x4B2B49C9 (_TppGetCurrentThreadNumaNode@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwAssociateWaitCompletionPacket@32 @ 0x4B2F3280 (_ZwAssociateWaitCompletionPacket@32.c)
 *     _ZwCreateTimer2@20 @ 0x4B2F35B0 (_ZwCreateTimer2@20.c)
 *     _ZwCreateWaitCompletionPacket@12 @ 0x4B2F3610 (_ZwCreateWaitCompletionPacket@12.c)
 */

NTSTATUS __fastcall TppInitializeTimerSubQueue(int a1, int a2, unsigned __int8 a3)
{
  HANDLE *v4; // ebx
  NTSTATUS result; // eax
  NTSTATUS WaitCompletionPacket; // edi
  _DWORD *v7; // esi
  char v8; // dl
  int v9; // ecx
  ULONG_PTR v10; // [esp-8h] [ebp-24h]
  BOOLEAN *v11; // [esp+0h] [ebp-1Ch]
  HANDLE *v12; // [esp+10h] [ebp-Ch]
  char v14; // [esp+1Bh] [ebp-1h] BYREF

  v4 = (HANDLE *)(a1 + 16);
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  result = ZwCreateTimer2((PHANDLE)(a1 + 16), 0, 0, 8u, 0x100002u);
  if ( result >= 0 )
  {
    v12 = (HANDLE *)(a1 + 20);
    WaitCompletionPacket = ZwCreateWaitCompletionPacket((PHANDLE)(a1 + 20), 1u, 0);
    if ( WaitCompletionPacket < 0 )
    {
      NtClose(*v4);
    }
    else
    {
      HIDWORD(v10) = &v14;
      v7 = (_DWORD *)(a1 + 24);
      LODWORD(v10) = a3;
      ZwAssociateWaitCompletionPacket(*v12, *(HANDLE *)(a2 + 40), *v4, v7, (PVOID)(a2 + 64), 0, v10, v11);
      v7[8] = TppTimerQueueExpiration;
      TppGetCurrentThreadNumaNode(v7 + 10);
      v8 = *((_BYTE *)v7 + 40);
      v7[5] = 0;
      v9 = v7[9];
      v7[7] = v7 + 6;
      v7[6] = v7 + 6;
      *v7 = TppDirectTaskVFuncs;
      v7[1] = v9;
      *((_BYTE *)v7 + 8) = v8;
    }
    return WaitCompletionPacket;
  }
  return result;
}
