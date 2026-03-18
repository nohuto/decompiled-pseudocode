/*
 * XREFs of NtUserCallHwndParam @ 0x1C0110AD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
_QWORD *__fastcall NtUserCallHwndParam(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]

  v3 = a3;
  v15 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( (_DWORD)v3 == 94 || (_DWORD)v3 == -1 )
    gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  if ( !v7 )
  {
    v12 = 0LL;
    goto LABEL_9;
  }
  *(_QWORD *)&v14 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v14;
  *((_QWORD *)&v14 + 1) = v7;
  HMLockObject(v7);
  if ( (unsigned int)(v3 - 94) > 0xA )
    goto LABEL_10;
  _mm_lfence();
  v11 = (_QWORD *)((__int64 (__fastcall *)(__int64, __int64))*(&apfnSimpleCall + v3))(v7, a2);
  v12 = v11;
  if ( (unsigned int)v3 < 0x5F )
  {
    if ( v11 )
    {
      v12 = (_QWORD *)*v11;
      goto LABEL_8;
    }
LABEL_10:
    v12 = 0LL;
  }
LABEL_8:
  ThreadUnlock1(v9, v8, v10);
LABEL_9:
  UserSessionSwitchLeaveCrit(v6);
  return v12;
}
