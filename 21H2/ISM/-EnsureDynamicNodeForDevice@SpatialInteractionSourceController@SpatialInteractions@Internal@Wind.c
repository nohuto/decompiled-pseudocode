/*
 * XREFs of ?EnsureDynamicNodeForDevice@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJPEAUISpatialGraphDriverClient@Holographic@34@PEAUDynamicNodeInfo@634@PEAK@Z @ 0x18016C0EC
 * Callers:
 *     ?StartTracking@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialGraphNodeReferenceFactory@Holographic@34@PEAUISpatialGraphDriverClient@634@PEAUHSTRING__@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x18016F710 (-StartTracking@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEA.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18007D01C (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800C65E8 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C7254 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NPEAUDynamicNodeInfo@Holographic@34@@Z @ 0x1800D0244 (-GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NP.c)
 *     ?SetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAAXAEBUDynamicNodeInfo@Holographic@34@@Z @ 0x1800D8B80 (-SetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAAXAE.c)
 *     ?CreateNodePropertyChangedHandler@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@PEAUISpatialGraphDriverClient@Holographic@34@@Z @ 0x18016BCA0 (-CreateNodePropertyChangedHandler@SpatialInteractionSourceController@SpatialInteractions@Interna.c)
 *     ?EnsureDynamicNodeForDeviceFailed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJK@Z @ 0x18016C3A0 (-EnsureDynamicNodeForDeviceFailed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJK@Z.c)
 *     ?EnsureInitializationRetryParameters@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXXZ @ 0x18016C418 (-EnsureInitializationRetryParameters@SpatialInteractionSourceController@SpatialInteractions@Inte.c)
 *     ?HapticsIntensityLevelsSet_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKKE@Z @ 0x18016CCE0 (-HapticsIntensityLevelsSet_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKKE@Z.c)
 *     ?HapticsOutputReportPeriodMicrosecondsSet_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKKI@Z @ 0x18016CD74 (-HapticsOutputReportPeriodMicrosecondsSet_@SpatialInteractionTrace@SpatialInteractionDevices@@QE.c)
 *     ?SetButtonLatencyMicroseconds@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAAXH@Z @ 0x18016EDF8 (-SetButtonLatencyMicroseconds@SpatialInteractionSourceController@SpatialInteractions@Internal@Wi.c)
 *     ?UpdateNodeErrorStatus@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAAXPEAUISpatialGraphDriverClient@Holographic@34@AEBUSPATIAL_NODE_ID@@@Z @ 0x180170090 (-UpdateNodeErrorStatus@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::EnsureDynamicNodeForDevice(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        struct Windows::Internal::Holographic::ISpatialGraphDriverClient *a2,
        struct Windows::Internal::Holographic::DynamicNodeInfo *a3,
        unsigned int *a4)
{
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *v8; // rcx
  unsigned int v9; // esi
  __int64 v10; // rcx
  int v11; // edi
  int v12; // r12d
  __int64 v13; // rcx
  LPVOID v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  unsigned int v18; // edi
  __int64 v19; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v20; // rcx
  __int64 v21; // rcx
  unsigned __int8 v22; // di
  __int64 v23; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v24; // rcx
  int NodePropertyChangedHandler; // eax
  unsigned int v26; // edi
  int v27; // eax
  __int64 v28; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v29; // rcx
  int v31; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v32; // [rsp+34h] [rbp-2Ch] BYREF
  int v33; // [rsp+38h] [rbp-28h] BYREF
  int v34; // [rsp+3Ch] [rbp-24h] BYREF
  int *v35; // [rsp+40h] [rbp-20h]
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *v36; // [rsp+48h] [rbp-18h]
  char v37; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  unsigned __int8 v39; // [rsp+A0h] [rbp+40h] BYREF
  int v40; // [rsp+B8h] [rbp+58h] BYREF

  v40 = 0;
  *a4 = 0;
  v35 = &v40;
  v36 = this;
  v37 = 1;
  if ( !Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::GetDynamicNodeInfo(this, a3) )
  {
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::EnsureInitializationRetryParameters(v8);
    v9 = 1;
    if ( Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::s_DynamicNodeInfoBindingAttemptsCount )
    {
      while ( !*((_BYTE *)this + 104) )
      {
        if ( v9 > 1 )
          Sleep(Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::s_DynamicNodeInfoBindingWaitBeforeRetryMilliseconds);
        v40 = (*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *, _QWORD, struct Windows::Internal::Holographic::DynamicNodeInfo *))(*(_QWORD *)a2 + 80LL))(
                a2,
                *((_QWORD *)this + 5),
                a3);
        if ( v40 >= 0 )
        {
          v31 = 0;
          if ( (*(int (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *, struct Windows::Internal::Holographic::DynamicNodeInfo *, int *))(*(_QWORD *)a2 + 176LL))(
                 a2,
                 a3,
                 &v31) >= 0
            && (unsigned int)v31 <= 0xF423F )
          {
            Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetButtonLatencyMicroseconds(
              this,
              v31);
          }
          v32 = 0;
          if ( (*(int (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *, struct Windows::Internal::Holographic::DynamicNodeInfo *, unsigned int *))(*(_QWORD *)a2 + 184LL))(
                 a2,
                 a3,
                 &v32) >= 0 )
          {
            v18 = v32;
            if ( v32 < 0xF4240 )
            {
              *((_DWORD *)this + 200) = v32;
              if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v17) )
              {
                wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
                  v19,
                  _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
                SpatialInteractionDevices::SpatialInteractionTrace::HapticsOutputReportPeriodMicrosecondsSet_(
                  v20,
                  *((_DWORD *)this + 2),
                  *((_DWORD *)this + 3),
                  v18);
              }
            }
          }
          v39 = 0;
          if ( (*(int (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *, struct Windows::Internal::Holographic::DynamicNodeInfo *, unsigned __int8 *))(*(_QWORD *)a2 + 192LL))(
                 a2,
                 a3,
                 &v39) >= 0 )
          {
            v22 = v39;
            if ( v39 <= 0x64u )
            {
              *((_BYTE *)this + 804) = v39;
              if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v21) )
              {
                wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
                  v23,
                  _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
                SpatialInteractionDevices::SpatialInteractionTrace::HapticsIntensityLevelsSet_(
                  v24,
                  *((_DWORD *)this + 2),
                  *((_DWORD *)this + 3),
                  v22);
              }
            }
          }
          Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::UpdateNodeErrorStatus(
            this,
            a2,
            a3);
          NodePropertyChangedHandler = Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::CreateNodePropertyChangedHandler(
                                         this,
                                         a3,
                                         a2);
          v26 = NodePropertyChangedHandler;
          if ( NodePropertyChangedHandler < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x523,
              (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
              (const char *)(unsigned int)NodePropertyChangedHandler);
            v27 = v40;
            goto LABEL_29;
          }
          Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::SetDynamicNodeInfo(this, a3);
          break;
        }
        if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v10) )
        {
          wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
            (__int64)v8,
            _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
          v11 = *((_DWORD *)this + 2);
          v12 = v40;
          v14 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
                  v13,
                  _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
          if ( **((_DWORD **)v14 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v14 + 1), 2LL) )
          {
            v33 = v11;
            v34 = v12;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v15,
              byte_1801D2139,
              v15,
              v16,
              (__int64)&v34,
              (__int64)&v33);
          }
        }
        if ( ++v9 > Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::s_DynamicNodeInfoBindingAttemptsCount )
          break;
      }
    }
    *a4 = v9 - 1;
  }
  v27 = v40;
  v26 = v40;
LABEL_29:
  if ( v27 < 0 && SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled((__int64)v8) )
  {
    wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
      v28,
      _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
    SpatialInteractionDevices::SpatialInteractionTrace::EnsureDynamicNodeForDeviceFailed_(
      v29,
      v40,
      *((_DWORD *)this + 2));
  }
  return v26;
}
