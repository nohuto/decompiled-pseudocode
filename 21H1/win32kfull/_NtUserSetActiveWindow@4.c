/*
 * XREFs of _NtUserSetActiveWindow@4 @ 0xAB878
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?xxxSetActiveWindow@@YGPAUtagWND@@PAU1@@Z @ 0xAB8FC (-xxxSetActiveWindow@@YGPAUtagWND@@PAU1@@Z.c)
 */

int __stdcall NtUserSetActiveWindow(int a1)
{
  int v1; // esi
  int v2; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  struct tagWND *v5; // eax
  struct tagWND *v7; // [esp+0h] [ebp-14h]
  int v8; // [esp+8h] [ebp-Ch] BYREF
  int v9; // [esp+Ch] [ebp-8h]
  int v10; // [esp+10h] [ebp-4h]

  v1 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  EnterCrit(0, 1);
  if ( a1 )
  {
    v2 = ValidateHwnd(a1);
    if ( !v2 )
      goto LABEL_8;
  }
  else
  {
    v2 = 0;
  }
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v8 = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = &v8;
  v9 = v2;
  if ( v2 )
    HMLockObject(v2);
  v5 = xxxSetActiveWindow(v7);
  if ( v5 )
    v1 = *(_DWORD *)v5;
  ThreadUnlock1();
LABEL_8:
  UserSessionSwitchLeaveCrit();
  return v1;
}
