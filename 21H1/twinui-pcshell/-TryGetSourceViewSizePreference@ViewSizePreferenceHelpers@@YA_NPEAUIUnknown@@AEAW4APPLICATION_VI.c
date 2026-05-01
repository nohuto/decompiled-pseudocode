/*
 * XREFs of ?TryGetSourceViewSizePreference@ViewSizePreferenceHelpers@@YA_NPEAUIUnknown@@AEAW4APPLICATION_VIEW_SIZE_PREFERENCE@@AEAPEAUHWND__@@@Z @ 0x1803AF094
 * Callers:
 *     ?GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803AE140 (-GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collect.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall ViewSizePreferenceHelpers::TryGetSourceViewSizePreference(
        IUnknown *punk,
        struct IUnknown *a2,
        enum APPLICATION_VIEW_SIZE_PREFERENCE *a3,
        HWND *a4)
{
  bool v7; // di
  void *ppvOut; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  *(_QWORD *)a3 = 0LL;
  LODWORD(a2->lpVtbl) = 0;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  if ( IUnknown_QueryService(
         punk,
         (const GUID *const)&SID_LaunchSourceViewSizePreference,
         &GUID_e5aa01f7_1fb8_4830_8720_4e6734cbd5f3,
         &ppvOut) >= 0
    && (*(int (__fastcall **)(void *, struct IUnknown *))(*(_QWORD *)ppvOut + 32LL))(ppvOut, a2) >= 0
    && (*(int (__fastcall **)(void *, enum APPLICATION_VIEW_SIZE_PREFERENCE *))(*(_QWORD *)ppvOut + 24LL))(ppvOut, a3) >= 0 )
  {
    v7 = *(_QWORD *)a3 != 0LL;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return v7;
}
