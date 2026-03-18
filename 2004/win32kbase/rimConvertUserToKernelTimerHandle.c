/*
 * XREFs of rimConvertUserToKernelTimerHandle @ 0x1C0056870
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C0006400 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimConvertUserToKernelTimerHandle(void *a1, void **a2)
{
  NTSTATUS v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  PVOID v8; // rdi
  NTSTATUS v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  Object = 0LL;
  v3 = ObReferenceObjectByHandle(a1, 2u, ExTimerObjectType, 1, &Object, 0LL);
  v8 = Object;
  v9 = v3;
  if ( v3 < 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6, v7);
  }
  else
  {
    v9 = ObOpenObjectByPointer(Object, 0x200u, 0LL, 2u, ExTimerObjectType, 0, a2);
    if ( v9 < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
    ObfDereferenceObject(v8);
  }
  return (unsigned int)v9;
}
