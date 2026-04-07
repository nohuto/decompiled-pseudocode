/*
 * XREFs of ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18007F0EC
 * Callers:
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x1800066E0 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 *     ?SetStopResult@?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x18002D6B0 (-SetStopResult@-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Ac.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D7FC (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@Z@Z @ 0x180042E78 (-SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@Z@Z.c)
 *     ?SetStopResult@?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x18008E9F8 (-SetStopResult@-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProvid_ea_18008E9F8.c)
 * Callees:
 *     memset_0 @ 0x1800563D2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     ?WilRaiseFailFastException@details@wil@@YAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z @ 0x18007F188 (-WilRaiseFailFastException@details@wil@@YAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z.c)
 */

void __fastcall __noreturn wil::details::WilFailFast(wil::details *this, const struct wil::FailureInfo *a2)
{
  struct _EXCEPTION_RECORD *v3; // rdx
  unsigned int v4; // r9d
  __int64 v5; // rcx
  __int64 v6; // rax
  _DWORD v7[4]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v8; // [rsp+30h] [rbp-98h]
  int v9; // [rsp+38h] [rbp-90h]
  __int64 v10; // [rsp+40h] [rbp-88h]
  __int64 v11; // [rsp+48h] [rbp-80h]
  __int64 v12; // [rsp+50h] [rbp-78h]

  if ( wil::g_pfnWilFailFast )
    wil::g_pfnWilFailFast(this);
  memset_0(v7, 0, 0x98uLL);
  v5 = *((_QWORD *)this + 16);
  v9 = 1;
  v7[0] = -1073740791;
  v7[1] = 1;
  v10 = 7LL;
  if ( !v5 )
    wil::details::WilRaiseFailFastException((wil::details *)v7, v3, (struct _CONTEXT *)1, v4);
  v11 = *((int *)this + 1);
  v6 = *((unsigned int *)this + 14);
  v8 = v5;
  v12 = v6;
  v9 = 3;
  wil::details::WilRaiseFailFastException((wil::details *)v7, v3, 0LL, v4);
}
