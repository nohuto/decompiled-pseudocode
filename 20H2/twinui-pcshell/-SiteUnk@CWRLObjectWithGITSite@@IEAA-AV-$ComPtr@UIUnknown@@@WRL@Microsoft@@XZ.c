/*
 * XREFs of ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x18000BAD0
 * Callers:
 *     _lambda_daa6122a5fd6a7eece9477dcaab889c7_::operator() @ 0x180092E7C (_lambda_daa6122a5fd6a7eece9477dcaab889c7_--operator().c)
 *     ?GetBehaviorFlagsInternal@CImmersiveApp@@UEAAJPEAW4__MIDL___MIDL_itf_shpriv_core_0000_0322_0003@@@Z @ 0x180094740 (-GetBehaviorFlagsInternal@CImmersiveApp@@UEAAJPEAW4__MIDL___MIDL_itf_shpriv_core_0000_0322_0003@.c)
 *     ?InitializeInstance@TabletModeCoverWindow@@AEAAJXZ @ 0x1804157FC (-InitializeInstance@TabletModeCoverWindow@@AEAAJXZ.c)
 *     ?OnPointerUp@TabletModeCoverWindow@@AEAAXXZ @ 0x1804159B0 (-OnPointerUp@TabletModeCoverWindow@@AEAAXXZ.c)
 *     ?ScaleFactorChanged@TabletModeCoverWindow@@AEAAXXZ @ 0x180415C9C (-ScaleFactorChanged@TabletModeCoverWindow@@AEAAXXZ.c)
 *     ?SetSite@TabletModeCoverWindow@@UEAAJPEAUIUnknown@@@Z @ 0x180415D30 (-SetSite@TabletModeCoverWindow@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?QueryService@CLaunchToMonitor@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1804725C0 (-QueryService@CLaunchToMonitor@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CWRLObjectWithGITSite::SiteUnk(__int64 a1, _QWORD *a2)
{
  void (__fastcall *v4)(__int64, GUID *, _QWORD *); // rbx

  *a2 = 0LL;
  v4 = *(void (__fastcall **)(__int64, GUID *, _QWORD *))(*(_QWORD *)a1 + 32LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  v4(a1, &GUID_00000000_0000_0000_c000_000000000046, a2);
  return a2;
}
