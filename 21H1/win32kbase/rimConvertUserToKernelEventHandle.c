/*
 * XREFs of rimConvertUserToKernelEventHandle @ 0x1C00A3620
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C0037400 (RIMRegisterForInputWithCallbacks.c)
 *     RIMReadInput @ 0x1C00A08D0 (RIMReadInput.c)
 *     rimObsAddInputObserver @ 0x1C01843F4 (rimObsAddInputObserver.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimConvertUserToKernelEventHandle(void *a1, void **a2)
{
  NTSTATUS v3; // eax
  PVOID v4; // rdi
  NTSTATUS v5; // ebx
  __int64 v6; // rcx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  Object = 0LL;
  v3 = ObReferenceObjectByHandle(a1, 0x100000u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
  v4 = Object;
  v5 = v3;
  if ( v3 >= 0 )
  {
    v5 = ObOpenObjectByPointer(Object, 0x200u, 0LL, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, a2);
    if ( v5 < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
    ObfDereferenceObject(v4);
  }
  return (unsigned int)v5;
}
