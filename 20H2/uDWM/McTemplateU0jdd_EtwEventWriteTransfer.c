/*
 * XREFs of McTemplateU0jdd_EtwEventWriteTransfer @ 0x1800BA09C
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x18002D08C (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180084818 (McGenEventWrite_EtwEventWriteTransfer.c)
 */

__int64 __fastcall McTemplateU0jdd_EtwEventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  _BYTE v6[16]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v7; // [rsp+40h] [rbp-40h]
  __int64 v8; // [rsp+48h] [rbp-38h]
  int *v9; // [rsp+50h] [rbp-30h]
  __int64 v10; // [rsp+58h] [rbp-28h]
  char *v11; // [rsp+60h] [rbp-20h]
  __int64 v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+A8h] [rbp+28h] BYREF

  v13 = a4;
  v7 = a3;
  v8 = 16LL;
  v9 = &v13;
  v10 = 4LL;
  v11 = &a5;
  v12 = 4LL;
  return McGenEventWrite_EtwEventWriteTransfer(
           Microsoft_Windows_Dwm_Udwm_Provider_Context,
           (__int64)&UdwmAnimationClock_StateChange,
           a3,
           4LL,
           (__int64)v6);
}
