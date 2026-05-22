/*
 * XREFs of ?MPCTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@J@Z @ 0x1800BAAE4
 * Callers:
 *     ?DeliverInput@MPCTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800BA590 (-DeliverInput@MPCTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190D0 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EF4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z @ 0x1800759D8 (-GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z.c)
 *     ?GetTypeOfTarget@ISMTracing@@SAPEBGPEAUIMPCTarget@@@Z @ 0x180075AD0 (-GetTypeOfTarget@ISMTracing@@SAPEBGPEAUIMPCTarget@@@Z.c)
 *     ?IsVerboseEnabled@ISMTracing@@SA_N_K@Z @ 0x180083480 (-IsVerboseEnabled@ISMTracing@@SA_N_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@444444AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x1800BA284 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@U2@U2@U2@U2@U2@U-.c)
 */

void __fastcall ISMTracing::MPCTarget_DeliverInput_(
        ISMTracing *this,
        struct IMPCTarget *a2,
        struct LegacyInputInfo *a3,
        int a4)
{
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _DWORD *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // [rsp+88h] [rbp+17h] BYREF
  int v13; // [rsp+8Ch] [rbp+1Bh] BYREF
  int v14; // [rsp+90h] [rbp+1Fh] BYREF
  int v15; // [rsp+94h] [rbp+23h] BYREF
  int v16; // [rsp+98h] [rbp+27h] BYREF
  int v17; // [rsp+9Ch] [rbp+2Bh] BYREF
  int v18; // [rsp+A0h] [rbp+2Fh] BYREF
  int PIDOfMPCTarget; // [rsp+A4h] [rbp+33h] BYREF
  const wchar_t *TypeOfTarget; // [rsp+A8h] [rbp+37h] BYREF
  __int64 v21; // [rsp+B0h] [rbp+3Fh] BYREF
  __int64 v22; // [rsp+D8h] [rbp+67h] BYREF

  v22 = (__int64)this;
  if ( ISMTracing::IsVerboseEnabled((__int64)this) )
  {
    v8 = wil::details::static_lazy<ISMTracing>::get(
           v7,
           _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v9 = (_DWORD *)v8[1];
    if ( *v9 > 5u && tlgKeywordOn(v8[1], 1LL) )
    {
      LOBYTE(v22) = *((_BYTE *)a3 + 2026);
      v13 = *((_DWORD *)a3 + 17);
      v14 = *((_DWORD *)a3 + 16);
      v15 = *((_DWORD *)a3 + 18);
      v16 = *((_DWORD *)a3 + 2);
      v17 = *((_DWORD *)a3 + 1);
      v18 = *(_DWORD *)a3;
      v12 = a4;
      TypeOfTarget = ISMTracing::GetTypeOfTarget(a2);
      PIDOfMPCTarget = ISMTracing::GetPIDOfMPCTarget(a2);
      v21 = (__int64)a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        (__int64)v9,
        (unsigned __int8 *)dword_1801CAC4A,
        v10,
        v11,
        (__int64)&v21,
        (__int64)&PIDOfMPCTarget,
        &TypeOfTarget,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v22,
        (__int64)&v12);
    }
  }
}
