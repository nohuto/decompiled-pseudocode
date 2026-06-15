/*
 * XREFs of ?QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x1800F4C60
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?GetEndpointInformationFromId@CConstraintModel@@QEAAJPEBGPEAGI1IPEAK@Z @ 0x18000CA70 (-GetEndpointInformationFromId@CConstraintModel@@QEAAJPEBGPEAGI1IPEAK@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800340C0 (--3@YAXPEAX@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x1800676D0 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     memset_0 @ 0x18006B69C (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006DF3C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800B822C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z @ 0x1800F3260 (-AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z.c)
 *     ?GetEndpointResourceValidity@CConstraintModelResourceManager@@AEAAJPEBGPEAH@Z @ 0x1800F3D70 (-GetEndpointResourceValidity@CConstraintModelResourceManager@@AEAAJPEBGPEAH@Z.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@H@Z @ 0x1800F40FC (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTI.c)
 *     ?GetStreamResourceConsumption@CConstraintModel@@QEAAJPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18013A5EC (-GetStreamResourceConsumption@CConstraintModel@@QEAAJPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___M.c)
 */

_BOOL8 __fastcall CConstraintModelResourceManager::QueryAvailabilitySaDeviceResource(
        __int64 a1,
        const unsigned __int16 *a2,
        int a3,
        __int128 *a4,
        int a5,
        unsigned int a6)
{
  unsigned int v10; // r15d
  struct _ResourceInfo *v11; // rsi
  CConstraintModelResourceManager *v12; // rcx
  int EndpointResourceValidity; // eax
  CConstraintModel *v14; // rcx
  __int64 v15; // r8
  int v16; // r9d
  signed int v17; // ebx
  __int64 v18; // rcx
  int StreamResourceConsumption; // eax
  int EndpointInformationFromId; // eax
  __int64 v21; // rcx
  _DWORD *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int8 *v25; // rdx
  unsigned __int64 *v26; // rax
  __int64 v27; // rcx
  BOOL v28; // ebx
  unsigned int v30; // [rsp+28h] [rbp-D8h]
  int v31; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v32; // [rsp+44h] [rbp-BCh] BYREF
  struct _ResourceInfo *v33; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v34; // [rsp+50h] [rbp-B0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-A8h] BYREF
  char v36; // [rsp+60h] [rbp-A0h]
  __int128 v37; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v38[296]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 v39[201]; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned __int16 v40[261]; // [rsp+33Ah] [rbp+23Ah] BYREF
  unsigned int v41[3]; // [rsp+544h] [rbp+444h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+598h] [rbp+498h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)(a1 + 24));
  memset_0(v38, 0, 0x4D0uLL);
  v34 = 0LL;
  v10 = 0;
  v31 = 1;
  v11 = 0LL;
  v32 = 0;
  v33 = 0LL;
  EndpointResourceValidity = CConstraintModelResourceManager::GetEndpointResourceValidity(v12, a2, &v31);
  v17 = EndpointResourceValidity;
  if ( EndpointResourceValidity < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      897LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\constraintmodelresourcemanager.cpp",
      (const char *)(unsigned int)EndpointResourceValidity);
  if ( v17 >= 0 )
  {
    if ( v31 )
    {
      v18 = *(_QWORD *)(a1 + 16);
      v37 = *a4;
      StreamResourceConsumption = CConstraintModel::GetStreamResourceConsumption(v18, a2, v15, &v37, a5, &v32, &v33);
      v17 = StreamResourceConsumption;
      if ( StreamResourceConsumption < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          901LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\constraintmodelresourcemanager.cpp",
          (const char *)(unsigned int)StreamResourceConsumption);
      v10 = v32;
      v11 = v33;
    }
    if ( v17 < 0 || !v10 )
      goto LABEL_20;
    EndpointInformationFromId = CConstraintModel::GetEndpointInformationFromId(v14, a2, v39, v16, v40, v30, v41);
    v17 = EndpointInformationFromId;
    if ( EndpointInformationFromId < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        913LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\constraintmodelresourcemanager.cpp",
        (const char *)(unsigned int)EndpointInformationFromId);
    if ( v17 < 0 )
      goto LABEL_20;
    v17 = CConstraintModelResourceManager::InternalEnforceEndpointExclusivity(
            a1,
            (__int64)v39,
            (__int64)v40,
            v41[0],
            a6,
            a3,
            1);
    if ( v17 >= 0 )
    {
      v17 = CConstraintModelResourceManager::AcquireResourceHandle(
              (CConstraintModelResourceManager *)a1,
              v11,
              v10,
              a6,
              1,
              &v34);
      if ( v17 >= 0
        || (v22 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                          v27,
                                          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                            + 1),
            *v22 <= 4u) )
      {
LABEL_20:
        if ( v11 )
          operator delete(v11);
        goto LABEL_22;
      }
      v34 = (unsigned __int64)a2;
      v25 = (unsigned __int8 *)&unk_180169F6A;
      v26 = &v34;
    }
    else
    {
      v22 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                    v21,
                                    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                      + 1);
      if ( *v22 <= 4u )
        goto LABEL_20;
      v33 = (struct _ResourceInfo *)a2;
      v25 = (unsigned __int8 *)&unk_180169FE3;
      v26 = (unsigned __int64 *)&v33;
    }
    v32 = v17;
    v31 = a6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v22,
      v25,
      v23,
      v24,
      (void **)v26,
      (__int64)&v31,
      (__int64)&v32);
    goto LABEL_20;
  }
LABEL_22:
  v28 = v17 >= 0;
  if ( v36 )
    LeaveCriticalSection(lpCriticalSection);
  return v28;
}
