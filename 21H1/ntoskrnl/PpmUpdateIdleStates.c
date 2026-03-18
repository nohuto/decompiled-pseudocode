/*
 * XREFs of PpmUpdateIdleStates @ 0x14077F2B0
 * Callers:
 *     <none>
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x140204F30 (PopExecuteOnTargetProcessors.c)
 *     KeGetProcessorIndexFromNumber @ 0x140205810 (KeGetProcessorIndexFromNumber.c)
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     KeAddProcessorAffinityEx @ 0x140277170 (KeAddProcessorAffinityEx.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PpmHvUseNativeAlgorithms @ 0x1403A9DCC (PpmHvUseNativeAlgorithms.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PpmUpdateIdleContext @ 0x1408DE0D4 (PpmUpdateIdleContext.c)
 */

__int64 __fastcall PpmUpdateIdleStates(__int64 a1)
{
  ULONG ProcessorIndexFromNumber; // edi
  __int64 v3; // r9
  void *v4; // rdx
  __int64 v5; // r8
  unsigned int updated; // eax
  unsigned int v7; // ebx
  _DWORD v9[44]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v9, 0, 0xA8uLL);
  PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
  if ( !a1
    || (ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(a1 + 4)),
        ProcessorIndexFromNumber == -1) )
  {
    v7 = -1073741811;
    goto LABEL_10;
  }
  if ( !PpmHvUseNativeAlgorithms() )
  {
    updated = PpmUpdateIdleContext(ProcessorIndexFromNumber, a1);
    goto LABEL_9;
  }
  v9[0] = 1310721;
  memset(&v9[1], 0, 0xA4uLL);
  KeAddProcessorAffinityEx(v9, ProcessorIndexFromNumber);
  if ( *(_BYTE *)(a1 + 17) )
  {
    v3 = 0LL;
    v4 = PpmUpdateIdleStatesInplace;
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 116) )
    {
      v3 = 0LL;
      v4 = PpmRemoveIdleStates;
      v5 = 0LL;
      goto LABEL_8;
    }
    v3 = 3LL;
    v4 = PpmInstallNewIdleStates;
  }
  v5 = a1;
LABEL_8:
  updated = PopExecuteOnTargetProcessors((__int64)v9, (__int64)v4, v5, v3);
LABEL_9:
  v7 = updated;
LABEL_10:
  PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
  return v7;
}
