/*
 * XREFs of ?TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z @ 0x180015C2C
 * Callers:
 *     ?HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBVCInteraction@@@Z @ 0x18004E91C (-HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBV.c)
 *     ?EvaluateHitTestCandidate@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z @ 0x180228D28 (-EvaluateHitTestCandidate@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z.c)
 *     ?SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z @ 0x1802366CC (-SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18004EA64 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _anonymous_namespace_::GetTemporaryConfigWithMask @ 0x1800C9B14 (_anonymous_namespace_--GetTemporaryConfigWithMask.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444444444444444444@Z @ 0x180228A84 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@_ea_180228A84.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::TraceInteractionConfiguration(const struct CInteraction *a1)
{
  int v1; // ebx
  int *v3; // rsi
  int *v4; // r14
  int *v5; // r12
  int *v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // r8d
  int v10; // r9d
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // [rsp+C0h] [rbp-80h] BYREF
  int v23; // [rsp+C4h] [rbp-7Ch] BYREF
  int v24; // [rsp+C8h] [rbp-78h] BYREF
  int v25; // [rsp+CCh] [rbp-74h] BYREF
  int v26; // [rsp+D0h] [rbp-70h] BYREF
  int v27; // [rsp+D4h] [rbp-6Ch] BYREF
  int v28; // [rsp+D8h] [rbp-68h] BYREF
  int v29; // [rsp+DCh] [rbp-64h] BYREF
  int v30; // [rsp+E0h] [rbp-60h] BYREF
  int v31; // [rsp+E4h] [rbp-5Ch] BYREF
  int v32; // [rsp+E8h] [rbp-58h] BYREF
  int v33; // [rsp+ECh] [rbp-54h] BYREF
  int v34; // [rsp+F0h] [rbp-50h] BYREF
  int v35; // [rsp+F4h] [rbp-4Ch] BYREF
  int v36; // [rsp+F8h] [rbp-48h] BYREF
  const struct CInteraction *v37; // [rsp+100h] [rbp-40h] BYREF
  int v38; // [rsp+150h] [rbp+10h] BYREF
  int v39; // [rsp+158h] [rbp+18h] BYREF
  int v40; // [rsp+160h] [rbp+20h] BYREF
  int v41; // [rsp+168h] [rbp+28h] BYREF

  v1 = 0;
  if ( *((_DWORD *)a1 + 114) )
    v3 = (int *)*((_QWORD *)a1 + 54);
  else
    v3 = 0LL;
  if ( *((_DWORD *)a1 + 154) )
    v4 = (int *)*((_QWORD *)a1 + 74);
  else
    v4 = 0LL;
  if ( *((_DWORD *)a1 + 194) )
    v5 = (int *)*((_QWORD *)a1 + 94);
  else
    v5 = 0LL;
  if ( *((_DWORD *)a1 + 234) )
    v6 = (int *)*((_QWORD *)a1 + 114);
  else
    v6 = 0LL;
  anonymous_namespace_::GetTemporaryConfigWithMask((char *)a1 + 1616, &v39, &v38);
  v8 = *(_QWORD *)(wil::details::static_lazy<InputTraceLogging>::get(
                     v7,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
                 + 8);
  if ( *(_DWORD *)v8 > 4u
    && (*(_DWORD *)(v8 + 16) & 0x800LL) != 0
    && (*(_QWORD *)(v8 + 24) & 0x800LL) == *(_QWORD *)(v8 + 24) )
  {
    v40 = *((_DWORD *)a1 + 246);
    if ( v6 )
      v11 = v6[1];
    else
      v11 = 0;
    v41 = v11;
    if ( v6 )
      v12 = *v6;
    else
      v12 = 0;
    v22 = v12;
    if ( v6 )
      v13 = v6[2];
    else
      v13 = 0;
    v23 = v13;
    v24 = *((_DWORD *)a1 + 234);
    if ( v5 )
      v14 = v5[1];
    else
      v14 = 0;
    v25 = v14;
    if ( v5 )
      v15 = *v5;
    else
      v15 = 0;
    v26 = v15;
    if ( v5 )
      v16 = v5[2];
    else
      v16 = 0;
    v27 = v16;
    v28 = *((_DWORD *)a1 + 194);
    if ( v4 )
      v17 = v4[1];
    else
      v17 = 0;
    v29 = v17;
    if ( v4 )
      v18 = *v4;
    else
      v18 = 0;
    v30 = v18;
    if ( v4 )
      v19 = v4[2];
    else
      v19 = 0;
    v31 = v19;
    v32 = *((_DWORD *)a1 + 154);
    if ( v3 )
      v20 = v3[1];
    else
      v20 = 0;
    v33 = v20;
    if ( v3 )
      v21 = *v3;
    else
      v21 = 0;
    v34 = v21;
    if ( v3 )
      v1 = v3[2];
    v36 = *((_DWORD *)a1 + 114);
    v35 = v1;
    v37 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v8,
      (unsigned int)&unk_1802EB314,
      v9,
      v10,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v41,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38);
  }
}
