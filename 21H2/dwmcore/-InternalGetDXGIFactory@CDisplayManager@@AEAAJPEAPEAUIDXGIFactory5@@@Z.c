/*
 * XREFs of ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x18003DCAC
 * Callers:
 *     ?InternalGetDXGIOutput@CDisplayManager@@AEAAJIPEAUHMONITOR__@@PEAPEAUIDXGIOutputDWM@@@Z @ 0x18001E884 (-InternalGetDXGIOutput@CDisplayManager@@AEAAJIPEAUHMONITOR__@@PEAPEAUIDXGIOutputDWM@@@Z.c)
 *     ?InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z @ 0x180023A90 (-InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z.c)
 *     ?GetPrimaryAdapter@CDisplayManager@@QEAAJPEAPEAUIDXGIAdapter1@@@Z @ 0x18003D75C (-GetPrimaryAdapter@CDisplayManager@@QEAAJPEAPEAUIDXGIAdapter1@@@Z.c)
 *     ?GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x18003DC80 (-GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     ?DriverUpdateInProgress@CDisplayManager@@IEAA_NXZ @ 0x180277428 (-DriverUpdateInProgress@CDisplayManager@@IEAA_NXZ.c)
 *     ?GetWarpAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x180277568 (-GetWarpAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateDXGIFactory@CDisplayManager@@AEAAJXZ @ 0x18003D168 (-UpdateDXGIFactory@CDisplayManager@@AEAAJXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplayManager::InternalGetDXGIFactory(_RTL_CRITICAL_SECTION *this, struct IDXGIFactory5 **a2)
{
  unsigned int v3; // ebx
  CDisplayManager *v4; // rcx
  CDisplayManager *v6; // rcx
  CDisplayManager *v7; // rcx
  int updated; // eax
  unsigned int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _RTL_CRITICAL_SECTION *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = this;
  v3 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)g_pComposition + 82) + 128LL))(*((_QWORD *)g_pComposition
                                                                                                + 82)) )
  {
    v6 = qword_1803D7618;
    if ( qword_1803D7618
      && (*(unsigned int (__fastcall **)(CDisplayManager *))(*(_QWORD *)qword_1803D7618 + 104LL))(qword_1803D7618)
      || (updated = CDisplayManager::UpdateDXGIFactory(v6), v9 = updated, updated >= 0) )
    {
      v7 = qword_1803D7618;
      *a2 = (struct IDXGIFactory5 *)qword_1803D7618;
      (*(void (__fastcall **)(CDisplayManager *))(*(_QWORD *)v7 + 8LL))(v7);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x112,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\displaymanager.cpp",
        (const char *)(unsigned int)updated);
      return v9;
    }
  }
  else
  {
    v11 = &g_DisplayManager;
    EnterCriticalSection(&g_DisplayManager);
    v4 = qword_1803D7618;
    if ( qword_1803D7618 )
    {
      *a2 = (struct IDXGIFactory5 *)qword_1803D7618;
      (*(void (__fastcall **)(CDisplayManager *))(*(_QWORD *)v4 + 8LL))(v4);
    }
    else
    {
      v3 = -2003304291;
    }
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
    return v3;
  }
}
