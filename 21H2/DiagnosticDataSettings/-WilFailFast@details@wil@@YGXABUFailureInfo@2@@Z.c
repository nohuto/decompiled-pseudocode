/*
 * XREFs of ?WilFailFast@details@wil@@YGXABUFailureInfo@2@@Z @ 0x10003D06
 * Callers:
 *     ?ReportFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@JPBGW4ReportFailureOptions@12@@Z @ 0x10003D78 (-ReportFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@JPBGW4ReportFailureOptions@12@@Z.c)
 * Callees:
 *     ?WilRaiseFailFastException@details@wil@@YGXPAU_EXCEPTION_RECORD@@PAU_CONTEXT@@K@Z @ 0x10003CDC (-WilRaiseFailFastException@details@wil@@YGXPAU_EXCEPTION_RECORD@@PAU_CONTEXT@@K@Z.c)
 *     @_guard_check_icall_nop@4 @ 0x10004890 (@_guard_check_icall_nop@4.c)
 *     _memset @ 0x10004BC6 (_memset.c)
 */

void __thiscall __noreturn wil::details::WilFailFast(int ecx0, wil::details *this, const struct wil::FailureInfo *a3)
{
  int v4; // ecx
  int v5; // eax
  _DWORD v6[20]; // [esp+8h] [ebp-50h] BYREF

  if ( wil::g_pfnWilFailFast )
    wil::g_pfnWilFailFast((const struct wil::FailureInfo *)ecx0);
  memset(v6, 0, sizeof(v6));
  v4 = *(_DWORD *)(ecx0 + 72);
  v6[0] = -1073740791;
  v6[4] = 1;
  v6[1] = 1;
  v6[5] = 7;
  if ( !v4 )
    wil::details::WilRaiseFailFastException((wil::details *)1);
  v6[6] = *(_DWORD *)(ecx0 + 4);
  v5 = *(_DWORD *)(ecx0 + 32);
  v6[4] = 3;
  v6[7] = v5;
  v6[3] = v4;
  wil::details::WilRaiseFailFastException(0);
}
