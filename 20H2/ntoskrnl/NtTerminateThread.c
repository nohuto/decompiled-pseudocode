/*
 * XREFs of NtTerminateThread @ 0x14069A180
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140611880 (ObReferenceObjectByHandleWithTag.c)
 *     PspTerminateThreadByPointer @ 0x14069A1F0 (PspTerminateThreadByPointer.c)
 */

NTSTATUS __fastcall NtTerminateThread(void *a1, unsigned int a2, __int64 a3)
{
  NTSTATUS v3; // ebx
  struct _KTHREAD *CurrentThread; // rsi
  NTSTATUS result; // eax
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  Object = 0LL;
  v3 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( a1 )
  {
    if ( a1 == (void *)-2LL )
      goto LABEL_3;
    result = ObReferenceObjectByHandleWithTag(
               a1,
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
        v3 = PspTerminateThreadByPointer(Object, a2, 0LL);
        ObfDereferenceObjectWithTag(Object, 0x65547350u);
        return v3;
      }
      ObfDereferenceObjectWithTag(Object, 0x65547350u);
LABEL_3:
      LOBYTE(a3) = 1;
      PspTerminateThreadByPointer(CurrentThread, a2, a3);
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
