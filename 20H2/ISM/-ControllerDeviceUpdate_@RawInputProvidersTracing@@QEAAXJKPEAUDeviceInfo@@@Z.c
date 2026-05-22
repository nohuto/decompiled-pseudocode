/*
 * XREFs of ?ControllerDeviceUpdate_@RawInputProvidersTracing@@QEAAXJKPEAUDeviceInfo@@@Z @ 0x180092980
 * Callers:
 *     ?SendDeviceUpdate@SpatialRimDeviceCollection@@UEAAJKAEBUMPCSourceDeviceInfo@@@Z @ 0x180094FA0 (-SendDeviceUpdate@SpatialRimDeviceCollection@@UEAAJKAEBUMPCSourceDeviceInfo@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190D0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18007CC0C (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x18008FE60 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByRef@$0BA@@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByRef@$0BA@@@44@Z @ 0x180090DB8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByRef@$0BA@@@U2@U2@@.c)
 */

void __fastcall RawInputProvidersTracing::ControllerDeviceUpdate_(
        RawInputProvidersTracing *this,
        int a2,
        int a3,
        struct DeviceInfo *a4)
{
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // [rsp+50h] [rbp-20h] BYREF
  int v14; // [rsp+54h] [rbp-1Ch] BYREF
  __int64 v15; // [rsp+58h] [rbp-18h] BYREF
  __int64 v16; // [rsp+60h] [rbp-10h] BYREF
  __int64 v17; // [rsp+90h] [rbp+20h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+38h] BYREF

  v17 = (__int64)this;
  if ( a4 )
  {
    v7 = wil::details::static_lazy<RawInputProvidersTracing>::get(
           (__int64)this,
           _lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
    if ( *(_DWORD *)v7[1] > 4u && tlgKeywordOn(v7[1], 2LL) )
    {
      LOBYTE(v17) = *((_BYTE *)a4 + 1485);
      LOBYTE(v18) = *((_BYTE *)a4 + 1448);
      v16 = (__int64)a4 + 1428;
      v13 = *((_BYTE *)a4 + 1024);
      v14 = a3;
      LODWORD(v15) = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        v9,
        byte_1801C96B8,
        v8,
        v9,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        &v16,
        (__int64)&v18,
        (__int64)&v17);
    }
  }
  else
  {
    v10 = wil::details::static_lazy<RawInputProvidersTracing>::get(
            (__int64)this,
            _lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
    if ( *(_DWORD *)v10[1] > 4u && tlgKeywordOn(v10[1], 2LL) )
    {
      LODWORD(v17) = a3;
      LODWORD(v18) = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v11,
        byte_1801C971D,
        v11,
        v12,
        (__int64)&v18,
        (__int64)&v17);
    }
  }
}
