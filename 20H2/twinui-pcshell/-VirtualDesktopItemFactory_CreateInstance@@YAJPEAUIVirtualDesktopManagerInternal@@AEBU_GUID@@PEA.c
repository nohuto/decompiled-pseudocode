/*
 * XREFs of ?VirtualDesktopItemFactory_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x180391D30
 * Callers:
 *     ?_InitializeVirtualDesktopComponents@MultitaskingData@@AEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x18038BD00 (-_InitializeVirtualDesktopComponents@MultitaskingData@@AEAAJPEAUIVirtualDesktopManagerInternal@@.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180033DB0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x18035DABC (-InternalRelease@-$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VVirtualDesktopItemFactory@@V1@AEAPEAUIVirtualDesktopManagerInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@@Z @ 0x180391BE0 (--$MakeAndInitialize@VVirtualDesktopItemFactory@@V1@AEAPEAUIVirtualDesktopManagerInternal@@@Deta.c)
 */

__int64 __fastcall VirtualDesktopItemFactory_CreateInstance(
        struct IVirtualDesktopManagerInternal *a1,
        const struct _GUID *a2,
        void **a3)
{
  int v4; // eax
  int v5; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  _DWORD *v8; // rcx
  volatile int *v9; // rcx
  volatile int *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IVirtualDesktopManagerInternal *v13; // [rsp+30h] [rbp+8h] BYREF
  volatile int *v14; // [rsp+38h] [rbp+10h] BYREF

  v13 = a1;
  *a3 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(&v14);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopItemFactory,VirtualDesktopItemFactory,IVirtualDesktopManagerInternal * &>(
         (__int64 *)&v14,
         (__int64 *)&v13);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = (unsigned int)v4;
    v7 = 38LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemfactory.cpp",
      (const char *)v6);
    goto LABEL_11;
  }
  *a3 = 0LL;
  if ( InlineIsEqualGUID(&GUID_6376f62e_2aef_470d_9975_4bf85317f40a, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v10 = v14;
    *a3 = (void *)v14;
    (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v10 + 8LL))(v10);
    v5 = 0;
  }
  else if ( InlineIsEqualGUID(v8, v8) )
  {
    v9 = v14;
    v5 = 0;
    *a3 = (void *)v14;
    (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  else
  {
    v5 = -2147467262;
  }
  if ( v5 < 0 )
  {
    v6 = (unsigned int)v5;
    v7 = 39LL;
    goto LABEL_10;
  }
LABEL_11:
  Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(&v14);
  return (unsigned int)v5;
}
