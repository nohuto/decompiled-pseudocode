/*
 * XREFs of ?RefreshMonitorMappings@CApplicationManager@@UEAAJXZ @ 0x18012AB80
 * Callers:
 *     <none>
 * Callees:
 *     ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x18000B448 (-IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveAp.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007AEDC (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     _lambda_66095021cb6fa0f8c2cc27fa1ecbc6fc_::operator() @ 0x1801237D8 (_lambda_66095021cb6fa0f8c2cc27fa1ecbc6fc_--operator().c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationManager::RefreshMonitorMappings(CApplicationManager *this)
{
  void (__fastcall *v2)(char *, GUID *, IUnknown **); // rbx
  HRESULT v3; // r15d
  int v4; // edi
  __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 i; // rbx
  unsigned int j; // r14d
  __int64 v9; // rdi
  int (__fastcall *v10)(__int64, _QWORD, IUnknown **); // rbx
  char IsReportingEnabled; // al
  __int64 v12; // rcx
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  int v15; // [rsp+38h] [rbp-20h] BYREF
  __int64 v16[3]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v17; // [rsp+90h] [rbp+38h] BYREF
  IUnknown *punk; // [rsp+98h] [rbp+40h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+48h] BYREF
  void *ppvOut; // [rsp+A8h] [rbp+50h] BYREF

  v17 = 0;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  punk = 0LL;
  v17 = 2;
  v2 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 13) + 32LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  v2((char *)this - 104, &GUID_00000000_0000_0000_c000_000000000046, &punk);
  v3 = IUnknown_QueryService(
         punk,
         (const GUID *const)&SID_ImmersiveShellHookService,
         &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
         &ppvOut);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  if ( v3 >= 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v4 = *((_DWORD *)this + 202);
    v14 = *((_QWORD *)this + 51);
    v5 = v14;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
    v15 = v4;
    v16[0] = v5;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v16);
    v6 = *((_QWORD *)this + 61);
    for ( i = 0LL; i < v6; ++i )
    {
      if ( !lambda_66095021cb6fa0f8c2cc27fa1ecbc6fc_::operator()(&v15, *(_QWORD *)(*((_QWORD *)this + 60) + 8 * i)) )
        break;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v16);
    v19 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    (*(void (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**((_QWORD **)this + 53) + 32LL))(
      *((_QWORD *)this + 53),
      0LL,
      &GUID_af7f312d_0a79_47c9_9bb6_8bd386c0ffee,
      &v19);
    if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 51) + 32LL))(*((_QWORD *)this + 51), &v17) >= 0 )
    {
      for ( j = 0; j < v17; ++j )
      {
        punk = 0LL;
        v9 = *((_QWORD *)this + 51);
        v10 = *(int (__fastcall **)(__int64, _QWORD, IUnknown **))(*(_QWORD *)v9 + 40LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
        if ( v10(v9, j, &punk) >= 0 )
        {
          IsReportingEnabled = CReportWindowVisibilityChange::IsReportingEnabled(
                                 (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                                 punk,
                                 0LL);
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD, IUnknown *))(*(_QWORD *)v19 + 24LL))(
            v19,
            (unsigned int)(IsReportingEnabled != 0) + 1,
            *((unsigned int *)this + 202),
            punk);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
      }
    }
    v12 = *((_QWORD *)this + 48);
    if ( v12 )
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v12 + 40LL))(v12, ppvOut);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v14);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)v3;
}
