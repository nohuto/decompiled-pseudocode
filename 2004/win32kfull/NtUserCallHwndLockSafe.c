/*
 * XREFs of NtUserCallHwndLockSafe @ 0x1C010BB80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserCallHwndLockSafe(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]

  v2 = a2;
  v15 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = 0LL;
  if ( (_DWORD)v2 == 112
    || (_DWORD)v2 == 117
    || (_DWORD)v2 == 120
    || (unsigned int)v2 > 0x79 && (unsigned int)v2 <= 0x7B )
  {
    gbValidateHandleForIL = 0;
  }
  v5 = ValidateHwnd(a1);
  v9 = v5;
  if ( v5 )
  {
    if ( (_DWORD)v2 != 106 && (_DWORD)v2 != 125
      || (v7 = (*(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x3FFFu) - 669, (v7 & 0xFFFFFFFD) != 0) )
    {
      *(_QWORD *)&v14 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v14;
      *((_QWORD *)&v14 + 1) = v5;
      HMLockObject(v5);
      if ( (_DWORD)v2 == 107 )
        v4 = ((__int64 (__fastcall *)(__int64))*(&apfnSimpleCall + v2))(v9);
      ThreadUnlock1(v11, v10, v12);
    }
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8);
  return v4;
}
