/*
 * XREFs of InitProcessSystemDpi @ 0x1C0061490
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C006165C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     GetDPIServerInfoForDpi @ 0x1C0061810 (GetDPIServerInfoForDpi.c)
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
  unsigned int v11; // eax
  __int64 result; // rax
  int v13; // [rsp+78h] [rbp+10h] BYREF
  int v14; // [rsp+80h] [rbp+18h] BYREF

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
    (unsigned int)&Feature_PerProcessSystemDpi__private_reporting,
    5101203,
    0,
    0,
    (__int64)&Feature_PenTailDockEvents_logged_traits,
    1);
  v14 = 0;
  v13 = 0;
  FastGetProfileDwordEx(0LL, 4LL, L"EnablePerProcessSystemDPI", 0LL, 0, &v14, &v13);
  if ( v6 )
  {
    v8 = 0;
  }
  else if ( !v7 && !v13 )
  {
    v8 = v14 != 0;
  }
  if ( v8 )
  {
    v11 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo(v10, v9) + 96) + 40LL) + 68LL);
    *(_WORD *)(a1 + 284) = v11;
    return GetDPIServerInfoForDpi(v11);
  }
  else
  {
    result = *(unsigned __int16 *)(gpsi + 6998LL);
    *(_WORD *)(a1 + 284) = result;
  }
  return result;
}
