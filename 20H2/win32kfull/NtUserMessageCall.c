/*
 * XREFs of NtUserMessageCall @ 0x1C00E8460
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserMessageCall(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  __int64 v7; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rsi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int128 v22; // [rsp+40h] [rbp-38h] BYREF
  __int64 v23; // [rsp+50h] [rbp-28h]

  v7 = a2;
  v23 = 0LL;
  v22 = 0LL;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  if ( ((a1 + 1) & 0xFFFFFFFFFFFEFFFFuLL) != 0 || (unsigned int)(a6 - 695) > 1 )
  {
    v14 = ValidateHwnd(a1);
    if ( !v14 )
    {
      v18 = 0LL;
      goto LABEL_10;
    }
    *(_QWORD *)&v22 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v22;
    *((_QWORD *)&v22 + 1) = v14;
    HMLockObject(v14);
  }
  else
  {
    v14 = -1LL;
  }
  if ( (v7 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL, v11, v12);
    v18 = 0LL;
    UserSetLastError(87LL, v20, v21);
  }
  else
  {
    if ( (unsigned int)v7 >= 0x400 )
    {
      v15 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))mpFnidPfn[((_BYTE)a6 + 6) & 0x1F])(
              v14,
              (unsigned int)v7,
              a3,
              a4,
              a5);
    }
    else
    {
      _mm_lfence();
      v15 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, int, bool))gapfnMessageCall[(unsigned __int8)MessageTable[v7]])(
              v14,
              (unsigned int)v7,
              a3,
              a4,
              a5,
              a6,
              a7 != 0);
    }
    v18 = v15;
  }
  if ( v14 != -1 )
    ThreadUnlock1(v13, v16, v17);
LABEL_10:
  UserSessionSwitchLeaveCrit(v13);
  return v18;
}
