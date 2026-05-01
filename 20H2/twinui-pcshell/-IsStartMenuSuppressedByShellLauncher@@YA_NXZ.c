/*
 * XREFs of ?IsStartMenuSuppressedByShellLauncher@@YA_NXZ @ 0x1800AEBE0
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18032D320 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ??R_lambda_3ce8c58b5dd7a8858e628b830001576c_@@QEBAJAEA_N@Z @ 0x1800AEA54 (--R_lambda_3ce8c58b5dd7a8858e628b830001576c_@@QEBAJAEA_N@Z.c)
 */

char __fastcall IsStartMenuSuppressedByShellLauncher(__int64 a1)
{
  char v1; // bl
  bool v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v3 = 0;
  if ( (int)_lambda_3ce8c58b5dd7a8858e628b830001576c_::operator()(a1, &v3) >= 0 )
    return v3;
  return v1;
}
