/*
 * XREFs of ExShutdownSystem @ 0x1409B3A88
 * Callers:
 *     PopGracefulShutdown @ 0x1409B1E90 (PopGracefulShutdown.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PsGetServerSiloGlobals @ 0x140285C94 (PsGetServerSiloGlobals.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ExpRecordShutdownTime @ 0x1405B276C (ExpRecordShutdownTime.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     ExSwapinWorkerThreads @ 0x140777514 (ExSwapinWorkerThreads.c)
 */

void ExShutdownSystem()
{
  int v0; // edx
  BOOLEAN v1; // cl
  void *ServerSiloGlobals; // rbx
  struct _DMA_ADAPTER *v3; // rcx
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
    v3 = (struct _DMA_ADAPTER *)*((_QWORD *)ServerSiloGlobals + 111);
    ExpTooLateForErrors = 1;
    ExpShuttingDown = 1;
    if ( v3 )
    {
      HalPutDmaAdapter(v3);
      *((_QWORD *)ServerSiloGlobals + 111) = 0LL;
    }
    v4 = (void *)*((_QWORD *)ServerSiloGlobals + 110);
    if ( v4 )
    {
      ObfDereferenceObjectWithTag(v4, 0x65487845u);
      *((_QWORD *)ServerSiloGlobals + 110) = 0LL;
    }
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
    if ( ExpControlKey )
    {
      HalPutDmaAdapter(ExpControlKey);
      ExpControlKey = 0LL;
    }
    if ( DmaAdapter )
    {
      HalPutDmaAdapter(DmaAdapter);
      DmaAdapter = 0LL;
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
