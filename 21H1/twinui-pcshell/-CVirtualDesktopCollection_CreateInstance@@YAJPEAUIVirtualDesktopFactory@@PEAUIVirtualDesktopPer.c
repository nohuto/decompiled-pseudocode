/*
 * XREFs of ?CVirtualDesktopCollection_CreateInstance@@YAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPersistence@@_NAEBU_GUID@@PEAPEAX@Z @ 0x1804135DC
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x18040C3B8 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003C4F0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopCollection@@V1@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtualDesktopPersistence@@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopCollection@@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtualDesktopPersistence@@AEA_N@Z @ 0x180413200 (--$MakeAndInitialize@VCVirtualDesktopCollection@@V1@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtu.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopCollection@@@WRL@Microsoft@@IEAAKXZ @ 0x180413CF0 (-InternalRelease@-$ComPtr@VCVirtualDesktopCollection@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopCollection_CreateInstance(
        struct IVirtualDesktopFactory *a1,
        struct IVirtualDesktopPersistence *a2,
        bool a3,
        const struct _GUID *a4,
        void **a5)
{
  void **v5; // rdi
  int v6; // eax
  int v7; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  CVirtualDesktopCollection *v11; // rcx
  CVirtualDesktopCollection *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct IVirtualDesktopFactory *v15; // [rsp+40h] [rbp+20h] BYREF
  struct IVirtualDesktopPersistence *v16; // [rsp+48h] [rbp+28h] BYREF
  bool v17; // [rsp+50h] [rbp+30h] BYREF
  CVirtualDesktopCollection *v18; // [rsp+58h] [rbp+38h] BYREF

  v17 = a3;
  v16 = a2;
  v15 = a1;
  v5 = a5;
  *a5 = 0LL;
  v18 = 0LL;
  Microsoft::WRL::ComPtr<CVirtualDesktopCollection>::InternalRelease(&v18);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopCollection,CVirtualDesktopCollection,IVirtualDesktopFactory * &,IVirtualDesktopPersistence * &,bool &>(
         &v18,
         &v15,
         &v16,
         &v17);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = (unsigned int)v6;
    v9 = 210LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)v8);
    goto LABEL_11;
  }
  *v5 = 0LL;
  if ( InlineIsEqualGUID(&GUID_9fafa2cb_97de_4908_b655_97e28836140d, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v12 = v18;
    *v5 = v18;
    (*(void (__fastcall **)(CVirtualDesktopCollection *))(*(_QWORD *)v12 + 8LL))(v12);
    v7 = 0;
  }
  else if ( InlineIsEqualGUID(v10, v10) )
  {
    v11 = v18;
    *v5 = v18;
    v7 = 0;
    (*(void (__fastcall **)(CVirtualDesktopCollection *))(*(_QWORD *)v11 + 8LL))(v11);
  }
  else
  {
    v7 = -2147467262;
  }
  if ( v7 < 0 )
  {
    v8 = (unsigned int)v7;
    v9 = 211LL;
    goto LABEL_10;
  }
LABEL_11:
  Microsoft::WRL::ComPtr<CVirtualDesktopCollection>::InternalRelease(&v18);
  return (unsigned int)v7;
}
