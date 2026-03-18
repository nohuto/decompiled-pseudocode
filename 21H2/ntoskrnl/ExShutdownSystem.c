/*
 * XREFs of ExShutdownSystem @ 0x140A6C7A8
 * Callers:
 *     PopGracefulShutdown @ 0x140A6AEC0 (PopGracefulShutdown.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140204738 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExpRecordShutdownTime @ 0x1406390F8 (ExpRecordShutdownTime.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     ExSwapinWorkerThreads @ 0x1407FFFE4 (ExSwapinWorkerThreads.c)
 */

void ExShutdownSystem()
{
  int v0; // edx
  BOOLEAN v1; // cl
  _QWORD *ServerSiloGlobals; // rbx
  void *v3; // rcx
  void *v4; // rcx

  ServerSiloGlobals = PsGetServerSiloGlobals(0LL);
  if ( v0 )
  {
    if ( v0 == 1 && (PopShutdownCleanly & 2) != 0 )
      ExSwapinWorkerThreads(v1);
  }
  else
  {
    ExpRecordShutdownTime();
    v3 = (void *)ServerSiloGlobals[111];
    ExpTooLateForErrors = 1;
    ExpShuttingDown = 1;
    if ( v3 )
    {
      ObfDereferenceObject(v3);
      ServerSiloGlobals[111] = 0LL;
    }
    v4 = (void *)ServerSiloGlobals[110];
    if ( v4 )
    {
      ObfDereferenceObjectWithTag(v4, 0x65487845u);
      ServerSiloGlobals[110] = 0LL;
    }
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
    if ( ExpControlKey )
    {
      ObfDereferenceObject(ExpControlKey);
      ExpControlKey = 0LL;
    }
    if ( qword_140C15968 )
    {
      ObfDereferenceObject(qword_140C15968);
      qword_140C15968 = 0LL;
    }
    if ( ExpProductTypeKey )
    {
      ObCloseHandle(ExpProductTypeKey, 0);
      ExpProductTypeKey = 0LL;
    }
    if ( ExpSetupKey )
    {
      ObCloseHandle(ExpSetupKey, 0);
      ExpSetupKey = 0LL;
    }
    ExReleasePushLockEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
  }
}
