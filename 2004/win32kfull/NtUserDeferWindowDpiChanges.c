/*
 * XREFs of NtUserDeferWindowDpiChanges @ 0x1C0124D60
 * Callers:
 *     <none>
 * Callees:
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C003BDB8 (_SetDeferredDpiStateForWindowAndChildren.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserDeferWindowDpiChanges(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // ebx
  __int64 v7; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  _BOOL8 v12; // rcx
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  v14 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v2;
  if ( v2 )
  {
    v4 = *(_QWORD *)(v2 + 40);
    v3 = (*(_WORD *)(v4 + 42) & 0x3FFFu) - 669;
    if ( (v3 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v13 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v13;
      *((_QWORD *)&v13 + 1) = v2;
      HMLockObject(v2);
      v11 = *(_QWORD *)(v7 + 40);
      if ( (*(_DWORD *)(v11 + 288) & 0xF) == 2 )
      {
        if ( *(_WORD *)(v11 + 286) )
        {
          v12 = (*(_DWORD *)(v7 + 304) & 1) == 0;
          *(_DWORD *)(v7 + 304) |= 1u;
          v6 = v12;
        }
        else
        {
          v6 = SetDeferredDpiStateForWindowAndChildren((struct tagWND *)v7, 1, 1);
        }
      }
      else
      {
        UserSetLastError(87LL, v9, v10);
      }
      ThreadUnlock1(v12, v9, v10);
    }
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5);
  return v6;
}
