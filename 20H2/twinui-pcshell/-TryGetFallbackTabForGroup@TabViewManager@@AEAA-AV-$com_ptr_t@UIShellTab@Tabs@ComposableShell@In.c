/*
 * XREFs of ?TryGetFallbackTabForGroup@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18027E078
 * Callers:
 *     ?SwitchToFallbackTabForGroup@TabViewManager@@UEAAJAEBU_GUID@@@Z @ 0x18027C110 (-SwitchToFallbackTabForGroup@TabViewManager@@UEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18003C7E4 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 */

_QWORD *__fastcall TabViewManager::TryGetFallbackTabForGroup(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  __int64 *v3; // r9
  __int64 *v5; // rdx
  __int64 *v6; // rax

  v3 = *(__int64 **)(a1 + 1328);
  v5 = v3;
  v6 = (__int64 *)v3[1];
  if ( *((_BYTE *)v6 + 25) )
    goto LABEL_8;
  do
  {
    if ( v6[4] >= a3 )
    {
      v5 = v6;
      v6 = (__int64 *)*v6;
    }
    else
    {
      v6 = (__int64 *)v6[2];
    }
  }
  while ( !*((_BYTE *)v6 + 25) );
  if ( v5 == v3 || a3 < v5[4] )
LABEL_8:
    v5 = *(__int64 **)(a1 + 1328);
  if ( v5 == v3 )
    *a2 = 0LL;
  else
    wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
      a2,
      v5[5]);
  return a2;
}
