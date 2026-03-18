/*
 * XREFs of NtUserCallHwndParamLock @ 0x1C010D580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserCallHwndParamLock(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]

  v3 = a3;
  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = 0LL;
  if ( (_DWORD)v3 == 120 || (_DWORD)v3 == 112 || (_DWORD)v3 == 117 || (unsigned int)(v3 - 122) <= 1 )
    gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  v11 = v7;
  if ( v7 )
  {
    if ( (_DWORD)v3 != 106 && (_DWORD)v3 != 125
      || (v9 = (*(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) & 0x3FFFu) - 669, (v9 & 0xFFFFFFFD) != 0) )
    {
      *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v16;
      *((_QWORD *)&v16 + 1) = v7;
      HMLockObject(v7);
      if ( (unsigned int)(v3 - 118) <= 7 )
        v6 = ((__int64 (__fastcall *)(__int64, __int64))*(&apfnSimpleCall + v3))(v11, a2);
      ThreadUnlock1(v13, v12, v14);
    }
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10);
  return v6;
}
