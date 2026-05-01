/*
 * XREFs of ?InsertBadgeGlyph@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUHSTRING__@@11@Z @ 0x180270C7C
 * Callers:
 *     ?TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z @ 0x18027D420 (-TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabViewManager::InsertBadgeGlyph(
        TabViewManager *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING a5)
{
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  __int64 *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v18[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v20; // [rsp+70h] [rbp+20h] BYREF

  v20 = 0LL;
  v9 = (__int64 *)*((_QWORD *)this + 152);
  v10 = *v9;
  v20 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v10 + 144))(v9, &v20);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v18[0] = 0LL;
    v13 = (__int64 *)*((_QWORD *)this + 152);
    v14 = *v13;
    v18[0] = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64 *, HSTRING, HSTRING, _QWORD, _QWORD, __int64 *))(v14 + 128))(
            v13,
            a3,
            a4,
            0LL,
            0LL,
            v18);
    v12 = v15;
    if ( v15 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v20 + 64LL))(v20, a5);
      v12 = v15;
      if ( v15 >= 0 )
      {
        v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 80LL))(v20, v18[0]);
        v12 = v15;
        if ( v15 >= 0 )
        {
          v15 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, __int64, _QWORD))(*(_QWORD *)a2 + 264LL))(
                  a2,
                  v20,
                  0LL);
          v12 = v15;
          if ( v15 >= 0 )
          {
            v12 = 0;
            goto LABEL_13;
          }
          v16 = 1287LL;
        }
        else
        {
          v16 = 1285LL;
        }
      }
      else
      {
        v16 = 1284LL;
      }
    }
    else
    {
      v16 = 1282LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v15);
LABEL_13:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v18);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4FF,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)(unsigned int)v11);
LABEL_14:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
  return v12;
}
