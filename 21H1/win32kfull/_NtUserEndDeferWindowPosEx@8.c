/*
 * XREFs of _NtUserEndDeferWindowPosEx@8 @ 0xA42C4
 * Callers:
 *     <none>
 * Callees:
 *     _xxxEndDeferWindowPosEx@8 @ 0x34486 (_xxxEndDeferWindowPosEx@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall NtUserEndDeferWindowPosEx(int a1, int a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v8; // [esp+8h] [ebp-Ch] BYREF
  int v9; // [esp+Ch] [ebp-8h]
  int v10; // [esp+10h] [ebp-4h]

  v2 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  EnterCrit(0, 1);
  v3 = HMValidateHandle(a1, 4);
  v4 = v3;
  if ( v3 )
  {
    if ( (*(_BYTE *)(v3 + 12) & 4) != 0 )
    {
      UserSetLastError((struct _NT_TIB *)0x57D);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v8 = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = &v8;
      v9 = v4;
      HMLockObject(v4);
      v2 = xxxEndDeferWindowPosEx(v4, a2);
      ThreadUnlock1();
    }
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
