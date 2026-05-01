/*
 * XREFs of ?MoveVirtualCursor@XamlAltTabViewHost@@UEAAJPEAUtagPOINT@@@Z @ 0x1803114C0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007A004 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EBCEC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x1802F3F6C (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     ?get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ @ 0x18030DE3C (-get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_61aef9b7069e9b07cc0657df3b99dbfa___ @ 0x18030E1A8 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_61aef9b7069e9b07cc0657df3b99dbfa.c)
 *     _lambda_61aef9b7069e9b07cc0657df3b99dbfa_::_lambda_61aef9b7069e9b07cc0657df3b99dbfa_ @ 0x18030EC1C (_lambda_61aef9b7069e9b07cc0657df3b99dbfa_--_lambda_61aef9b7069e9b07cc0657df3b99dbfa_.c)
 *     _lambda_61aef9b7069e9b07cc0657df3b99dbfa_::_lambda_61aef9b7069e9b07cc0657df3b99dbfa__0 @ 0x18030EC58 (_lambda_61aef9b7069e9b07cc0657df3b99dbfa_--_lambda_61aef9b7069e9b07cc0657df3b99dbfa__0.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall XamlAltTabViewHost::MoveVirtualCursor(XamlAltTabViewHost *this, struct tagPOINT *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  const char *v5; // r9
  int v6; // r15d
  __int64 v7; // rcx
  float y; // xmm1_4
  __int64 v9; // r14
  __int64 v10; // rbx
  _QWORD *v11; // rsi
  __int64 *v12; // rdx
  _QWORD *v13; // rsi
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16[3]; // [rsp+28h] [rbp-60h] BYREF
  int v17; // [rsp+40h] [rbp-48h]
  __int64 v18[8]; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v20; // [rsp+90h] [rbp+8h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+18h] BYREF
  _QWORD *v22; // [rsp+A8h] [rbp+20h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  v16[2] = (__int64)v4;
  try
  {
    v6 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
    v17 = v6;
    v7 = *((_QWORD *)this + 21);
    if ( v7 )
    {
      y = (float)a2->y;
      *(float *)&v20 = (float)a2->x;
      *((float *)&v20 + 1) = y;
      v9 = __abi_winrt_ptr_ctor(v7);
      v21 = v9;
      lambda_61aef9b7069e9b07cc0657df3b99dbfa_::_lambda_61aef9b7069e9b07cc0657df3b99dbfa_(v16, &v21, &v20);
      v10 = Windows::UI::Xaml::IWindow::Dispatcher::get(*((_QWORD *)this + 21));
      v20 = v10;
      v11 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
      v22 = v11;
      v12 = lambda_61aef9b7069e9b07cc0657df3b99dbfa_::_lambda_61aef9b7069e9b07cc0657df3b99dbfa__0(v18, v16);
      v13 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_61aef9b7069e9b07cc0657df3b99dbfa___(
              v11,
              v12);
      v22 = v13;
      v14 = Windows::UI::Core::ICoreDispatcher::RunAsync(v10, 0LL, (__int64)v13);
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      if ( v13 )
        (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      if ( v16[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16[0] + 16LL))(v16[0]);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    if ( v6 >= 0 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v20) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x166,
                     (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
                     v5);
    return (unsigned int)v20;
  }
  return result;
}
