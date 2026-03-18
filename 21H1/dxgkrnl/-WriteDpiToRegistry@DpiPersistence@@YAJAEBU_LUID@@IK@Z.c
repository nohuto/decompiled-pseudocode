/*
 * XREFs of ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C02A4D5C
 * Callers:
 *     ?DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z @ 0x1C02A48A0 (-DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z.c)
 *     DxgkUpdateDpiInfoForNewOverride @ 0x1C02A4F70 (DxgkUpdateDpiInfoForNewOverride.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C0138CD8 (-WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C0139220 (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
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
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  DXGSESSIONMGR *v13; // rbx
  __int64 v14; // r8
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  const struct _UNICODE_STRING *v22; // r9
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int16 *v27; // [rsp+20h] [rbp-60h]
  unsigned __int16 *v28; // [rsp+20h] [rbp-60h]
  struct _UNICODE_STRING v29; // [rsp+30h] [rbp-50h] BYREF
  struct _UNICODE_STRING v30; // [rsp+40h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  struct _UNICODE_STRING v32; // [rsp+60h] [rbp-20h] BYREF
  struct _UNICODE_STRING v33; // [rsp+70h] [rbp-10h] BYREF

  v29 = 0LL;
  LODWORD(v5) = DpiPersistence::AllocateMonitorSetIdFromAdapterSource(this, a2, &v29, a4);
  if ( (int)v5 >= 0 )
  {
    DestinationString = 0LL;
    v30 = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&v30, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    LODWORD(v27) = a3;
    v7 = DpiPersistence::WriteDwordToParticularRegValue(&DestinationString, &v30, &v29, v6, v27);
    v5 = v7;
    if ( v7 < 0 )
    {
      v10 = WdLogNewEntry5_WdError(v9, v8);
      *(_QWORD *)(v10 + 24) = v5;
      WdLogEvent5_WdError(v10);
    }
    v13 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v9, v8) + 88);
    if ( v13 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v12);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v13, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( !SessionDataForSpecifiedSession )
    {
      v17 = WdLogNewEntry5_WdError(v12, v11);
      LODWORD(v5) = -1073741811;
      *(_QWORD *)(v17 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v18);
      v19 = v17;
      *(_QWORD *)(v17 + 32) = -1073741811LL;
LABEL_15:
      WdLogEvent5_WdError(v19);
      goto LABEL_16;
    }
    v32 = 0LL;
    v33 = (struct _UNICODE_STRING)*((_OWORD *)SessionDataForSpecifiedSession + 1169);
    if ( _mm_srli_si128((__m128i)v33, 8).m128i_u64[0] )
    {
      RtlInitUnicodeString(&v32, L"Control Panel\\Desktop\\PerMonitorSettings\\");
      LODWORD(v28) = a3;
      v23 = DpiPersistence::WriteDwordToParticularRegValue(&v33, &v32, &v29, v22, v28);
      v5 = v23;
      if ( v23 < 0 )
      {
        v19 = WdLogNewEntry5_WdError(v25, v24);
        *(_QWORD *)(v19 + 24) = v5;
        goto LABEL_15;
      }
    }
    else
    {
      if ( v33.Length )
      {
        v20 = WdLogNewEntry5_WdAssertion(v12, v11);
        *(_QWORD *)(v20 + 24) = 772LL;
        WdLogEvent5_WdAssertion(v20);
      }
      v21 = WdLogNewEntry5_WdWarning(v12, v11, v14);
      *(_QWORD *)(v21 + 24) = 773LL;
      WdLogEvent5_WdWarning(v21);
    }
  }
LABEL_16:
  operator delete[](v29.Buffer);
  return (unsigned int)v5;
}
