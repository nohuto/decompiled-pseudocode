/*
 * XREFs of NtUserCallHwndParam @ 0x1C010FAC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
_QWORD *__fastcall NtUserCallHwndParam(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]

  v3 = a3;
  v17 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( (_DWORD)v3 == 94 || (_DWORD)v3 == -1 )
    gbValidateHandleForIL = 0;
  v8 = ValidateHwnd(a1);
  if ( !v8 )
  {
    v14 = 0LL;
    goto LABEL_9;
  }
  *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v16;
  *((_QWORD *)&v16 + 1) = v8;
  HMLockObject(v8);
  if ( (unsigned int)(v3 - 94) > 0xA )
    goto LABEL_10;
  _mm_lfence();
  v13 = (_QWORD *)((__int64 (__fastcall *)(__int64, __int64))*(&apfnSimpleCall + v3))(v8, a2);
  v14 = v13;
  if ( (unsigned int)v3 < 0x5F )
  {
    if ( v13 )
    {
      v14 = (_QWORD *)*v13;
      goto LABEL_8;
    }
LABEL_10:
    v14 = 0LL;
  }
LABEL_8:
  ThreadUnlock1(v11, v10, v12);
LABEL_9:
  UserSessionSwitchLeaveCrit(v7, v6, v9);
  return v14;
}
