/*
 * XREFs of rimConvertUserToKernelTimerHandle @ 0x1C0048EA8
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C0037400 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimConvertUserToKernelTimerHandle(void *a1, void **a2)
{
  NTSTATUS v3; // eax
  __int64 v4; // rcx
  PVOID v5; // rdi
  NTSTATUS v6; // ebx
  __int64 v7; // rcx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  Object = 0LL;
  v3 = ObReferenceObjectByHandle(a1, 2u, ExTimerObjectType, 1, &Object, 0LL);
  v5 = Object;
  v6 = v3;
  if ( v3 < 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
  }
  else
  {
    v6 = ObOpenObjectByPointer(Object, 0x200u, 0LL, 2u, ExTimerObjectType, 0, a2);
    if ( v6 < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
    ObfDereferenceObject(v5);
  }
  return (unsigned int)v6;
}
