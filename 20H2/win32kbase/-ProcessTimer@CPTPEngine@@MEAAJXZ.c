/*
 * XREFs of ?ProcessTimer@CPTPEngine@@MEAAJXZ @ 0x1C01C11C0
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z @ 0x1C01BDC04 (-CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z.c)
 *     ?IsTouchpadActive@CPTPEngine@@AEAAHXZ @ 0x1C01C04D4 (-IsTouchpadActive@CPTPEngine@@AEAAHXZ.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C01C2A7C (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 */

__int64 __fastcall CPTPEngine::ProcessTimer(CPTPEngine *this)
{
  __int128 v3; // [rsp+20h] [rbp-48h] BYREF
  __int64 v4; // [rsp+30h] [rbp-38h]
  __int64 v5; // [rsp+50h] [rbp-18h]

  *((_DWORD *)this + 952) = 0;
  CPTPEngine::CancelMouseUpTimer(this, 1);
  if ( !(unsigned int)CPTPEngine::IsTouchpadActive(this) )
  {
    *((_DWORD *)this + 958) |= 0x80000000;
    v5 = 0LL;
    v3 = 0LL;
    v4 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(this, 9LL, &v3);
  }
  return 0LL;
}
