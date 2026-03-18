/*
 * XREFs of CmpTraceHiveFlushStop @ 0x140688EC0
 * Callers:
 *     CmpFlushHive @ 0x1406885A4 (CmpFlushHive.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

BOOLEAN __fastcall CmpTraceHiveFlushStop(int a1)
{
  REGHANDLE v1; // rbx
  BOOLEAN result; // al
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+70h] [rbp+8h] BYREF

  v5 = a1;
  v1 = EtwpRegTraceHandle;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_STOP;
  result = EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor);
  if ( result )
  {
    UserData.Reserved = 0;
    UserData.Ptr = (ULONGLONG)&v5;
    UserData.Size = 4;
    return EtwWrite(v1, &EventDescriptor, 0LL, 1u, &UserData);
  }
  return result;
}
