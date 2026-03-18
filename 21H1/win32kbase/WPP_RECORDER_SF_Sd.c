/*
 * XREFs of WPP_RECORDER_SF_sd @ 0x1C01B0C60
 * Callers:
 *     ?HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C01AFBA8 (-HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTe.c)
 *     ?InitializeInputSensors@@YAJXZ @ 0x1C01B4798 (-InitializeInputSensors@@YAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_sd(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const char *a6,
        ...)
{
  __int64 v6; // rdi
  struct _LIST_ENTRY *Flink; // r12
  const char *v8; // rbx
  unsigned __int64 v10; // r11
  unsigned int v12; // ebp
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  const char *v16; // rcx
  __int64 v17; // rdi
  int v19; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+50h] [rbp-18h]
  __int64 v21; // [rsp+58h] [rbp-10h]
  va_list va; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = -1LL;
  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  v8 = a6;
  v10 = (unsigned __int64)a3 >> 16;
  v12 = a2;
  v13 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v13, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v10 + 1) >= a2 )
  {
    if ( a6 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a6[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = a6;
    if ( !a6 )
      v16 = "NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, const char *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v10),
      43LL,
      a5,
      a4,
      v16,
      v15,
      va,
      4LL,
      0LL);
  }
  if ( a6 )
  {
    do
      ++v6;
    while ( a6[v6] );
    v17 = v6 + 1;
  }
  else
  {
    v17 = 5LL;
  }
  if ( !a6 )
    v8 = "NULL";
  LOWORD(v19) = a4;
  return WppAutoLogTrace(Flink, v12, a3, a5, v19, v8, v17, va, 4LL, 0LL, v20, v21);
}
