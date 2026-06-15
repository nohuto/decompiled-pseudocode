/*
 * XREFs of ??1Completer@?$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x180008890
 * Callers:
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x1800055CC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

BOOL __fastcall wil::details::static_lazy<AudioSrvPolicyManagerTelemetryProvider>::Completer::~Completer(
        LPINIT_ONCE *a1)
{
  DWORD v1; // edx
  LPINIT_ONCE v3; // rdi
  ULONGLONG *Ptr; // rsi
  GUID v5; // xmm0
  union _RTL_RUN_ONCE v6; // rax
  GUID v8; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_DWORD *)a1 + 2);
  if ( !v1 )
  {
    v3 = *a1;
    Ptr = (ULONGLONG *)(*a1)[4].Ptr;
    v3[2].Ptr = Ptr;
    LOBYTE(v3[3].Ptr) = 1;
    v5 = *(GUID *)(Ptr[1] - 16);
    Ptr[6] = 0LL;
    Ptr[5] = (ULONGLONG)AudioSrvPolicyManagerTelemetryProvider::Callback;
    v8 = v5;
    if ( !EventRegister(&v8, (PENABLECALLBACK)tlgEnableCallback, Ptr, Ptr + 4) )
      EventSetInformation(Ptr[4], 2LL, Ptr[1], *(unsigned __int16 *)Ptr[1]);
    v6.Ptr = v3[1].Ptr;
    HIDWORD(v3[3].Ptr) = 1;
    (*((void (__fastcall **)(LPINIT_ONCE))v6.Ptr + 1))(v3 + 1);
    v1 = *((_DWORD *)a1 + 2);
  }
  return InitOnceComplete(*a1, v1, &(*a1)[1]);
}
