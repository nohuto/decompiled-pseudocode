/*
 * XREFs of PopArmIdlePhaseWatchdog @ 0x1408EC7F8
 * Callers:
 *     PopProcessSessionDisplayStateChange @ 0x1408ECE18 (PopProcessSessionDisplayStateChange.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     ZwPowerInformation @ 0x1403F41A0 (ZwPowerInformation.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PopPdcAreAllPhasesDisengaged @ 0x1408EC9C8 (PopPdcAreAllPhasesDisengaged.c)
 *     PopSnapSystemIdleContext @ 0x1408EDBBC (PopSnapSystemIdleContext.c)
 */

void __fastcall PopArmIdlePhaseWatchdog(int a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  int v3; // edi
  int v4; // edi
  _QWORD InputBuffer[14]; // [rsp+30h] [rbp-19h] BYREF
  int v6; // [rsp+B8h] [rbp+6Fh] BYREF
  void *v7; // [rsp+C0h] [rbp+77h] BYREF

  v7 = 0LL;
  v6 = 0;
  v1 = PopPdcIdlePhaseWatchdogContext;
  v2 = a1;
  if ( PopPdcIdlePhaseWatchdogContext && (unsigned __int8)PopPdcAreAllPhasesDisengaged() )
  {
    PopSnapSystemIdleContext(&v7, &v6);
    PopAcquireRwLockExclusive((ULONG_PTR)&unk_140C21108);
    v3 = v6;
    qword_140C21118 = v7;
    dword_140C21120 = v6;
    PopReleaseRwLock((ULONG_PTR)&unk_140C21108);
    if ( (_DWORD)v2 == 12 || (unsigned int)(v2 - 5) <= 1 )
      v4 = PopIdleScanInterval + v3;
    else
      v4 = PopPdcIdlePhaseDefaultWatchdogTimeoutSeconds;
    memset(InputBuffer, 0, 0x60uLL);
    LODWORD(InputBuffer[0]) = 21;
    InputBuffer[1] = v1;
    LODWORD(InputBuffer[3]) = 160;
    InputBuffer[4] = 2050LL;
    LODWORD(InputBuffer[2]) = 1000 * v4;
    InputBuffer[6] = (unsigned int)PopEventProcessorEnabled;
    InputBuffer[7] = &PopPdcIdlePhaseWatchdogContext;
    InputBuffer[10] = InputBuffer;
    InputBuffer[9] = PopIdlePhaseWatchdogCallback;
    InputBuffer[5] = v2;
    ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, 0LL, 0);
  }
}
