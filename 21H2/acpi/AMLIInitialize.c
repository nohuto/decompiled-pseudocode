/*
 * XREFs of AMLIInitialize @ 0x1C00BCDB8
 * Callers:
 *     ACPIInitializeAMLI @ 0x1C00BCD04 (ACPIInitializeAMLI.c)
 * Callees:
 *     CreateNameSpaceObject @ 0x1C0013250 (CreateNameSpaceObject.c)
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     DereferenceObjectEx @ 0x1C00189F4 (DereferenceObjectEx.c)
 *     NewGlobalHeap @ 0x1C0022190 (NewGlobalHeap.c)
 *     InitializeNativeNamespace @ 0x1C0027E90 (InitializeNativeNamespace.c)
 *     InsertOwnerObjList @ 0x1C0028350 (InsertOwnerObjList.c)
 *     NewNameSpaceObject @ 0x1C0028388 (NewNameSpaceObject.c)
 *     NewObjOwner @ 0x1C00285B8 (NewObjOwner.c)
 *     InitMutex @ 0x1C002AFB0 (InitMutex.c)
 *     SetLogSize @ 0x1C002EE70 (SetLogSize.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C0065AA0 (AMLIAddNextNamespaceOverride.c)
 *     FreeObjOwner @ 0x1C00663E4 (FreeObjOwner.c)
 *     FreeOwnedObjects @ 0x1C00665BC (FreeOwnedObjects.c)
 *     AMLIDebugger @ 0x1C0067034 (AMLIDebugger.c)
 *     CatError @ 0x1C0067084 (CatError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 *     OSCloseHandle @ 0x1C00954DC (OSCloseHandle.c)
 *     OSReadRegValue @ 0x1C00968B0 (OSReadRegValue.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1C00B2238 (OSOpenAMLINamespaceOverrideHandle.c)
 *     InitIllegalIOAddressListFromHAL @ 0x1C00BF108 (InitIllegalIOAddressListFromHAL.c)
 *     AMLIGetEmOverride @ 0x1C00BF20C (AMLIGetEmOverride.c)
 */

