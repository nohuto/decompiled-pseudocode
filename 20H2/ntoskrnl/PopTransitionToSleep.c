/*
 * XREFs of PopTransitionToSleep @ 0x140998990
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     PopDiagTraceEventNoPayload @ 0x14032BC04 (PopDiagTraceEventNoPayload.c)
 *     MmFlushAllPagesEx @ 0x140386538 (MmFlushAllPagesEx.c)
 *     MmEmptyAllWorkingSets @ 0x14053AD04 (MmEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x14053AEAC (MmTrimFilePagesFromWorkingSets.c)
 *     PopEnlargeHiberFile @ 0x140772DBC (PopEnlargeHiberFile.c)
 *     PopInvokeSystemStateHandler @ 0x140995A68 (PopInvokeSystemStateHandler.c)
 *     MmDuplicateMemory @ 0x140998B1C (MmDuplicateMemory.c)
 */

LONG __fastcall PopTransitionToSleep(struct _KEVENT *a1)
{
  int Lock; // esi
  int v3; // eax
  bool v4; // cl
  char v5; // r14
  char v6; // r15
  unsigned int v7; // r12d
  int v8; // eax
  LONG v9; // eax
  LONG v10; // ecx
  __int128 v12; // [rsp+30h] [rbp-30h] BYREF
  __int128 v13; // [rsp+40h] [rbp-20h]
  __int64 v14; // [rsp+50h] [rbp-10h]
  bool v15; // [rsp+90h] [rbp+30h] BYREF

  Lock = a1[3].Header.Lock;
  v14 = 0LL;
  v15 = 0;
  v12 = 0LL;
  v13 = 0LL;
  BugCheckParameter4 = (ULONG_PTR)KeGetCurrentThread();
  if ( Lock == 3 || Lock == 6 )
  {
    if ( (PopSimulateHiberBugcheck & 0x20) != 0 )
    {
      KeSetEvent(a1, 0, 1u);
      KeWaitForSingleObject(&a1[1], Executive, 0, 0, 0LL);
      v10 = 0;
      goto LABEL_15;
    }
    v3 = PopEnlargeHiberFile(&v15);
    v4 = v15;
    LODWORD(v14) = 16;
    *(_QWORD *)&v12 = xHalPciEarlyRestore;
    if ( v3 < 0 )
      v4 = 1;
    *((_QWORD *)&v13 + 1) = 0LL;
    v5 = 0;
    *((_QWORD *)&v12 + 1) = PopEndMirroring;
    v6 = 0;
    *(_QWORD *)&v13 = PopMirrorPhysicalMemory;
    v7 = 60;
    if ( v4 )
    {
      MmEmptyAllWorkingSets();
      v6 = 1;
      v8 = v14 | 1;
    }
    else if ( (dword_140C2330C & 0x20) != 0 && PopEnableMinimalHiberFile || PopForceMinimalHiberFile )
    {
      MmEmptyAllWorkingSets();
      v6 = 1;
      v8 = v14 | 4;
    }
    else
    {
      if ( Lock == 6 )
      {
        MmTrimFilePagesFromWorkingSets();
        v8 = v14 | 1;
        goto LABEL_11;
      }
      v8 = 20;
      v7 = 8;
    }
    v5 = 1;
LABEL_11:
    LODWORD(v14) = v8;
    byte_140C241BC = v5;
    byte_140C241BD = v6;
    dword_140C241B8 = v8;
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHALLPAGES);
    if ( v5 )
      MmFlushAllPagesEx(v6, v7);
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHALLPAGES_END);
    PopHibernatePowerStateHandlerType = Lock;
    PopSleeperHandoff = a1;
    v9 = MmDuplicateMemory(&v12);
    PopSleeperHandoff = 0LL;
    PopHibernatePowerStateHandlerType = 7;
    goto LABEL_14;
  }
  KeSetEvent(a1, 0, 1u);
  KeWaitForSingleObject(&a1[1], Executive, 0, 0, 0LL);
  v9 = PopInvokeSystemStateHandler(Lock, qword_140C23340);
LABEL_14:
  v10 = v9;
LABEL_15:
  qword_140C23960 = __rdtsc();
  a1[3].Header.SignalState = v10;
  return KeSetEvent(a1 + 2, 0, 0);
}
