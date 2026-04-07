/*
 * XREFs of McTemplateU0pdd_EtwEventWriteTransfer @ 0x1800B5D1C
 * Callers:
 *     ?_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z @ 0x180035934 (-_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180085078 (McGenEventWrite_EtwEventWriteTransfer.c)
 */

__int64 __fastcall McTemplateU0pdd_EtwEventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  char v6[16]; // [rsp+30h] [rbp-50h] BYREF
  __int64 *v7; // [rsp+40h] [rbp-40h]
  __int64 v8; // [rsp+48h] [rbp-38h]
  int *v9; // [rsp+50h] [rbp-30h]
  __int64 v10; // [rsp+58h] [rbp-28h]
  char *v11; // [rsp+60h] [rbp-20h]
  __int64 v12; // [rsp+68h] [rbp-18h]
  __int64 v13; // [rsp+A0h] [rbp+20h] BYREF
  int v14; // [rsp+A8h] [rbp+28h] BYREF

  v14 = a4;
  v13 = a3;
  v8 = 8LL;
  v10 = 4LL;
  v7 = &v13;
  v12 = 4LL;
  v9 = &v14;
  v11 = &a5;
  return McGenEventWrite_EtwEventWriteTransfer(Microsoft_Windows_Dwm_Udwm_Provider_Context, a2, a3, 4LL, (__int64)v6);
}
