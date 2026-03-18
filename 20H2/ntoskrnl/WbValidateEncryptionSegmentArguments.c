/*
 * XREFs of WbValidateEncryptionSegmentArguments @ 0x1405D43A0
 * Callers:
 *     WbGetInitializedEncryptionSegment @ 0x1405D404C (WbGetInitializedEncryptionSegment.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x140262CC0 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     WbAlloc @ 0x14065F5FC (WbAlloc.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WbValidateEncryptionSegmentArguments(__int64 a1, unsigned int a2, _OWORD *a3, __int64 a4)
{
  struct wil_details_FeatureReportingCache *v7; // rdx
  int v8; // ebx
  __int64 v9; // r8
  unsigned int v10; // r9d
  _OWORD *v11; // rax
  _OWORD *v12; // rax
  int v13; // esi
  _OWORD *v15; // rax
  _OWORD *v16; // rax
  PVOID P[2]; // [rsp+68h] [rbp-40h]
  int v18; // [rsp+B8h] [rbp+10h] BYREF

  *(_OWORD *)P = 0LL;
  if ( a2 < 0x10 )
    goto LABEL_16;
  v8 = WbAlloc(0xF4uLL);
  if ( v8 < 0 )
    goto LABEL_11;
  v11 = *(_OWORD **)(a1 + 8);
  if ( (unsigned __int64)v11 + 244 > 0x7FFFFFFF0000LL || (_OWORD *)((char *)v11 + 244) < v11 )
  {
    MEMORY[0x7FFFFFFF0000] = 0;
    v11 = *(_OWORD **)(a1 + 8);
  }
  MEMORY[0] = *v11;
  MEMORY[0x10] = v11[1];
  MEMORY[0x20] = v11[2];
  MEMORY[0x30] = v11[3];
  MEMORY[0x40] = v11[4];
  MEMORY[0x50] = v11[5];
  MEMORY[0x60] = v11[6];
  MEMORY[0x70] = v11[7];
  v12 = v11 + 8;
  MEMORY[0x80] = *v12;
  MEMORY[0x90] = v12[1];
  MEMORY[0xA0] = v12[2];
  MEMORY[0xB0] = v12[3];
  MEMORY[0xC0] = v12[4];
  MEMORY[0xD0] = v12[5];
  MEMORY[0xE0] = v12[6];
  MEMORY[0xF0] = *((_DWORD *)v12 + 28);
  v13 = MEMORY[0x24] & 0xF;
  LODWORD(P[0]) = v13;
  HIDWORD(P[0]) = MEMORY[0x24] >> 4;
  if ( v13 != 1 )
  {
    v18 = 3;
    if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(
                         0LL,
                         v7,
                         v9,
                         v10,
                         wil_details_ServiceReportingKind_PotentialDeviceUsage)
      && g_wil_details_pfnFeatureLoggingHook )
    {
      g_wil_details_pfnFeatureLoggingHook(
        0xE67B5Au,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_PdttSupport_logged_traits,
        0LL,
        0,
        (const enum wil_ReportingKind *)&v18,
        0LL,
        0,
        1uLL);
    }
    if ( !v13 )
      goto LABEL_9;
LABEL_16:
    v8 = -1073741811;
    goto LABEL_11;
  }
  ExFreePoolWithTag(0LL, 0x42524157u);
  P[1] = 0LL;
  v8 = WbAlloc(0xF8uLL);
  if ( v8 < 0 )
    goto LABEL_11;
  v15 = *(_OWORD **)(a1 + 8);
  if ( (unsigned __int64)v15 + 248 > 0x7FFFFFFF0000LL || (_OWORD *)((char *)v15 + 248) < v15 )
  {
    MEMORY[0x7FFFFFFF0000] = 0;
    v15 = *(_OWORD **)(a1 + 8);
  }
  MEMORY[0] = *v15;
  MEMORY[0x10] = v15[1];
  MEMORY[0x20] = v15[2];
  MEMORY[0x30] = v15[3];
  MEMORY[0x40] = v15[4];
  MEMORY[0x50] = v15[5];
  MEMORY[0x60] = v15[6];
  MEMORY[0x70] = v15[7];
  v16 = v15 + 8;
  MEMORY[0x80] = *v16;
  MEMORY[0x90] = v16[1];
  MEMORY[0xA0] = v16[2];
  MEMORY[0xB0] = v16[3];
  MEMORY[0xC0] = v16[4];
  MEMORY[0xD0] = v16[5];
  MEMORY[0xE0] = v16[6];
  MEMORY[0xF0] = *((_QWORD *)v16 + 14);
LABEL_9:
  *(_DWORD *)(a4 + 8) = *((_DWORD *)P[1] + 16);
  *(_QWORD *)a4 = *(_QWORD *)(a1 + 8) - (*((_DWORD *)P[1] + 10) & 0xFFFFFFF);
  if ( a3 )
  {
    *a3 = *(_OWORD *)P;
    P[1] = 0LL;
  }
LABEL_11:
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x42524157u);
  return (unsigned int)v8;
}
