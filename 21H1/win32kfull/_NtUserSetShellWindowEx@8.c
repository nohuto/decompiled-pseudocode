/*
 * XREFs of _NtUserSetShellWindowEx@8 @ 0xE0E32
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateHWNDND@@YGHPAUHWND__@@PAPAUtagWND@@@Z @ 0x74B40 (-ValidateHWNDND@@YGHPAUHWND__@@PAPAUtagWND@@@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxSetShellWindow@8 @ 0xE0F54 (_xxxSetShellWindow@8.c)
 */

int __stdcall NtUserSetShellWindowEx(int a1, int a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int CurrentProcessWin32Process; // eax
  int v7; // esi
  int v9; // [esp-8h] [ebp-34h]
  int v10; // [esp+8h] [ebp-24h] BYREF
  int v11; // [esp+Ch] [ebp-20h]
  int v12; // [esp+10h] [ebp-1Ch]
  int v13; // [esp+14h] [ebp-18h] BYREF
  int v14; // [esp+18h] [ebp-14h]
  int v15; // [esp+1Ch] [ebp-10h]
  _DWORD v16[2]; // [esp+20h] [ebp-Ch] BYREF
  int v17; // [esp+28h] [ebp-4h] BYREF

  v16[1] = -1;
  v16[0] = 0x2000;
  v10 = 0;
  v2 = 0;
  v17 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  EnterCrit(0, 1);
  v3 = ValidateHwnd(a1);
  v4 = v3;
  if ( v3 )
  {
    v5 = *(_WORD *)(*(_DWORD *)(v3 + 20) + 30) & 0x3FFF;
    if ( v5 != 669 && v5 != 671 )
    {
      v13 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v13;
      v14 = v3;
      HMLockObject(v3);
      if ( ValidateHWNDND(a2, &v17) )
      {
        if ( PsGetCurrentProcessWin32Process()
          && (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(),
              (unsigned __int8)CheckAccess(CurrentProcessWin32Process + 496, v16))
          && *(_DWORD *)(*(_DWORD *)(v4 + 8) + 232) == PsGetCurrentProcessWin32Process() )
        {
          v7 = v17;
          v9 = v17;
          v10 = *(_DWORD *)(_gptiCurrent + 228);
          *(_DWORD *)(_gptiCurrent + 228) = &v10;
          v11 = v7;
          HMLockObject(v9);
          v2 = xxxSetShellWindow((struct tagTHREADINFO *)v4);
          ThreadUnlock1();
        }
        else
        {
          UserSetLastError((struct _NT_TIB *)5);
        }
      }
      ThreadUnlock1();
    }
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
