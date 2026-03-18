/*
 * XREFs of _NtUserEnableMouseInPointerForWindow@8 @ 0xAAD98
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall NtUserEnableMouseInPointerForWindow(int a1, int a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // ebx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  int v8; // [esp+Ch] [ebp-Ch] BYREF
  int v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h]

  v2 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  EnterCrit(0, 1);
  v3 = ValidateHwnd(a1);
  v4 = v3;
  if ( v3 )
  {
    v8 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v8;
    v9 = v3;
    HMLockObject(v3);
    if ( (a2 != 0) == a2 && (a2 || (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 464) & 0x30) != 0x10) )
    {
      if ( *(_DWORD *)(v4 + 8) == _gptiCurrent
        && ((v5 = *(_DWORD *)(v4 + 196), a2 == ((v5 >> 4) & 1)) || (v5 & 0x20) == 0) )
      {
        if ( a2 )
          v6 = v5 | 0x10;
        else
          v6 = v5 & 0xFFFFFFEF;
        *(_DWORD *)(v4 + 196) = v6 | 0x20;
        *(_DWORD *)(_gptiCurrent + 688) |= 0x4000000u;
        v2 = 1;
      }
      else
      {
        UserSetLastError((struct _NT_TIB *)5);
      }
    }
    else
    {
      UserSetLastError((struct _NT_TIB *)0x57);
    }
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
