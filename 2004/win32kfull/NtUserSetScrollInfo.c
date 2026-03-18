/*
 * XREFs of NtUserSetScrollInfo @ 0x1C00F0AC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     xxxSetScrollBar @ 0x1C00F0C18 (xxxSetScrollBar.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserSetScrollInfo(__int64 a1, unsigned int a2, ULONG64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct tagWND *v10; // rsi
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int128 v18; // [rsp+30h] [rbp-78h] BYREF
  __int64 v19; // [rsp+40h] [rbp-68h]
  __int128 v20; // [rsp+50h] [rbp-58h]
  __int64 v21; // [rsp+60h] [rbp-48h]
  int v22; // [rsp+68h] [rbp-40h]

  v20 = 0LL;
  v21 = 0LL;
  v22 = 0;
  v18 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v10 = (struct tagWND *)v6;
  v11 = 0;
  if ( v6 )
  {
    v8 = (*(_WORD *)(*(_QWORD *)(v6 + 40) + 42LL) & 0x3FFFu) - 669;
    if ( (v8 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v18 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v18;
      *((_QWORD *)&v18 + 1) = v6;
      HMLockObject(v6);
      if ( a2 > 3 )
      {
        UserSetLastError(87LL, v12, v13);
      }
      else
      {
        if ( a3 >= MmUserProbeAddress )
          a3 = MmUserProbeAddress;
        v20 = *(_OWORD *)a3;
        v21 = *(_QWORD *)(a3 + 16);
        v22 = *(_DWORD *)(a3 + 24);
        v11 = xxxSetScrollBar(v10);
      }
      ThreadUnlock1(v15, v14, v16);
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9);
  return v11;
}
