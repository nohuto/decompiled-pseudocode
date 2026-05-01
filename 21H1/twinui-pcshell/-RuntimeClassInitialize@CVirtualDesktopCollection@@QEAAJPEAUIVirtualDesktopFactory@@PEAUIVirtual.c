/*
 * XREFs of ?RuntimeClassInitialize@CVirtualDesktopCollection@@QEAAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPersistence@@_N@Z @ 0x180413F04
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktopCollection@@V1@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtualDesktopPersistence@@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopCollection@@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtualDesktopPersistence@@AEA_N@Z @ 0x180413200 (--$MakeAndInitialize@VCVirtualDesktopCollection@@V1@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtu.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?AddVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x180413500 (-AddVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAPEAUIVirtualDesktop@@@Z.c)
 */

__int64 __fastcall CVirtualDesktopCollection::RuntimeClassInitialize(
        CVirtualDesktopCollection *this,
        struct IVirtualDesktopFactory *a2,
        struct IVirtualDesktopPersistence *a3,
        char a4)
{
  struct IVirtualDesktopFactory *v5; // rax
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v11; // rsi
  __int64 (__fastcall *v12)(__int64, __int64 *, GUID *, char *); // rdi
  struct IVirtualDesktopPersistence *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IVirtualDesktopFactory *v15; // [rsp+50h] [rbp+8h] BYREF

  *((_BYTE *)this + 16) = a4;
  v5 = (struct IVirtualDesktopFactory *)*((_QWORD *)this + 3);
  if ( v5 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IVirtualDesktopFactory *))(*(_QWORD *)a2 + 8LL))(a2);
      v5 = (struct IVirtualDesktopFactory *)*((_QWORD *)this + 3);
    }
    v15 = v5;
    *((_QWORD *)this + 3) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  }
  v8 = CVirtualDesktopCollection::AddVirtualDesktop(this, 0LL);
  if ( v8 < 0 )
  {
    v9 = 194LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v11 = *((_QWORD *)this + 3);
  v12 = *(__int64 (__fastcall **)(__int64, __int64 *, GUID *, char *))(*(_QWORD *)v11 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 5);
  v8 = v12(v11, &qword_18051BA40, &GUID_ff72ffdd_be7e_43fc_9c03_ad81681e88e4, (char *)this + 40);
  if ( v8 < 0 )
  {
    v9 = 195LL;
    goto LABEL_7;
  }
  v13 = (struct IVirtualDesktopPersistence *)*((_QWORD *)this + 4);
  if ( v13 != a3 )
  {
    if ( a3 )
    {
      (*(void (__fastcall **)(struct IVirtualDesktopPersistence *))(*(_QWORD *)a3 + 8LL))(a3);
      v13 = (struct IVirtualDesktopPersistence *)*((_QWORD *)this + 4);
    }
    *((_QWORD *)this + 4) = a3;
    if ( v13 )
      (*(void (__fastcall **)(struct IVirtualDesktopPersistence *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return 0LL;
}
