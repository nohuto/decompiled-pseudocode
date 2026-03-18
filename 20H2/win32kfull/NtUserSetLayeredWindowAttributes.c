/*
 * XREFs of NtUserSetLayeredWindowAttributes @ 0x1C003CA60
 * Callers:
 *     <none>
 * Callees:
 *     WindowHasShadow @ 0x1C003CBA4 (WindowHasShadow.c)
 *     _SetLayeredWindowAttributes @ 0x1C003CC6C (_SetLayeredWindowAttributes.c)
 *     UserSetLastStatus @ 0x1C008004C (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     zzzUpdateShadowAlpha @ 0x1C01371EC (zzzUpdateShadowAlpha.c)
 */

__int64 __fastcall NtUserSetLayeredWindowAttributes(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rsi
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  __int128 v16; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+30h] [rbp-28h]

  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v8 = 0LL;
  v9 = v6;
  if ( v6 )
  {
    *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v16;
    *((_QWORD *)&v16 + 1) = v6;
    HMLockObject(v6);
    if ( (a4 & 0xFFFFFFFC) != 0
      || (unsigned int)IsWindowDesktopComposed(v9) && (*(_DWORD *)(*(_QWORD *)(v9 + 40) + 232LL) & 0x20) != 0 )
    {
      UserSetLastError(87LL);
    }
    else
    {
      v10 = SetLayeredWindowAttributes((struct tagWND *)v9);
      if ( v10 >= 0 )
      {
        v14 = 1LL;
        if ( (a4 & 2) != 0 && (unsigned int)WindowHasShadow(v9) )
          zzzUpdateShadowAlpha(v9);
        goto LABEL_9;
      }
      UserSetLastStatus(v10);
    }
    v14 = 0LL;
LABEL_9:
    ThreadUnlock1(v12, v11, v13);
    v8 = v14;
  }
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
