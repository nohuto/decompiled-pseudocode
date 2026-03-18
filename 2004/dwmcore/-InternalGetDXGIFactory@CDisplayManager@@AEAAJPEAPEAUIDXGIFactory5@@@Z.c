/*
 * XREFs of ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x1800344F8
 * Callers:
 *     ?InternalGetDXGIOutput@CDisplayManager@@AEAAJIPEAUHMONITOR__@@PEAPEAUIDXGIOutputDWM@@@Z @ 0x1800253A0 (-InternalGetDXGIOutput@CDisplayManager@@AEAAJIPEAUHMONITOR__@@PEAPEAUIDXGIOutputDWM@@@Z.c)
 *     ?GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x1800343C4 (-GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     ?GetPrimaryAdapter@CDisplayManager@@QEAAJPEAPEAUIDXGIAdapter1@@@Z @ 0x180034480 (-GetPrimaryAdapter@CDisplayManager@@QEAAJPEAPEAUIDXGIAdapter1@@@Z.c)
 *     ?InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z @ 0x1800B0224 (-InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z.c)
 *     ?DriverUpdateInProgress@CDisplayManager@@IEAA_NXZ @ 0x180236BB0 (-DriverUpdateInProgress@CDisplayManager@@IEAA_NXZ.c)
 *     ?GetWarpAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x180236D20 (-GetWarpAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 * Callees:
 *     ?UpdateDXGIFactory@CDisplayManager@@AEAAJXZ @ 0x180031F30 (-UpdateDXGIFactory@CDisplayManager@@AEAAJXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18009EB7C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDisplayManager::InternalGetDXGIFactory(
        struct _RTL_CRITICAL_SECTION *this,
        struct IDXGIFactory5 **a2)
{
  unsigned int v3; // ebx
  CDisplayManager *v4; // rcx
  CDisplayManager *v5; // rcx
  CDisplayManager *v7; // rcx
  int updated; // eax
  unsigned int v9; // edi
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = this;
  v3 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)g_pComposition + 63) + 104LL))(*((_QWORD *)g_pComposition
                                                                                                + 63)) )
  {
    v4 = qword_180349558;
    if ( qword_180349558
      && (*(unsigned int (__fastcall **)(CDisplayManager *))(*(_QWORD *)qword_180349558 + 104LL))(qword_180349558)
      || (updated = CDisplayManager::UpdateDXGIFactory(v4), v9 = updated, updated >= 0) )
    {
      v5 = qword_180349558;
      *a2 = (struct IDXGIFactory5 *)qword_180349558;
      (*(void (__fastcall **)(CDisplayManager *))(*(_QWORD *)v5 + 8LL))(v5);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x193,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\displaymanager.cpp",
        (const char *)(unsigned int)updated,
        v10);
      return v9;
    }
  }
  else
  {
    v12 = &g_DisplayManager;
    EnterCriticalSection(&g_DisplayManager);
    v7 = qword_180349558;
    if ( qword_180349558 )
    {
      *a2 = (struct IDXGIFactory5 *)qword_180349558;
      (*(void (__fastcall **)(CDisplayManager *))(*(_QWORD *)v7 + 8LL))(v7);
    }
    else
    {
      v3 = -2003304291;
    }
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v12);
    return v3;
  }
}
