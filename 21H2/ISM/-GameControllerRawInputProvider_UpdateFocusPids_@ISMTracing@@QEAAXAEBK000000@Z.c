/*
 * XREFs of ?GameControllerRawInputProvider_UpdateFocusPids_@ISMTracing@@QEAAXAEBK000000@Z @ 0x180034694
 * Callers:
 *     ??$GameControllerRawInputProvider_UpdateFocusPids@AEAKAEAKAEAKAEBKAEAKAEAKAEAK@ISMTracing@@SAXAEAK00AEBK000@Z @ 0x18003460C (--$GameControllerRawInputProvider_UpdateFocusPids@AEAKAEAKAEAKAEBKAEAKAEAKAEAK@ISMTracing@@SAXAE.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019BA4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800297E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333333@Z @ 0x180034EE0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_.c)
 */

void __fastcall ISMTracing::GameControllerRawInputProvider_UpdateFocusPids_(
        ISMTracing *this,
        const unsigned int *a2,
        const unsigned int *a3,
        const unsigned int *a4,
        const unsigned int *a5,
        const unsigned int *a6,
        const unsigned int *a7,
        const unsigned int *a8)
{
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // r9d
  _DWORD *v14; // r10
  int v15; // ecx
  int v16; // [rsp+60h] [rbp-20h] BYREF
  int v17; // [rsp+64h] [rbp-1Ch] BYREF
  int v18; // [rsp+68h] [rbp-18h] BYREF
  int v19; // [rsp+6Ch] [rbp-14h] BYREF
  int v20; // [rsp+70h] [rbp-10h] BYREF
  _DWORD v21[3]; // [rsp+74h] [rbp-Ch] BYREF
  ISMTracing *v22; // [rsp+90h] [rbp+10h] BYREF

  v22 = this;
  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v14 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<ISMTracing>::get(
                                  v11,
                                  _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)
                    + 1);
    if ( *v14 > 4u )
    {
      LODWORD(v22) = *a8;
      v16 = *a7;
      v17 = *a6;
      v15 = *a5;
      v19 = *a4;
      v20 = *a3;
      v21[0] = *a2;
      v18 = v15;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (_DWORD)v14,
        (unsigned int)&unk_1801C9EB9,
        v12,
        v13,
        (__int64)v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v22);
    }
  }
}
