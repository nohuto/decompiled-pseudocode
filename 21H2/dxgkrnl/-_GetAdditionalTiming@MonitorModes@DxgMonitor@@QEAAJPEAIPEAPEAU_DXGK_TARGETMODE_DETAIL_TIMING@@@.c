/*
 * XREFs of ?_GetAdditionalTiming@MonitorModes@DxgMonitor@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C01DC380
 * Callers:
 *     ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C01DC200 (-GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_.c)
 * Callees:
 *     ?IsAnalogueVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0027054 (-IsAnalogueVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     _pGetAdditionalTiming @ 0x1C01DC484 (_pGetAdditionalTiming.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_GetAdditionalTiming(
        DxgMonitor::MonitorModes *this,
        unsigned int *a2,
        struct _DXGK_TARGETMODE_DETAIL_TIMING **a3)
{
  unsigned int *v6; // rsi
  bool v7; // cf
  bool v8; // bp
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 result; // rax
  int v13; // eax

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  *a2 = 0;
  v6 = (unsigned int *)((char *)this + 208);
  *a3 = 0LL;
  v7 = *((_DWORD *)this + 52) != -1;
  if ( *((_DWORD *)this + 52) != -1 )
    goto LABEL_12;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 29) + 40LL))(*((_QWORD *)this + 29)) == -2 )
    WdLogSingleEntry0(1LL);
  v8 = 0;
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 29) + 32LL))(*((_QWORD *)this + 29));
  if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9) >= 9216 )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 29) + 40LL))(*((_QWORD *)this + 29));
    v8 = !IsAnalogueVideoOutput(v13);
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 29) + 40LL))(*((_QWORD *)this + 29));
  LOBYTE(v11) = v8;
  result = pGetAdditionalTiming(v10, v11, (char *)this + 208, (char *)this + 216);
  if ( (int)result >= 0 )
  {
    v7 = *v6 != -1;
LABEL_12:
    if ( !v7 )
      WdLogSingleEntry0(1LL);
    if ( !*((_QWORD *)this + 27) )
      WdLogSingleEntry0(1LL);
    ++*((_DWORD *)this + 56);
    *a2 = *v6;
    *a3 = (struct _DXGK_TARGETMODE_DETAIL_TIMING *)*((_QWORD *)this + 27);
    return 0LL;
  }
  return result;
}
