/*
 * XREFs of ?IsDeviceAcrylicCapable@@YA_NXZ @ 0x18011D5CC
 * Callers:
 *     ?OnMessage@AcrylicPolicyManager@@UEAAJI_K_J@Z @ 0x18011C6A0 (-OnMessage@AcrylicPolicyManager@@UEAAJI_K_J@Z.c)
 *     ?SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18011D200 (-SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     _lambda_e7233f2d7fbbc8c446f08901eacadde9_::operator() @ 0x1802DC320 (_lambda_e7233f2d7fbbc8c446f08901eacadde9_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 */

char IsDeviceAcrylicCapable(void)
{
  char v0; // bl
  __m128i si128; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v3[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v4; // [rsp+50h] [rbp-18h]

  memset(v3, 0, sizeof(v3));
  v0 = 0;
  v4 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( (int)NtDCompositionGetFrameStatistics(v3, &si128) >= 0 && si128.m128i_i32[3] )
    return si128.m128i_i32[2] == 0;
  return v0;
}
