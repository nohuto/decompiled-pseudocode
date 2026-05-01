/*
 * XREFs of ?IsAppActive@UwpAppPackageInfo@@QEAA_NXZ @ 0x1804593CC
 * Callers:
 *     ?UpdateAppView@UwpAppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@_N@Z @ 0x180459FB0 (-UpdateAppView@UwpAppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety.c)
 * Callees:
 *     <none>
 */

char __fastcall UwpAppPackageInfo::IsAppActive(UwpAppPackageInfo *this)
{
  __int64 *v1; // r8
  __int64 *j; // rax
  __int64 **v3; // rcx
  __int64 *i; // rcx
  __int64 *v5; // rdx

  v1 = (__int64 *)*((_QWORD *)this + 4);
  j = (__int64 *)*v1;
  while ( j != v1 )
  {
    if ( *(_DWORD *)j[5] != 1 )
      return 1;
    v3 = (__int64 **)j[2];
    if ( *((_BYTE *)v3 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v5 = *v3;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v5 + 25); v5 = (__int64 *)*v5 )
        j = v5;
    }
  }
  return 0;
}
