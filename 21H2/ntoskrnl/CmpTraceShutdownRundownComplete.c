/*
 * XREFs of CmpTraceShutdownRundownComplete @ 0x14086B004
 * Callers:
 *     CmShutdownSystem @ 0x14086B8F8 (CmShutdownSystem.c)
 * Callees:
 *     EtwEventEnabled @ 0x14021BF30 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14025DC90 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 */

BOOLEAN CmpTraceShutdownRundownComplete()
{
  REGHANDLE v0; // rbx
  BOOLEAN result; // al
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-28h] BYREF

  v0 = EtwpRegTraceHandle;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_SHUTDOWN_RUNDOWN_COMPLETE;
  result = EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor);
  if ( result )
    return EtwWrite(v0, &EventDescriptor, 0LL, 0, 0LL);
  return result;
}
