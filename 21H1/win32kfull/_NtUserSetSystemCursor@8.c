/*
 * XREFs of _NtUserSetSystemCursor@8 @ 0x169C8E
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     ?zzzSetSystemCursor@@YG_NPAUtagCURSOR@@K@Z @ 0x143292 (-zzzSetSystemCursor@@YG_NPAUtagCURSOR@@K@Z.c)
 */

int __stdcall NtUserSetSystemCursor(int a1, __int16 a2)
{
  int v2; // esi
  int v3; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD v7[3]; // [esp+8h] [ebp-Ch] BYREF

  v2 = 0;
  EnterCrit(0, 1);
  v3 = HMValidateHandle(a1, 3);
  if ( v3 )
  {
    v7[2] = 0;
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v7[0] = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = v7;
    v7[1] = v3;
    HMLockObject(v3);
    v2 = (unsigned __int8)zzzSetSystemCursor(v3, a2);
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
