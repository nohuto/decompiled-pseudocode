/*
 * XREFs of ExpInitSystemPhase1 @ 0x140A3DEBC
 * Callers:
 *     ExInitSystem @ 0x140A69944 (ExInitSystem.c)
 * Callees:
 *     RtlGetProductInfo @ 0x14024F0E0 (RtlGetProductInfo.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1402696D0 (KeQueryMaximumProcessorCountEx.c)
 *     ExAllocateTimer @ 0x14026E650 (ExAllocateTimer.c)
 *     ExInitializeProcessor @ 0x1403ADC8C (ExInitializeProcessor.c)
 *     ExpSaInitialize @ 0x1403CA4CC (ExpSaInitialize.c)
 *     ExRegisterHost @ 0x14079DC20 (ExRegisterHost.c)
 *     ExpGetProductInfoSuiteTypeMap @ 0x1407BE2F4 (ExpGetProductInfoSuiteTypeMap.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     ExpTimerInitialization @ 0x140A3DD34 (ExpTimerInitialization.c)
 *     ExpWin32Initialization @ 0x140A3EA18 (ExpWin32Initialization.c)
 *     ExpAeThresholdInitialization @ 0x140A67D28 (ExpAeThresholdInitialization.c)
 *     ExpWorkerInitialization @ 0x140A6BE74 (ExpWorkerInitialization.c)
 *     ExpInitializeCallbacks @ 0x140A6F368 (ExpInitializeCallbacks.c)
 *     ExpKeyedEventInitialization @ 0x140A702EC (ExpKeyedEventInitialization.c)
 *     ExpWorkerFactoryInitialization @ 0x140A72A20 (ExpWorkerFactoryInitialization.c)
 *     ExpInitializeSvm @ 0x140A72BE4 (ExpInitializeSvm.c)
 *     ExpMutantInitialization @ 0x140A73734 (ExpMutantInitialization.c)
 *     ExpProfileInitialization @ 0x140A73CB4 (ExpProfileInitialization.c)
 *     ExpSemaphoreInitialization @ 0x140A744FC (ExpSemaphoreInitialization.c)
 *     ExpEventInitialization @ 0x140A745A0 (ExpEventInitialization.c)
 */

