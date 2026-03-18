/*
 * XREFs of DrvFunctionalizeDisplayConfig @ 0x1C0148B94
 * Callers:
 *     NtUserFunctionalizeDisplayConfig @ 0x1C0130C10 (NtUserFunctionalizeDisplayConfig.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x1C006C5AC (--0AUTO_TGO@@IEAA@XZ.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087050 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1C00D3AF0 (DrvSetDisplayConfigValidateParams.c)
 *     _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C0144188 (_DrvFunctionalizeDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C014436C (-AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_G.c)
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C014497C (-ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPAT.c)
 *     ?FunctionalizeDisplayConfigRemoveUnownedPaths@@YAXPEAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0146A20 (-FunctionalizeDisplayConfigRemoveUnownedPaths@@YAXPEAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C01470F8 (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 */

__int64 __fastcall DrvFunctionalizeDisplayConfig(
        unsigned int *a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  __int64 v6; // r14
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v8; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  int PathModalityForDisplayConfig; // ebx
  int v20; // r13d
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned int v24; // r12d
  unsigned int v25; // ebx
  struct D3DKMT_GETPATHSMODALITY *v26; // rdx
  __int64 v27; // rax
  int v28; // eax
  struct D3DKMT_GETPATHSMODALITY *v29[6]; // [rsp+50h] [rbp-29h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v30[2]; // [rsp+80h] [rbp+7h] BYREF
  bool v32; // [rsp+E0h] [rbp+67h] BYREF

  v6 = (unsigned int)a3;
  v8 = a2;
  if ( (a3 & 0xFFFFFFF8) != 0 )
  {
    v10 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v10 + 24) = v6;
    WdLogEvent5_WdError(v10, v11);
    return 3221225485LL;
  }
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  AUTO_TGO::AUTO_TGO((AUTO_TGO *)v29);
  v16 = *a1;
  v29[0] = (struct D3DKMT_GETPATHSMODALITY *)&off_1C0204560;
  *(_OWORD *)v30 = 0LL;
  if ( (v6 & 1) != 0 )
  {
    if ( (unsigned int)v16 < 2 )
    {
LABEL_5:
      v17 = WdLogNewEntry5_WdError(v14, v13, v15);
      *(_QWORD *)(v17 + 24) = v16;
LABEL_21:
      WdLogEvent5_WdError(v17, v18);
      PathModalityForDisplayConfig = -1073741811;
      goto LABEL_35;
    }
    v8 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)((char *)v8 + 200);
    LODWORD(v16) = v16 - 1;
  }
  else
  {
    if ( !(_DWORD)v16 )
      goto LABEL_5;
    if ( (v6 & 2) != 0 )
    {
      v17 = WdLogNewEntry5_WdError(v14, v13, v15);
      *(_QWORD *)(v17 + 24) = v6;
      goto LABEL_21;
    }
  }
  PathModalityForDisplayConfig = DrvSetDisplayConfigValidateParams((unsigned int)v16, v8, a4 != 0 ? 98400 : 32864, 0, 1);
  if ( PathModalityForDisplayConfig >= 0 )
  {
    if ( a4 )
    {
      PathModalityForDisplayConfig = ((__int64 (__fastcall *)(__int64, __int64, struct D3DKMT_GETPATHSMODALITY **))qword_1C024AB18)(
                                       a4,
                                       0x20000LL,
                                       &v30[1]);
      if ( PathModalityForDisplayConfig < 0 )
        goto LABEL_35;
      a6 = 0;
      v20 = v6 & 4;
      PathModalityForDisplayConfig = SetDisplayConfigHandleBrokerProvidedPaths(
                                       (__int64)v30[1],
                                       v20 != 0,
                                       v16,
                                       v8,
                                       v30,
                                       &v32,
                                       (enum _DXGK_DIAG_SDC_STAGE *)&a6);
      if ( PathModalityForDisplayConfig < 0 )
        goto LABEL_35;
    }
    else
    {
      PathModalityForDisplayConfig = AllocatePathModalityForDisplayConfig((unsigned int)v16, v8, v30);
      if ( PathModalityForDisplayConfig < 0 )
        goto LABEL_35;
      PathModalityForDisplayConfig = ConvertDisplayConfigToPathModality((unsigned int)v16, v8, v30[0], 0LL);
      if ( PathModalityForDisplayConfig < 0 )
        goto LABEL_35;
      v20 = v6 & 4;
    }
    v24 = a4 != 0 ? 0x1000000 : 0;
    if ( (v6 & 1) != 0 )
    {
      v25 = *((_DWORD *)v8 - 46);
      if ( v25 >= (unsigned int)v16 )
      {
        v17 = WdLogNewEntry5_WdError(v22, v21, v23);
        *(_QWORD *)(v17 + 24) = *((unsigned int *)v8 - 46);
        goto LABEL_21;
      }
      v26 = v30[0];
      if ( a4 )
      {
        if ( *((unsigned __int16 *)v30[0] + 10) < (unsigned int)v16 )
        {
          v27 = WdLogNewEntry5_WdAssertion(v22, v30[0]);
          WdLogEvent5_WdAssertion(v27);
          v26 = v30[0];
        }
        v25 += *((unsigned __int16 *)v26 + 10) - (_DWORD)v16;
      }
      if ( (v6 & 2) != 0 )
      {
        *((_QWORD *)v26 + 34 * v25 + 6) |= 0x4000000000uLL;
        v26 = v30[0];
      }
      v28 = ((__int64 (__fastcall *)(_QWORD, struct D3DKMT_GETPATHSMODALITY *, _QWORD, char *, char *))qword_1C024AB08)(
              v24,
              v26,
              v25,
              (char *)v8 - 176,
              (char *)v8 - 180);
    }
    else
    {
      PathModalityForDisplayConfig = ((__int64 (__fastcall *)(_QWORD, struct D3DKMT_GETPATHSMODALITY *))qword_1C024A8B8)(
                                       v24 | 0x8000,
                                       v30[0]);
      if ( PathModalityForDisplayConfig < 0 )
        goto LABEL_35;
      if ( a4 && !v20 )
        FunctionalizeDisplayConfigRemoveUnownedPaths(v30[1], v30[0]);
      v28 = ((__int64 (__fastcall *)(struct D3DKMT_GETPATHSMODALITY *, unsigned int *, struct DISPLAYCONFIG_PATH_INFO_INTERNAL *, __int64))qword_1C024AAE8)(
              v30[0],
              a1,
              v8,
              a5);
    }
    PathModalityForDisplayConfig = v28;
  }
LABEL_35:
  DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO(v29);
  return (unsigned int)PathModalityForDisplayConfig;
}
