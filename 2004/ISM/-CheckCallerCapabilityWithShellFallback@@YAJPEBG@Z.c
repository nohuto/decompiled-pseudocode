/*
 * XREFs of ?CheckCallerCapabilityWithShellFallback@@YAJPEBG@Z @ 0x1800F4A48
 * Callers:
 *     ?CheckClientCapability@@YAJPEBVBamoInputObserverClientProxy@@PEBG@Z @ 0x180044650 (-CheckClientCapability@@YAJPEBVBamoInputObserverClientProxy@@PEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180088FE0 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CheckCallerCapabilityWithShellFallback(const unsigned __int16 *a1)
{
  int v1; // eax
  __int64 v2; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  const unsigned __int16 *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  LOBYTE(v5) = 0;
  v1 = CapabilityCheck(-6LL, L"inputObservation", &v5);
  if ( v1 < 0 )
  {
    v2 = 17LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v2,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Components\\InputObservers\\inc\\InputObserverCapabilities.h",
             (const char *)(unsigned int)v1);
  }
  if ( (_BYTE)v5 )
    return 0LL;
  v1 = CapabilityCheck(-6LL, L"shellExperienceComposer", &v5);
  if ( v1 < 0 )
  {
    v2 = 26LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v2,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Components\\InputObservers\\inc\\InputObserverCapabilities.h",
             (const char *)(unsigned int)v1);
  }
  if ( (_BYTE)v5 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1C,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Components\\InputObservers\\inc\\InputObserverCapabilities.h",
    (const char *)0x80070005LL);
  return 2147942405LL;
}
