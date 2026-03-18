/*
 * XREFs of PopDirectedDripsInitializePhase3 @ 0x140A6A3BC
 * Callers:
 *     PopInitializeDirectedDrips @ 0x140A3C848 (PopInitializeDirectedDrips.c)
 * Callees:
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F5C50 (ObReferenceObjectByHandleWithTag.c)
 *     PsCreateSystemThread @ 0x1406CFB90 (PsCreateSystemThread.c)
 *     PopDiagTraceDirectedDripsInitialization @ 0x1407B9384 (PopDiagTraceDirectedDripsInitialization.c)
 *     PopDirectedDripsQueryEnabledMitigations @ 0x1407B9464 (PopDirectedDripsQueryEnabledMitigations.c)
 *     PopDirectedDripsDiagInitialize @ 0x140A3CE5C (PopDirectedDripsDiagInitialize.c)
 */

__int64 PopDirectedDripsInitializePhase3()
{
  NTSTATUS v0; // ebx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ThreadHandle; // [rsp+80h] [rbp+10h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ThreadHandle = 0LL;
  PopDirectedDripsDiagInitialize(3);
  PopDirectedDripsQueryEnabledMitigations((__int64)&PopDirectedDripsState);
  if ( (dword_140C249F0 & 3) != 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v0 = PsCreateSystemThread(
           &ThreadHandle,
           0,
           &ObjectAttributes,
           0LL,
           0LL,
           (PKSTART_ROUTINE)PopDirectedDripsWorkerRoutine,
           &PopDirectedDripsState);
    if ( v0 >= 0 )
    {
      v0 = ObReferenceObjectByHandleWithTag(
             ThreadHandle,
             0x1FFFFFu,
             (POBJECT_TYPE)PsThreadType,
             0,
             0x67446F50u,
             &qword_140C249D0,
             0LL);
      ZwClose(ThreadHandle);
      if ( v0 >= 0 )
      {
        if ( (unsigned int)PopDirectedDripsDfxEnforcementPolicy >= 3 )
          PopDirectedDripsDfxEnforcementPolicy = 1;
        PopDirectedDripsState.HandleAttributes |= 1u;
        v0 = 0;
      }
    }
  }
  else
  {
    v0 = -1073741637;
  }
  PopDiagTraceDirectedDripsInitialization(v0);
  return (unsigned int)v0;
}
