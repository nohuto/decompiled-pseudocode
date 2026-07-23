/*
 * XREFs of NtTerminateThread @ 0x140709820
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14062B1C0 (ObReferenceObjectByHandleWithTag.c)
 *     PspTerminateThreadByPointer @ 0x140709890 (PspTerminateThreadByPointer.c)
 */

NTSTATUS __cdecl NtTerminateThread(HANDLE ThreadHandle, NTSTATUS ExitStatus)
{
  __int64 v2; // r8
  NTSTATUS v3; // ebx
  struct _KTHREAD *CurrentThread; // rsi
  NTSTATUS result; // eax
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  Object = 0LL;
  v3 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( ThreadHandle )
  {
    if ( ThreadHandle == (HANDLE)-2LL )
      goto LABEL_3;
    result = ObReferenceObjectByHandleWithTag(
               ThreadHandle,
               1u,
               (POBJECT_TYPE)PsThreadType,
               CurrentThread->PreviousMode,
               0x65547350u,
               &Object,
               0LL);
    v3 = result;
    if ( result >= 0 )
    {
      if ( Object != CurrentThread )
      {
        v3 = PspTerminateThreadByPointer(Object, (unsigned int)ExitStatus, 0LL);
        ObfDereferenceObjectWithTag(Object, 0x65547350u);
        return v3;
      }
      ObfDereferenceObjectWithTag(Object, 0x65547350u);
LABEL_3:
      LOBYTE(v2) = 1;
      PspTerminateThreadByPointer(CurrentThread, (unsigned int)ExitStatus, v2);
      return v3;
    }
  }
  else
  {
    if ( LODWORD(CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[8]) != 1 )
      goto LABEL_3;
    return -1073741605;
  }
  return result;
}
