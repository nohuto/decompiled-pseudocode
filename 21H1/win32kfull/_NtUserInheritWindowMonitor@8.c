/*
 * XREFs of _NtUserInheritWindowMonitor@8 @ 0x165362
 * Callers:
 *     <none>
 * Callees:
 *     _xxxInheritWindowMonitor@12 @ 0x26E0E (_xxxInheritWindowMonitor@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall NtUserInheritWindowMonitor(int a1, int a2)
{
  int v2; // esi
  _DWORD *v3; // ebx
  _DWORD *v4; // eax
  _DWORD *v5; // edi
  int v6; // eax
  int v8; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD *v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h]

  v2 = 0;
  v8 = 0;
  v3 = 0;
  v9 = 0;
  v10 = 0;
  EnterCrit(0, 1);
  v4 = (_DWORD *)ValidateHwnd(a1);
  v5 = v4;
  if ( v4 )
  {
    v6 = *(_WORD *)(v4[5] + 30) & 0x3FFF;
    if ( v6 != 669 && v6 != 671 )
    {
      v8 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v8;
      v9 = v5;
      HMLockObject(v5);
      if ( PsGetCurrentProcessWin32Process() == *(_DWORD *)(v5[2] + 232) )
      {
        if ( !a2 || (v3 = (_DWORD *)ValidateHwnd(a2)) != 0 )
          v2 = xxxInheritWindowMonitor(v5, v3, 1);
      }
      else
      {
        UserSetLastError((struct _NT_TIB *)5);
      }
      ThreadUnlock1();
    }
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
