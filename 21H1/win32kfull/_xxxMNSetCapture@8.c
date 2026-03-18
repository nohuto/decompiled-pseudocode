/*
 * XREFs of _xxxMNSetCapture@8 @ 0x19A754
 * Callers:
 *     _xxxMNEndMenuStateInternal@8 @ 0x1848C0 (_xxxMNEndMenuStateInternal@8.c)
 *     _xxxMNStartMenu@12 @ 0x1849EF (_xxxMNStartMenu@12.c)
 *     _xxxMNKeyDown@12 @ 0x198B89 (_xxxMNKeyDown@12.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _xxxCapture@12 @ 0xC4EA6 (_xxxCapture@12.c)
 */

void __fastcall xxxMNSetCapture(_DWORD *a1, int a2)
{
  int v3; // eax
  int v4; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v7; // eax
  _DWORD v8[3]; // [esp+Ch] [ebp-10h] BYREF
  _DWORD *v9; // [esp+18h] [ebp-4h]

  v8[2] = 0;
  v3 = *a1;
  v9 = a1;
  v4 = *(_DWORD *)(*(_DWORD *)v3 + 4);
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v8[0] = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = v8;
  v8[1] = v4;
  if ( v4 )
    HMLockObject(v4);
  xxxCapture(_gptiCurrent, *(_DWORD *)(*(_DWORD *)*v9 + 4), 4);
  ThreadUnlock1();
  *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 284) |= 0x100000u;
  *(_DWORD *)(a2 + 4) |= 0x40000u;
  if ( _gpqForeground )
  {
    v7 = *(_DWORD *)(_gpqForeground + 60);
    if ( v7 )
    {
      if ( *(_DWORD *)(v7 + 8) == _gptiCurrent )
        xxxWindowEvent(0x80000004, (struct tagEVENTHOOK *)v7, 0, (struct tagWND *)1, 33);
    }
  }
}
