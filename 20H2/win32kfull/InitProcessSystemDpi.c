/*
 * XREFs of InitProcessSystemDpi @ 0x1C0037C20
 * Callers:
 *     <none>
 * Callees:
 *     GetDPIServerInfoForDpi @ 0x1C0037DEC (GetDPIServerInfoForDpi.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C015AB04 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 */

__int64 __fastcall InitProcessSystemDpi(__int64 a1)
{
  __int64 v2; // r15
  __int64 ThreadTeb; // rax
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // r15
  BOOL v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // eax
  __int64 result; // rax
  int v15; // [rsp+78h] [rbp+10h] BYREF
  int v16; // [rsp+80h] [rbp+18h] BYREF

  if ( (*(_DWORD *)(a1 + 12) & 0x80u) != 0 )
  {
    ThreadTeb = PsGetThreadTeb(KeGetCurrentThread());
    v4 = ThreadTeb + 0x2000;
    ProbeForRead((volatile void *)(ThreadTeb + 8240), 4uLL, 4u);
    v5 = *(unsigned int *)(v4 + 48);
    ProbeForRead((volatile void *)(unsigned int)v5, 0x480uLL, 4u);
    v2 = *(_QWORD *)(v5 + 480);
  }
  else
  {
    v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 1360LL) + 720LL);
  }
  v6 = v2 & 0x40000000000000LL;
  v7 = v2 & 0x20000000000000LL;
  v8 = 1;
  wil_details_FeatureReporting_ReportUsageToService(
    &Feature_PerProcessSystemDpi__private_reporting,
    5101203LL,
    0LL,
    0LL,
    &Feature_PenTailDockEvents_logged_traits,
    1);
  v16 = 0;
  v15 = 0;
  FastGetProfileDwordEx(0LL, 4LL, L"EnablePerProcessSystemDPI", 0LL, 0, &v16, &v15);
  if ( v6 )
  {
    v8 = 0;
  }
  else if ( !v7 && !v15 )
  {
    v8 = v16 != 0;
  }
  if ( v8 )
  {
    v13 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo(v10, v9, v11, v12) + 96) + 40LL) + 68LL);
    *(_WORD *)(a1 + 284) = v13;
    return GetDPIServerInfoForDpi(v13);
  }
  else
  {
    result = *(unsigned __int16 *)(gpsi + 6998LL);
    *(_WORD *)(a1 + 284) = result;
  }
  return result;
}
