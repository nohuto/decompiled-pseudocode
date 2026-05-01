/*
 * XREFs of ?CreateInstance@?$wrl_class_factory@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@winrt@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800C9F50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x180096214 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$make@V?$module_count_wrapper@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@details@winrt@@$$V@winrt@@YA?AUWindowTabHost@Shell@Internal@Windows@0@XZ @ 0x1800C7FA8 (--$make@V-$module_count_wrapper@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@det.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800C9158 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x18042F20C (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::wrl_class_factory<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 result; // rax
  __int64 (__fastcall ***v7)(_QWORD, __int64, _QWORD *); // rcx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  const char *v11; // r9
  __int64 v12[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 (__fastcall ***v14)(_QWORD, __int64, _QWORD *); // [rsp+48h] [rbp+10h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, _QWORD, _QWORD *); // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  if ( a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38,
      (__int64)"internal\\shellcommonshell\\inc\\winrt/wrl_class_factory.h",
      (const char *)0x80040110LL);
    return 2147746064LL;
  }
  else
  {
    try
    {
      winrt::make<winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::WindowTabHost>,>(v12);
      v7 = (__int64 (__fastcall ***)(_QWORD, __int64, _QWORD *))v12[0];
      if ( v12[0] )
      {
        v14 = 0LL;
        v8 = (**(unsigned int (__fastcall ***)(__int64, __int64 *, _QWORD *))v12[0])(
               v12[0],
               &winrt::impl::guid_storage<IUnknown>::value,
               &v14);
        winrt::check_hresult(v8);
        v7 = v14;
      }
      v15 = v7;
      v9 = (**v7)(v7, a3, a4);
      v10 = v9;
      if ( v9 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3D,
          (__int64)"internal\\shellcommonshell\\inc\\winrt/wrl_class_factory.h",
          (const char *)(unsigned int)v9);
      winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(&v15);
      winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(v12);
      result = v10;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x3F,
                             (unsigned int)"internal\\shellcommonshell\\inc\\winrt/wrl_class_factory.h",
                             v11);
    }
  }
  return result;
}
