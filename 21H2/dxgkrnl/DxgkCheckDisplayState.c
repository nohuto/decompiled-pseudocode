/*
 * XREFs of DxgkCheckDisplayState @ 0x1C02F0140
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0027574 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??0DISPLAYSTATECHECKER@@QEAA@XZ @ 0x1C004D018 (--0DISPLAYSTATECHECKER@@QEAA@XZ.c)
 *     DpiTryLidStateRecovery @ 0x1C005F948 (DpiTryLidStateRecovery.c)
 *     ?CheckPrimaryContentState@DISPLAYSTATECHECKER@@QEAAJXZ @ 0x1C02ED8D8 (-CheckPrimaryContentState@DISPLAYSTATECHECKER@@QEAAJXZ.c)
 *     ?Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z @ 0x1C02EF308 (-Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z.c)
 *     ?LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02EF7B8 (-LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?NeedLidStateRecovery@DISPLAYSTATECHECKER@@QEAA_NXZ @ 0x1C02F00E8 (-NeedLidStateRecovery@DISPLAYSTATECHECKER@@QEAA_NXZ.c)
 */

__int64 __fastcall DxgkCheckDisplayState(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  DISPLAYSTATECHECKER *v5; // rax
  char *v6; // rbx
  const char *v7; // r9
  int v8; // r8d
  __int64 v9; // rdx
  int v10; // edi
  __int128 v12; // [rsp+50h] [rbp-18h] BYREF

  v5 = (DISPLAYSTATECHECKER *)operator new[](0x3710uLL, 0x4B677844u, 256LL, a4);
  if ( !v5 )
  {
    v6 = 0LL;
    goto LABEL_8;
  }
  v6 = (char *)DISPLAYSTATECHECKER::DISPLAYSTATECHECKER(v5);
  if ( !v6 )
  {
LABEL_8:
    WdLogSingleEntry1(2LL, 68LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"No memory available for DISPLAYSTATECHECKER",
      68LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v10 = -1073741801;
    goto LABEL_9;
  }
  v7 = (const char *)*((_QWORD *)a1 + 1);
  v8 = a1[1];
  v9 = *a1;
  v12 = *(_OWORD *)(a1 + 6);
  v10 = DISPLAYSTATECHECKER::Initialize((__int64)v6, v9, v8, v7, &v12);
  if ( v10 >= 0 )
  {
    DISPLAYSTATECHECKER::CheckPrimaryContentState((DISPLAYSTATECHECKER *)v6);
    DISPLAYSTATECHECKER::LogAllDisplayDiagInfo(
      (DISPLAYSTATECHECKER *)v6,
      *((struct _DXGK_DISPLAY_SCENARIO_CONTEXT **)a1 + 2));
    if ( a1[1] && DISPLAYSTATECHECKER::NeedLidStateRecovery((DISPLAYSTATECHECKER *)v6) )
      DpiTryLidStateRecovery();
    goto LABEL_10;
  }
LABEL_9:
  if ( v6 )
  {
LABEL_10:
    `vector destructor iterator'(
      v6 + 40,
      3512LL,
      4LL,
      (void (__fastcall *)(char *))DISPLAYDIAGNOSTICADAPTERDATA::~DISPLAYDIAGNOSTICADAPTERDATA);
    operator delete(v6);
  }
  return (unsigned int)v10;
}
