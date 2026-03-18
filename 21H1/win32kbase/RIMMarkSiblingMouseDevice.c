/*
 * XREFs of RIMMarkSiblingMouseDevice @ 0x1C016A68C
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C009E724 (RIMAllocateHidDesc.c)
 *     RIMCreateDev @ 0x1C00A1B30 (RIMCreateDev.c)
 *     RIMVirtCreateDev @ 0x1C0159498 (RIMVirtCreateDev.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int16 __fastcall RIMMarkSiblingMouseDevice(__int64 a1, unsigned __int16 a2)
{
  int v2; // esi
  __int16 v4; // bx
  __int64 v5; // rcx
  __int16 result; // ax

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q((_DWORD)gRimLog, a2, 1, 67, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids, a1);
  }
  v4 = 0;
  switch ( v2 )
  {
    case 1:
      v4 = 16;
      break;
    case 2:
      v4 = 4;
      break;
    case 4:
      v4 = 8;
      break;
    case 5:
      v4 = 2;
      break;
    default:
      MicrosoftTelemetryAssertTriggeredNoArgsKM((unsigned int)(v2 - 4));
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
      break;
  }
  result = (v4 | *(_WORD *)(a1 + 888)) & 0xFFFE;
  *(_WORD *)(a1 + 888) = result;
  if ( v2 == 5 )
    *(_DWORD *)(a1 + 184) |= 0x6000000u;
  return result;
}
