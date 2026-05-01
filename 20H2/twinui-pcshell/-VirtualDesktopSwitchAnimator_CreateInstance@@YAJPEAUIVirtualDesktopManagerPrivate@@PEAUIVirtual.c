/*
 * XREFs of ?VirtualDesktopSwitchAnimator_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@AEBU_GUID@@PEAPEAX@Z @ 0x180440374
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x18042F6C8 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180033DB0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x180084C0C (-InternalRelease@-$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VVirtualDesktopSwitchAnimator@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@@Z @ 0x180440118 (--$MakeAndInitialize@VVirtualDesktopSwitchAnimator@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEA.c)
 */

__int64 __fastcall VirtualDesktopSwitchAnimator_CreateInstance(
        struct IVirtualDesktopManagerPrivate *a1,
        struct IVirtualDesktopAnimationSyncNotificationServicePrivate *a2,
        const struct _GUID *a3,
        void **a4)
{
  int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  _DWORD *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IVirtualDesktopManagerPrivate *v14; // [rsp+30h] [rbp+8h] BYREF
  struct IVirtualDesktopAnimationSyncNotificationServicePrivate *v15; // [rsp+38h] [rbp+10h] BYREF
  void *v16; // [rsp+40h] [rbp+18h] BYREF

  v15 = a2;
  v14 = a1;
  *a4 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease((__int64 *)&v16);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopSwitchAnimator,VirtualDesktopSwitchAnimator,IVirtualDesktopManagerPrivate * &,IVirtualDesktopAnimationSyncNotificationServicePrivate * &>(
         (__int64 *)&v16,
         &v14,
         &v15);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = (unsigned int)v5;
    v8 = 93LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopswitchanimator.cpp",
      (const char *)v7);
    goto LABEL_11;
  }
  *a4 = 0LL;
  if ( InlineIsEqualGUID(&GUID_aa4b02c1_ff78_4a62_a203_61af272897c3, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v11 = v16;
    *a4 = v16;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 8LL))(v11);
    v6 = 0;
  }
  else if ( InlineIsEqualGUID(v9, v9) )
  {
    v10 = v16;
    v6 = 0;
    *a4 = v16;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  else
  {
    v6 = -2147467262;
  }
  if ( v6 < 0 )
  {
    v7 = (unsigned int)v6;
    v8 = 94LL;
    goto LABEL_10;
  }
LABEL_11:
  Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease((__int64 *)&v16);
  return (unsigned int)v6;
}
