/*
 * XREFs of ?GetViewForTab@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18031BB00
 * Callers:
 *     ?OnTabSelectionChanged@AppViewDataSourceAdapterBase@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18031D53C (-OnTabSelectionChanged@AppViewDataSourceAdapterBase@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Int.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180016B3C (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 */

unsigned __int64 *__fastcall AppViewDataSourceAdapterBase::GetViewForTab(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 *v5; // r9
  __int64 *v6; // rbx
  __int64 *v7; // r8
  unsigned __int64 v8; // rcx
  __int64 *v9; // rax
  int v10; // edx
  int v11; // ebx
  unsigned __int64 v13; // [rsp+30h] [rbp+8h] BYREF
  __int64 v14; // [rsp+38h] [rbp+10h] BYREF

  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    &v13,
    a3);
  v5 = *(__int64 **)(a1 + 152);
  v6 = v5;
  v7 = (__int64 *)v5[1];
  if ( *((_BYTE *)v7 + 25) )
    goto LABEL_8;
  do
  {
    if ( v7[4] >= v13 )
    {
      v6 = v7;
      v7 = (__int64 *)*v7;
    }
    else
    {
      v7 = (__int64 *)v7[2];
    }
  }
  while ( !*((_BYTE *)v7 + 25) );
  if ( v6 == v5 || v13 < v6[4] )
LABEL_8:
    v6 = *(__int64 **)(a1 + 152);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v13);
  if ( v6 == *(__int64 **)(a1 + 152) )
  {
    v8 = 0LL;
    v9 = &v14;
    v10 = 0;
    v11 = 1;
  }
  else
  {
    wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
      &v13,
      v6[5]);
    v8 = v13;
    v9 = (__int64 *)&v13;
    v11 = 0;
    v10 = 2;
  }
  *v9 = 0LL;
  *a2 = v8;
  if ( v10 )
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v13);
  if ( v11 )
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
  return a2;
}
