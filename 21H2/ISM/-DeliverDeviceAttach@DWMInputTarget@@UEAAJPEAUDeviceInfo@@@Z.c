/*
 * XREFs of ?DeliverDeviceAttach@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z @ 0x180029490
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ?IsVerboseEnabled@InputETW@@SA_N_K@Z @ 0x180029518 (-IsVerboseEnabled@InputETW@@SA_N_K@Z.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180029560 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUDeviceInfo@@@Z @ 0x18002961C (--0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUDeviceInfo@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18008701C (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputTarget::DeliverDeviceAttach(DWMInputTarget *this, struct DeviceInfo *a2)
{
  int v4; // ebx
  const struct std::nothrow_t *v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // rax
  int v9; // r8d
  int v10; // r9d
  int v11; // [rsp+20h] [rbp-28h]
  int v12; // [rsp+30h] [rbp-18h] BYREF
  void *v13; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF

  InputEventPayloadBuffer::InputEventPayloadBuffer(&v12, 1LL, a2);
  v4 = (*(__int64 (__fastcall **)(struct IInputDeliveryServer *, char *, void *, _QWORD))(*(_QWORD *)NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer
                                                                                        + 24LL))(
         NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer,
         (char *)this + 64,
         v13,
         v12);
  if ( InputETW::IsVerboseEnabled(1uLL) )
  {
    v8 = wil::details::static_lazy<InputETW>::get(v6, _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    if ( **(_DWORD **)(v8 + 8) > 5u && tlgKeywordOn(*(_QWORD *)(v8 + 8), 1LL) )
    {
      v15 = *((int *)a2 + 1);
      v16 = *(unsigned int *)a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v9,
        (unsigned int)&unk_1801CB922,
        v9,
        v10,
        (__int64)&v16,
        (__int64)&v15);
    }
  }
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC1,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      (const char *)(unsigned int)v4,
      v11);
  else
    v4 = 0;
  if ( v13 )
    operator delete(v13, v5);
  return (unsigned int)v4;
}
