/*
 * XREFs of ?get_RequestedDisplayRegionIds@PresentationRequestedArgs@@UEAAJPEAPEAUIInspectable@@@Z @ 0x18015B3E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PresentationRequestedArgs::get_RequestedDisplayRegionIds(
        PresentationRequestedArgs *this,
        struct IInspectable **a2)
{
  __int64 v3; // rax
  __int64 (*v4)(void); // rax
  int v5; // ebx
  const char *v6; // r9
  __int64 result; // rax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v10)(_QWORD, GUID *, struct IInspectable **); // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  v3 = **((_QWORD **)this + 7);
  v10 = 0LL;
  v4 = *(__int64 (**)(void))(v3 + 64);
  try
  {
    v5 = v4();
    if ( v5 < 0 )
    {
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v10);
      return (unsigned int)v5;
    }
    if ( v10 )
    {
      v8 = (**v10)(v10, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, a2);
      if ( v8 >= 0 )
      {
LABEL_8:
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v10);
        return 0LL;
      }
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        5495LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v8);
    }
    *a2 = 0LL;
    goto LABEL_8;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x299,
                           (__int64)"pcshell\\twinui\\appmanager\\lib\\amcommon.cpp",
                           v6);
  }
  return result;
}
