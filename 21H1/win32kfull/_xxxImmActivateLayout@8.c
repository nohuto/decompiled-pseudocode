/*
 * XREFs of _xxxImmActivateLayout@8 @ 0xEC868
 * Callers:
 *     _EditionImmActivateLayout@8 @ 0xEC854 (_EditionImmActivateLayout@8.c)
 *     _xxxImmActivateAndUnloadThreadsLayout@20 @ 0x14F3AC (_xxxImmActivateAndUnloadThreadsLayout@20.c)
 *     _xxxImmActivateThreadsLayout@12 @ 0x14F6B9 (_xxxImmActivateThreadsLayout@12.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 */

void __fastcall xxxImmActivateLayout(int a1, int a2)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v6; // edx
  _DWORD v7[3]; // [esp+Ch] [ebp-Ch] BYREF

  v7[2] = 0;
  if ( *(_DWORD *)(a1 + 240) != a2 )
  {
    if ( *(_DWORD *)(a1 + 436) )
    {
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v6 = *(_DWORD *)(a1 + 436);
      v7[0] = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = v7;
      v7[1] = v6;
      HMLockObject(v6);
      xxxSendMessage(*(void **)(a1 + 436), 0x19u, *(_DWORD *)(a2 + 20));
      ThreadUnlock1();
    }
    HMAssignmentLock(a1, a2);
  }
}
