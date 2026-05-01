/*
 * XREFs of ?RunCallback@XamlExplorerHostWindow@@UEAAXPEAUIXamlExplorerHostWindowCreatedCallback@@@Z @ 0x1802D3C70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x1802D2CBC (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_64960682c46b5a18a905cfbd0aa4a0cd___ @ 0x1802D2FBC (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_64960682c46b5a18a905cfbd0aa4a0cd.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall XamlExplorerHostWindow::RunCallback(
        RTL_SRWLOCK *this,
        struct IXamlExplorerHostWindowCreatedCallback *a2)
{
  RTL_SRWLOCK *v4; // rdi
  __int64 Ptr; // r15
  _QWORD *v6; // rbx
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  RTL_SRWLOCK *v10; // [rsp+28h] [rbp-20h] BYREF
  RTL_SRWLOCK *v11; // [rsp+30h] [rbp-18h] BYREF
  struct IXamlExplorerHostWindowCreatedCallback *v12; // [rsp+38h] [rbp-10h] BYREF
  struct IXamlExplorerHostWindowCreatedCallback *v13; // [rsp+80h] [rbp+38h] BYREF
  RTL_SRWLOCK *v14; // [rsp+88h] [rbp+40h] BYREF
  RTL_SRWLOCK *v15; // [rsp+90h] [rbp+48h]
  _QWORD *v16; // [rsp+98h] [rbp+50h]

  v4 = this + 12;
  AcquireSRWLockExclusive(this + 12);
  v15 = v4;
  v14 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
  v13 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
  Ptr = (__int64)this[9].Ptr;
  if ( Ptr )
  {
    v6 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v16 = v6;
    v10 = this;
    v11 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
    v12 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
    v7 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_64960682c46b5a18a905cfbd0aa4a0cd___(
           v6,
           (__int64)&v10);
    v16 = v7;
    v8 = Windows::UI::Core::ICoreDispatcher::RunAsync(Ptr, 0LL, (__int64)v7);
    v9 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v7 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*v7 + 16LL))(v7, v9);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
