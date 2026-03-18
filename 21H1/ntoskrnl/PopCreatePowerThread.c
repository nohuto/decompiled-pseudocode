/*
 * XREFs of PopCreatePowerThread @ 0x1403A1D18
 * Callers:
 *     PopCreateDynamicIrpWorker @ 0x1403A1CB0 (PopCreateDynamicIrpWorker.c)
 *     PopInitializeIrpWorkers @ 0x140A6D110 (PopInitializeIrpWorkers.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeSetActualBasePriorityThread @ 0x14026C9E0 (KeSetActualBasePriorityThread.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14062B1C0 (ObReferenceObjectByHandleWithTag.c)
 *     PsCreateSystemThread @ 0x140655530 (PsCreateSystemThread.c)
 */

NTSTATUS __fastcall PopCreatePowerThread(KSTART_ROUTINE *a1, void *a2)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // ebx
  __int64 v4; // r8
  _DWORD *v5; // r9
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ThreadHandle; // [rsp+90h] [rbp+20h] BYREF
  PVOID Object; // [rsp+98h] [rbp+28h] BYREF

  memset(&ObjectAttributes.Length + 1, 0, 20);
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  Object = 0LL;
  ThreadHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  result = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, &ObjectAttributes, 0LL, 0LL, a1, a2);
  if ( result >= 0 )
  {
    v3 = ObReferenceObjectByHandleWithTag(
           ThreadHandle,
           0x1FFFFFu,
           (POBJECT_TYPE)PsThreadType,
           0,
           0x72496F50u,
           &Object,
           0LL);
    ZwClose(ThreadHandle);
    if ( v3 >= 0 )
    {
      KeSetActualBasePriorityThread((__int64)Object, 13LL, v4, v5);
      ObfDereferenceObjectWithTag(Object, 0x72496F50u);
    }
    return 0;
  }
  return result;
}
