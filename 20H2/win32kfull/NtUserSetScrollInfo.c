/*
 * XREFs of NtUserSetScrollInfo @ 0x1C00EB940
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     xxxSetScrollBar @ 0x1C00EBA98 (xxxSetScrollBar.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserSetScrollInfo(__int64 a1, unsigned int a2, ULONG64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  struct tagWND *v8; // rsi
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v16; // [rsp+30h] [rbp-78h] BYREF
  __int64 v17; // [rsp+40h] [rbp-68h]
  __int128 v18; // [rsp+50h] [rbp-58h]
  __int64 v19; // [rsp+60h] [rbp-48h]
  int v20; // [rsp+68h] [rbp-40h]

  v18 = 0LL;
  v19 = 0LL;
  v20 = 0;
  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v8 = (struct tagWND *)v6;
  v9 = 0;
  if ( v6 )
  {
    v7 = (*(_WORD *)(*(_QWORD *)(v6 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v7 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v16;
      *((_QWORD *)&v16 + 1) = v6;
      HMLockObject(v6);
      if ( a2 > 3 )
      {
        UserSetLastError(87LL, v10, v11);
      }
      else
      {
        if ( a3 >= MmUserProbeAddress )
          a3 = MmUserProbeAddress;
        v18 = *(_OWORD *)a3;
        v19 = *(_QWORD *)(a3 + 16);
        v20 = *(_DWORD *)(a3 + 24);
        v9 = xxxSetScrollBar(v8);
      }
      ThreadUnlock1(v13, v12, v14);
    }
  }
  UserSessionSwitchLeaveCrit(v7);
  return v9;
}
