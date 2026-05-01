/*
 * XREFs of ?EnumerateAppViews@Win32AppInfo@@QEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x18045C9D4
 * Callers:
 *     ?EnumerateAppStateData@Win32AppStateManager@@UEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x18045C940 (-EnumerateAppStateData@Win32AppStateManager@@UEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafe.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?EnumerateAppViews@Win32ProcessInfo@@QEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x18045CA7C (-EnumerateAppViews@Win32ProcessInfo@@QEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Inter.c)
 */

void __fastcall Win32AppInfo::EnumerateAppViews(
        __int64 **this,
        struct Windows::Internal::FamilySafety::AppLimits::IAppStateDataReporter *a2)
{
  __int64 v3; // rax
  Win32AppInfo *v5; // rdx
  __int64 *v6; // rsi
  __int64 *j; // rbx
  __int64 **v8; // rax
  __int64 *i; // rax
  __int64 *v10; // rcx

  v3 = *(_QWORD *)a2;
  v5 = (Win32AppInfo *)this;
  if ( (unsigned __int64)this[3] >= 8 )
    v5 = (Win32AppInfo *)*this;
  (*(void (__fastcall **)(struct Windows::Internal::FamilySafety::AppLimits::IAppStateDataReporter *, Win32AppInfo *))(v3 + 24))(
    a2,
    v5);
  v6 = this[4];
  j = (__int64 *)*v6;
  while ( j != v6 )
  {
    Win32ProcessInfo::EnumerateAppViews((Win32ProcessInfo *)j[5], a2);
    v8 = (__int64 **)j[2];
    if ( *((_BYTE *)v8 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v10 = *v8;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v10 + 25); v10 = (__int64 *)*v10 )
        j = v10;
    }
  }
}
