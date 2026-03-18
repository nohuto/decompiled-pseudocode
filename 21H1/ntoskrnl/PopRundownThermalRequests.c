/*
 * XREFs of PopRundownThermalRequests @ 0x1406FE3AC
 * Callers:
 *     PopDiagTraceControlCallback @ 0x1406FF180 (PopDiagTraceControlCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceThermalRequest @ 0x1406EB910 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x1406EBE10 (PopDiagTraceCoolingExtension.c)
 */

void PopRundownThermalRequests()
{
  __int64 i; // rbx
  __int64 j; // rdi

  PopAcquireRwLockExclusive((ULONG_PTR)&PopCoolingExtensionLock);
  for ( i = PopCoolingExtensionList; (__int64 *)i != &PopCoolingExtensionList; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 64) )
    {
      PopAcquireRwLockExclusive(i + 32);
      PopDiagTraceCoolingExtension(i, (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_COOLING_EXTENSION_RUNDOWN);
      for ( j = *(_QWORD *)(i + 16); j != i + 16; j = *(_QWORD *)j )
      {
        if ( *(_BYTE *)(j + 18) )
          PopDiagTraceThermalRequest(j, (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_THERMAL_REQUEST_RUNDOWN);
      }
      PopReleaseRwLock(i + 32);
    }
  }
  PopReleaseRwLock((ULONG_PTR)&PopCoolingExtensionLock);
}
