/*
 * XREFs of PopDirectedDripsInitializePhase3 @ 0x140A70CC8
 * Callers:
 *     PopInitializeDirectedDrips @ 0x140A42AE8 (PopInitializeDirectedDrips.c)
 * Callees:
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140611880 (ObReferenceObjectByHandleWithTag.c)
 *     PsCreateSystemThread @ 0x1406EE030 (PsCreateSystemThread.c)
 *     PopDiagTraceDirectedDripsInitialization @ 0x1407C7C14 (PopDiagTraceDirectedDripsInitialization.c)
 *     PopDirectedDripsQueryEnabledMitigations @ 0x1407C7CF4 (PopDirectedDripsQueryEnabledMitigations.c)
 *     PopDirectedDripsDiagInitialize @ 0x140A430FC (PopDirectedDripsDiagInitialize.c)
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
  if ( (dword_140C24B10 & 3) != 0 )
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
             &qword_140C24AF0,
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
