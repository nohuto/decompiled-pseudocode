/*
 * XREFs of BuildGetLogPageCommand @ 0x1C0001F64
 * Callers:
 *     QueryProtocolInfoLogPageData @ 0x1C000143C (QueryProtocolInfoLogPageData.c)
 *     FirmwareGetInfo @ 0x1C00017FC (FirmwareGetInfo.c)
 *     ScsiModeSenseRequest @ 0x1C0001E0C (ScsiModeSenseRequest.c)
 *     BuildGetLogPageCommandForTelemetryLog @ 0x1C000F9E8 (BuildGetLogPageCommandForTelemetryLog.c)
 *     IoctlQueryEnduranceInformation @ 0x1C00119D8 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0011DC0 (IoctlQueryTemperatureInfoProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C0012798 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x1C0012980 (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C001308C (NVMeGetDeviceTelemetryData.c)
 *     ProtocolCommandCompletion @ 0x1C0014800 (ProtocolCommandCompletion.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C00160A0 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeGetCloudSSDErrorRecoveryLog @ 0x1C00178C8 (NVMeGetCloudSSDErrorRecoveryLog.c)
 *     NVMeGetCommandEffectsLog @ 0x1C0017AFC (NVMeGetCommandEffectsLog.c)
 * Callees:
 *     SetPrpFromBuffer @ 0x1C000202C (SetPrpFromBuffer.c)
 */

__int64 __fastcall BuildGetLogPageCommand(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        unsigned __int64 a7,
        unsigned __int16 a8)
{
  __int64 v8; // rbp
  unsigned __int64 v12; // rsi
  int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // edi
  __int64 result; // rax

  v8 = *(_QWORD *)(a1 + 1608);
  v12 = a4;
  if ( a3 <= 9u && (v13 = 554, _bittest(&v13, a3)) || a3 == 0x80 )
    a6 = -1;
  *(_BYTE *)(a2 + 4136) = a3;
  v14 = *(_DWORD *)(a2 + 4136) & 0xF0007FFF;
  *(_DWORD *)(a2 + 4100) = a6;
  v15 = a4 >> 2;
  *(_BYTE *)(a2 + 4096) = 2;
  *(_DWORD *)(a2 + 4136) = v14 | ((((unsigned __int16)(a4 >> 2) - 1) & 0xFFF) << 16);
  SetPrpFromBuffer(a1, a2, a5, a4);
  result = a8;
  *(_WORD *)(a2 + 4142) = a8;
  if ( (*(_BYTE *)(v8 + 261) & 4) != 0 )
  {
    *(_WORD *)(a2 + 4138) = v15 - 1;
    *(_WORD *)(a2 + 4140) = ((unsigned int)(v12 >> 2) - 1) >> 16;
    result = (unsigned int)a7 & 0xFFFFFFFC;
    *(_DWORD *)(a2 + 4144) = result;
    *(_DWORD *)(a2 + 4148) = (a7 >> 16) & 0xFFFF0000;
  }
  return result;
}
