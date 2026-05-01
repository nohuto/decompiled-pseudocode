/*
 * XREFs of ?WindowCreated@XamlExplorerHostWindow@@UEAAXXZ @ 0x1802F5570
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x1802EB25C (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EBCEC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?GetForCurrentThread@CoreWindow@Core@UI@Windows@@SAPE$AAV1234@XZ @ 0x1802F3E18 (-GetForCurrentThread@CoreWindow@Core@UI@Windows@@SAPE$AAV1234@XZ.c)
 *     ?get@ViewModel@__ITaskViewTimelinePublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVTaskViewTimelineViewModel@3456@XZ @ 0x1802F415C (-get@ViewModel@__ITaskViewTimelinePublicNonVirtuals@Switcher@Experiences@ComposableShell@Windows.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall XamlExplorerHostWindow::WindowCreated(XamlExplorerHostWindow *this)
{
  RTL_SRWLOCK *v2; // r14
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  void **v6; // r9
  __int64 v7; // rbx
  _QWORD **v8; // rsi
  __int64 (__fastcall *v9)(_QWORD **, GUID *, __int64 *); // rbx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rbx
  __int64 *v14; // rax
  __int64 v15; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v17; // [rsp+70h] [rbp+30h] BYREF
  _QWORD **v18; // [rsp+78h] [rbp+38h] BYREF
  __int64 v19; // [rsp+80h] [rbp+40h] BYREF
  RTL_SRWLOCK *v20; // [rsp+88h] [rbp+48h]

  v19 = 0LL;
  v2 = (RTL_SRWLOCK *)((char *)this + 96);
  AcquireSRWLockExclusive((PSRWLOCK)this + 12);
  v20 = v2;
  v7 = Windows::UI::Core::CoreWindow::GetForCurrentThread(v4, v3, v5, v6);
  v18 = (_QWORD **)v7;
  v8 = (_QWORD **)__abi_winrt_ptr_ctor(v7);
  v18 = v8;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v17 = 0LL;
  v9 = (__int64 (__fastcall *)(_QWORD **, GUID *, __int64 *))**v8;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  v10 = v9(v8, &GUID_45d64a29_a63e_4cb6_b498_5781d298cb4f, &v17);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      86LL,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostwindow.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  v11 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v17 + 24LL))(v17, (char *)this + 88);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      87LL,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostwindow.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  if ( *((_DWORD *)this + 20) != 1 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 7) + 32LL))(
            *((_QWORD *)this + 7),
            *((_QWORD *)this + 11),
            0LL);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        92LL,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostwindow.cpp",
        (const char *)(unsigned int)v12);
      __debugbreak();
    }
  }
  v13 = WindowsInternal::ComposableShell::Experiences::Switcher::__ITaskViewTimelinePublicNonVirtuals::ViewModel::get((__int64)v8);
  __abi_winrt_ptr_assign((__int64 *)this + 9, v13);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = (__int64 *)((char *)this + 48);
  v15 = 0LL;
  if ( &v18 != (_QWORD ***)((char *)this + 48) )
  {
    v15 = *v14;
    *v14 = 0LL;
  }
  v18 = 0LL;
  v19 = v15;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  ((void (__fastcall *)(_QWORD **))(*v8)[2])(v8);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  if ( v15 )
    (*(void (__fastcall **)(__int64, XamlExplorerHostWindow *))(*(_QWORD *)v15 + 24LL))(v15, this);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
}
