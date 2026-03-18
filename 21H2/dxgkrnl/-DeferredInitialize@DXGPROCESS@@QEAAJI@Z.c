/*
 * XREFs of ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1C018A070
 * Callers:
 *     ?Initialize@DXGPROCESS@@QEAAJPEAX@Z @ 0x1C018B330 (-Initialize@DXGPROCESS@@QEAAJPEAX@Z.c)
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C02181B8 (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 *     ?ResetVirtualMachine@DXGPROCESSVMWP@@QEAAXXZ @ 0x1C0336F70 (-ResetVirtualMachine@DXGPROCESSVMWP@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0014628 (-VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGPROCESS::DeferredInitialize(DXGPROCESS *this, unsigned int a2)
{
  VIDSCH_EXPORT *v2; // rbx
  __int64 v3; // rbp
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  struct DXGGLOBAL *v8; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  struct DXGGLOBAL *v11; // rax
  const wchar_t *v13; // r9
  struct DXGGLOBAL *v14; // rax

  v2 = 0LL;
  v3 = a2;
  if ( a2 >= 2 )
  {
    WdLogSingleEntry1(1LL, 1724LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DXGMMSVersion < MAX_DXGMMS_VERSION",
      1724LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v3 + 16) )
  {
    WdLogSingleEntry1(1LL, 1729LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_pNonPagedData->m_pVidSchProcess[DXGMMSVersion] == NULL",
      1729LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Global = DXGGLOBAL_GetGlobal();
  if ( (unsigned int)v3 >= 2 )
  {
    v6 = 0LL;
  }
  else
  {
    _mm_lfence();
    v6 = *((_QWORD *)Global + v3 + 34);
  }
  v7 = (*(__int64 (__fastcall **)(DXGPROCESS *))(*(_QWORD *)(v6 + 8) + 80LL))(this);
  *(_QWORD *)(*((_QWORD *)this + 8) + 8LL * (unsigned int)(*(_DWORD *)v6 - 1) + 16) = v7;
  if ( !v7 )
  {
    WdLogSingleEntry1(6LL, this);
    v13 = L"DXGPROCESS (0x%I64x) failed to allocate m_pVidSchProcess";
LABEL_21:
    DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v13, (__int64)this, 0LL, 0LL, 0LL, 0LL);
    return 3221225495LL;
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v3) )
  {
    WdLogSingleEntry1(1LL, 1740LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_pNonPagedData->m_pVidMmProcess[DXGMMSVersion] == NULL",
      1740LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v8 = DXGGLOBAL_GetGlobal();
  if ( (unsigned int)v3 >= 2 )
  {
    v9 = 0LL;
  }
  else
  {
    _mm_lfence();
    v9 = *((_QWORD *)v8 + v3 + 32);
  }
  v10 = (*(__int64 (__fastcall **)(DXGPROCESS *))(*(_QWORD *)(v9 + 8) + 368LL))(this);
  *(_QWORD *)(*((_QWORD *)this + 8) + 8LL * (unsigned int)(*(_DWORD *)v9 - 1)) = v10;
  if ( !v10 )
  {
    WdLogSingleEntry1(6LL, this);
    v13 = L"DXGPROCESS (0x%I64x) failed to allocate m_pVidMmProcess";
    goto LABEL_21;
  }
  v11 = DXGGLOBAL_GetGlobal();
  if ( (unsigned int)v3 >= 2 || !*((_QWORD *)v11 + v3 + 34) )
  {
    WdLogSingleEntry1(1LL, 1752LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DXGGLOBAL::GetGlobal()->GetVidSchExport(DXGMMSVersion) != NULL",
      1752LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (*((_DWORD *)this + 106) & 4) != 0 )
  {
    *(_BYTE *)(*((_QWORD *)this + 8) + 130LL) = 1;
    v14 = DXGGLOBAL_GetGlobal();
    if ( (unsigned int)v3 < 2 )
      v2 = (VIDSCH_EXPORT *)*((_QWORD *)v14 + v3 + 34);
    VIDSCH_EXPORT::VidSchRegisterAsDwm(v2, this);
  }
  return 0LL;
}
