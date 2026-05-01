/*
 * XREFs of _lambda_89df5410cec75dfa270b441e23c20fb9_::__lambda_89df5410cec75dfa270b441e23c20fb9_ @ 0x180285F84
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_89df5410cec75dfa270b441e23c20fb9___::_scalar_deleting_destructor_ @ 0x180286D00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_89df5410cec75dfa270b441e23c20fb9___--_scala.c)
 *     ?AttachTitleBarToView@TitleBarController@@UEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180286D90 (-AttachTitleBarToView@TitleBarController@@UEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@Co.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIViewGroupInternal@@UIViewGroup@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UITitleBarRecovery@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180075E60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$Ch_ea_180075E60.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall lambda_89df5410cec75dfa270b441e23c20fb9_::__lambda_89df5410cec75dfa270b441e23c20fb9_(_QWORD *a1)
{
  _BYTE *v1; // rbx
  __int128 v3; // xmm0
  __int64 result; // rax
  __int64 v5; // rcx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v1 = (_BYTE *)a1[5];
  if ( v1 )
  {
    if ( v1[16] )
    {
      v3 = *(_OWORD *)v1;
      v1[16] = 0;
      v6 = v3;
      DwmpEndAnimationClock(&v6);
    }
    operator delete(v1, (const struct std::nothrow_t *)0x14);
  }
  result = wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 2);
  v5 = a1[1];
  if ( v5 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IViewGroupInternal,IViewGroup,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,ITitleBarRecovery,Microsoft::WRL::FtmBase>::Release(v5);
  return result;
}