__int64 __fastcall AMLIInitialize(__int64 a1, int a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // r14
  unsigned int v6; // ebx
  int v8; // edi
  int v9; // eax
  unsigned int NameSpaceObject; // ebx
  unsigned int v11; // edi
  unsigned __int8 **v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rbx
  _SLIST_ENTRY *v15; // rax
  __int64 v16; // rbx
  _SLIST_ENTRY *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  int v22; // ecx
  _SLIST_ENTRY *v23; // rax
  int NamespaceOverride; // ebx
  void *v25; // [rsp+40h] [rbp-10h] BYREF
  int v26; // [rsp+90h] [rbp+40h] BYREF
  int v27; // [rsp+A0h] [rbp+50h]
  unsigned int v28; // [rsp+A8h] [rbp+58h] BYREF

  v28 = a4;
  v5 = E820Info;
  v6 = AMLIMaxCTObjs;
  v8 = gAMLIInitFlags;
  v26 = 0;
  v27 = 0;
  dword_1C0081AC8 = 0;
  byte_1C0081ACC[0] = 0;
  gAmliMethodCounter = 0LL;
  AMLIGetEmOverride();
  if ( gpnsNameSpaceRoot )
  {
    NameSpaceObject = -1072431085;
    LogError(-1072431085);
    AcpiDiagTraceAmlError(0LL, -1072431085);
    v22 = 66;
LABEL_41:
    PrintDebugMessage(v22, 0LL, 0LL, 0LL, 0LL);
  }
  else
  {
    LODWORD(gdwGlobalHeapBlkSize) = a2;
    MemoryInfo = v5;
    LODWORD(gdwCtxtBlkSize) = 2048;
    gdwfAMLIInit = v8;
    if ( (v8 & 8) != 0 )
      gdwfAMLI |= 4u;
    v9 = 1024;
    if ( v6 <= 0x400 )
    {
      v9 = v6;
      if ( v6 <= 0x10 )
        v9 = 16;
    }
    gdwcCTObjsMax = v9;
    _InterlockedOr(&gDebugger, 0x8000u);
    SetLogSize();
    KeInitializeSpinLock(&gdwGHeapSpinLock);
    KeInitializeSpinLock(&gdwGContextSpinLock);
    if ( (gdwfAMLIInit & 8) != 0
      || (gdwfAMLIInit & 0x10) == 0
      && (int)EmClientQueryRuleState(&GUID_EM_RULE_AMLI_MULTITHREADED_EXECUTION, &v26) >= 0
      && v26 == 2 )
    {
      gdwfAMLI |= 4u;
    }
    ExInitializeNPagedLookasideList(
      (PNPAGED_LOOKASIDE_LIST)&AMLIContextLookAsideList,
      0LL,
      0LL,
      0x200u,
      (unsigned int)gdwCtxtBlkSize,
      0x436C6D41u,
      gdwcCTObjsMax);
    NameSpaceObject = NewGlobalHeap(&gpheapGlobal);
    if ( !NameSpaceObject )
    {
      a5 = 0LL;
      *(_QWORD *)(gpheapGlobal + 16) = gpheapGlobal;
      NameSpaceObject = CreateNameSpaceObject(gpheapGlobal, "\\", 0LL, 0LL, 0LL, 0);
      if ( !NameSpaceObject )
      {
        v11 = 0;
        v12 = (unsigned __int8 **)&apszDefinedRootObjs;
        while ( 1 )
        {
          NameSpaceObject = CreateNameSpaceObject(
                              gpheapGlobal,
                              *v12,
                              0LL,
                              0LL,
                              &AmliGlobalPreDefinedRootObjects[v11],
                              0);
          if ( NameSpaceObject )
            break;
          ++v11;
          ++v12;
          if ( v11 >= 5 )
          {
            NameSpaceObject = CreateNameSpaceObject(gpheapGlobal, "_REV", 0LL, 0LL, &a5, 0);
            if ( !NameSpaceObject )
            {
              v13 = a5;
              *(_WORD *)(a5 + 66) = 1;
              *(_QWORD *)(v13 + 80) = (gOverrideFlags & 2) != 0 ? 1LL : (gOverrideFlags & 0x10 | 0x20uLL) >> 4;
              NameSpaceObject = CreateNameSpaceObject(gpheapGlobal, "_OS", 0LL, 0LL, &a5, 0);
              if ( !NameSpaceObject )
              {
                v14 = a5;
                *(_WORD *)(a5 + 66) = 2;
                *(_DWORD *)(v14 + 88) = 21;
                v15 = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, 0x15u);
                *(_QWORD *)(v14 + 96) = v15;
                if ( !v15 )
                {
                  NameSpaceObject = -1073741670;
                  LogError(-1073741670);
                  AcpiDiagTraceAmlError(0LL, -1073741670);
                  v22 = 68;
                  goto LABEL_41;
                }
                memmove(v15, "Microsoft Windows NT", *(unsigned int *)(v14 + 88));
                NameSpaceObject = CreateNameSpaceObject(gpheapGlobal, "_OSI", 0LL, 0LL, &a5, 0);
                if ( NameSpaceObject )
                  break;
                v16 = a5;
                *(_WORD *)(a5 + 66) = 8;
                *(_DWORD *)(v16 + 88) = 202;
                v17 = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, 0xCAu);
                *(_QWORD *)(v16 + 96) = v17;
                if ( !v17 )
                {
                  NameSpaceObject = -1073741670;
                  LogError(-1073741670);
                  AcpiDiagTraceAmlError(0LL, -1073741670);
                  v22 = 69;
                  goto LABEL_41;
                }
                memset(v17, 0, *(unsigned int *)(v16 + 88));
                *(_BYTE *)(*(_QWORD *)(v16 + 96) + 193LL) |= 1u;
                v18 = *(_QWORD *)(v16 + 96);
                *(_WORD *)(v18 + 194) = OSIAML;
                *(_BYTE *)(v18 + 196) = 104;
                NameSpaceObject = CreateNameSpaceObject(gpheapGlobal, "_GL", 0LL, 0LL, &a5, 0);
                if ( !NameSpaceObject )
                {
                  v19 = a5;
                  *(_WORD *)(a5 + 64) = 2;
                  NameSpaceObject = InitMutex(0LL, (struct _SLIST_ENTRY *)gpheapGlobal, v19, 0, 1);
                  if ( !NameSpaceObject )
                  {
                    NameSpaceObject = InitializeNativeNamespace();
                    if ( !NameSpaceObject )
                    {
                      v25 = 0LL;
                      if ( (gOverrideFlags & 0x20) != 0
                        && (int)OSOpenAMLINamespaceOverrideHandle((__int64)&v25) >= 0
                        && !gpnsNameSpaceOverrideRoot
                        && (int)NewObjOwner(
                                  (struct _SLIST_ENTRY *)gpheapGlobal,
                                  (struct _EX_RUNDOWN_REF **)&gpNameSpaceOverrideOwner) >= 0 )
                      {
                        v23 = NewNameSpaceObject((struct _SLIST_ENTRY *)gpheapGlobal);
                        gpnsNameSpaceOverrideRoot = (__int64)v23;
                        if ( v23 )
                        {
                          *((_DWORD *)&v23[2].Next + 2) = 1600085852;
                          InsertOwnerObjList(
                            (struct _EX_RUNDOWN_REF *)gpNameSpaceOverrideOwner,
                            (struct _EX_RUNDOWN_REF *)v23);
                          NamespaceOverride = AMLIAddNextNamespaceOverride(v25, gpnsNameSpaceOverrideRoot);
                          OSCloseHandle(v25);
                          DereferenceObjectEx(gpnsNameSpaceOverrideRoot);
                          if ( NamespaceOverride < 0 )
                          {
                            *(_WORD *)(gpnsNameSpaceOverrideRoot + 64) |= 4u;
                            FreeOwnedObjects((_QWORD *)gpNameSpaceOverrideOwner);
                            FreeObjOwner(0LL, (struct _EX_RUNDOWN_REF *)gpNameSpaceOverrideOwner);
                            gpNameSpaceOverrideOwner = 0LL;
                            gpnsNameSpaceOverrideRoot = 0LL;
                          }
                        }
                        else
                        {
                          LogError(-1073741670);
                          CatError("AMLIAddNamespaceOverride: fail to allocate name space object for override root");
                        }
                      }
                      KeInitializeSpinLock(&SpinLock);
                      NewIrql = 0;
                      qword_1C0081D98 = (__int64)DispatchCtxtQueue;
                      qword_1C0081D88 = 0LL;
                      qword_1C0081DA0 = (__int64)&gReadyQueue;
                      qword_1C0081DB8 = (__int64)&qword_1C0081DB0;
                      qword_1C0081DB0 = (__int64)&qword_1C0081DB0;
                      qword_1C0081D70 = (__int64)&qword_1C0081D68;
                      qword_1C0081D68 = (__int64)&qword_1C0081D68;
                      KeInitializeSpinLock(&gmutCtxtList);
                      byte_1C0082248 = 0;
                      KeInitializeSpinLock(&gmutOwnerList);
                      byte_1C0082260 = 0;
                      KeInitializeSpinLock(&gmutHeap);
                      byte_1C0082868 = 0;
                      KeInitializeSpinLock(&gmutSleep);
                      byte_1C0082878 = 0;
                      v27 = 9;
                      ExAllocateTimerInternal2((PEX_RUNDOWN_REF)SleepQueueDpc);
                      SleepTimer = v20;
                      qword_1C0082858 = (__int64)&SleepQueue;
                      SleepQueue = (__int64)&SleepQueue;
                      qword_1C00809A8 = (__int64)&RunningContextListHead;
                      RunningContextListHead = (__int64)&RunningContextListHead;
                      InitIllegalIOAddressListFromHAL();
                      v28 = 4;
                      AmliWatchdogEnabled = 1;
                      if ( (unsigned int)OSReadRegValue("AmliWatchdogTimeout", 0LL, &AmliWatchdogTimeout, &v28)
                        || v28 != 4 )
                      {
                        AmliWatchdogTimeout = 30;
                      }
                      if ( AmliWatchdogTimeout )
                      {
                        if ( (unsigned int)AmliWatchdogTimeout < 0xF )
                          AmliWatchdogTimeout = 15;
                      }
                      else
                      {
                        AmliWatchdogEnabled = 0;
                      }
                      if ( (unsigned int)OSReadRegValue("AmliWatchdogAction", 0LL, &AmliWatchdogAction, &v28)
                        || v28 != 4 )
                      {
                        AmliWatchdogAction = 0;
                      }
                      _InterlockedExchange(&dword_1C0080AE0, 0);
                      AcpiRecordBlackboxWorkItem.WorkerRoutine = (void (__fastcall *)(void *))AcpiRecordBlackboxInformationWorker;
                      NameSpaceObject = 0;
                      AcpiRecordBlackboxWorkItem.Parameter = 0LL;
                      AcpiRecordBlackboxWorkItem.List.Flink = 0LL;
                      goto LABEL_34;
                    }
                  }
                }
              }
            }
            break;
          }
        }
      }
    }
    if ( NameSpaceObject == 32772 )
      NameSpaceObject = 259;
  }
LABEL_34:
  if ( (gdwfAMLIInit & 1) != 0 )
  {
    PrintDebugMessage(67, 0LL, 0LL, 0LL, 0LL);
    AMLIDebugger();
  }
  return NameSpaceObject;
}
