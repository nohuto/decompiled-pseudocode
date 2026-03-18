/*
 * XREFs of ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x18007FCC0
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18007B000 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180029964 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Present@CRenderTargetManager@@QEAAJXZ @ 0x180079B24 (-Present@CRenderTargetManager@@QEAAJXZ.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x18007E4CC (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 *     ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x1800820C0 (-PostPresent@CComposition@@QEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x180155E6C (McTemplateU0xx_EventWriteTransfer.c)
 */

__int64 __fastcall CComposition::Present(CComposition *this, struct FRAME_TIME_INFO *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // esi
  __int64 v12; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+38h] [rbp-20h] BYREF

  PerformanceCount.QuadPart = 0LL;
  *((_QWORD *)this + 43) = a2;
  QueryPerformanceCounter(&PerformanceCount);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))McTemplateU0xx_EventWriteTransfer)(
      v4,
      &EVTDESC_MILEVENT_MEDIA_UCE_PRESENTEVENT_Start,
      this,
      (LARGE_INTEGER)PerformanceCount.QuadPart);
  v5 = CRenderTargetManager::Present(*((CRenderTargetManager **)this + 11), v3);
  v8 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x319u, 0LL);
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_DXGI_PRESENT_SUCCEEDED,
      v7,
      1u,
      &v15);
  }
  CComposition::ProcessRenderingStatus(this, v8);
  v9 = CComposition::PostPresent(this, v8 != 0);
  v11 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x325u, 0LL);
  if ( !v8 || v8 >= 0 && v11 < 0 )
    v8 = v11;
  QueryPerformanceCounter(&PerformanceCount);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))McTemplateU0xx_EventWriteTransfer)(
      v12,
      &EVTDESC_MILEVENT_MEDIA_UCE_PRESENTEVENT_Stop,
      this,
      (LARGE_INTEGER)PerformanceCount.QuadPart);
  *((_QWORD *)this + 43) = 0LL;
  return (unsigned int)v8;
}
