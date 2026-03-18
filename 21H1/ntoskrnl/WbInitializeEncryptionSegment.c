/*
 * XREFs of WbInitializeEncryptionSegment @ 0x1405CD390
 * Callers:
 *     WbGetInitializedEncryptionSegment @ 0x1405CC7D8 (WbGetInitializedEncryptionSegment.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1402D44E0 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     RtlCompareMemory @ 0x1403FE5E0 (RtlCompareMemory.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     sub_14065C2B0 @ 0x14065C2B0 (sub_14065C2B0.c)
 *     sub_14065CF98 @ 0x14065CF98 (sub_14065CF98.c)
 *     WbAlloc @ 0x14065F1C8 (WbAlloc.c)
 */

__int64 __fastcall WbInitializeEncryptionSegment(
        int *a1,
        struct wil_details_FeatureReportingCache *a2,
        __int64 a3,
        unsigned int a4)
{
  int v6; // ebx
  unsigned __int64 v7; // rax
  unsigned int v8; // ecx
  signed int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // r14d
  int v12; // eax
  SIZE_T v13; // r13
  void **v14; // r15
  struct wil_details_FeatureReportingCache *v15; // rbx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  struct wil_details_FeatureReportingCache *v18; // rdx
  struct wil_details_FeatureReportingCache *v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // r9d
  struct wil_details_FeatureReportingCache *v22; // rdx
  __int64 v23; // r8
  unsigned int v24; // r9d
  struct wil_details_FeatureReportingCache *v25; // rcx
  enum wil_ReportingKind v26; // ecx
  int v27; // eax
  unsigned int v28; // eax
  void *v29; // rdx
  const void *v30; // r15
  void *v31; // rax
  unsigned int v32; // r14d
  unsigned __int64 v33; // rcx
  unsigned __int64 v35; // r9
  unsigned int v36; // ecx
  unsigned int v37; // eax
  int v38; // [rsp+60h] [rbp-78h] BYREF
  enum wil_ReportingKind v39[4]; // [rsp+68h] [rbp-70h] BYREF
  void *Source1; // [rsp+78h] [rbp-60h]
  unsigned int v41; // [rsp+80h] [rbp-58h]
  const void *v42; // [rsp+90h] [rbp-48h]
  int v43; // [rsp+E0h] [rbp+8h] BYREF
  struct wil_details_FeatureReportingCache *v44; // [rsp+E8h] [rbp+10h]
  __int64 v45; // [rsp+F0h] [rbp+18h]
  unsigned int v46; // [rsp+F8h] [rbp+20h]

  v45 = a3;
  v44 = a2;
  v6 = *a1;
  if ( *a1 == 1 )
  {
    Source1 = (void *)*((_QWORD *)a1 + 1);
    v35 = 16LL * *((unsigned int *)Source1 + 60);
    v36 = -1;
    if ( v35 <= 0xFFFFFFFF )
      v36 = 16 * *((_DWORD *)Source1 + 60);
    v46 = v36;
    v9 = v35 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v35 > 0xFFFFFFFF )
      goto LABEL_46;
    v37 = v36 + 248;
    v11 = -1;
    if ( v36 + 248 >= v36 )
      v11 = v36 + 248;
    v9 = v37 < v36 ? 0xC0000095 : 0;
    if ( v37 < v36 )
      goto LABEL_46;
    v12 = 1;
    v13 = 248LL;
  }
  else
  {
    v43 = 3;
    if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(
                         (struct wil_details_FeatureReportingCache *)a1,
                         a2,
                         a3,
                         a4,
                         wil_details_ServiceReportingKind_PotentialDeviceUsage)
      && g_wil_details_pfnFeatureLoggingHook )
    {
      g_wil_details_pfnFeatureLoggingHook(
        0xE67B5Au,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_PdttSupport_logged_traits,
        0LL,
        0,
        (const enum wil_ReportingKind *)&v43,
        0LL,
        0,
        1uLL);
    }
    if ( v6 )
    {
      v9 = -1073741811;
      goto LABEL_46;
    }
    Source1 = (void *)*((_QWORD *)a1 + 1);
    v7 = 12LL * *((unsigned int *)Source1 + 60);
    v8 = -1;
    if ( v7 <= 0xFFFFFFFF )
      v8 = 12 * *((_DWORD *)Source1 + 60);
    v46 = v8;
    v9 = v7 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v7 > 0xFFFFFFFF )
      goto LABEL_46;
    v10 = v8 + 244;
    v11 = -1;
    if ( v8 + 244 >= v8 )
      v11 = v8 + 244;
    v9 = v10 < v8 ? 0xC0000095 : 0;
    if ( v10 < v8 )
      goto LABEL_46;
    v12 = 0;
    v13 = 244LL;
  }
  *(_DWORD *)(a3 + 48) = v12;
  *(_DWORD *)(a3 + 52) = a1[1];
  v14 = (void **)(a3 + 56);
  v9 = WbAlloc(v11);
  if ( v9 >= 0 )
  {
    v15 = v44;
    if ( v11 )
    {
      v16 = (unsigned __int64)v44[1];
      v17 = v16 + v11;
      if ( v17 > 0x7FFFFFFF0000LL || v17 < v16 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(*v14, *(const void **)&v44[1], v11);
    v9 = sub_14065CF98(*(PVOID *)&v15[1]);
    if ( v9 >= 0 )
    {
      v9 = sub_14065C2B0(*v14);
      if ( v9 >= 0 )
      {
        if ( RtlCompareMemory(Source1, *v14, v13) != v13 )
        {
          v9 = -1073741811;
          goto LABEL_46;
        }
        if ( *(_DWORD *)(a3 + 48) == 1 )
        {
          v29 = *v14;
          *(_QWORD *)(a3 + 32) = *(_QWORD *)&v44[1] - (*((_DWORD *)*v14 + 10) & 0xFFFFFFF);
          v26 = *((_DWORD *)v29 + 12);
          v27 = *((_DWORD *)v29 + 11);
        }
        else
        {
          v38 = 3;
          if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(
                               v19,
                               v18,
                               v20,
                               v21,
                               wil_details_ServiceReportingKind_PotentialDeviceUsage)
            && g_wil_details_pfnFeatureLoggingHook )
          {
            g_wil_details_pfnFeatureLoggingHook(
              0xE67B5Au,
              (const struct FEATURE_LOGGED_TRAITS *)&Feature_PdttSupport_logged_traits,
              0LL,
              0,
              (const enum wil_ReportingKind *)&v38,
              0LL,
              0,
              1uLL);
          }
          if ( *(_DWORD *)(a3 + 48) )
          {
            v9 = -1073741811;
            goto LABEL_46;
          }
          v25 = (struct wil_details_FeatureReportingCache *)(*((_DWORD *)*v14 + 10) & 0xFFFFFFF);
          *(_QWORD *)(a3 + 32) = *(_QWORD *)&v44[1] - (_QWORD)v25;
          v39[0] = wil_ReportingKind_DeviceUsage;
          if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(
                               v25,
                               v22,
                               v23,
                               v24,
                               wil_details_ServiceReportingKind_PotentialDeviceUsage)
            && g_wil_details_pfnFeatureLoggingHook )
          {
            g_wil_details_pfnFeatureLoggingHook(
              0xE67B5Au,
              (const struct FEATURE_LOGGED_TRAITS *)&Feature_PdttSupport_logged_traits,
              0LL,
              0,
              v39,
              0LL,
              0,
              1uLL);
          }
          if ( *(_DWORD *)(a3 + 48) )
          {
            v9 = -1073741811;
            goto LABEL_46;
          }
          v26 = *((_DWORD *)*v14 + 12);
          v27 = *((_DWORD *)*v14 + 11);
        }
        v39[2] = v26;
        v28 = v27 & 0xFFFFFFF;
        if ( v26 == wil_ReportingKind_None )
          goto LABEL_25;
        v30 = (const void *)(*(_QWORD *)(a3 + 32) + v28);
        v42 = v30;
        v31 = (void *)(4LL * (unsigned int)v26);
        Source1 = v31;
        v32 = -1;
        if ( (unsigned __int64)v31 <= 0xFFFFFFFF )
          v32 = 4 * v26;
        v41 = v32;
        v9 = (unsigned __int64)v31 > 0xFFFFFFFF ? 0xC0000095 : 0;
        if ( (unsigned __int64)v31 <= 0xFFFFFFFF )
        {
          if ( v32 )
          {
            v33 = (unsigned __int64)v30 + v32;
            if ( v33 > 0x7FFFFFFF0000LL || v33 < (unsigned __int64)v30 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          v9 = WbAlloc(v32);
          if ( v9 >= 0 )
          {
            memmove(*(void **)(a3 + 40), v30, v32);
LABEL_25:
            *(_DWORD *)(a3 + 16) = 1;
          }
        }
      }
    }
  }
LABEL_46:
  *(_DWORD *)(a3 + 20) = v9;
  return (unsigned int)v9;
}
