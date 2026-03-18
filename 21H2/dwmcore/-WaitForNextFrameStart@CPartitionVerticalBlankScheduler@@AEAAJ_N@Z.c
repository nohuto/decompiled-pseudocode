/*
 * XREFs of ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18007A840
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18007A020 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?WaitForVSync@CPartitionVerticalBlankScheduler@@AEAAJI_N@Z @ 0x18007A9D4 (-WaitForVSync@CPartitionVerticalBlankScheduler@@AEAAJI_N@Z.c)
 *     ?TraceTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007BD4C (-TraceTime@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007BD78 (-UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?EstimateNextVSync@CPartitionVerticalBlankScheduler@@AEAA_KXZ @ 0x1800F3A74 (-EstimateNextVSync@CPartitionVerticalBlankScheduler@@AEAA_KXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801117F6 (McTemplateU0qq_EventWriteTransfer.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::WaitForNextFrameStart(
        CPartitionVerticalBlankScheduler *this,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // edi
  __int64 v5; // rcx
  int v6; // r8d
  unsigned int v7; // r8d
  __int64 v8; // rcx
  int v9; // esi
  char v10; // al
  __int64 v11; // r8
  unsigned __int64 VSync; // rbx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_WFVB_Start,
      a3,
      1u,
      &v16);
  v5 = *((_QWORD *)this + 565);
  if ( v5 && !*(_BYTE *)(v5 + 154) && *(_BYTE *)(v5 + 156) )
  {
    v6 = *(_DWORD *)(v5 + 120);
    if ( v6 + 1 <= (unsigned int)(*(_DWORD *)(*((_QWORD *)this + 564) + 120LL) + 1) )
      v6 = *(_DWORD *)(*((_QWORD *)this + 564) + 120LL);
    v7 = v6 + 1;
  }
  else
  {
    v7 = 0;
  }
  v9 = CPartitionVerticalBlankScheduler::WaitForVSync(this, v7, v7);
  if ( !*((_BYTE *)this + 4852) || (v10 = 1, v9 < 0) )
    v10 = 0;
  *((_BYTE *)this + 4853) = v10;
  if ( v9 < 0 )
  {
    if ( v9 != -2003304307 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1802E18D0, 2LL, v9, 0x1BCu);
  }
  else
  {
    v11 = 0LL;
    if ( v9 != 142213121 )
      goto LABEL_13;
  }
  VSync = CPartitionVerticalBlankScheduler::EstimateNextVSync(this);
  CPartitionVerticalBlankScheduler::UpdateCurrentTime(this);
  CPartitionVerticalBlankScheduler::TraceTime(this);
  v14 = *((_QWORD *)this + 2147);
  if ( v14 >= VSync )
    VSync = *(_QWORD *)(*((_QWORD *)this + 564) + 256LL) + v14 - v14 % *(_QWORD *)(*((_QWORD *)this + 564) + 256LL);
  v15 = 1000 * (VSync - v14) / g_qpcFrequency.QuadPart;
  Sleep(v15 + 1);
  v9 = 0;
  v3 = v15 + 1;
  v11 = 1LL;
  *(_BYTE *)(*((_QWORD *)this + 564) + 241LL) = 1;
LABEL_13:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    McTemplateU0qq_EventWriteTransfer(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_WFVB_Stop, v11, v3);
  return (unsigned int)v9;
}
