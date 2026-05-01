/*
 * XREFs of ??$DebugInfo@AEAY0CE@$$CBG@AppUsageTelemetry@@SAXAEAY0CE@$$CBG@Z @ 0x18045AF20
 * Callers:
 *     ?TerminateApp@Win32ProcessInfo@@QEAAX_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18045DA2C (-TerminateApp@Win32ProcessInfo@@QEAAX_NAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@.c)
 *     ?TerminateAppOnce@Win32AppStateManager@@AEAA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x18045DBC4 (-TerminateAppOnce@Win32AppStateManager@@AEAA_NAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800505C4 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?get@?$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z @ 0x180456F18 (-get@-$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z.c)
 */

int __fastcall AppUsageTelemetry::DebugInfo<unsigned short const (&)[36]>(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // r9
  _DWORD *v4; // rcx
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v2 = wil::details::static_lazy<AppUsageTelemetry>::get(
         a1,
         _lambda_4d19eb78d2d318fd81ccffb962d1d1a6_::_lambda_invoker_cdecl_);
  v4 = (_DWORD *)v2[1];
  if ( *v4 > 5u )
  {
    v6 = a1;
    LODWORD(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
                    (__int64)v4,
                    (unsigned __int8 *)dword_1805267C5,
                    0LL,
                    v3,
                    (const WCHAR **)&v6);
  }
  return (int)v2;
}
