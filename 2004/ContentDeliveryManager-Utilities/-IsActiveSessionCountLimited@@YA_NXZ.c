/*
 * XREFs of ?IsActiveSessionCountLimited@@YA_NXZ @ 0x18000D9FC
 * Callers:
 *     ??R_lambda_13a45783cb3309e666fe0ee3fbf2f736_@@QEBAXXZ @ 0x18000E474 (--R_lambda_13a45783cb3309e666fe0ee3fbf2f736_@@QEBAXXZ.c)
 *     ?GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z @ 0x18002D7B0 (-GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800CDE41 (memset_0.c)
 */

bool IsActiveSessionCountLimited(void)
{
  ULONGLONG v0; // rax
  DWORDLONG v1; // rdi
  bool v2; // bl
  _OSVERSIONINFOEXW VersionInformation; // [rsp+20h] [rbp-138h] BYREF

  memset_0(&VersionInformation, 0, sizeof(VersionInformation));
  v0 = VerSetConditionMask(0LL, 0x40u, 6u);
  VersionInformation.dwOSVersionInfoSize = 284;
  v1 = v0;
  VersionInformation.wSuiteMask = 16;
  v2 = VerifyVersionInfoW(&VersionInformation, 0x40u, v0);
  VersionInformation.wSuiteMask = 256;
  return !(v2 & !VerifyVersionInfoW(&VersionInformation, 0x40u, v1));
}
