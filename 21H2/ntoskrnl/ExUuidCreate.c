/*
 * XREFs of ExUuidCreate @ 0x140681B30
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x1405D89F0 (PopPowerButtonWorkCallback.c)
 *     DifExUuidCreateWrapper @ 0x140609B70 (DifExUuidCreateWrapper.c)
 *     NtCreateJobObject @ 0x140681CB0 (NtCreateJobObject.c)
 *     EtwpStartLogger @ 0x1406EE2AC (EtwpStartLogger.c)
 *     CmpUuidCreate @ 0x1407435A8 (CmpUuidCreate.c)
 *     PipGenerateContainerID @ 0x1407452A0 (PipGenerateContainerID.c)
 *     CmpCloneHwProfile @ 0x14091DBC4 (CmpCloneHwProfile.c)
 *     ?CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z @ 0x140930370 (-CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z.c)
 *     IoGetDeviceDirectory @ 0x140943540 (IoGetDeviceDirectory.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x14094E390 (PiDevCfgResolveVariableGenerateGuid.c)
 *     BiCreateObject @ 0x140A1CF34 (BiCreateObject.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExpUuidSaveSequenceNumberIf @ 0x1406DC574 (ExpUuidSaveSequenceNumberIf.c)
 *     ExpUuidGetValues @ 0x14080EE74 (ExpUuidGetValues.c)
 */

NTSTATUS __stdcall ExUuidCreate(UUID *Uuid)
{
  struct _KTHREAD *CurrentThread; // r14
  NTSTATUS Values; // ebp
  __int64 v4; // rdi
  char v5; // cl
  int v6; // eax
  __int64 v7; // rdi
  __int64 v9; // rax
  __int64 v10; // r15

  CurrentThread = KeGetCurrentThread();
  Values = 0;
  while ( 1 )
  {
    do
    {
      v4 = ExpUuidCachedValues;
      v5 = ExpUuidCacheValid;
      *(_DWORD *)Uuid->Data4 = dword_140D3B26C;
      *(_DWORD *)&Uuid->Data4[4] = dword_140D3B270;
      v6 = _InterlockedDecrement(&dword_140D3B268);
    }
    while ( v4 != ExpUuidCachedValues );
    if ( v6 >= 0 )
    {
      v7 = v4 - v6;
      Uuid->Data1 = v7;
      Uuid->Data2 = WORD2(v7);
      Uuid->Data3 = HIWORD(v7) & 0xFFF | 0x1000;
      if ( !v5 )
        return 1073872982;
      return Values;
    }
    --CurrentThread->KernelApcDisable;
    v9 = KeAbPreAcquire((__int64)&ExpUuidLock, 0LL);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpUuidLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpUuidLock, v9, (__int64)&ExpUuidLock);
    if ( v10 )
      *(_BYTE *)(v10 + 18) = 1;
    if ( v4 != ExpUuidCachedValues )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
        goto LABEL_14;
      goto LABEL_16;
    }
    Values = ExpUuidGetValues(&ExpUuidCachedValues);
    if ( Values )
      break;
    ExpUuidSaveSequenceNumberIf();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
      goto LABEL_14;
LABEL_16:
    ExfTryToWakePushLock(&ExpUuidLock);
LABEL_14:
    KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ExpUuidLock);
  KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return Values;
}
