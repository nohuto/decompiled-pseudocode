/*
 * XREFs of ?EnumerateAppViews@Win32ProcessInfo@@QEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x18045C33C
 * Callers:
 *     ?EnumerateAppViews@Win32AppInfo@@QEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x18045C294 (-EnumerateAppViews@Win32AppInfo@@QEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Internal@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Win32ProcessInfo::EnumerateAppViews(
        Win32ProcessInfo *this,
        struct Windows::Internal::FamilySafety::AppLimits::IAppStateDataReporter *a2)
{
  _QWORD *v2; // r8
  _QWORD *v5; // rsi
  _QWORD *j; // rbx
  __int64 **v7; // rax
  __int64 i; // rax
  __int64 *v9; // rcx

  v2 = (_QWORD *)((char *)this + 24);
  if ( *((_QWORD *)this + 6) >= 8uLL )
    v2 = (_QWORD *)*v2;
  (*(void (__fastcall **)(struct Windows::Internal::FamilySafety::AppLimits::IAppStateDataReporter *, _QWORD, _QWORD *, const WCHAR *))(*(_QWORD *)a2 + 32LL))(
    a2,
    *((unsigned int *)this + 4),
    v2,
    &szAgent);
  v5 = *(_QWORD **)this;
  j = **(_QWORD ***)this;
  while ( j != v5 )
  {
    (*(void (__fastcall **)(struct Windows::Internal::FamilySafety::AppLimits::IAppStateDataReporter *, _QWORD))(*(_QWORD *)a2 + 40LL))(
      a2,
      j[4]);
    v7 = (__int64 **)j[2];
    if ( *((_BYTE *)v7 + 25) )
    {
      for ( i = j[1]; !*(_BYTE *)(i + 25) && j == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        j = (_QWORD *)i;
      j = (_QWORD *)i;
    }
    else
    {
      v9 = *v7;
      for ( j = (_QWORD *)j[2]; !*((_BYTE *)v9 + 25); v9 = (__int64 *)*v9 )
        j = v9;
    }
  }
}
