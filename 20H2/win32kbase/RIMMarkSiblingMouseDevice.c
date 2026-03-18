/*
 * XREFs of RIMMarkSiblingMouseDevice @ 0x1C0161DDC
 * Callers:
 *     RIMCreateDev @ 0x1C0027880 (RIMCreateDev.c)
 *     RIMAllocateHidDesc @ 0x1C006E23C (RIMAllocateHidDesc.c)
 *     RIMVirtCreateDev @ 0x1C0150BC8 (RIMVirtCreateDev.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0063890 (WPP_RECORDER_SF_q.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int16 __fastcall RIMMarkSiblingMouseDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int16 v6; // bx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int16 result; // ax

  v4 = (unsigned __int16)a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q((_DWORD)gRimLog, a2, 1, 67, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, a1);
  }
  v6 = 0;
  switch ( v4 )
  {
    case 1:
      v6 = 16;
      break;
    case 2:
      v6 = 4;
      break;
    case 4:
      v6 = 8;
      break;
    case 5:
      v6 = 2;
      break;
    default:
      MicrosoftTelemetryAssertTriggeredNoArgsKM((unsigned int)(v4 - 4), a2, a3, a4);
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
      break;
  }
  result = (v6 | *(_WORD *)(a1 + 888)) & 0xFFFE;
  *(_WORD *)(a1 + 888) = result;
  if ( v4 == 5 )
    *(_DWORD *)(a1 + 184) |= 0x6000000u;
  return result;
}
