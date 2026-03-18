/*
 * XREFs of NtUserNotifyIMEStatus @ 0x1C01093D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     xxxNotifyIMEStatus @ 0x1C01094B8 (xxxNotifyIMEStatus.c)
 */

__int64 __fastcall NtUserNotifyIMEStatus(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int128 v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+30h] [rbp-18h]

  v18 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v10 = 0LL;
  v11 = v6;
  if ( v6 )
  {
    *(_QWORD *)&v18 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v18;
    *((_QWORD *)&v18 + 1) = v6;
    HMLockObject(v6);
    if ( (*gpsi & 4) != 0 )
    {
      xxxNotifyIMEStatus(v11, a2, a3);
      v10 = 1LL;
    }
    else
    {
      UserSetLastError(120LL, v12, v13);
    }
    ThreadUnlock1(v15, v14, v16);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9);
  return v10;
}
