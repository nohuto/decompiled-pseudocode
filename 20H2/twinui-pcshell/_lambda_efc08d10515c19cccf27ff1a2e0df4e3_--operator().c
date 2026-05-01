/*
 * XREFs of _lambda_efc08d10515c19cccf27ff1a2e0df4e3_::operator() @ 0x18026AEB8
 * Callers:
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_efc08d10515c19cccf27ff1a2e0df4e3___::Invoke @ 0x1802710A0 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_efc08d10515c19cccf_ea_1802710A0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180036718 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_efc08d10515c19cccf27ff1a2e0df4e3_::operator()(__int64 **a1, struct IUnknown *a2)
{
  __int64 v4; // rcx
  const char *v5; // r9
  __int64 result; // rax
  __int64 v7; // r10
  __int64 *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown *v13; // [rsp+48h] [rbp+10h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  try
  {
    ((void (*)(void))a2->lpVtbl->QueryInterface)();
    v4 = v14;
    if ( v14 )
    {
      v7 = **a1;
      if ( v7 )
      {
        v13 = 0LL;
        v8 = (__int64 *)a1[1][46];
        v9 = *v8;
        v13 = 0LL;
        if ( (*(int (__fastcall **)(__int64 *, __int64, GUID *, struct IUnknown **))(v9 + 56))(
               v8,
               v7,
               &GUID_fa2d975c_fba1_4f1c_ab07_aad66fcf2d12,
               &v13) >= 0
          && !(unsigned int)SHIsSameObject(v13, a2) )
        {
          v10 = ((__int64 (__fastcall *)(struct IUnknown *, __int64 *, __int64, _QWORD))v13->lpVtbl[1].QueryInterface)(
                  v13,
                  a1[2],
                  **a1,
                  *a1[3]);
          if ( v10 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              2471LL,
              (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
              (const char *)(unsigned int)v10);
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v13);
        v7 = **a1;
        v4 = v14;
      }
      v11 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)v4 + 24LL))(
              v4,
              a1[2],
              v7,
              *a1[3]);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          2476LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v11);
      *(_BYTE *)a1[4] = 1;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
      result = 0LL;
    }
    else
    {
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x9B1,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v5);
  }
  return result;
}
