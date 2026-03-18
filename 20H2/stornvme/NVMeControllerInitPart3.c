/*
 * XREFs of NVMeControllerInitPart3 @ 0x1C000C9E4
 * Callers:
 *     NVMeHwInitialize @ 0x1C00097C0 (NVMeHwInitialize.c)
 *     NVMeHwPassiveInitialize @ 0x1C0009880 (NVMeHwPassiveInitialize.c)
 *     NVMeControllerPowerUp @ 0x1C000CDD8 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C000D0A0 (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C0016B90 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     NVMeControllerStartFailureEventLog @ 0x1C0009154 (NVMeControllerStartFailureEventLog.c)
 *     NVMeLogEtwControllerInfo @ 0x1C000D9D0 (NVMeLogEtwControllerInfo.c)
 *     NVMeLogTelemetryControllerInfo @ 0x1C000E028 (NVMeLogTelemetryControllerInfo.c)
 *     NVMeStartAsyncEventCommands @ 0x1C000F558 (NVMeStartAsyncEventCommands.c)
 *     NVMeRegisterThrottling @ 0x1C0013BB8 (NVMeRegisterThrottling.c)
 *     NVMeConfigAsyncEvent @ 0x1C0016914 (NVMeConfigAsyncEvent.c)
 *     NVMeGetCloudSSDErrorRecoveryLog @ 0x1C00178C8 (NVMeGetCloudSSDErrorRecoveryLog.c)
 *     NVMeGetCommandEffectsLog @ 0x1C0017AFC (NVMeGetCommandEffectsLog.c)
 *     NVMeGetTemperatureThreshold @ 0x1C0017E6C (NVMeGetTemperatureThreshold.c)
 *     NVMeSyncHostTime @ 0x1C001AFD8 (NVMeSyncHostTime.c)
 */

char __fastcall NVMeControllerInitPart3(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  const wchar_t *v5; // rdx
  int v6; // r8d

  NVMeGetCommandEffectsLog(a1);
  if ( (*(_DWORD *)(a1 + 56) & 4) == 0 )
    NVMeGetTemperatureThreshold(a1);
  NVMeConfigAsyncEvent(a1);
  NVMeStartAsyncEventCommands(a1);
  if ( !*(_BYTE *)(a1 + 16) )
  {
    NVMeGetCloudSSDErrorRecoveryLog(a1);
    v2 = *(_QWORD *)(a1 + 3960);
    if ( v2 )
    {
      if ( *(_DWORD *)(v2 + 4) )
      {
        *(_DWORD *)(a1 + 28) = 24;
        NVMeControllerStartFailureEventLog(a1);
        v3 = *(_QWORD *)(a1 + 3960);
        v4 = *(unsigned __int8 *)(v3 + 3);
        if ( (_BYTE)v4 )
        {
          switch ( (_BYTE)v4 )
          {
            case 1:
              v5 = L"Controller Panic, Format NVM required";
              break;
            case 2:
              v5 = L"Controller Panic, Vendor Specific Command required";
              break;
            case 3:
              v5 = L"Controller Panic, Vendor Analysis required";
              break;
            case 4:
              v5 = L"Controller Panic, Device Replacement required";
              break;
            default:
              v5 = L"Controller Panic, Sanitize required";
              if ( (_BYTE)v4 != 5 )
                v5 = L"Controller Panic, Unknown Device Action!";
              break;
          }
          v6 = 2;
        }
        else
        {
          v5 = L"Controller Panic, No Action required";
          v6 = 3;
        }
        StorPortExtendedFunction(
          86LL,
          a1,
          0LL,
          2LL,
          7,
          v5,
          8LL,
          v6,
          0,
          0LL,
          L"Panic Id-Low",
          *(unsigned int *)(v3 + 4),
          L"Panic Id-High",
          0LL,
          L"Recovery Action",
          v4,
          0LL,
          0LL);
      }
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1608) + 520LL) & 0x40) != 0 )
    NVMeSyncHostTime(a1);
  NVMeLogEtwControllerInfo(a1);
  NVMeLogTelemetryControllerInfo(a1);
  NVMeRegisterThrottling(a1, 0LL, *(unsigned int *)(a1 + 132));
  NVMeRegisterThrottling(a1, 1LL, *(unsigned int *)(a1 + 132));
  NVMeRegisterThrottling(a1, 2LL, *(unsigned int *)(a1 + 132));
  NVMeRegisterThrottling(a1, 3LL, *(unsigned int *)(a1 + 132));
  NVMeRegisterThrottling(a1, 4LL, *(unsigned int *)(a1 + 132));
  NVMeRegisterThrottling(a1, 5LL, *(unsigned int *)(a1 + 136));
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 24) |= 0x201u;
  return 1;
}
