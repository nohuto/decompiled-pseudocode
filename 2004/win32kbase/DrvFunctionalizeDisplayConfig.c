/*
 * XREFs of DrvFunctionalizeDisplayConfig @ 0x1C014B064
 * Callers:
 *     NtUserFunctionalizeDisplayConfig @ 0x1C0132F60 (NtUserFunctionalizeDisplayConfig.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0023BA0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0027A20 (EngAcquireSemaphore.c)
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x1C00B29A4 (--0AUTO_TGO@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1C00D3C30 (DrvSetDisplayConfigValidateParams.c)
 *     _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C0146628 (_DrvFunctionalizeDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C014683C (-AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_G.c)
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C0146E4C (-ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPAT.c)
 *     ?FunctionalizeDisplayConfigRemoveUnownedPaths@@YAXPEAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0148EF0 (-FunctionalizeDisplayConfigRemoveUnownedPaths@@YAXPEAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C01495C8 (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 v16; // rax
  int PathModalityForDisplayConfig; // ebx
  int v18; // r13d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // r12d
  unsigned int v23; // ebx
  struct D3DKMT_GETPATHSMODALITY *v24; // rdx
  __int64 v25; // rax
  int v26; // eax
  struct D3DKMT_GETPATHSMODALITY *v27[6]; // [rsp+50h] [rbp-29h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v28[2]; // [rsp+80h] [rbp+7h] BYREF
  bool v30; // [rsp+E0h] [rbp+67h] BYREF

  v6 = (unsigned int)a3;
  v8 = a2;
  if ( (a3 & 0xFFFFFFF8) != 0 )
  {
    v10 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v10 + 24) = v6;
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  AUTO_TGO::AUTO_TGO((AUTO_TGO *)v27);
  v15 = *a1;
  v27[0] = (struct D3DKMT_GETPATHSMODALITY *)&off_1C0206560;
  *(_OWORD *)v28 = 0LL;
  if ( (v6 & 1) != 0 )
  {
    if ( (unsigned int)v15 < 2 )
    {
LABEL_5:
      v16 = WdLogNewEntry5_WdError(v13, v12, v14);
      *(_QWORD *)(v16 + 24) = v15;
LABEL_21:
      WdLogEvent5_WdError(v16);
      PathModalityForDisplayConfig = -1073741811;
      goto LABEL_35;
    }
    v8 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)((char *)v8 + 200);
    LODWORD(v15) = v15 - 1;
  }
  else
  {
    if ( !(_DWORD)v15 )
      goto LABEL_5;
    if ( (v6 & 2) != 0 )
    {
      v16 = WdLogNewEntry5_WdError(v13, v12, v14);
      *(_QWORD *)(v16 + 24) = v6;
      goto LABEL_21;
    }
  }
  PathModalityForDisplayConfig = DrvSetDisplayConfigValidateParams((unsigned int)v15, v8, a4 != 0 ? 98400 : 32864, 0, 1);
  if ( PathModalityForDisplayConfig >= 0 )
  {
    if ( a4 )
    {
      PathModalityForDisplayConfig = ((__int64 (__fastcall *)(__int64, __int64, struct D3DKMT_GETPATHSMODALITY **))qword_1C024CB18)(
                                       a4,
                                       0x20000LL,
                                       &v28[1]);
      if ( PathModalityForDisplayConfig < 0 )
        goto LABEL_35;
      a6 = 0;
      v18 = v6 & 4;
      PathModalityForDisplayConfig = SetDisplayConfigHandleBrokerProvidedPaths(
                                       (__int64)v28[1],
                                       v18 != 0,
                                       v15,
                                       v8,
                                       v28,
                                       &v30,
                                       (enum _DXGK_DIAG_SDC_STAGE *)&a6);
      if ( PathModalityForDisplayConfig < 0 )
        goto LABEL_35;
    }
    else
    {
      PathModalityForDisplayConfig = AllocatePathModalityForDisplayConfig((unsigned int)v15, v8, v28);
      if ( PathModalityForDisplayConfig < 0 )
        goto LABEL_35;
      PathModalityForDisplayConfig = ConvertDisplayConfigToPathModality((unsigned int)v15, v8, v28[0], 0LL);
      if ( PathModalityForDisplayConfig < 0 )
        goto LABEL_35;
      v18 = v6 & 4;
    }
    v22 = a4 != 0 ? 0x1000000 : 0;
    if ( (v6 & 1) != 0 )
    {
      v23 = *((_DWORD *)v8 - 46);
      if ( v23 >= (unsigned int)v15 )
      {
        v16 = WdLogNewEntry5_WdError(v20, v19, v21);
        *(_QWORD *)(v16 + 24) = *((unsigned int *)v8 - 46);
        goto LABEL_21;
      }
      v24 = v28[0];
      if ( a4 )
      {
        if ( *((unsigned __int16 *)v28[0] + 10) < (unsigned int)v15 )
        {
          v25 = WdLogNewEntry5_WdAssertion(v20, v28[0], v21);
          WdLogEvent5_WdAssertion(v25);
          v24 = v28[0];
        }
        v23 += *((unsigned __int16 *)v24 + 10) - (_DWORD)v15;
      }
      if ( (v6 & 2) != 0 )
      {
        *((_QWORD *)v24 + 34 * v23 + 6) |= 0x4000000000uLL;
        v24 = v28[0];
      }
      v26 = ((__int64 (__fastcall *)(_QWORD, struct D3DKMT_GETPATHSMODALITY *, _QWORD, char *, char *))qword_1C024CB08)(
              v22,
              v24,
              v23,
              (char *)v8 - 176,
              (char *)v8 - 180);
    }
    else
    {
      PathModalityForDisplayConfig = ((__int64 (__fastcall *)(_QWORD, struct D3DKMT_GETPATHSMODALITY *))qword_1C024C8B8)(
                                       v22 | 0x8000,
                                       v28[0]);
      if ( PathModalityForDisplayConfig < 0 )
        goto LABEL_35;
      if ( a4 && !v18 )
        FunctionalizeDisplayConfigRemoveUnownedPaths(v28[1], v28[0]);
      v26 = ((__int64 (__fastcall *)(struct D3DKMT_GETPATHSMODALITY *, unsigned int *, struct DISPLAYCONFIG_PATH_INFO_INTERNAL *, __int64))qword_1C024CAE8)(
              v28[0],
              a1,
              v8,
              a5);
    }
    PathModalityForDisplayConfig = v26;
  }
LABEL_35:
  DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO(v27);
  return (unsigned int)PathModalityForDisplayConfig;
}
