/*
 * XREFs of _UserRedrawDesktop@0 @ 0x19D89E
 * Callers:
 *     ?DxLddmSharedPrimaryUnLockNotification@@YGJU_LUID@@I@Z @ 0x1D32E2 (-DxLddmSharedPrimaryUnLockNotification@@YGJU_LUID@@I@Z.c)
 * Callees:
 *     _xxxInternalInvalidate@12 @ 0x3519E (_xxxInternalInvalidate@12.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ??0ReEnterLeaveCrit@@QAE@XZ @ 0x6FC2E (--0ReEnterLeaveCrit@@QAE@XZ.c)
 */

int __stdcall UserRedrawDesktop()
{
  int v0; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int result; // eax
  _DWORD v4[3]; // [esp+4h] [ebp-10h] BYREF
  int v5; // [esp+10h] [ebp-4h] BYREF

  v4[2] = 0;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v5);
  v0 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 248) + 4) + 12);
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v4[0] = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = v4;
  v4[1] = v0;
  HMLockObject(v0);
  xxxInternalInvalidate(v0, 1, 1157);
  result = ThreadUnlock1();
  if ( !v5 )
    return UserSessionSwitchLeaveCrit();
  return result;
}
