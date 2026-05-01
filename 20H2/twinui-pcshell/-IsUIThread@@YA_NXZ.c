/*
 * XREFs of ?IsUIThread@@YA_NXZ @ 0x18031FEC4
 * Callers:
 *     ?UnregisterForEvents@XamlAltTabViewController@@QE$AAAXXZ @ 0x1803209E8 (-UnregisterForEvents@XamlAltTabViewController@@QE$AAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EBCEC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ @ 0x1802EE678 (-get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ.c)
 *     ?get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ @ 0x18030DE3C (-get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ.c)
 *     ?get@HasThreadAccess@ICoreDispatcher@Core@UI@Windows@@UE$AAA_NXZ @ 0x1803214B8 (-get@HasThreadAccess@ICoreDispatcher@Core@UI@Windows@@UE$AAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall IsUIThread(__int64 a1, __int64 a2, __int64 a3, void **a4)
{
  char v4; // si
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdi
  char v8; // bp
  __int64 v10; // [rsp+48h] [rbp+10h]

  v4 = 0;
  v5 = Windows::UI::Xaml::Window::Current::get(a1, a2, a3, a4);
  v6 = __abi_winrt_ptr_ctor(v5);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( !v6 )
  {
    v7 = v10;
    goto LABEL_7;
  }
  v7 = Windows::UI::Xaml::IWindow::Dispatcher::get(v6);
  v4 = 1;
  if ( !(unsigned __int8)Windows::UI::Core::ICoreDispatcher::HasThreadAccess::get(v7) )
  {
LABEL_7:
    v8 = 0;
    goto LABEL_8;
  }
  v8 = 1;
LABEL_8:
  if ( (v4 & 1) != 0 && v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v8;
}
