/*
 * XREFs of ?_UsePreferredSizeForStandaloneWindows@CDesktopPositioner@@AEBA_NPEAUIApplicationView@@@Z @ 0x1800489BC
 * Callers:
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180046658 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall CDesktopPositioner::_UsePreferredSizeForStandaloneWindows(
        CDesktopPositioner *this,
        struct IApplicationView *a2)
{
  bool v2; // bl
  CDesktopPositioner *v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v4 = this;
  v2 = 0;
  v5 = 0LL;
  if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
         a2,
         &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b,
         &v5) >= 0 )
  {
    v4 = 0LL;
    if ( (*(int (__fastcall **)(__int64, CDesktopPositioner **))(*(_QWORD *)v5 + 24LL))(v5, &v4) >= 0 )
      v2 = (*(unsigned int (__fastcall **)(CDesktopPositioner *, __int64))(*(_QWORD *)v4 + 328LL))(v4, 7LL) != 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  return v2;
}
