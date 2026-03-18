/*
 * XREFs of NtUserHwndSetRedirectionInfo @ 0x1C01FE200
 * Callers:
 *     <none>
 * Callees:
 *     GetStyleWindow @ 0x1C00707C0 (GetStyleWindow.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     GreSetHwndPresentFlags @ 0x1C0270DD0 (GreSetHwndPresentFlags.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserHwndSetRedirectionInfo(__int64 a1, int a2, __int64 a3, unsigned int a4)
{
  NTSTATUS v8; // edi
  int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 StyleWindow; // rax
  __int64 v15; // rbx
  ULONG v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8

  v8 = -1073741811;
  v9 = 1;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    StyleWindow = GetStyleWindow(v10, 2568);
    v13 = StyleWindow;
    if ( StyleWindow )
    {
      if ( (*(_WORD *)(*(_QWORD *)(StyleWindow + 40) + 42LL) & 0x3FFF) != 0x29D )
      {
        if ( a2 == 2 )
        {
          if ( a3 )
          {
            if ( a4 >= 4 )
              v8 = GreSetHwndPresentFlags(*(HWND *)StyleWindow);
            else
              v8 = -1073741306;
          }
        }
        else
        {
          v8 = -1073741821;
        }
      }
    }
  }
  if ( v8 < 0 )
  {
    v9 = 0;
    v15 = 0LL;
  }
  else
  {
    v15 = 1LL;
  }
  if ( !v9 )
  {
    v16 = RtlNtStatusToDosError(v8);
    UserSetLastError(v16, v17, v18);
  }
  UserSessionSwitchLeaveCrit(v12, v11, v13);
  return v15;
}
