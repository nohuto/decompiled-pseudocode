/*
 * XREFs of Endpoint_StreamsOnResetSetDequeuePointerComplete @ 0x1C003A790
 * Callers:
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C00398A4 (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x1C00399B0 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 * Callees:
 *     ESM_AddEvent @ 0x1C0005174 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C000B300 (WPP_RECORDER_SF_DDDD.c)
 */

void __fastcall Endpoint_StreamsOnResetSetDequeuePointerComplete(__int64 *a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  signed __int32 v4; // edi

  v2 = *a1;
  v3 = *(_QWORD *)(*a1 + 136);
  v4 = _InterlockedIncrement((volatile signed __int32 *)(v3 + 20));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_DDDD(
      *(_QWORD *)(v2 + 80),
      5u,
      0xDu,
      0x29u,
      (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v2 + 16) + 135LL),
      *(_DWORD *)(v2 + 144),
      a2,
      v4);
  if ( v4 == *(_DWORD *)(v3 + 8) )
  {
    *(_DWORD *)(v2 + 280) = 0;
    ESM_AddEvent((KSPIN_LOCK *)(v2 + 288), 16);
  }
}
