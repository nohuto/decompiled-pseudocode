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

int __fastcall TppInitializeTimerSubQueue(_DWORD *a1, int a2, unsigned __int8 a3)
{
  HANDLE *v4; // ebx
  int result; // eax
  int WaitCompletionPacket; // edi
  _DWORD *v7; // esi
  char v8; // dl
  int v9; // ecx
  _DWORD *v10; // [esp+10h] [ebp-Ch]
  char v12; // [esp+1Bh] [ebp-1h] BYREF

  v4 = (HANDLE *)(a1 + 4);
  *a1 = 0;
  a1[1] = 0;
  a1[3] = 0;
  a1[2] = 0;
  result = ZwCreateTimer2(a1 + 4, 0, 0, 8, 1048578);
  if ( result >= 0 )
  {
    v10 = a1 + 5;
    WaitCompletionPacket = ZwCreateWaitCompletionPacket(a1 + 5, 1, 0);
    if ( WaitCompletionPacket < 0 )
    {
      NtClose(*v4);
    }
    else
    {
      v7 = a1 + 6;
      ZwAssociateWaitCompletionPacket(*v10, *(_DWORD *)(a2 + 40), *v4, v7, a2 + 64, 0, a3, &v12);
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
