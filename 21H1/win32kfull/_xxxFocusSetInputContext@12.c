/*
 * XREFs of _xxxFocusSetInputContext@12 @ 0x184BE
 * Callers:
 *     ?xxxDeactivate@@YGXPAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x17292 (-xxxDeactivate@@YGXPAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x18278 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     ?CancelInputState@@YGXPAUtagTHREADINFO@@K@Z @ 0x14CC2B (-CancelInputState@@YGXPAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     ?QueueNotifyTransformableMessage@@YGXPAUtagWND@@IIJHH@Z @ 0x8136E (-QueueNotifyTransformableMessage@@YGXPAUtagWND@@IIJHH@Z.c)
 */

__int16 __userpurge xxxFocusSetInputContext@<ax>(int a1@<edx>, unsigned int *a2@<ecx>, int a3@<edi>, int a4)
{
  unsigned int v6; // eax
  int v7; // edx
  int v8; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  unsigned int v11; // eax
  int v14; // [esp+0h] [ebp-14h]
  _DWORD v15[3]; // [esp+8h] [ebp-Ch] BYREF

  v15[2] = 0;
  v6 = a2[19];
  v7 = *(_DWORD *)(v6 + 4);
  if ( (*(_BYTE *)(v7 + 10) & 1) == 0 )
  {
    LOWORD(v6) = *(_WORD *)v7;
    if ( *(_WORD *)v7 != *(_WORD *)(_gpsi + 498) )
    {
      v6 = a2[2];
      v8 = *(_DWORD *)(v6 + 436);
      if ( v8 )
      {
        if ( (*(_BYTE *)(v6 + 264) & 1) == 0 )
        {
          CurrentThread = KeGetCurrentThread();
          ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
          v15[0] = *(_DWORD *)(ThreadWin32Thread + 228);
          *(_DWORD *)(ThreadWin32Thread + 228) = v15;
          v15[1] = v8;
          HMLockObject(v8);
          v11 = *a2;
          if ( a4 )
            QueueNotifyTransformableMessage((struct tagWND *)(24 - (a1 != 0)), v11, 0, 0, a3, v14);
          else
            xxxSendMessage(24 - (a1 != 0), v11);
          LOWORD(v6) = ThreadUnlock1();
        }
      }
    }
  }
  return v6;
}
