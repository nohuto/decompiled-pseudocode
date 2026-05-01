/*
 * XREFs of ?TryGetApplicationViewTabManager@@YA?AV?$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate@Tabs@ComposableShell@Internal@Windows@@@@PEAUHWND__@@PEBD@Z @ 0x18027E884
 * Callers:
 *     _lambda_92d3fc369c3cea5b70dbdb6349205bce_::operator() @ 0x18026B324 (_lambda_92d3fc369c3cea5b70dbdb6349205bce_--operator().c)
 *     _lambda_cf21efff913cfa189e82bd10310d9d23_::operator() @ 0x18026B714 (_lambda_cf21efff913cfa189e82bd10310d9d23_--operator().c)
 *     ?TryGetApplicationViewTabManager@@YA?AV?$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate@Tabs@ComposableShell@Internal@Windows@@@@PEAUIApplicationView@@PEBD@Z @ 0x18027E928 (-TryGetApplicationViewTabManager@@YA-AV-$com_ptr_with_timeout@UIApplicationViewTabM_ea_18027E928.c)
 *     _lambda_11f4e68007e87e41ff887ccfc1974ff4_::operator() @ 0x18028DC98 (_lambda_11f4e68007e87e41ff887ccfc1974ff4_--operator().c)
 *     _lambda_476f18e24aa1fbee26857ac5b809e782_::operator() @ 0x18028E0A8 (_lambda_476f18e24aa1fbee26857ac5b809e782_--operator().c)
 *     ?PerformDrop@TabTransferManager@@AEAAXXZ @ 0x1802901D4 (-PerformDrop@TabTransferManager@@AEAAXXZ.c)
 * Callees:
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x180179C58 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x18017BD24 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 *     ??$FailedQueryWindowServiceForApplicationViewTabManager@AEAPEBDAEAPEAUHWND__@@AEBJ@TabViewManagerTraceLogging@@SAXAEAPEBDAEAPEAUHWND__@@AEBJ@Z @ 0x1802639E4 (--$FailedQueryWindowServiceForApplicationViewTabManager@AEAPEBDAEAPEAUHWND__@@AEBJ@TabViewManage.c)
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
    WindowService = CoreQueryWindowService(a2, &unk_180536600, &GUID_5f3178f6_ade1_413e_8dfa_3b173778d0fe, a1);
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
