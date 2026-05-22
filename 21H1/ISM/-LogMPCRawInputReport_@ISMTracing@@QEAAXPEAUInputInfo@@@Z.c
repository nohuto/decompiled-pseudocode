/*
 * XREFs of ?LogMPCRawInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@@Z @ 0x18008AC64
 * Callers:
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z @ 0x18008B0A0 (-QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EC4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsVerboseEnabled@ISMTracing@@SA_N_K@Z @ 0x1800839D0 (-IsVerboseEnabled@ISMTracing@@SA_N_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333@Z @ 0x180089BB0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@.c)
 */

void __fastcall ISMTracing::LogMPCRawInputReport_(ISMTracing *this, struct InputInfo *a2)
{
  __int64 v3; // rcx
  LPVOID v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  LPVOID v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // [rsp+50h] [rbp-18h] BYREF
  _DWORD v11[5]; // [rsp+54h] [rbp-14h] BYREF
  ISMTracing *v12; // [rsp+80h] [rbp+18h] BYREF
  int v13; // [rsp+88h] [rbp+20h] BYREF
  int v14; // [rsp+90h] [rbp+28h] BYREF
  int v15; // [rsp+98h] [rbp+30h] BYREF

  v12 = this;
  if ( ISMTracing::IsVerboseEnabled((__int64)this) )
  {
    if ( ((*((_DWORD *)a2 + 16) - 6) & 0xFFFFFFFD) != 0 )
    {
      v4 = wil::details::static_lazy<ISMTracing>::get(
             v3,
             _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      if ( **((_DWORD **)v4 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v4 + 1), 1LL) )
      {
        LODWORD(v12) = *((_DWORD *)a2 + 17);
        v13 = *((_DWORD *)a2 + 16);
        v14 = *((_DWORD *)a2 + 18);
        v15 = *((_DWORD *)a2 + 2);
        v10 = *((_DWORD *)a2 + 1);
        v11[0] = *(_DWORD *)a2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v5,
          byte_1801C9E0B,
          v5,
          v6,
          (__int64)v11,
          (__int64)&v10,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)&v12);
      }
    }
    else
    {
      v7 = wil::details::static_lazy<ISMTracing>::get(
             v3,
             _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      if ( **((_DWORD **)v7 + 1) > 5u && tlgKeywordOn(*((_QWORD *)v7 + 1), 1LL) )
      {
        LODWORD(v12) = *((_DWORD *)a2 + 17);
        v13 = *((_DWORD *)a2 + 16);
        v14 = *((_DWORD *)a2 + 18);
        v15 = *((_DWORD *)a2 + 2);
        v11[0] = *((_DWORD *)a2 + 1);
        v10 = *(_DWORD *)a2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v8,
          byte_1801C9E89,
          v8,
          v9,
          (__int64)&v10,
          (__int64)v11,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)&v12);
      }
    }
  }
}
