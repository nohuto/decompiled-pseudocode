/*
 * XREFs of ExUuidCreate @ 0x14065B780
 * Callers:
 *     CmpUuidCreate @ 0x14065AC58 (CmpUuidCreate.c)
 *     NtCreateJobObject @ 0x14065B8E0 (NtCreateJobObject.c)
 *     EtwpStartLogger @ 0x1406798DC (EtwpStartLogger.c)
 *     PipGenerateContainerID @ 0x140759D50 (PipGenerateContainerID.c)
 *     CmpCloneHwProfile @ 0x1408729C4 (CmpCloneHwProfile.c)
 *     ?CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z @ 0x1408894E0 (-CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z.c)
 *     IoGetDeviceDirectory @ 0x14089A3F0 (IoGetDeviceDirectory.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x1408A5490 (PiDevCfgResolveVariableGenerateGuid.c)
 *     BiCreateObject @ 0x14096A740 (BiCreateObject.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     ExpUuidSaveSequenceNumberIf @ 0x1406E46E4 (ExpUuidSaveSequenceNumberIf.c)
 *     ExpUuidGetValues @ 0x1407BD864 (ExpUuidGetValues.c)
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
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  bool v16; // zf
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9

  CurrentThread = KeGetCurrentThread();
  Values = 0;
  while ( 1 )
  {
    do
    {
      v4 = ExpUuidCachedValues;
      v5 = BYTE5(NlsMbCodePageTag);
      *(_DWORD *)Uuid->Data4 = dword_140D2C2EC;
      *(_DWORD *)&Uuid->Data4[4] = dword_140D2C2F0;
      v6 = _InterlockedDecrement(&dword_140D2C2E8);
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
      v16 = (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2;
      goto LABEL_17;
    }
    Values = ExpUuidGetValues(&ExpUuidCachedValues);
    if ( Values )
      break;
    ExpUuidSaveSequenceNumberIf();
    v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v12 & 2) == 0 )
      goto LABEL_14;
    v16 = (v12 & 4) == 0;
LABEL_17:
    if ( v16 )
      ExfTryToWakePushLock(&ExpUuidLock);
LABEL_14:
    KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v13, v14, v15);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ExpUuidLock);
  KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v17, v18, v19);
  return Values;
}
