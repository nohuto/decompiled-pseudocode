/*
 * XREFs of ?InputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKJPEAUInputInfo@@@Z @ 0x1800939B0
 * Callers:
 *     ?SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@KK_NAEBUSpatialControllerPoseMsg@Internal@Spatial@Input@UI@Windows@@AEBUSpatialControllerStateMsg@45678@@Z @ 0x1800953E0 (-SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@KK_NAEBUSpatia.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18007CCAC (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapperByVal@$00@@U2@U1@U2@U1@U2@U1@U1@U2@U1@U1@U2@U1@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapperByVal@$00@@43434334334343@Z @ 0x180090B84 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapperByVal@$00@@U2@U1@U2@U1@U2@U1@U1@U2@U1@U.c)
 *     ?get@?$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAAPEAVRawInputProvidersContinuousTracing@@P6AXXZ@Z @ 0x180096958 (-get@-$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAAPEAVRawInputProvidersC.c)
 */

void __fastcall RawInputProvidersContinuousTracing::InputReportProcessed_(
        RawInputProvidersContinuousTracing *this,
        int a2,
        int a3,
        struct InputInfo *a4)
{
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // [rsp+C0h] [rbp+7h] BYREF
  char v14; // [rsp+C1h] [rbp+8h] BYREF
  char v15; // [rsp+C2h] [rbp+9h] BYREF
  char v16; // [rsp+C3h] [rbp+Ah] BYREF
  int v17; // [rsp+C4h] [rbp+Bh] BYREF
  int v18; // [rsp+C8h] [rbp+Fh] BYREF
  int v19; // [rsp+CCh] [rbp+13h] BYREF
  int v20; // [rsp+D0h] [rbp+17h] BYREF
  int v21; // [rsp+D4h] [rbp+1Bh] BYREF
  int v22; // [rsp+D8h] [rbp+1Fh] BYREF
  int v23; // [rsp+DCh] [rbp+23h] BYREF
  int v24; // [rsp+E0h] [rbp+27h] BYREF
  int v25; // [rsp+E4h] [rbp+2Bh] BYREF
  int v26; // [rsp+E8h] [rbp+2Fh] BYREF
  int v27; // [rsp+ECh] [rbp+33h] BYREF
  _DWORD v28[8]; // [rsp+F0h] [rbp+37h] BYREF
  RawInputProvidersContinuousTracing *v29; // [rsp+120h] [rbp+67h] BYREF
  int v30; // [rsp+130h] [rbp+77h] BYREF
  char v31; // [rsp+138h] [rbp+7Fh] BYREF

  v29 = this;
  if ( a3 >= 0 )
  {
    v10 = wil::details::static_lazy<RawInputProvidersContinuousTracing>::get(
            this,
            _lambda_f655bc6deafeea110b0bcdbdac4bd35f_::_lambda_invoker_cdecl_);
    if ( **(_DWORD **)(v10 + 8) > 5u && tlgKeywordOn(*(_QWORD *)(v10 + 8), 2LL) )
    {
      v17 = *((_DWORD *)a4 + 197);
      LOBYTE(v30) = *((_BYTE *)a4 + 817);
      v18 = *((_DWORD *)a4 + 201);
      LOBYTE(v29) = *((_BYTE *)a4 + 816);
      v19 = *((_DWORD *)a4 + 187);
      v20 = *((_DWORD *)a4 + 186);
      v31 = *((_BYTE *)a4 + 770);
      v21 = *((_DWORD *)a4 + 189);
      v22 = *((_DWORD *)a4 + 188);
      v13 = *((_BYTE *)a4 + 772);
      v23 = *((_DWORD *)a4 + 190);
      v14 = *((_BYTE *)a4 + 771);
      v24 = *((_DWORD *)a4 + 182);
      v15 = *((_BYTE *)a4 + 704);
      v16 = *((_BYTE *)a4 + 784);
      v25 = *((_DWORD *)a4 + 16);
      v26 = *((_DWORD *)a4 + 17);
      v27 = *((_DWORD *)a4 + 18);
      v28[0] = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        v11,
        byte_1801C934E,
        v11,
        v12,
        (__int64)v28,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v24,
        (__int64)&v14,
        (__int64)&v23,
        (__int64)&v13,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v31,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v29,
        (__int64)&v18,
        (__int64)&v30,
        (__int64)&v17);
    }
  }
  else
  {
    v7 = wil::details::static_lazy<RawInputProvidersContinuousTracing>::get(
           this,
           _lambda_f655bc6deafeea110b0bcdbdac4bd35f_::_lambda_invoker_cdecl_);
    if ( **(_DWORD **)(v7 + 8) > 2u && tlgKeywordOn(*(_QWORD *)(v7 + 8), 2LL) )
    {
      v30 = a3;
      LODWORD(v29) = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v9,
        byte_1801C94F4,
        v8,
        v9,
        (__int64)&v29,
        (__int64)&v30);
    }
  }
}
