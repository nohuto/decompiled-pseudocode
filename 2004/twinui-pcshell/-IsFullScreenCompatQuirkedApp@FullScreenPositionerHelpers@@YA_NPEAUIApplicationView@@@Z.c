/*
 * XREFs of ?IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180071F0C
 * Callers:
 *     ?ShouldHandleActivation@FullScreenPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18002B830 (-ShouldHandleActivation@FullScreenPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?UnsubscribeFromServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801A83C0 (-UnsubscribeFromServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1801A88D8 (-CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApp.c)
 *     ?ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x1801AA6B0 (-ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@.c)
 * Callees:
 *     ?IsForcedFullScreenCompatModeEnabled@FullScreenPositionerHelpers@@YA_NXZ @ 0x180071FE0 (-IsForcedFullScreenCompatModeEnabled@FullScreenPositionerHelpers@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall FullScreenPositionerHelpers::IsFullScreenCompatQuirkedApp(
        FullScreenPositionerHelpers *this,
        struct IApplicationView *a2)
{
  FullScreenPositionerHelpers *v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rcx
  char v5; // bl
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // [rsp+30h] [rbp+10h] BYREF
  __int64 v10; // [rsp+38h] [rbp+18h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  if ( (**(int (__fastcall ***)(FullScreenPositionerHelpers *, GUID *, __int64 *))this)(
         this,
         &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b,
         &v10) >= 0 )
  {
    v3 = v10;
    v4 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 24LL))(v3, &v9) >= 0
      && (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 328LL))(v9, 4LL) )
    {
      goto LABEL_13;
    }
  }
  if ( FullScreenPositionerHelpers::IsForcedFullScreenCompatModeEnabled(v2) )
LABEL_13:
    v5 = 1;
  else
    v5 = 0;
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v5;
}
