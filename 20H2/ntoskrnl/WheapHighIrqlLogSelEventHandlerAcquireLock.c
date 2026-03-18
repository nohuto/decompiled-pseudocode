/*
 * XREFs of WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x1405BBAC0
 * Callers:
 *     WheaHighIrqlLogSelEventHandlerRegister @ 0x1405BB910 (WheaHighIrqlLogSelEventHandlerRegister.c)
 *     WheaHighIrqlLogSelEventHandlerUnregister @ 0x1405BB980 (WheaHighIrqlLogSelEventHandlerUnregister.c)
 *     WheapLogIpmiSELEventHighIrql @ 0x1405BBB88 (WheapLogIpmiSELEventHighIrql.c)
 * Callees:
 *     <none>
 */

char __fastcall WheapHighIrqlLogSelEventHandlerAcquireLock(char a1)
{
  char v1; // dl

  v1 = 0;
  while ( _InterlockedCompareExchange((_DWORD *)&WheapDispatchPtr.Queue.Wcb.DeviceRoutine + 1, 1, 0) )
  {
    if ( !a1 )
      return v1;
  }
  return 1;
}
