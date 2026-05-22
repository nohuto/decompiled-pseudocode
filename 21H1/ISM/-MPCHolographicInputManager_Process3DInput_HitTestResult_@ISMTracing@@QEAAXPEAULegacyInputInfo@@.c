/*
 * XREFs of ?MPCHolographicInputManager_Process3DInput_HitTestResult_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z @ 0x1800771E4
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180077ACC (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EC4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$00@@U2@U2@U1@U1@U1@U1@U1@U2@U1@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333333AEBU?$_tlgWrapperByVal@$00@@4433333434444@Z @ 0x180074ED0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$00@@U2@U2@U1@U1@U1@U1@U.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_Process3DInput_HitTestResult_(
        ISMTracing *this,
        struct LegacyInputInfo *a2)
{
  LPVOID v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // [rsp+D0h] [rbp-80h] BYREF
  char v7; // [rsp+D1h] [rbp-7Fh] BYREF
  char v8; // [rsp+D2h] [rbp-7Eh] BYREF
  char v9; // [rsp+D3h] [rbp-7Dh] BYREF
  _BYTE v10[4]; // [rsp+D4h] [rbp-7Ch] BYREF
  int v11; // [rsp+D8h] [rbp-78h] BYREF
  int v12; // [rsp+DCh] [rbp-74h] BYREF
  int v13; // [rsp+E0h] [rbp-70h] BYREF
  int v14; // [rsp+E4h] [rbp-6Ch] BYREF
  int v15; // [rsp+E8h] [rbp-68h] BYREF
  int v16; // [rsp+ECh] [rbp-64h] BYREF
  int v17; // [rsp+F0h] [rbp-60h] BYREF
  int v18; // [rsp+F4h] [rbp-5Ch] BYREF
  int v19; // [rsp+F8h] [rbp-58h] BYREF
  int v20; // [rsp+FCh] [rbp-54h] BYREF
  int v21; // [rsp+100h] [rbp-50h] BYREF
  int v22; // [rsp+104h] [rbp-4Ch] BYREF
  int v23; // [rsp+108h] [rbp-48h] BYREF
  ISMTracing *v24; // [rsp+120h] [rbp-30h] BYREF
  char v25; // [rsp+130h] [rbp-20h] BYREF
  char v26; // [rsp+138h] [rbp-18h] BYREF

  v24 = this;
  v3 = wil::details::static_lazy<ISMTracing>::get(
         (__int64)this,
         _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
  if ( **((_DWORD **)v3 + 1) > 5u && tlgKeywordOn(*((_QWORD *)v3 + 1), 1LL) )
  {
    LOBYTE(v24) = *((_BYTE *)a2 + 473);
    v25 = *((_BYTE *)a2 + 472);
    v26 = *((_BYTE *)a2 + 457);
    v6 = *((_BYTE *)a2 + 456);
    v11 = *((_DWORD *)a2 + 109);
    v7 = *((_BYTE *)a2 + 224);
    v12 = *((_DWORD *)a2 + 54);
    v13 = *((_DWORD *)a2 + 46);
    v14 = *((_DWORD *)a2 + 45);
    v15 = *((_DWORD *)a2 + 40);
    v16 = *((_DWORD *)a2 + 39);
    v8 = *((_BYTE *)a2 + 154);
    v9 = *((_BYTE *)a2 + 153);
    v10[0] = *((_BYTE *)a2 + 152);
    v17 = *((_DWORD *)a2 + 107);
    v18 = *((_DWORD *)a2 + 106);
    v19 = *((_DWORD *)a2 + 105);
    v20 = *((_DWORD *)a2 + 104);
    v21 = *((_DWORD *)a2 + 103);
    v22 = *((_DWORD *)a2 + 102);
    v23 = *((_DWORD *)a2 + 92);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v4,
      byte_1801C8DA9,
      v4,
      v5,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v7,
      (__int64)&v11,
      (__int64)&v6,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24);
  }
}
