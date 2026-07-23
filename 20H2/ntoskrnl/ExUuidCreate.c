/*
 * XREFs of ExUuidCreate @ 0x140710ED0
 * Callers:
 *     CmpUuidCreate @ 0x140710AB8 (CmpUuidCreate.c)
 *     NtCreateJobObject @ 0x140710B60 (NtCreateJobObject.c)
 *     EtwpStartLogger @ 0x140713B28 (EtwpStartLogger.c)
 *     PipGenerateContainerID @ 0x14076A248 (PipGenerateContainerID.c)
 *     CmpCloneHwProfile @ 0x140879804 (CmpCloneHwProfile.c)
 *     ?CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z @ 0x140890350 (-CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z.c)
 *     IoGetDeviceDirectory @ 0x1408A1240 (IoGetDeviceDirectory.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x1408AC2E0 (PiDevCfgResolveVariableGenerateGuid.c)
 *     BiCreateObject @ 0x1409718B0 (BiCreateObject.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140241C10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     ExpUuidSaveSequenceNumberIf @ 0x140711D14 (ExpUuidSaveSequenceNumberIf.c)
 *     ExpUuidGetValues @ 0x1407CF264 (ExpUuidGetValues.c)
 */

NTSTATUS __stdcall ExUuidCreate(UUID *Uuid)
{
  struct _KTHREAD *CurrentThread; // r14
  NTSTATUS Values; // esi
  __int64 v4; // rdi
  char v5; // cl
  int v6; // eax
  __int64 v7; // rdi
  __int64 v9; // rax
  signed __int8 v10; // cf
  __int64 v11; // rbp
  char v12; // al
  bool v13; // zf

  CurrentThread = KeGetCurrentThread();
  Values = 0;
  while ( 1 )
  {
    do
    {
      v4 = ExpUuidCachedValues;
      v5 = BYTE5(NlsMbCodePageTag);
      *(_DWORD *)Uuid->Data4 = dword_140D2D2E4;
      *(_DWORD *)&Uuid->Data4[4] = dword_140D2D2E8;
      v6 = _InterlockedDecrement(&dword_140D2D2E0);
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
    v9 = KeAbPreAcquire((ULONG_PTR)&ExpUuidLock, 0LL, 0);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&ExpUuidLock, 0LL);
    v11 = v9;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(&ExpUuidLock, v9, (ULONG_PTR)&ExpUuidLock);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    if ( v4 != ExpUuidCachedValues )
    {
      v13 = (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2;
      goto LABEL_17;
    }
    Values = ExpUuidGetValues(&ExpUuidCachedValues);
    if ( Values )
      break;
    ExpUuidSaveSequenceNumberIf();
    v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v12 & 2) == 0 )
      goto LABEL_14;
    v13 = (v12 & 4) == 0;
LABEL_17:
    if ( v13 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
LABEL_14:
    KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
  KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return Values;
}
