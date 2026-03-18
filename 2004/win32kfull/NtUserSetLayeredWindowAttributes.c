/*
 * XREFs of NtUserSetLayeredWindowAttributes @ 0x1C001DCC0
 * Callers:
 *     <none>
 * Callees:
 *     WindowHasShadow @ 0x1C001DE04 (WindowHasShadow.c)
 *     _SetLayeredWindowAttributes @ 0x1C001EDB4 (_SetLayeredWindowAttributes.c)
 *     UserSetLastStatus @ 0x1C004AC8C (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     zzzUpdateShadowAlpha @ 0x1C013529C (zzzUpdateShadowAlpha.c)
 */

__int64 __fastcall NtUserSetLayeredWindowAttributes(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rsi
  NTSTATUS v12; // eax
  __int64 v13; // rdi
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+30h] [rbp-28h]

  v15 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v10 = 0LL;
  v11 = v6;
  if ( v6 )
  {
    *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v15;
    *((_QWORD *)&v15 + 1) = v6;
    HMLockObject(v6);
    if ( (a4 & 0xFFFFFFFC) != 0
      || (unsigned int)IsWindowDesktopComposed(v11) && (*(_DWORD *)(*(_QWORD *)(v11 + 40) + 232LL) & 0x20) != 0 )
    {
      UserSetLastError(87LL);
    }
    else
    {
      v12 = SetLayeredWindowAttributes((struct tagWND *)v11);
      if ( v12 >= 0 )
      {
        v13 = 1LL;
        if ( (a4 & 2) != 0 && (unsigned int)WindowHasShadow(v11) )
          zzzUpdateShadowAlpha(v11);
        goto LABEL_9;
      }
      UserSetLastStatus(v12);
    }
    v13 = 0LL;
LABEL_9:
    ThreadUnlock1();
    v10 = v13;
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9);
  return v10;
}
