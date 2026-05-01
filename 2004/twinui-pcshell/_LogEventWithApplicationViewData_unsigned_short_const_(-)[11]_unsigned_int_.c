/*
 * XREFs of _LogEventWithApplicationViewData_unsigned_short_const_(&)[11]_unsigned_int_ @ 0x18023E104
 * Callers:
 *     ?OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18004DF50 (-OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1800163A0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$ManagedViewEvent@PEBGAEAY0O@$$CBGI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAY0O@$$CBG$$QEAI@Z @ 0x18023D768 (--$ManagedViewEvent@PEBGAEAY0O@$$CBGI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAY0O@$$CBG$$.c)
 */

__int64 __fastcall LogEventWithApplicationViewData_unsigned_short_const_____11__unsigned_int_(
        __int64 a1,
        LPVOID a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 (__fastcall *v6)(__int64, LPVOID *); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  LPVOID v11; // [rsp+38h] [rbp+10h] BYREF
  LPVOID pv; // [rsp+40h] [rbp+18h] BYREF

  v11 = a2;
  pv = 0LL;
  v6 = *(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)a1 + 136LL);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  v7 = v6(a1, &pv);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v11 = pv;
    HolographicPositionerTelemetry::ManagedViewEvent<unsigned short const *,unsigned short const (&)[14],unsigned int>(
      (__int64 *)&v11,
      (__int64)L"AVC_HIDDEN",
      a4);
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\TelemetryHelpers.h",
      (const char *)(unsigned int)v7);
  }
  if ( pv )
    CoTaskMemFree(pv);
  return v8;
}
