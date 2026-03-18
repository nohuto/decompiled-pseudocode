/*
 * XREFs of SyncEvalObject @ 0x1C000B990
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x1C000B894 (AMLIEvalNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x1C0024258 (AMLIEvalPackageElement.c)
 * Callees:
 *     RestartContext @ 0x1C000DCC0 (RestartContext.c)
 *     AsyncEvalObject @ 0x1C00114E0 (AsyncEvalObject.c)
 *     GetObjectPath @ 0x1C00282F8 (GetObjectPath.c)
 *     LogSchedEvent @ 0x1C00297A4 (LogSchedEvent.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 *     NestAsyncEvalObject @ 0x1C006982C (NestAsyncEvalObject.c)
 */

__int64 __fastcall SyncEvalObject(__int64 a1, int a2, int a3, int a4)
{
  char v8; // si
  int v9; // eax
  struct _KTHREAD *CurrentThread; // r9
  __int64 v11; // rbp
  __int64 v12; // rdx
  KIRQL CurrentIrql; // al
  struct _KTHREAD *v14; // r9
  __int64 v15; // r10
  unsigned __int32 v16; // ebx
  unsigned int v17; // ebx
  __int64 v18; // rdx
  unsigned int restarted; // eax
  unsigned int v20; // ebx
  KIRQL v21; // al
  __int64 result; // rax
  NTSTATUS v23; // ebx
  __int64 *v24; // rax
  KIRQL v25; // al
  void *v26; // rdx
  int v27; // ecx
  __int64 ObjectPath; // rax
  void *v29; // rbx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-88h]
  _QWORD *v31; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v32[2]; // [rsp+48h] [rbp-60h] BYREF
  __int128 v33; // [rsp+58h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-40h] BYREF
  int v35; // [rsp+B0h] [rbp+8h] BYREF

  v32[1] = 8LL;
  v32[0] = a1 + 120;
  v31 = v32;
  v35 = 0;
  v8 = 0;
  v33 = 0LL;
  memset(&Event, 0, 20);
  v9 = EmClientRuleEvaluate(&GUID_EM_RULE_AMLI_ALLOW_INVALID_RECLAIM_MEMORY_MAP_ON_EVAL, &v31, 1LL, &v35);
  if ( v9 >= 0 && v35 == 2 || v9 == -1073741818 && v35 )
  {
    v8 = 1;
    _InterlockedIncrement(&gAllowInvalidReclaimMemoryMap);
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  v12 = RunningContextListHead - 392;
  if ( &RunningContextListHead != (__int64 *)RunningContextListHead )
  {
    while ( *(struct _KTHREAD **)(v12 + 408) != CurrentThread )
    {
      v24 = *(__int64 **)(v12 + 392);
      v12 = (__int64)(v24 - 49);
      if ( &RunningContextListHead == v24 )
      {
        KeReleaseSpinLock(&SpinLock, NewIrql);
        goto LABEL_6;
      }
    }
    v11 = v12;
  }
  KeReleaseSpinLock(&SpinLock, NewIrql);
  if ( !v11 )
  {
LABEL_6:
    CurrentIrql = KeGetCurrentIrql();
    v14 = KeGetCurrentThread();
    v15 = (unsigned int)gReadyQueue;
    if ( (gDebugger & 0x8000) != 0 && qword_1C0081AA0 )
    {
      v16 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0081A98 + 1, 1u);
      if ( (_DWORD)qword_1C0081A98 == 204 )
        v17 = v16 % 0xCC;
      else
        v17 = v16 % (unsigned int)qword_1C0081A98;
      v18 = 72LL * v17;
      *(_QWORD *)((char *)qword_1C0081AA0 + v18 + 8) = MEMORY[0xFFFFF78000000008];
      *(_DWORD *)((char *)qword_1C0081AA0 + v18) = 1398361667;
      *(_QWORD *)((char *)qword_1C0081AA0 + v18 + 16) = v14;
      *(_QWORD *)((char *)qword_1C0081AA0 + v18 + 24) = 0LL;
      *(_QWORD *)((char *)qword_1C0081AA0 + v18 + 32) = 0LL;
      *(_QWORD *)((char *)qword_1C0081AA0 + v18 + 40) = v15;
      *(_QWORD *)((char *)qword_1C0081AA0 + v18 + 48) = CurrentIrql;
      *(_QWORD *)((char *)qword_1C0081AA0 + v18 + 56) = a1;
      *(_QWORD *)((char *)qword_1C0081AA0 + v18 + 64) = 0LL;
    }
    restarted = AsyncEvalObject(a1, a2, a3, a4, (__int64)EvalMethodComplete, (__int64)&v33, 0);
    goto LABEL_12;
  }
  if ( (*(_DWORD *)(v11 + 64) & 0x100) != 0 )
  {
    LogError(3222536198LL);
    AcpiDiagTraceAmlError(v11, 3222536198LL);
    PrintDebugMessage(179, 0, 0, 0, 0LL);
    v20 = -1072431098;
  }
  else
  {
    v25 = KeGetCurrentIrql();
    LogSchedEvent(1314085198, v11, v25, a1, 0LL);
    v20 = NestAsyncEvalObject(a1, a2, a3, a4, (__int64)Timeout, (__int64)&v33);
    if ( v20 == 32772 )
    {
      restarted = RestartContext(v11, 0LL);
LABEL_12:
      v20 = restarted;
    }
  }
  v21 = KeGetCurrentIrql();
  if ( v20 != 32772 )
    goto LABEL_14;
  if ( v21 < 2u )
  {
    while ( 1 )
    {
      v23 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      if ( v23 )
        break;
      v20 = v33;
      if ( (_DWORD)v33 == 32771 )
        v20 = RestartContext(*((_QWORD *)&v33 + 1), 0LL);
      if ( v20 != 32772 )
        goto LABEL_14;
    }
    LogError(3222536198LL);
    AcpiDiagTraceAmlError(v11, 3222536198LL);
    LODWORD(v26) = v23;
    v27 = 180;
    goto LABEL_38;
  }
  LogError(3222536198LL);
  AcpiDiagTraceAmlError(v11, 3222536198LL);
  ObjectPath = GetObjectPath(a1);
  v29 = (void *)ObjectPath;
  v27 = 181;
  if ( !ObjectPath )
  {
    v26 = &unk_1C006FB8B;
LABEL_38:
    PrintDebugMessage(v27, (_DWORD)v26, 0, 0, 0LL);
    goto LABEL_39;
  }
  PrintDebugMessage(181, ObjectPath, 0, 0, 0LL);
  ExFreePoolWithTag(v29, 0);
LABEL_39:
  v20 = -1072431098;
LABEL_14:
  result = v20;
  if ( v8 )
    _InterlockedDecrement(&gAllowInvalidReclaimMemoryMap);
  return result;
}
