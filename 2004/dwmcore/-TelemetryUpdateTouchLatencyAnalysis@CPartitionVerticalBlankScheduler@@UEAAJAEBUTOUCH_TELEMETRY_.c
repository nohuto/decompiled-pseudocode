/*
 * XREFs of ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x180013C40
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIAEBU_LUID@@2PEAPEAUTouchUpdateInfo@1@@Z @ 0x180013E2C (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x18001EFC8 (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetPrimaryAdapter@CDisplayManager@@QEAAJPEAPEAUIDXGIAdapter1@@@Z @ 0x180034480 (-GetPrimaryAdapter@CDisplayManager@@QEAAJPEAPEAUIDXGIAdapter1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800AC2C0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 *     ?RemoveAt@?$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z @ 0x1800E6BC0 (-RemoveAt@-$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?DeleteTouchInfo@InteractionTraceProvider@@SAXAEBUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@_K@Z @ 0x18015578C (-DeleteTouchInfo@InteractionTraceProvider@@SAXAEBUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis.c)
 *     ?IsManipulationStateChange@CTelemetryTouchLatencyAnalysis@@QEAAHPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K@Z @ 0x180161A0C (-IsManipulationStateChange@CTelemetryTouchLatencyAnalysis@@QEAAHPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 *     ?UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@PEAUTouchUpdateInfo@1@_K@Z @ 0x180163034 (-UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@P.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::TelemetryUpdateTouchLatencyAnalysis(
        CPartitionVerticalBlankScheduler *this,
        const struct TOUCH_TELEMETRY_UPDATE_INFO *a2)
{
  __int64 v3; // rdx
  unsigned int v5; // r12d
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  CDisplayManager *v8; // rcx
  unsigned __int64 *v9; // r10
  int updated; // eax
  unsigned int v11; // ecx
  __int64 v12; // r10
  __int64 v13; // rcx
  unsigned int v14; // edx
  struct CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v16; // rdi
  unsigned __int64 v17; // r14
  unsigned int v18; // edx
  unsigned int v19; // [rsp+20h] [rbp-E0h]
  struct IDXGIAdapter1 *v20; // [rsp+50h] [rbp-B0h] BYREF
  struct CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v21; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v23[296]; // [rsp+70h] [rbp-90h] BYREF
  struct _LUID v24; // [rsp+198h] [rbp+98h] BYREF
  int v25; // [rsp+1A0h] [rbp+A0h]

  v3 = *((_QWORD *)this + 629);
  v5 = 0;
  if ( v3 )
  {
    v6 = *(_DWORD *)(v3 + 200);
    v7 = 0;
    if ( v6 )
    {
      while ( 1 )
      {
        v16 = *(struct CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(*(_QWORD *)(v3 + 176) + 8LL * v7);
        if ( v16 )
        {
          if ( *(_QWORD *)v16 == *(_QWORD *)a2 )
            break;
        }
        if ( ++v7 >= v6 )
          goto LABEL_3;
      }
      v17 = *(_QWORD *)v3;
      if ( !CTelemetryTouchLatencyAnalysis::IsManipulationStateChange(
              (CPartitionVerticalBlankScheduler *)((char *)this + 5952),
              a2,
              *(_QWORD *)v3) )
      {
        CTelemetryTouchLatencyAnalysis::UpdateLastTelemetryInfo(
          (CPartitionVerticalBlankScheduler *)((char *)this + 5952),
          a2,
          v16,
          v17);
        return v5;
      }
      InteractionTraceProvider::DeleteTouchInfo(v16, v17);
      DynArray<CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *,0>::RemoveAt(*((_QWORD *)this + 629) + 176LL, v7);
      CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(v16, v18);
    }
LABEL_3:
    memset_0(v23, 0, 0x138uLL);
    v20 = 0LL;
    if ( (int)CDisplayManager::GetPrimaryAdapter(v8, &v20) >= 0 )
      ((void (__fastcall *)(struct IDXGIAdapter1 *, _BYTE *))v20->lpVtbl->GetDesc1)(v20, v23);
    v9 = (unsigned __int64 *)*((_QWORD *)this + 629);
    v21 = 0LL;
    v22 = 10000000 * (v9[36] / g_qpcFrequency.QuadPart)
        + 10000000 * (v9[36] % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
    updated = CTelemetryTouchLatencyAnalysis::UpdateInteractionProgress(
                (CPartitionVerticalBlankScheduler *)((char *)this + 5952),
                a2,
                *v9,
                *((_DWORD *)this + 2795) != 0,
                &v22,
                2 - (*(_BYTE *)(*((_QWORD *)g_pComposition + 11) + 129LL) != 0),
                &v24,
                (v25 & 2) != 0,
                &v21);
    v5 = updated;
    if ( updated < 0 )
    {
      v19 = 2114;
    }
    else
    {
      if ( !v21 )
        goto LABEL_10;
      v12 = *((_QWORD *)this + 629);
      v13 = *(unsigned int *)(v12 + 200);
      v14 = v13 + 1;
      if ( (int)v13 + 1 < (unsigned int)v13 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024362, 0xB5u, 0LL);
        goto LABEL_10;
      }
      if ( v14 <= *(_DWORD *)(v12 + 196) )
      {
        *(_QWORD *)(*(_QWORD *)(v12 + 176) + 8 * v13) = v21;
        *(_DWORD *)(v12 + 200) = v14;
        goto LABEL_10;
      }
      updated = DynArrayImpl<0>::AddMultipleAndSet(v12 + 176, 8LL, 1LL, &v21);
      if ( updated >= 0 )
      {
LABEL_10:
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v20);
        return v5;
      }
      v19 = 192;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, updated, v19, 0LL);
    goto LABEL_10;
  }
  return v5;
}
