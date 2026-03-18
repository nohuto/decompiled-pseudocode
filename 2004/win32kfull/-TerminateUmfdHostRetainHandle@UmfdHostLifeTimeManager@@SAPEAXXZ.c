/*
 * XREFs of ?TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ @ 0x1C010EAC0
 * Callers:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C00DFC8C (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     UmfdQueryFontData @ 0x1C00E0040 (UmfdQueryFontData.c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x1C010E548 (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 * Callees:
 *     ??0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00163E4 (--0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0016EB8 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

HANDLE UmfdHostLifeTimeManager::TerminateUmfdHostRetainHandle(void)
{
  NTSTATUS v0; // eax
  HANDLE v1; // rbx
  HANDLE ProcessHandle; // [rsp+50h] [rbp+8h] BYREF
  __int64 v4; // [rsp+58h] [rbp+10h] BYREF

  AutoSharedPushLock::AutoSharedPushLock(
    (AutoSharedPushLock *)&v4,
    (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
  if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock()
    || !UmfdHostLifeTimeManager::s_UmfdHostProcess
    || (ProcessHandle = 0LL,
        ObOpenObjectByPointer(
          UmfdHostLifeTimeManager::s_UmfdHostProcess,
          0x200u,
          0LL,
          1u,
          (POBJECT_TYPE)PsProcessType,
          0,
          &ProcessHandle) < 0) )
  {
    v1 = 0LL;
  }
  else
  {
    v0 = ZwTerminateProcess(ProcessHandle, 258);
    if ( (int)(v0 + 0x80000000) < 0 || v0 == -1073741558 )
    {
      v1 = ProcessHandle;
    }
    else
    {
      ZwClose(ProcessHandle);
      v1 = 0LL;
      ProcessHandle = 0LL;
    }
  }
  if ( v4 )
  {
    GreReleasePushLockShared(v4);
    KeLeaveCriticalRegion();
  }
  return v1;
}
