/*
 * XREFs of ?SetFramedView@FrameWrapper@@UEAAJPEAUIUnknown@@@Z @ 0x180185800
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B538 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$As@UINtUserViewWrapper@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UINtUserViewWrapper@@@WRL@Microsoft@@@Details@12@@Z @ 0x18018497C (--$As@UINtUserViewWrapper@@@-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@W.c)
 *     ?ReconcileFramedView@FrameWrapper@@AEAAJXZ @ 0x1801854D4 (-ReconcileFramedView@FrameWrapper@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall FrameWrapper::SetFramedView(FrameWrapper *this, struct IUnknown *a2)
{
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  __int64 (__fastcall ****v5)(_QWORD, GUID *, __int64 *); // r14
  int v6; // eax
  unsigned int LastError; // ebx
  __int64 (__fastcall *v8)(FrameWrapper *, __int64 *); // rbx
  int v9; // eax
  __int64 v10; // rdx
  const char *v11; // r9
  int v12; // eax
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  unsigned int v16; // [rsp+50h] [rbp+30h] BYREF
  __int64 v17; // [rsp+58h] [rbp+38h] BYREF
  __int64 v18; // [rsp+60h] [rbp+40h] BYREF
  __int64 v19; // [rsp+68h] [rbp+48h] BYREF

  QueryInterface = a2->lpVtbl->QueryInterface;
  v5 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))((char *)this + 40);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 5);
  v6 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, _QWORD))QueryInterface)(
         a2,
         &GUID_f4a53d68_890b_4931_bdbf_71158377eece,
         v5);
  LastError = v6;
  if ( v6 >= 0 )
  {
    v17 = 0LL;
    v8 = *(__int64 (__fastcall **)(FrameWrapper *, __int64 *))(*(_QWORD *)this + 32LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    v9 = v8(this, &v17);
    LastError = v9;
    if ( v9 < 0 )
    {
      v10 = 260LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
        (const char *)(unsigned int)v9);
LABEL_17:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
      return LastError;
    }
    v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 24LL))(v17, &v19);
    LastError = v9;
    if ( v9 < 0 )
    {
      v10 = 262LL;
      goto LABEL_7;
    }
    if ( !(unsigned int)GetWindowBand(v19, &v16) )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x108,
                    (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
                    v11);
      goto LABEL_17;
    }
    v18 = 0LL;
    v12 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<INtUserViewWrapper>(
            v5,
            &v18);
    LastError = v12;
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 40LL))(v18, v16);
      LastError = v12;
      if ( v12 >= 0 )
      {
        FrameWrapper::ReconcileFramedView((FrameWrapper *)((char *)this - 32));
        LastError = 0;
        goto LABEL_16;
      }
      v13 = 267LL;
    }
    else
    {
      v13 = 266LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v12);
LABEL_16:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFC,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
    (const char *)(unsigned int)v6);
  return LastError;
}
