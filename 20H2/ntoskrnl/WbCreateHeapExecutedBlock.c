/*
 * XREFs of WbCreateHeapExecutedBlock @ 0x14065E314
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x14065F79C (WbGetHeapExecutedBlock.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x140262CC0 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     ZwFlushInstructionCache @ 0x1403F9E90 (ZwFlushInstructionCache.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     WbAllocateUserMemory @ 0x14065D5D8 (WbAllocateUserMemory.c)
 *     sub_14065DAC8 @ 0x14065DAC8 (sub_14065DAC8.c)
 *     sub_14065DBBC @ 0x14065DBBC (sub_14065DBBC.c)
 *     sub_14065E8A8 @ 0x14065E8A8 (sub_14065E8A8.c)
 *     WbAlloc @ 0x14065F5FC (WbAlloc.c)
 *     sub_14065F904 @ 0x14065F904 (sub_14065F904.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WbCreateHeapExecutedBlock(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // ebx
  struct wil_details_FeatureReportingCache *v6; // rdx
  struct wil_details_FeatureReportingCache *v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // r9d
  unsigned int v10; // r14d
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  struct wil_details_FeatureReportingCache *v13; // rdx
  struct wil_details_FeatureReportingCache *v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // r9d
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  const void *v19; // rax
  struct wil_details_FeatureReportingCache *v20; // rdx
  struct wil_details_FeatureReportingCache *v21; // rcx
  __int64 v22; // r8
  unsigned int v23; // r9d
  void *v24; // r14
  __int64 v25; // rax
  __int64 v26; // r8
  unsigned __int64 v27; // rax
  __int16 v29; // ax
  __int64 v30; // [rsp+38h] [rbp-A0h]
  __int64 v31; // [rsp+38h] [rbp-A0h]
  int v32; // [rsp+68h] [rbp-70h] BYREF
  int v33; // [rsp+70h] [rbp-68h] BYREF
  int v34; // [rsp+78h] [rbp-60h] BYREF
  __int64 v35; // [rsp+80h] [rbp-58h] BYREF
  void *v36; // [rsp+88h] [rbp-50h] BYREF
  __int64 v37; // [rsp+90h] [rbp-48h]
  char v39; // [rsp+F8h] [rbp+20h] BYREF

  v36 = 0LL;
  v35 = 0LL;
  v39 = 0;
  v37 = (unsigned int)dword_140C53C40;
  v5 = WbAlloc(0x58uLL);
  if ( v5 >= 0 )
  {
    memset(0LL, 0, 0x58uLL);
    MEMORY[0x10] &= ~1u;
    MEMORY[0x50] = 1LL;
    if ( *(_DWORD *)(a2 + 8) == 1 )
    {
      v10 = 248;
    }
    else
    {
      v32 = 3;
      if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(
                           v7,
                           v6,
                           v8,
                           v9,
                           wil_details_ServiceReportingKind_PotentialDeviceUsage)
        && g_wil_details_pfnFeatureLoggingHook )
      {
        g_wil_details_pfnFeatureLoggingHook(
          0xE67B5Au,
          (const struct FEATURE_LOGGED_TRAITS *)&Feature_PdttSupport_logged_traits,
          0LL,
          0,
          (const enum wil_ReportingKind *)&v32,
          0LL,
          0,
          1uLL);
      }
      if ( *(_DWORD *)(a2 + 8) )
      {
        v5 = -1073741811;
        goto LABEL_52;
      }
      v10 = 240;
    }
    v5 = sub_14065DBBC((UCHAR *)(a2 + 16), v10);
    if ( v5 >= 0 )
    {
      v5 = sub_14065E8A8(*(PVOID *)(a2 + 328));
      if ( v5 >= 0 )
      {
        v5 = WbAllocateUserMemory(a1, *(_DWORD *)(a2 + 320), &v36, &v35);
        if ( v5 >= 0 )
        {
          v5 = WbAlloc(*(unsigned int *)(a2 + 320));
          if ( v5 >= 0 )
          {
            v11 = *(unsigned int *)(a2 + 284);
            if ( (_DWORD)v11 )
            {
              v12 = *(_QWORD *)(a2 + 272);
              if ( v12 + v11 > 0x7FFFFFFF0000LL || v12 + v11 < v12 )
              {
                MEMORY[0x7FFFFFFF0000] = 0;
                LODWORD(v11) = *(_DWORD *)(a2 + 284);
              }
            }
            memmove((void *)*(unsigned int *)(a2 + 288), *(const void **)(a2 + 272), (unsigned int)v11);
            if ( *(_DWORD *)(a2 + 8) == 1 )
            {
              if ( *(_DWORD *)(a2 + 284) < 4u )
              {
                v5 = -1073741811;
                goto LABEL_52;
              }
              *(_DWORD *)*(unsigned int *)(a2 + 288) = *(_DWORD *)(a2 + 292);
            }
            else
            {
              v33 = 3;
              if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(
                                   v14,
                                   v13,
                                   v15,
                                   v16,
                                   wil_details_ServiceReportingKind_PotentialDeviceUsage)
                && g_wil_details_pfnFeatureLoggingHook )
              {
                g_wil_details_pfnFeatureLoggingHook(
                  0xE67B5Au,
                  (const struct FEATURE_LOGGED_TRAITS *)&Feature_PdttSupport_logged_traits,
                  0LL,
                  0,
                  (const enum wil_ReportingKind *)&v33,
                  0LL,
                  0,
                  1uLL);
              }
              if ( *(_DWORD *)(a2 + 8) )
              {
                v5 = -1073741811;
                goto LABEL_52;
              }
            }
            v5 = sub_14065DAC8(
                   0,
                   (_BYTE *)*(unsigned int *)(a2 + 288),
                   (char *)*(unsigned int *)(a2 + 288),
                   *(_DWORD *)(a2 + 284),
                   (__int64 *)(a2 + 88),
                   *(_DWORD *)(a2 + 280),
                   (__int128 *)(a2 + 96),
                   v30,
                   &v39);
            if ( v5 >= 0 )
            {
              v5 = sub_14065E8A8(*(PVOID *)(a2 + 272));
              if ( v5 >= 0 )
              {
                v17 = *(_QWORD *)(a2 + 296);
                if ( !v17 )
                  goto LABEL_44;
                v18 = *(unsigned int *)(a2 + 308);
                v19 = *(const void **)(a2 + 296);
                if ( (_DWORD)v18 && (v17 + v18 > 0x7FFFFFFF0000LL || v17 + v18 < v17) )
                {
                  MEMORY[0x7FFFFFFF0000] = 0;
                  LODWORD(v18) = *(_DWORD *)(a2 + 308);
                  v19 = *(const void **)(a2 + 296);
                }
                memmove((void *)*(unsigned int *)(a2 + 312), v19, (unsigned int)v18);
                if ( *(_DWORD *)(a2 + 8) == 1 )
                {
                  if ( *(_DWORD *)(a2 + 308) < 4u )
                  {
                    v5 = -1073741811;
                    goto LABEL_52;
                  }
                  *(_DWORD *)*(unsigned int *)(a2 + 312) = *(_DWORD *)(a2 + 316);
                }
                else
                {
                  v34 = 3;
                  if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(
                                       v21,
                                       v20,
                                       v22,
                                       v23,
                                       wil_details_ServiceReportingKind_PotentialDeviceUsage)
                    && g_wil_details_pfnFeatureLoggingHook )
                  {
                    g_wil_details_pfnFeatureLoggingHook(
                      0xE67B5Au,
                      (const struct FEATURE_LOGGED_TRAITS *)&Feature_PdttSupport_logged_traits,
                      0LL,
                      0,
                      (const enum wil_ReportingKind *)&v34,
                      0LL,
                      0,
                      1uLL);
                  }
                  if ( *(_DWORD *)(a2 + 8) )
                  {
                    v5 = -1073741811;
                    goto LABEL_52;
                  }
                }
                v5 = sub_14065DAC8(
                       0,
                       (_BYTE *)*(unsigned int *)(a2 + 312),
                       (char *)*(unsigned int *)(a2 + 312),
                       *(_DWORD *)(a2 + 308),
                       (__int64 *)(a2 + 88),
                       *(_DWORD *)(a2 + 304),
                       (__int128 *)(a2 + 96),
                       v31,
                       &v39);
                if ( v5 >= 0 )
                {
                  v5 = sub_14065E8A8(*(PVOID *)(a2 + 296));
                  if ( v5 >= 0 )
                  {
LABEL_44:
                    v24 = v36;
                    memmove(v36, 0LL, *(unsigned int *)(a2 + 320));
                    MEMORY[0x40] = *(_QWORD *)a2;
                    MEMORY[0x28] = v24;
                    MEMORY[0x18] = v35 + *(unsigned int *)(a2 + 288);
                    v25 = *(unsigned int *)(a2 + 312);
                    if ( (_DWORD)v25 )
                      MEMORY[0x20] = v35 + v25;
                    else
                      MEMORY[0x20] = 0LL;
                    MEMORY[0x48] = *(_DWORD *)(a2 + 320);
                    MEMORY[0x30] = *(_QWORD *)(a2 + 272);
                    v26 = *(_QWORD *)(a2 + 272) - MEMORY[0x18];
                    MEMORY[0x38] = v26;
                    v27 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
                    if ( v27 && ((v29 = *(_WORD *)(v27 + 8), v29 == 332) || v29 == 452) )
                      *MEMORY[0x28] = MEMORY[0x40];
                    else
                      *MEMORY[0x28] = v26;
                    *(_QWORD *)(MEMORY[0x28] + 8LL) = v37;
                    v5 = ZwFlushInstructionCache(
                           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                           MEMORY[0x18],
                           *(unsigned int *)(a2 + 284));
                    if ( v5 >= 0 )
                    {
                      if ( !*(_QWORD *)(a2 + 296)
                        || (v5 = ZwFlushInstructionCache(
                                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                                   MEMORY[0x20],
                                   *(unsigned int *)(a2 + 308)),
                            v5 >= 0) )
                      {
                        if ( a3 )
                          *a3 = 0LL;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_52:
  sub_14065F904(a1, 0LL);
  return (unsigned int)v5;
}
