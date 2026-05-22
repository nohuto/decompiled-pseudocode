/*
 * XREFs of ?OnSpatialGraphNodePropertiesUpdated@NodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialGraphDynamicNodeSource@Holographic@34@AEBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@634@@Z @ 0x18016D7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     InlineIsEqualGUID @ 0x180018F00 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800C65E8 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C7254 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?HapticsOutputReportPeriodMicrosecondsSet_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKKI@Z @ 0x18016CD74 (-HapticsOutputReportPeriodMicrosecondsSet_@SpatialInteractionTrace@SpatialInteractionDevices@@QE.c)
 *     ?SetButtonLatencyMicroseconds@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAAXH@Z @ 0x18016EDF8 (-SetButtonLatencyMicroseconds@SpatialInteractionSourceController@SpatialInteractions@Internal@Wi.c)
 *     ?UpdateNodeErrorStatus@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAAXPEAUISpatialGraphDriverClient@Holographic@34@AEBUSPATIAL_NODE_ID@@@Z @ 0x180170090 (-UpdateNodeErrorStatus@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::NodePropertyChangedHandler::OnSpatialGraphNodePropertiesUpdated(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        _DWORD *a3,
        char a4)
{
  RTL_SRWLOCK *v4; // r12
  __int64 v9; // rdx
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  unsigned int v15; // edx
  __int64 v16; // rcx
  int *v17; // rbx
  unsigned int v18; // esi
  __int64 v19; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v20; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  unsigned int v23; // [rsp+50h] [rbp+30h] BYREF
  __int64 v24; // [rsp+60h] [rbp+40h] BYREF

  v4 = (RTL_SRWLOCK *)(a1 + 80);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 80));
  if ( !InlineIsEqualGUID(a3, (_DWORD *)(a1 + 64)) )
  {
    v9 = 141LL;
LABEL_5:
    v10 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
      (const char *)0x8000FFFFLL);
    goto LABEL_31;
  }
  if ( !a2 )
  {
    v9 = 142LL;
    goto LABEL_5;
  }
  v24 = 0LL;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v24);
  v11 = (**a2)(a2, &GUID_40636a97_be83_4b22_8a72_022beb8146ce, &v24);
  v10 = v11;
  if ( v11 < 0 )
  {
    v12 = 144LL;
LABEL_23:
    v14 = (unsigned int)v11;
    goto LABEL_24;
  }
  v13 = *(_QWORD *)(a1 + 96);
  if ( v24 == v13 )
  {
    if ( *(_QWORD *)(a1 + 88) )
    {
      if ( (a4 & 2) != 0 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)v13 + 176LL))(v13, a1 + 64, &v23);
        v10 = v11;
        if ( v11 < 0 )
        {
          v12 = 151LL;
          goto LABEL_23;
        }
        v15 = v23;
LABEL_26:
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetButtonLatencyMicroseconds(
          *(Windows::Internal::SpatialInteractions::SpatialInteractionSourceController **)(a1 + 88),
          v15);
        goto LABEL_29;
      }
      if ( (a4 & 4) == 0 )
      {
        if ( (a4 & 8) == 0 )
        {
          if ( (a4 & 1) != 0 )
            Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::UpdateNodeErrorStatus(
              *(Windows::Internal::SpatialInteractions::SpatialInteractionSourceController **)(a1 + 88),
              *(struct Windows::Internal::Holographic::ISpatialGraphDriverClient **)(a1 + 96),
              (const struct SPATIAL_NODE_ID *)(a1 + 64));
          goto LABEL_29;
        }
        v11 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)v13 + 192LL))(v13, a1 + 64, &v23);
        v10 = v11;
        if ( v11 < 0 )
        {
          v12 = 163LL;
          goto LABEL_23;
        }
        v15 = (unsigned __int8)v23;
        goto LABEL_26;
      }
      v11 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)v13 + 184LL))(v13, a1 + 64, &v23);
      v10 = v11;
      if ( v11 < 0 )
      {
        v12 = 157LL;
        goto LABEL_23;
      }
      v17 = *(int **)(a1 + 88);
      v18 = v23;
      v17[200] = v23;
      if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v16) )
      {
        wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
          v19,
          _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
        SpatialInteractionDevices::SpatialInteractionTrace::HapticsOutputReportPeriodMicrosecondsSet_(
          v20,
          v17[2],
          v17[3],
          v18);
      }
    }
LABEL_29:
    v10 = 0;
    goto LABEL_30;
  }
  v10 = -2147418113;
  v12 = 145LL;
  v14 = 2147549183LL;
LABEL_24:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
    (const char *)v14);
LABEL_30:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v24);
LABEL_31:
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v10;
}
