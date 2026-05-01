/*
 * XREFs of ??1XamlBaseViewController@@IE$AAA@XZ @ 0x180318458
 * Callers:
 *     ??1XamlAllUpViewController@@AE$AAA@XZ @ 0x18031836C (--1XamlAllUpViewController@@AE$AAA@XZ.c)
 *     _XamlAllUpViewController::_XamlAllUpViewController_::_1_::dtor$0 @ 0x1803183EF (_XamlAllUpViewController--_XamlAllUpViewController_--_1_--dtor$0.c)
 *     ??1XamlAltTabViewController@@AE$AAA@XZ @ 0x18031FB2C (--1XamlAltTabViewController@@AE$AAA@XZ.c)
 *     _XamlAltTabViewController::_XamlAltTabViewController_::_1_::dtor$0 @ 0x18031FBB2 (_XamlAltTabViewController--_XamlAltTabViewController_--_1_--dtor$0.c)
 *     ?__abi_Release@?QObject@Platform@@XamlSnapAssistViewController@@UE$AAAKXZ @ 0x180322A70 (-__abi_Release@-QObject@Platform@@XamlSnapAssistViewController@@UE$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlBaseViewController@@UE$AAAKXZ @ 0x180328E00 (-__abi_Release@-QObject@Platform@@XamlBaseViewController@@UE$AAAKXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801EAB30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBa.c)
 */

__int64 __fastcall XamlBaseViewController::~XamlBaseViewController(__int64 *a1)
{
  volatile int *v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rcx

  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 12);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 11);
  v3 = a1[10];
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown,Microsoft::WRL::FtmBase>::Release(
      v3,
      v2);
  v4 = a1[9];
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 8);
  result = wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 7);
  v6 = a1[6];
  if ( v6 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return result;
}
