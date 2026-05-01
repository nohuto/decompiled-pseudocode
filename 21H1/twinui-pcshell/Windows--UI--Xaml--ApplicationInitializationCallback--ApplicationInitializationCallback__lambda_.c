/*
 * XREFs of Windows::UI::Xaml::ApplicationInitializationCallback::ApplicationInitializationCallback__lambda_47949b86cac825ad79df017cffdf46fe___ @ 0x1802CD990
 * Callers:
 *     _lambda_05f458ff3b283a3e9a9130333ab0a931_::operator() @ 0x1802CE8AC (_lambda_05f458ff3b283a3e9a9130333ab0a931_--operator().c)
 * Callees:
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1802CB468 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall Windows::UI::Xaml::ApplicationInitializationCallback::ApplicationInitializationCallback__lambda_47949b86cac825ad79df017cffdf46fe___(
        _QWORD *a1)
{
  _QWORD *v2; // rax

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &Windows::UI::Xaml::ApplicationInitializationCallback::`vftable'{for `__abi_IUnknown'};
  a1[1] = &Windows::UI::Xaml::ApplicationInitializationCallback::`vftable'{for `Platform::Object'};
  a1[2] = &Windows::UI::Xaml::ApplicationInitializationCallback::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 3));
  v2 = a1 + 5;
  a1[37] = a1 + 5;
  if ( a1 != (_QWORD *)-40LL )
    *v2 = &off_180597390;
  a1[37] = v2;
  return a1;
}
