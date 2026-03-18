/*
 * XREFs of ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007A258
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18007A020 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetOcclusionEvent@CDisplayManager@@QEAAPEAXXZ @ 0x18007A4A0 (-GetOcclusionEvent@CDisplayManager@@QEAAPEAXXZ.c)
 *     ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x1800EE630 (-ForceFullRender@CRenderTargetManager@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqqqq_EventWriteTransfer @ 0x180112284 (McTemplateU0qqqqq_EventWriteTransfer.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::WaitForWork(HANDLE *this)
{
  __int64 v2; // rbx
  void *OcclusionEvent; // rax
  __int64 v4; // r8
  HANDLE *v5; // r14
  HANDLE v6; // rcx
  __m128i *p_si128; // rsi
  int v8; // edx
  int v9; // ecx
  DWORD v10; // r8d
  char v11; // r15
  char v12; // r14
  UCHAR v13; // si
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // eax
  int v18; // eax
  __int64 v19; // rcx
  signed int LastError; // eax
  DWORD v21; // [rsp+40h] [rbp-30h] BYREF
  __m128i si128; // [rsp+48h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+58h] [rbp-18h] BYREF
  void *retaddr; // [rsp+88h] [rbp+18h]

  v2 = 4LL;
  OcclusionEvent = CDisplayManager::GetOcclusionEvent((CDisplayManager *)this);
  if ( OcclusionEvent )
    this[4] = OcclusionEvent;
  else
    v2 = 3LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_WFW_Start,
      v4,
      1u,
      (PEVENT_DATA_DESCRIPTOR)&si128);
  v5 = this + 1;
  v21 = WaitForMultipleObjects(v2, this + 1, 0, 0);
  if ( v21 >= (unsigned int)v2 )
  {
    while ( 1 )
    {
      v15 = (*(__int64 (__fastcall **)(HANDLE, _QWORD, char *, __int64, _DWORD, DWORD *))(*(_QWORD *)this[17] + 32LL))(
              this[17],
              (unsigned int)v2,
              (char *)this + 8,
              0xFFFFFFFFLL,
              0,
              &v21);
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0x135u);
        v17 = -1;
        v21 = -1;
      }
      else
      {
        v17 = v21;
      }
      if ( v17 < (unsigned int)v2 )
        break;
      v18 = (*(__int64 (__fastcall **)(HANDLE, __int64))(*(_QWORD *)this[17] + 24LL))(this[17], 3LL);
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, v18, 0x143u);
    }
  }
  v6 = this[3];
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( !CancelWaitableTimer(v6) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      LastError = -2003304445;
    ModuleFailFastForHRESULT((unsigned int)LastError, retaddr);
  }
  *((_DWORD *)this + 3121) = -1;
  p_si128 = &si128;
  do
  {
    p_si128->m128i_i32[0] = WaitForSingleObject(*v5++, 0);
    p_si128 = (__m128i *)((char *)p_si128 + 4);
    --v2;
  }
  while ( v2 );
  v10 = v21;
  if ( !v21 || !si128.m128i_i32[0] )
    LOBYTE(v2) = 1;
  v11 = si128.m128i_i8[4];
  if ( v21 == 1 || !si128.m128i_i32[1] )
    LOBYTE(v2) = v2 | 2;
  v12 = si128.m128i_i8[8];
  if ( v21 == 2 || !si128.m128i_i32[2] )
    LOBYTE(v2) = v2 | 4;
  v13 = si128.m128i_u8[12];
  if ( v21 == 3 || !si128.m128i_i32[3] )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McGenEventWrite_EventWriteTransfer(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_DXGI_OCCLUSION_EVENT,
        v21,
        1u,
        &v23);
    CRenderTargetManager::ForceFullRender(*((CRenderTargetManager **)this[8] + 27));
    v10 = v21;
    LOBYTE(v2) = v2 | 8;
  }
  v14 = dword_1803D3338;
  if ( (v2 & 1) != 0 )
  {
    v14 = dword_1803D3338 | 8;
    dword_1803D3338 |= 8u;
  }
  if ( (v2 & 2) != 0 )
  {
    v14 |= 0x10u;
    dword_1803D3338 = v14;
  }
  if ( (v2 & 4) != 0 )
  {
    v14 |= 2u;
    dword_1803D3338 = v14;
  }
  if ( (v2 & 8) != 0 )
    dword_1803D3338 = v14 | 4;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    McTemplateU0qqqqq_EventWriteTransfer(v9, v8, v10, si128.m128i_i32[0], v11, v12, v13);
}
