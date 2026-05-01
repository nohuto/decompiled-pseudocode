/*
 * XREFs of ?Stop@ApplicationViewBackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAAXW4ForegroundPolicyResult@ComposableShell@Internal@Windows@@@Z @ 0x18025A5FC
 * Callers:
 *     ?TakeForeground@ApplicationViewBackedViewHostItem@@UEAAJPEAW4ForegroundPolicyResult@ComposableShell@Internal@Windows@@@Z @ 0x18025AED0 (-TakeForeground@ApplicationViewBackedViewHostItem@@UEAAJPEAW4ForegroundPolicyResult@ComposableSh.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180022028 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801733F8 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564454@Z @ 0x180188110 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180188110.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x1801885C0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?get@?$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerProvider@@P6AXXZ@Z @ 0x18024623C (-get@-$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerPr.c)
 */

void __fastcall HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_TakeForeground::Stop(
        __int64 a1,
        int a2)
{
  int *v2; // rdi
  int v5; // eax
  int *v6; // rdi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // r9
  _DWORD *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  _DWORD *v13; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v15; // r8
  int v16; // eax
  int v17; // [rsp+C0h] [rbp-80h] BYREF
  int v18; // [rsp+C4h] [rbp-7Ch] BYREF
  int v19; // [rsp+C8h] [rbp-78h] BYREF
  int v20; // [rsp+CCh] [rbp-74h] BYREF
  int v21; // [rsp+D0h] [rbp-70h] BYREF
  int v22; // [rsp+D4h] [rbp-6Ch] BYREF
  __int64 v23; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v24; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v25; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v26; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v27; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v28; // [rsp+100h] [rbp-40h] BYREF
  __int64 v29; // [rsp+108h] [rbp-38h] BYREF
  __int64 v30; // [rsp+110h] [rbp-30h] BYREF
  __int64 v31; // [rsp+118h] [rbp-28h] BYREF
  __int64 v32; // [rsp+120h] [rbp-20h] BYREF
  __int64 v33[3]; // [rsp+128h] [rbp-18h] BYREF
  __int64 v34; // [rsp+150h] [rbp+10h] BYREF
  __int64 v35; // [rsp+160h] [rbp+20h] BYREF
  __int64 v36; // [rsp+168h] [rbp+28h] BYREF

  v2 = *(int **)(a1 + 48);
  v5 = v2[19];
  if ( v5 < 0 && v5 == v2[21] )
    v6 = v2 + 20;
  else
    v6 = 0LL;
  wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
  v8 = wil::details::static_lazy<HolographicPositionerProvider>::get(
         v7,
         _lambda_c2de52b76b02464b55ca8bf6e2d5d141_::_lambda_invoker_cdecl_);
  if ( v6 )
  {
    v10 = (_DWORD *)v8[1];
    if ( *v10 > 4u )
    {
      v24 = *((_QWORD *)v6 + 5);
      LODWORD(v35) = v6[15];
      LODWORD(v36) = v6[2];
      v25 = *((_QWORD *)v6 + 14);
      v26 = *((_QWORD *)v6 + 13);
      v17 = v6[24];
      v11 = *(_QWORD *)(a1 + 48);
      v27 = *((_QWORD *)v6 + 11);
      v12 = *((_QWORD *)v6 + 10);
      v23 = 0LL;
      v28 = v12;
      v18 = v6[18];
      v29 = *((_QWORD *)v6 + 8);
      v19 = v6[6];
      v30 = *((_QWORD *)v6 + 2);
      v20 = *v6;
      v31 = *((_QWORD *)v6 + 15);
      v21 = v6[14];
      v32 = *((_QWORD *)v6 + 6);
      v22 = v6[1];
      LODWORD(v34) = a2;
      v33[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (__int64)v10,
        (unsigned __int8 *)dword_18050AE46,
        (const GUID *)(v11 + 8),
        v9,
        (__int64)&v23,
        (__int64)v33,
        (__int64)&v22,
        (const wchar_t **)&v32,
        (__int64)&v21,
        (const wchar_t **)&v31,
        (__int64)&v20,
        (const WCHAR **)&v30,
        (__int64)&v19,
        (const wchar_t **)&v29,
        (__int64)&v18,
        (const wchar_t **)&v28,
        (const WCHAR **)&v27,
        (__int64)&v17,
        (const wchar_t **)&v26,
        (const WCHAR **)&v25,
        (__int64)&v36,
        (__int64)&v35,
        (const wchar_t **)&v24,
        (__int64)&v34);
    }
  }
  else
  {
    v13 = (_DWORD *)v8[1];
    if ( *v13 > 4u )
    {
      LODWORD(v34) = a2;
      CurrentThreadId = GetCurrentThreadId();
      v15 = *(_QWORD *)(a1 + 48);
      LODWORD(v35) = CurrentThreadId;
      v16 = *(_DWORD *)(v15 + 76);
      v23 = 0LL;
      LODWORD(v36) = v16;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v13,
        byte_18050AFB9,
        (const GUID *)(v15 + 8),
        0LL,
        (__int64)&v23,
        (__int64)&v36,
        (__int64)&v35,
        (__int64)&v34);
    }
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
