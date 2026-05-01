/*
 * XREFs of ?AsyncDestroy@XamlExplorerHostWindow@@UEAAJXZ @ 0x1802D37F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x1802D2CBC (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_bf3c92b221d60276737ef151eb6f13fc___ @ 0x1802D30B8 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_bf3c92b221d60276737ef151eb6f13fc.c)
 *     ?Cloak@XamlExplorerHostWindow@@AEAAXXZ @ 0x1802D3B8C (-Cloak@XamlExplorerHostWindow@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall XamlExplorerHostWindow::AsyncDestroy(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rsi
  __int64 Ptr; // rdi
  _QWORD *v4; // rbx
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // ebx
  RTL_SRWLOCK *v10; // [rsp+20h] [rbp-38h] BYREF
  RTL_SRWLOCK *v11; // [rsp+28h] [rbp-30h] BYREF
  RTL_SRWLOCK *v12; // [rsp+60h] [rbp+8h] BYREF
  RTL_SRWLOCK *v13; // [rsp+68h] [rbp+10h]
  _QWORD *v14; // [rsp+70h] [rbp+18h]
  __int64 v15; // [rsp+78h] [rbp+20h]

  v2 = this + 12;
  AcquireSRWLockShared(this + 12);
  v13 = v2;
  XamlExplorerHostWindow::Cloak((XamlExplorerHostWindow *)this);
  if ( this[9].Ptr )
  {
    v12 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
    Ptr = (__int64)this[9].Ptr;
    v4 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v14 = v4;
    v10 = this;
    v11 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
    v5 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_bf3c92b221d60276737ef151eb6f13fc___(
           v4,
           (__int64)&v10);
    v14 = v5;
    v6 = Windows::UI::Core::ICoreDispatcher::RunAsync(Ptr, 0LL, (__int64)v5);
    v7 = v6;
    v15 = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    if ( v5 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*v5 + 16LL))(v5, v7);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    v8 = 0;
  }
  else
  {
    v8 = -2147019873;
  }
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v8;
}
