/*
 * XREFs of ?GetPosition@KioskPositioner@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1803BAC00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewArrangePositionSnapshot@@UIApplicationViewArrangePosition@@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewArrangePosition@@AEAPEAUHWND__@@@Z @ 0x1800484F4 (--$MakeAndInitialize@VCCommonApplicationViewArrangePositionSnapshot@@UIApplicationViewArrangePos.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KioskPositioner::GetPosition(KioskPositioner *this, HWND a2, const struct _GUID *a3, void **a4)
{
  __int64 result; // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  const char *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v12; // [rsp+30h] [rbp+8h] BYREF
  HWND v13; // [rsp+38h] [rbp+10h] BYREF

  v13 = a2;
  *a4 = 0LL;
  if ( !*((_BYTE *)this + 528) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x254,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  v12 = 0LL;
  v7 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewArrangePositionSnapshot,IApplicationViewArrangePosition,HWND__ * &>(
         &v12,
         &v13);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x256,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v7);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v12);
    return v8;
  }
  try
  {
    if ( v12 )
    {
      v9 = (**(__int64 (__fastcall ***)(void *, const struct _GUID *, void **))v12)(v12, a3, a4);
      if ( v9 >= 0 )
      {
LABEL_9:
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v12);
        return 0LL;
      }
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        5495LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v9);
    }
    *a4 = 0LL;
    goto LABEL_9;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x25A,
                           (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           v10);
  }
  return result;
}
