/*
 * XREFs of VfPoolInitPhase1 @ 0x1409DD210
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1409C3D30 (VfInitSystemNoRebootNeeded.c)
 *     ViInitSystemPhase1 @ 0x140A6C52C (ViInitSystemPhase1.c)
 * Callees:
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     InitializeSListHead @ 0x1402FDA50 (InitializeSListHead.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     PsCreateSystemThread @ 0x1406CFB90 (PsCreateSystemThread.c)
 */

unsigned __int64 VfPoolInitPhase1()
{
  unsigned __int64 result; // rax
  char *v1; // rbx
  HANDLE v2; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ThreadHandle; // [rsp+80h] [rbp+10h] BYREF
  PVOID Object; // [rsp+88h] [rbp+18h] BYREF

  ThreadHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  result = (unsigned int)MmVerifierData;
  if ( (MmVerifierData & 0x400000) == 0 || (MmVerifierData & 1) != 0 )
  {
    v1 = (char *)&unk_140CEC928;
    do
    {
      KeInitializeEvent((PRKEVENT)v1 - 1, SynchronizationEvent, 0);
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 512;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( PsCreateSystemThread(
             &ThreadHandle,
             0,
             &ObjectAttributes,
             0LL,
             0LL,
             ViPoolDelayFreeTrimThreadRoutine,
             v1 - 40) >= 0 )
      {
        Object = 0LL;
        ObReferenceObjectByHandle(ThreadHandle, 0, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
        v2 = ThreadHandle;
        *(_QWORD *)v1 = Object;
        ZwClose(v2);
        InitializeSListHead((PSLIST_HEADER)(v1 - 40));
        _InterlockedExchange((volatile __int32 *)v1 + 2, 1);
      }
      v1 += 64;
      result = (unsigned __int64)byte_140CEC9A8;
    }
    while ( (__int64)v1 < (__int64)byte_140CEC9A8 );
  }
  return result;
}