char ExpInitSystemPhase1()
{
  unsigned int v0; // ebx
  bool i; // di
  bool v2; // bl
  bool v3; // di
  bool v4; // bl
  char v5; // di
  char v6; // bl
  char v7; // di
  char v8; // al
  char v9; // bl
  char v10; // al
  char v11; // bl
  _OWORD *PoolWithTag; // rax
  char v13; // al
  char v14; // bl
  char v15; // di
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rdx
  char v20[8]; // [rsp+30h] [rbp-19h] BYREF
  int v21; // [rsp+38h] [rbp-11h]
  _DWORD v22[2]; // [rsp+40h] [rbp-9h] BYREF
  __int64 v23; // [rsp+48h] [rbp-1h]
  __int64 v24; // [rsp+50h] [rbp+7h]
  void (__fastcall *v25)(int, struct _EX_RUNDOWN_REF **); // [rsp+58h] [rbp+Fh]
  __int64 *v26; // [rsp+60h] [rbp+17h]
  _DWORD v27[2]; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 v28; // [rsp+70h] [rbp+27h]
  __int64 v29; // [rsp+78h] [rbp+2Fh]
  void (__fastcall *v30)(int); // [rsp+80h] [rbp+37h]
  __int64 v31; // [rsp+88h] [rbp+3Fh]
  ULONG ReturnedProductType; // [rsp+B0h] [rbp+67h] BYREF

  ExpSpinCycleCount = 0;
  if ( KeQueryMaximumProcessorCountEx(0xFFFFu) > 1 )
    ExpSpinCycleCount = 10240;
  ExpHostListLock = 0LL;
  qword_140D2EBD8 = (__int64)&ExpHostList;
  ExpHostList = (__int64)&ExpHostList;
  ExpKeyManipLock = 0LL;
  ExpSysDbgLock = 0LL;
  ExpPlatformBinaryLock = 0LL;
  v0 = 0;
  for ( i = (int)ExpWorkerInitialization() >= 0; v0 < (unsigned int)KeNumberProcessors_0; ++v0 )
    ExInitializeProcessor(KiProcessorBlock[v0], 0);
  v2 = (unsigned __int8)ExpEventInitialization() != 0 && i;
  v3 = (unsigned __int8)ExpMutantInitialization() != 0 && v2;
  v4 = (unsigned __int8)ExpAeThresholdInitialization() != 0 && v3;
  v5 = (unsigned __int8)ExpInitializeCallbacks() != 0 && v4;
  v6 = (unsigned __int8)ExpSemaphoreInitialization() != 0 ? v5 : 0;
  v7 = ExpTimerInitialization() ? v6 : 0;
  ExpHpGCTimerPaged = ExAllocateTimer((__int64)ExpHpGCTimerCallback, 0LL, 8u);
  if ( ExpHpGCTimerPaged && (ExpHpGCTimerNonPaged = ExAllocateTimer((__int64)ExpHpGCTimerCallback, 1LL, 8u)) != 0 )
  {
    ExpHpGCScheduledNonPaged = 0;
    v8 = 1;
    ExpHpGCScheduledPaged = 0;
    ExpHpGCInitialized = 1;
  }
  else
  {
    v8 = 0;
  }
  v9 = v8 != 0 ? v7 : 0;
  v10 = ExpProfileInitialization();
  ExpUuidLock = 0LL;
  ExpUuidLastTimeAllocated = MEMORY[0xFFFFF78000000014];
  v11 = v10 != 0 ? v9 : 0;
  if ( (int)ExpKeyedEventInitialization() < 0 )
    v11 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x20666E57u);
  ExpWnfDispatcher = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    *(_DWORD *)PoolWithTag = 3148040;
    *((_QWORD *)PoolWithTag + 3) = ExpWnfWorkItemRoutine;
    *((_QWORD *)PoolWithTag + 4) = 0LL;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
    v13 = 1;
  }
  else
  {
    v13 = 0;
  }
  v14 = (unsigned __int8)ExpWin32Initialization() != 0 ? (v13 != 0 ? v11 : 0) : 0;
  if ( (int)ExpWorkerFactoryInitialization() < 0 )
    v14 = 0;
  v15 = ExpSaInitialize() != 0 ? v14 : 0;
  v16 = ExpMicrocodeInitialization(1LL);
  if ( (int)(v16 + 0x80000000) >= 0 && v16 != -1073741637 )
    v15 = 0;
  ReturnedProductType = 0;
  v21 = 0;
  if ( RtlGetProductInfo(6u, 0, 0, 0, &ReturnedProductType)
    && ReturnedProductType != -1412584499
    && ExpGetProductInfoSuiteTypeMap(ReturnedProductType, (__int64)v20)
    && MEMORY[0xFFFFF78000000264] != v21
    && (MEMORY[0xFFFFF78000000264] != 2 || v21 != 3) )
  {
    MEMORY[0xFFFFF78000000264] = v21;
  }
  v27[1] = 5;
  v30 = ExpPcwHostCallback;
  v28 = 1LL;
  v27[0] = 65537;
  v29 = 0LL;
  v31 = 0LL;
  if ( (int)ExRegisterHost(&ExpPcwExtensionHost, v17, (unsigned __int16 *)v27) < 0 )
    ExpPcwExtensionHost = 0LL;
  if ( HvlHypervisorConnected )
  {
    v22[1] = 1;
    v23 = 512LL;
    v25 = ExpCrossVmIntHostCallback;
    v24 = 0LL;
    if ( (HvlpFlags & 2) != 0 )
    {
      v22[0] = 196623;
      v26 = &ExpCrossVmIntExtensionHostRoot;
      if ( (int)ExRegisterHost(&ExpCrossVmIntExtensionHostRoot, v18, (unsigned __int16 *)v22) < 0 )
        ExpCrossVmIntExtensionHostRoot = 0LL;
    }
    else
    {
      v22[0] = 196624;
      v26 = &ExpCrossVmIntExtensionHostGuest;
      if ( (int)ExRegisterHost(&ExpCrossVmIntExtensionHostGuest, v18, (unsigned __int16 *)v22) < 0 )
        ExpCrossVmIntExtensionHostGuest = 0LL;
    }
  }
  ExpInitializeSvm();
  return v15;
}
