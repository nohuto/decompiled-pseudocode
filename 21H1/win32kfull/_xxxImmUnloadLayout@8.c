/*
 * XREFs of _xxxImmUnloadLayout@8 @ 0x14F941
 * Callers:
 *     _xxxImmUnloadThreadsLayout@16 @ 0xE72DE (_xxxImmUnloadThreadsLayout@16.c)
 *     _xxxImmActivateAndUnloadThreadsLayout@20 @ 0x14F3AC (_xxxImmActivateAndUnloadThreadsLayout@20.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 */

void __fastcall xxxImmUnloadLayout(int a1, int a2)
{
  int v4; // edx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v7; // edx
  _DWORD v8[3]; // [esp+Ch] [ebp-10h] BYREF
  int v9; // [esp+18h] [ebp-4h] BYREF

  v8[2] = 0;
  v9 = 0;
  if ( *(_DWORD *)(a1 + 436) )
  {
    v4 = *(_DWORD *)(a1 + 240);
    if ( v4 )
    {
      if ( a2 != 1
        || ((*_gpsi & 4) != 0 || (*(_WORD *)(v4 + 22) & 0xF000) == 0xE000)
        && ((*_gpsi & 4) == 0 || (*(_BYTE *)(_gptiCurrent + 264) & 2) == 0) )
      {
        CurrentThread = KeGetCurrentThread();
        ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
        v7 = *(_DWORD *)(a1 + 436);
        v8[0] = *(_DWORD *)(ThreadWin32Thread + 228);
        *(_DWORD *)(ThreadWin32Thread + 228) = v8;
        v8[1] = v7;
        HMLockObject(v7);
        xxxSendTransformableMessageTimeout(*(_DWORD *)(a1 + 436), 0x287u, 0x11u, a2, 8u, _gdwHungAppTimeout, &v9, 1u, 0);
        ThreadUnlock1();
      }
    }
  }
}
