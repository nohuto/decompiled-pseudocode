/*
 * XREFs of ?TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SGPAXXZ @ 0xD3E72
 * Callers:
 *     ?UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z @ 0x87410 (-UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z.c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SGX_N@Z @ 0xD3DCC (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SGX_N@Z.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SG_NXZ @ 0x8B79C (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SG_NXZ.c)
 */

void *__stdcall UmfdHostLifeTimeManager::TerminateUmfdHostRetainHandle()
{
  void *v0; // esi
  NTSTATUS v2; // eax
  void *Handle; // [esp+8h] [ebp-4h] BYREF

  KeEnterCriticalRegion();
  GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  v0 = 0;
  if ( !UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock() )
  {
    if ( UmfdHostLifeTimeManager::s_UmfdHostProcess )
    {
      Handle = 0;
      if ( ObOpenObjectByPointer(
             UmfdHostLifeTimeManager::s_UmfdHostProcess,
             0x200u,
             0,
             1u,
             (POBJECT_TYPE)PsProcessType,
             0,
             &Handle) >= 0 )
      {
        v2 = ZwTerminateProcess(Handle, 258);
        if ( v2 >= 0 || v2 == -1073741558 )
        {
          v0 = Handle;
        }
        else
        {
          ZwClose(Handle);
          Handle = 0;
        }
      }
    }
  }
  GreReleasePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  KeLeaveCriticalRegion();
  return v0;
}
