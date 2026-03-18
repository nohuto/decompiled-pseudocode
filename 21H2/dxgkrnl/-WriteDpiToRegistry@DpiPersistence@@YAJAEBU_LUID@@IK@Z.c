/*
 * XREFs of ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C02FA574
 * Callers:
 *     ?DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z @ 0x1C02FA214 (-DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z.c)
 *     DxgkUpdateDpiInfoForNewOverride @ 0x1C02FA820 (DxgkUpdateDpiInfoForNewOverride.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z @ 0x1C0019B80 (-GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C01D62B8 (-WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C01D698C (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DpiPersistence::WriteDpiToRegistry(
        struct _LUID *this,
        const struct _LUID *a2,
        int a3,
        struct _UNICODE_STRING *a4)
{
  __int64 v5; // rdi
  const struct _UNICODE_STRING *v6; // r9
  int v7; // eax
  __int64 v8; // rcx
  DXGSESSIONMGR *v9; // rbx
  unsigned int v10; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  const struct _UNICODE_STRING *v14; // r9
  int v15; // eax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned __int16 *v20; // [rsp+28h] [rbp-29h]
  unsigned __int16 *v21; // [rsp+28h] [rbp-29h]
  struct _UNICODE_STRING v22; // [rsp+58h] [rbp+7h] BYREF
  struct _UNICODE_STRING v23; // [rsp+68h] [rbp+17h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp+27h] BYREF
  struct _UNICODE_STRING v25; // [rsp+88h] [rbp+37h] BYREF
  struct _UNICODE_STRING v26; // [rsp+98h] [rbp+47h] BYREF

  v22 = 0LL;
  LODWORD(v5) = DpiPersistence::AllocateMonitorSetIdFromAdapterSource(this, a2, &v22, a4);
  if ( (int)v5 >= 0 )
  {
    DestinationString = 0LL;
    v23 = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&v23, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    LODWORD(v20) = a3;
    v7 = DpiPersistence::WriteDwordToParticularRegValue(&DestinationString, &v23, &v22, v6, v20);
    v5 = v7;
    if ( v7 < 0 )
    {
      WdLogSingleEntry1(2LL, v7);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to write DPI value to HKLM. Writing to HKCU anyway. (Status = 0x%I64x)",
        v5,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v9 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
    if ( v9
      && (v10 = PsGetCurrentProcessSessionId(v8),
          (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v9, v10)) != 0LL) )
    {
      v25 = 0LL;
      v26 = *DXGSESSIONDATA::GetUserRegistryPath(SessionDataForSpecifiedSession, 0, v12, v13);
      if ( _mm_srli_si128((__m128i)v26, 8).m128i_u64[0] )
      {
        RtlInitUnicodeString(&v25, L"Control Panel\\Desktop\\PerMonitorSettings\\");
        LODWORD(v21) = a3;
        v15 = DpiPersistence::WriteDwordToParticularRegValue(&v26, &v25, &v22, v14, v21);
        v5 = v15;
        if ( v15 < 0 )
        {
          WdLogSingleEntry1(2LL, v15);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to write DPI value to HKCU. (Status = 0x%I64x)",
            v5,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        if ( v26.Length )
        {
          WdLogSingleEntry1(1LL, 774LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"HKCURootName.Length == 0", 774LL, 0LL, 0LL, 0LL, 0LL);
        }
        WdLogSingleEntry1(3LL, 775LL);
      }
    }
    else
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
      LODWORD(v5) = -1073741811;
      WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
      v18 = PsGetCurrentProcessSessionId(v17);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
        v18,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
    }
  }
  operator delete[](v22.Buffer);
  return (unsigned int)v5;
}
