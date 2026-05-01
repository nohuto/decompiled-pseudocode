/*
 * XREFs of ?_CommitDismissView@CMultitaskingViewControllerBase@@AEAAXXZ @ 0x1803A5464
 * Callers:
 *     ??1BatchDismissView@CMultitaskingViewControllerBase@@QEAA@XZ @ 0x1803A48E8 (--1BatchDismissView@CMultitaskingViewControllerBase@@QEAA@XZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMultitaskingViewControllerBase::_CommitDismissView(CMultitaskingViewControllerBase *this)
{
  char v2; // bl
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // [rsp+28h] [rbp-18h] BYREF
  __int16 v9; // [rsp+30h] [rbp-10h]
  __int64 v10; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v12; // [rsp+60h] [rbp+20h] BYREF
  __int64 v13; // [rsp+68h] [rbp+28h] BYREF

  if ( *((_BYTE *)this + 112) )
  {
    v2 = *((_BYTE *)this + 113);
    v3 = *((_QWORD *)this + 15);
    v8 = v3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v8);
    *((_WORD *)this + 56) = 0;
    v4 = *((_QWORD *)this + 15);
    v9 = 0;
    v10 = 0LL;
    *((_QWORD *)this + 15) = 0LL;
    v12 = v4;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    v13 = 0LL;
    if ( v2 )
    {
      v5 = *((_QWORD *)this + 5);
      if ( v5 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
        v6 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v5 + 24LL))(
               v5,
               &GUID_334ba746_d848_47e3_beb7_05c9254f34fc,
               &v13);
        if ( v6 >= 0 )
        {
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 24LL))(v13, v3);
LABEL_10:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
          return;
        }
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x147,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
          (const char *)(unsigned int)v6);
      }
    }
    v12 = 0LL;
    v7 = *((_QWORD *)this + 5);
    if ( v7 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
      if ( (*(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v7 + 24LL))(
             v7,
             &GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9,
             &v12) >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 40LL))(v12);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    goto LABEL_10;
  }
}
