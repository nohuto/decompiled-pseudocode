/*
 * XREFs of WbCreateHeapExecutedBlock @ 0x1406D8EB0
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x140619C48 (WbGetHeapExecutedBlock.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x14026AB40 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     ZwFlushInstructionCache @ 0x1403F52C0 (ZwFlushInstructionCache.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     WbAlloc @ 0x140619AA8 (WbAlloc.c)
 *     sub_140619DB0 @ 0x140619DB0 (sub_140619DB0.c)
 *     sub_1406D9444 @ 0x1406D9444 (sub_1406D9444.c)
 *     sub_1406D9554 @ 0x1406D9554 (sub_1406D9554.c)
 *     WbAllocateUserMemory @ 0x1406D9648 (WbAllocateUserMemory.c)
 *     sub_1406D9B38 @ 0x1406D9B38 (sub_1406D9B38.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WbCreateHeapExecutedBlock(__int64 a1, __int64 a2, void **a3)
{
  int v5; // ebx
  _DWORD *v6; // rbx
  struct wil_details_FeatureReportingCache *v7; // rdx
  struct wil_details_FeatureReportingCache *v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // r9d
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
  _QWORD *v25; // rbx
  _QWORD *v26; // r10
  _QWORD *v27; // rdx
  PVOID *v28; // r9
  __int64 v29; // rax
  PVOID *v30; // r14
  _QWORD *v31; // rbx
  __int64 v32; // r8
  unsigned __int64 v33; // rax
  __int16 v35; // ax
  void *Src; // [rsp+58h] [rbp-80h] BYREF
  void *v37; // [rsp+60h] [rbp-78h] BYREF
  int v38; // [rsp+68h] [rbp-70h] BYREF
  int v39; // [rsp+70h] [rbp-68h] BYREF
  int v40; // [rsp+78h] [rbp-60h] BYREF
  __int64 v41; // [rsp+80h] [rbp-58h] BYREF
  void *v42; // [rsp+88h] [rbp-50h] BYREF
  __int64 v43; // [rsp+90h] [rbp-48h]

  v37 = 0LL;
  v42 = 0LL;
  v41 = 0LL;
  Src = 0LL;
  v43 = (unsigned int)dword_140C53BC0;
  v5 = WbAlloc(0x58uLL, &v37);
  if ( v5 >= 0 )
  {
    v6 = v37;
    memset(v37, 0, 0x58uLL);
    v6[4] &= ~1u;
    *((_QWORD *)v6 + 10) = 1LL;
    if ( *(_DWORD *)(a2 + 8) == 1 )
      goto LABEL_5;
    v38 = 3;
    if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(
                         v8,
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
        (const enum wil_ReportingKind *)&v38,
        0LL,
        0,
        1uLL);
    }
    if ( *(_DWORD *)(a2 + 8) )
    {
      v5 = -1073741811;
    }
    else
    {
LABEL_5:
      v5 = sub_1406D9B38((void *)(a2 + 16));
      if ( v5 >= 0 )
      {
        v5 = sub_1406D9444(*(PVOID *)(a2 + 328));
        if ( v5 >= 0 )
        {
          v5 = WbAllocateUserMemory(a1, *(unsigned int *)(a2 + 320), &v42, &v41);
          if ( v5 >= 0 )
          {
            v5 = WbAlloc(*(unsigned int *)(a2 + 320), &Src);
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
              memmove((char *)Src + *(unsigned int *)(a2 + 288), *(const void **)(a2 + 272), (unsigned int)v11);
              if ( *(_DWORD *)(a2 + 8) == 1 )
              {
                if ( *(_DWORD *)(a2 + 284) < 4u )
                {
                  v5 = -1073741811;
                  goto LABEL_51;
                }
                *(_DWORD *)((char *)Src + *(unsigned int *)(a2 + 288)) = *(_DWORD *)(a2 + 292);
              }
              else
              {
                v39 = 3;
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
                    (const enum wil_ReportingKind *)&v39,
                    0LL,
                    0,
                    1uLL);
                }
                if ( *(_DWORD *)(a2 + 8) )
                {
                  v5 = -1073741811;
                  goto LABEL_51;
                }
              }
              v5 = sub_1406D9554(
                     0,
                     (int)Src + *(_DWORD *)(a2 + 288),
                     (int)Src + *(_DWORD *)(a2 + 288),
                     *(_DWORD *)(a2 + 284),
                     a2 + 88,
                     *(_DWORD *)(a2 + 280),
                     a2 + 96);
              if ( v5 >= 0 )
              {
                v5 = sub_1406D9444(*(PVOID *)(a2 + 272));
                if ( v5 >= 0 )
                {
                  v17 = *(_QWORD *)(a2 + 296);
                  if ( !v17 )
                    goto LABEL_43;
                  v18 = *(unsigned int *)(a2 + 308);
                  v19 = *(const void **)(a2 + 296);
                  if ( (_DWORD)v18 && (v17 + v18 > 0x7FFFFFFF0000LL || v17 + v18 < v17) )
                  {
                    MEMORY[0x7FFFFFFF0000] = 0;
                    LODWORD(v18) = *(_DWORD *)(a2 + 308);
                    v19 = *(const void **)(a2 + 296);
                  }
                  memmove((char *)Src + *(unsigned int *)(a2 + 312), v19, (unsigned int)v18);
                  if ( *(_DWORD *)(a2 + 8) == 1 )
                  {
                    if ( *(_DWORD *)(a2 + 308) < 4u )
                    {
                      v5 = -1073741811;
                      goto LABEL_51;
                    }
                    *(_DWORD *)((char *)Src + *(unsigned int *)(a2 + 312)) = *(_DWORD *)(a2 + 316);
                  }
                  else
                  {
                    v40 = 3;
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
                        (const enum wil_ReportingKind *)&v40,
                        0LL,
                        0,
                        1uLL);
                    }
                    if ( *(_DWORD *)(a2 + 8) )
                    {
                      v5 = -1073741811;
                      goto LABEL_51;
                    }
                  }
                  v5 = sub_1406D9554(
                         0,
                         (int)Src + *(_DWORD *)(a2 + 312),
                         (int)Src + *(_DWORD *)(a2 + 312),
                         *(_DWORD *)(a2 + 308),
                         a2 + 88,
                         *(_DWORD *)(a2 + 304),
                         a2 + 96);
                  if ( v5 >= 0 )
                  {
                    v5 = sub_1406D9444(*(PVOID *)(a2 + 296));
                    if ( v5 >= 0 )
                    {
LABEL_43:
                      v24 = v42;
                      memmove(v42, Src, *(unsigned int *)(a2 + 320));
                      v25 = v37;
                      v26 = (char *)v37 + 64;
                      *((_QWORD *)v37 + 8) = *(_QWORD *)a2;
                      v27 = v25 + 5;
                      v25[5] = v24;
                      v28 = (PVOID *)(v25 + 3);
                      v25[3] = v41 + *(unsigned int *)(a2 + 288);
                      v29 = *(unsigned int *)(a2 + 312);
                      v30 = (PVOID *)(v25 + 4);
                      if ( (_DWORD)v29 )
                        v25[4] = v41 + v29;
                      else
                        v25[4] = 0LL;
                      v31 = v37;
                      *((_DWORD *)v37 + 18) = *(_DWORD *)(a2 + 320);
                      v31[6] = *(_QWORD *)(a2 + 272);
                      v32 = *(_QWORD *)(a2 + 272) - (_QWORD)*v28;
                      v31[7] = v32;
                      v33 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
                      if ( v33 && ((v35 = *(_WORD *)(v33 + 8), v35 == 332) || v35 == 452) )
                        *(_QWORD *)*v27 = *v26;
                      else
                        *(_QWORD *)*v27 = v32;
                      *(_QWORD *)(*v27 + 8LL) = v43;
                      v5 = ZwFlushInstructionCache((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v28, *(unsigned int *)(a2 + 284));
                      if ( v5 >= 0 )
                      {
                        if ( !*(_QWORD *)(a2 + 296)
                          || (v5 = ZwFlushInstructionCache(
                                     (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                                     *v30,
                                     *(unsigned int *)(a2 + 308)),
                              v5 >= 0) )
                        {
                          if ( a3 )
                          {
                            *a3 = v37;
                            v37 = 0LL;
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
    }
  }
LABEL_51:
  sub_140619DB0(a1, (__int64)v37);
  if ( Src )
    ExFreePoolWithTag(Src, 0x42524157u);
  return (unsigned int)v5;
}
