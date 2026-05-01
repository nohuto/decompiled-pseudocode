/*
 * XREFs of ?RuntimeClassInitialize@HolographicForegroundAssistant@@QEAAJXZ @ 0x180247C30
 * Callers:
 *     ??$MakeAndInitialize@VHolographicForegroundAssistant@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180247130 (--$MakeAndInitialize@VHolographicForegroundAssistant@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18014F674 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 */

__int64 __fastcall HolographicForegroundAssistant::RuntimeClassInitialize(HolographicForegroundAssistant *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  int v4[4]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(GUID *)v4 = CLSID_HolographicForegroundAssistant;
  v5 = 0LL;
  v1 = CImmersiveShellComponent::RegisterServiceInformation(
         (HolographicForegroundAssistant *)((char *)this + 48),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)v4,
         1LL);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x30,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicforegroundassistant.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
