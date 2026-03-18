/*
 * XREFs of PopTransitionToSleep @ 0x14098C540
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     PopDiagTraceEventNoPayload @ 0x14031D664 (PopDiagTraceEventNoPayload.c)
 *     MmFlushAllPagesEx @ 0x14037F5E8 (MmFlushAllPagesEx.c)
 *     MmEmptyAllWorkingSets @ 0x140536CE4 (MmEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x140536E8C (MmTrimFilePagesFromWorkingSets.c)
 *     PopEnlargeHiberFile @ 0x14075F5EC (PopEnlargeHiberFile.c)
 *     MmDuplicateMemory @ 0x14098C6CC (MmDuplicateMemory.c)
 *     PopInvokeSystemStateHandler @ 0x14098ED58 (PopInvokeSystemStateHandler.c)
 */

LONG __fastcall PopTransitionToSleep(struct _KEVENT *a1)
{
  unsigned int Lock; // esi
  int v3; // eax
  bool v4; // cl
  char v5; // r14
  char v6; // r15
  int v7; // eax
  LONG v8; // eax
  LONG v9; // ecx
  __int128 v11; // [rsp+30h] [rbp-30h] BYREF
  __int128 v12; // [rsp+40h] [rbp-20h]
  __int64 v13; // [rsp+50h] [rbp-10h]
  bool v14; // [rsp+90h] [rbp+30h] BYREF

  Lock = a1[3].Header.Lock;
  v13 = 0LL;
  v14 = 0;
  v11 = 0LL;
  v12 = 0LL;
  BugCheckParameter4 = (ULONG_PTR)KeGetCurrentThread();
  if ( Lock == 3 || Lock == 6 )
  {
    if ( (PopSimulateHiberBugcheck & 0x20) != 0 )
    {
      KeSetEvent(a1, 0, 1u);
      KeWaitForSingleObject(&a1[1], Executive, 0, 0, 0LL);
      v9 = 0;
      goto LABEL_15;
    }
    v3 = PopEnlargeHiberFile(&v14);
    v4 = v14;
    LODWORD(v13) = 16;
    *(_QWORD *)&v11 = xHalPciEarlyRestore;
    if ( v3 < 0 )
      v4 = 1;
    *((_QWORD *)&v12 + 1) = 0LL;
    v5 = 0;
    *((_QWORD *)&v11 + 1) = PopEndMirroring;
    v6 = 0;
    *(_QWORD *)&v12 = PopMirrorPhysicalMemory;
    if ( v4 )
    {
      MmEmptyAllWorkingSets();
      v6 = 1;
      v7 = v13 | 1;
    }
    else if ( (dword_140C2340C & 0x20) != 0 && PopEnableMinimalHiberFile || PopForceMinimalHiberFile )
    {
      MmEmptyAllWorkingSets();
      v6 = 1;
      v7 = v13 | 4;
    }
    else
    {
      if ( Lock == 6 )
      {
        MmTrimFilePagesFromWorkingSets();
        v7 = v13 | 1;
        goto LABEL_11;
      }
      v7 = 20;
    }
    v5 = 1;
LABEL_11:
    LODWORD(v13) = v7;
    byte_140C242FC = v5;
    byte_140C242FD = v6;
    dword_140C242F8 = v7;
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHALLPAGES);
    if ( v5 )
      MmFlushAllPagesEx(v6);
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHALLPAGES_END);
    PopHibernatePowerStateHandlerType = Lock;
    PopSleeperHandoff = a1;
    v8 = MmDuplicateMemory(&v11);
    PopSleeperHandoff = 0LL;
    PopHibernatePowerStateHandlerType = 7;
    goto LABEL_14;
  }
  KeSetEvent(a1, 0, 1u);
  KeWaitForSingleObject(&a1[1], Executive, 0, 0, 0LL);
  v8 = PopInvokeSystemStateHandler(Lock, qword_140C23440);
LABEL_14:
  v9 = v8;
LABEL_15:
  qword_140C23A60 = __rdtsc();
  a1[3].Header.SignalState = v9;
  return KeSetEvent(a1 + 2, 0, 0);
}
