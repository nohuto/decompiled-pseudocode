/*
 * XREFs of ?MPCGamepadInputHelper_UpdateGamepadFocus_@ISMTracing@@QEAAXAEB_NAEBK00000000@Z @ 0x18006CB50
 * Callers:
 *     ??$MPCGamepadInputHelper_UpdateGamepadFocus@AEA_NAEAK_N_NAEA_N_NAEA_NAEA_NAEA_NAEA_N@ISMTracing@@SAXAEA_NAEAK$$QEA_N2020000@Z @ 0x18006C7D4 (--$MPCGamepadInputHelper_UpdateGamepadFocus@AEA_NAEAK_N_NAEA_N_NAEA_NAEA_NAEA_NAEA_N@ISMTracing@.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019BA4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@33333333@Z @ 0x18006C888 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteT.c)
 */

void __fastcall ISMTracing::MPCGamepadInputHelper_UpdateGamepadFocus_(
        ISMTracing *this,
        const bool *a2,
        const unsigned int *a3,
        const bool *a4,
        const bool *a5,
        const bool *a6,
        const bool *a7,
        const bool *a8,
        const bool *a9,
        const bool *a10,
        const bool *a11)
{
  LPVOID v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r10
  char v18; // cl
  char v19; // [rsp+70h] [rbp-10h] BYREF
  char v20; // [rsp+71h] [rbp-Fh] BYREF
  char v21; // [rsp+72h] [rbp-Eh] BYREF
  char v22; // [rsp+73h] [rbp-Dh] BYREF
  char v23; // [rsp+74h] [rbp-Ch] BYREF
  char v24; // [rsp+75h] [rbp-Bh] BYREF
  char v25; // [rsp+76h] [rbp-Ah] BYREF
  char v26; // [rsp+77h] [rbp-9h] BYREF
  int v27; // [rsp+78h] [rbp-8h] BYREF
  ISMTracing *v28; // [rsp+90h] [rbp+10h] BYREF

  v28 = this;
  v14 = wil::details::static_lazy<ISMTracing>::get(
          (__int64)this,
          _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
  if ( **((_DWORD **)v14 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v14 + 1), 1LL) )
  {
    LOBYTE(v28) = *a11;
    v19 = *a10;
    v20 = *a9;
    v21 = *a8;
    v22 = *a7;
    v23 = *a6;
    v18 = *a5;
    v25 = *a4;
    v27 = *a3;
    v26 = *a2;
    v24 = v18;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v17,
      byte_1801C8663,
      v15,
      v16,
      (__int64)&v26,
      (__int64)&v27,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v28);
  }
}
