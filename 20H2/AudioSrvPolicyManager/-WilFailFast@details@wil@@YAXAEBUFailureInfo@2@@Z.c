/*
 * XREFs of ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1800036E4
 * Callers:
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x180003780 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 *     DllMain @ 0x180005830 (DllMain.c)
 * Callees:
 *     ?WilRaiseFailFastException@details@wil@@YAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z @ 0x180002714 (-WilRaiseFailFastException@details@wil@@YAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z.c)
 *     memset_0 @ 0x18003A7D8 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall __noreturn wil::details::WilFailFast(wil::details *this, const struct wil::FailureInfo *a2)
{
  struct _EXCEPTION_RECORD *v3; // rdx
  void *v4; // rcx
  ULONG_PTR v5; // rax
  struct _EXCEPTION_RECORD v6; // [rsp+20h] [rbp-A8h] BYREF

  if ( wil::g_pfnWilFailFast )
    wil::g_pfnWilFailFast(this);
  memset_0(&v6, 0, sizeof(v6));
  v4 = (void *)*((_QWORD *)this + 16);
  v6.NumberParameters = 1;
  v6.ExceptionCode = -1073740791;
  v6.ExceptionFlags = 1;
  v6.ExceptionInformation[0] = 7LL;
  if ( !v4 )
    wil::details::WilRaiseFailFastException(&v6, v3, (struct _CONTEXT *)1);
  v6.ExceptionInformation[1] = *((int *)this + 1);
  v5 = *((unsigned int *)this + 14);
  v6.ExceptionAddress = v4;
  v6.ExceptionInformation[2] = v5;
  v6.NumberParameters = 3;
  wil::details::WilRaiseFailFastException(&v6, v3, 0LL);
}
