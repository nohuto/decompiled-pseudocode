/*
 * XREFs of ?VirtualDesktopRegistryHelpers_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180435618
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x18042FE08 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003CC50 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VVirtualDesktopRegistryHelpers@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopRegistryHelpers@@@Z @ 0x180434B7C (--$MakeAndInitialize@VVirtualDesktopRegistryHelpers@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVir.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopRegistryHelpers@@@WRL@Microsoft@@IEAAKXZ @ 0x18043515C (-InternalRelease@-$ComPtr@VVirtualDesktopRegistryHelpers@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall VirtualDesktopRegistryHelpers_CreateInstance(const struct _GUID *a1, void **a2)
{
  int v3; // eax
  int v4; // ebx
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  _DWORD *v7; // rcx
  VirtualDesktopRegistryHelpers *v8; // rcx
  VirtualDesktopRegistryHelpers *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  VirtualDesktopRegistryHelpers *v12; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<VirtualDesktopRegistryHelpers>::InternalRelease((volatile int **)&v12);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopRegistryHelpers,VirtualDesktopRegistryHelpers,>(&v12);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = (unsigned int)v3;
    v6 = 184LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
      (const char *)v5);
    goto LABEL_11;
  }
  *a2 = 0LL;
  if ( InlineIsEqualGUID(&GUID_b3038f52_6c01_47f7_8363_bc7bed1d4dbb, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v9 = v12;
    *a2 = v12;
    (*(void (__fastcall **)(VirtualDesktopRegistryHelpers *))(*(_QWORD *)v9 + 8LL))(v9);
    v4 = 0;
  }
  else if ( InlineIsEqualGUID(v7, v7) )
  {
    v8 = v12;
    v4 = 0;
    *a2 = v12;
    (*(void (__fastcall **)(VirtualDesktopRegistryHelpers *))(*(_QWORD *)v8 + 8LL))(v8);
  }
  else
  {
    v4 = -2147467262;
  }
  if ( v4 < 0 )
  {
    v5 = (unsigned int)v4;
    v6 = 185LL;
    goto LABEL_10;
  }
LABEL_11:
  Microsoft::WRL::ComPtr<VirtualDesktopRegistryHelpers>::InternalRelease((volatile int **)&v12);
  return (unsigned int)v4;
}
