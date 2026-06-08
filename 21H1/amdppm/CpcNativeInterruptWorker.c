/*
 * XREFs of CpcNativeInterruptWorker @ 0x1C0020B00
 * Callers:
 *     <none>
 * Callees:
 *     CpcGuaranteedNotifyWorker @ 0x1C0020548 (CpcGuaranteedNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1C00207F0 (CpcHighestNotifyWorker.c)
 */

void __fastcall CpcNativeInterruptWorker(__int64 DeviceObject, _QWORD *Context)
{
  __int64 v2; // rbx
  char v4; // di

  v2 = Context[30];
  do
  {
    v4 = _InterlockedExchange((volatile __int32 *)(v2 + 360), 4);
    if ( (v4 & 1) != 0 )
      CpcGuaranteedNotifyWorker(DeviceObject, 0LL, "Native Interrupt");
    if ( (v4 & 2) != 0 )
      CpcHighestNotifyWorker(DeviceObject, 0LL, "Native Interrupt");
  }
  while ( _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 360), 0, 4) != 4 );
}
