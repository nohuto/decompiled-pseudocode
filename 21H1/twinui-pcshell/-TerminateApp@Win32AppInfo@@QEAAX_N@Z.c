/*
 * XREFs of ?TerminateApp@Win32AppInfo@@QEAAX_N@Z @ 0x180439B4C
 * Callers:
 *     ?TerminateAppOnce@Win32AppStateManager@@AEAA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x180439DD0 (-TerminateAppOnce@Win32AppStateManager@@AEAA_NAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x18004FB94 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?get@?$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z @ 0x1804331F8 (-get@-$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z.c)
 *     ?IsProcessActive@Win32ProcessInfo@@QEAA_NXZ @ 0x180439478 (-IsProcessActive@Win32ProcessInfo@@QEAA_NXZ.c)
 *     ?TerminateApp@Win32ProcessInfo@@QEAAX_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180439C38 (-TerminateApp@Win32ProcessInfo@@QEAAX_NAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@.c)
 */

void __fastcall Win32AppInfo::TerminateApp(Win32AppInfo *this, char a2)
{
  __int64 *v2; // rdi
  __int64 *j; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  _DWORD *v8; // rcx
  __int64 v9; // r9
  __int64 **v10; // rax
  __int64 *i; // rax
  __int64 *v12; // rcx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 4);
  j = (__int64 *)*v2;
  while ( j != v2 )
  {
    if ( Win32ProcessInfo::IsProcessActive((__int64 ***)j[5]) )
    {
      v8 = (_DWORD *)wil::details::static_lazy<AppUsageTelemetry>::get(
                       v6,
                       _lambda_4d19eb78d2d318fd81ccffb962d1d1a6_::_lambda_invoker_cdecl_)[1];
      if ( *v8 > 5u )
      {
        v13 = (__int64)L"Found app process to terminate";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
          (__int64)v8,
          (unsigned __int8 *)dword_1804FDCB4,
          0LL,
          v9,
          (const WCHAR **)&v13);
      }
      LOBYTE(v7) = a2;
      Win32ProcessInfo::TerminateApp(j[5], v7, this);
    }
    v10 = (__int64 **)j[2];
    if ( *((_BYTE *)v10 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v12 = *v10;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v12 + 25); v12 = (__int64 *)*v12 )
        j = v12;
    }
  }
}
