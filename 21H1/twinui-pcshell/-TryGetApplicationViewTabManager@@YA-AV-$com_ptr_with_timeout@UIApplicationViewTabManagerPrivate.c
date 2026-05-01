/*
 * XREFs of ?TryGetApplicationViewTabManager@@YA?AV?$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate@Tabs@ComposableShell@Internal@Windows@@@@PEAUHWND__@@PEBD@Z @ 0x18025CC04
 * Callers:
 *     _lambda_92d3fc369c3cea5b70dbdb6349205bce_::operator() @ 0x1802496A0 (_lambda_92d3fc369c3cea5b70dbdb6349205bce_--operator().c)
 *     _lambda_cf21efff913cfa189e82bd10310d9d23_::operator() @ 0x180249A90 (_lambda_cf21efff913cfa189e82bd10310d9d23_--operator().c)
 *     ?TryGetApplicationViewTabManager@@YA?AV?$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate@Tabs@ComposableShell@Internal@Windows@@@@PEAUIApplicationView@@PEBD@Z @ 0x18025CCA8 (-TryGetApplicationViewTabManager@@YA-AV-$com_ptr_with_timeout@UIApplicationViewTabM_ea_18025CCA8.c)
 *     _lambda_11f4e68007e87e41ff887ccfc1974ff4_::operator() @ 0x18026C008 (_lambda_11f4e68007e87e41ff887ccfc1974ff4_--operator().c)
 *     _lambda_476f18e24aa1fbee26857ac5b809e782_::operator() @ 0x18026C418 (_lambda_476f18e24aa1fbee26857ac5b809e782_--operator().c)
 *     ?PerformDrop@TabTransferManager@@AEAAXXZ @ 0x18026E544 (-PerformDrop@TabTransferManager@@AEAAXXZ.c)
 * Callees:
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x180155718 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x180157904 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 *     ??$FailedQueryWindowServiceForApplicationViewTabManager@AEAPEBDAEAPEAUHWND__@@AEBJ@TabViewManagerTraceLogging@@SAXAEAPEBDAEAPEAUHWND__@@AEBJ@Z @ 0x180241D34 (--$FailedQueryWindowServiceForApplicationViewTabManager@AEAPEBDAEAPEAUHWND__@@AEBJ@TabViewManage.c)
 */

_QWORD *__fastcall TryGetApplicationViewTabManager(_QWORD *a1, HWND a2, const char *a3)
{
  int WindowService; // edi
  _BYTE v7[24]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v8; // [rsp+38h] [rbp-10h]
  int v9; // [rsp+50h] [rbp+8h] BYREF
  HWND v10; // [rsp+58h] [rbp+10h] BYREF
  const char *v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = a3;
  v10 = a2;
  *a1 = 0LL;
  if ( a2 )
  {
    CRPCTimeout::CRPCTimeout((CRPCTimeout *)v7, 0);
    v8 = a1;
    WindowService = CoreQueryWindowService(a2, &unk_18050DC58, &GUID_5f3178f6_ade1_413e_8dfa_3b173778d0fe, a1);
    v9 = WindowService;
    CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v7);
    if ( (int)(WindowService + 0x80000000) >= 0 && WindowService != -2147221163 )
      TabViewManagerTraceLogging::FailedQueryWindowServiceForApplicationViewTabManager<char const * &,HWND__ * &,long const &>(
        &v11,
        &v10,
        &v9);
  }
  return a1;
}
