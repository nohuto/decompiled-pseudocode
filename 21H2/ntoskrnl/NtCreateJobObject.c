/*
 * XREFs of NtCreateJobObject @ 0x1406F7090
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     PoEnergyEstimationEnabled @ 0x1402AA040 (PoEnergyEstimationEnabled.c)
 *     ExInitializeResourceLite @ 0x1402C1550 (ExInitializeResourceLite.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     memset @ 0x140414300 (memset.c)
 *     ObInsertObject @ 0x1406AB4A0 (ObInsertObject.c)
 *     ObCreateObject @ 0x1406ABDC0 (ObCreateObject.c)
 *     PspIoRateEntryInitialize @ 0x1406F703C (PspIoRateEntryInitialize.c)
 *     ExUuidCreate @ 0x1406F73B0 (ExUuidCreate.c)
 *     PspUnlockJobListExclusive @ 0x1406F7504 (PspUnlockJobListExclusive.c)
 *     PspLockJobListExclusive @ 0x1406F7544 (PspLockJobListExclusive.c)
 *     EtwTraceJob @ 0x140935F18 (EtwTraceJob.c)
 *     ExCreateHandle @ 0x14094C800 (ExCreateHandle.c)
 */

NTSTATUS __cdecl NtCreateJobObject(PHANDLE JobHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  int v3; // r13d
  struct _KTHREAD *CurrentThread; // r15
  char PreviousMode; // si
  __int64 v7; // rcx
  char v8; // r12
  int v9; // ecx
  NTSTATUS Object; // esi
  __int64 v11; // rax
  HANDLE Handle; // [rsp+60h] [rbp-48h] BYREF
  LARGE_INTEGER Interval; // [rsp+68h] [rbp-40h] BYREF
  unsigned int v16; // [rsp+C8h] [rbp+20h]

  v3 = (int)ObjectAttributes;
  Handle = 0LL;
  v16 = 0;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)JobHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)JobHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  *JobHandle = 0LL;
  v8 = PoEnergyEstimationEnabled();
  LOBYTE(v9) = PreviousMode;
  Object = ObCreateObject(v9, (int)PsJobType, v3, PreviousMode);
  if ( Object >= 0 )
  {
    memset(0LL, 0, v8 != 0 ? 2032 : 1600);
    MEMORY[0x438] = 0LL;
    MEMORY[0x30] = 40LL;
    MEMORY[0x28] = 40LL;
    MEMORY[0x428] = 1056LL;
    MEMORY[0x420] = 1056LL;
    MEMORY[0x418] = 1040LL;
    MEMORY[0x410] = 1040LL;
    MEMORY[0x448] = 1088LL;
    MEMORY[0x440] = 1088LL;
    KeInitializeEvent(0LL, NotificationEvent, 0);
    MEMORY[0x408] = 0LL;
    MEMORY[0x108] = 1310721LL;
    memset((void *)0x110, 0, 0xA0uLL);
    MEMORY[0x268] = 1310721LL;
    memset((void *)0x270, 0, 0xA0uLL);
    MEMORY[0x508] = 1280LL;
    MEMORY[0x500] = 1280LL;
    MEMORY[0x510] = 0LL;
    if ( v8 )
      MEMORY[0x530] = 1600LL;
    MEMORY[0x1E0] = -1;
    MEMORY[0x36C] = 16382;
    MEMORY[0x5F0] = 1LL;
    MEMORY[0x354] = 10;
    MEMORY[0x1E4] = 5;
    ExInitializeResourceLite((PERESOURCE)0x38);
    PspLockJobListExclusive(CurrentThread);
    if ( *(__int64 **)qword_140D2D338 != &PspJobList )
      __fastfail(3u);
    MEMORY[0x18] = &PspJobList;
    MEMORY[0x20] = qword_140D2D338;
    *(_QWORD *)qword_140D2D338 = 24LL;
    qword_140D2D338 = 24LL;
    PspUnlockJobListExclusive(CurrentThread);
    MEMORY[0x528] |= 0x200000u;
    v16 = MEMORY[0x528];
    while ( 1 )
    {
      Object = ExUuidCreate((UUID *)0x4D8);
      if ( Object != -1073741267 )
        break;
      Interval.QuadPart = -10000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( Object == 1073872982 )
      Object = 0;
    if ( Object >= 0 )
    {
      v11 = ExCreateHandle(PspUniqueJobIdTable, 0LL);
      if ( v11 )
        MEMORY[0x4D4] = v11;
      else
        Object = -1073741670;
    }
    PspIoRateEntryInitialize(1400LL);
    MEMORY[0x5B8] = 0LL;
    MEMORY[0x5C0] = 0LL;
    MEMORY[0x5E8] = 0LL;
    if ( Object < 0
      || (ObfReferenceObject(0LL), Object = ObInsertObject(0LL, 0LL, DesiredAccess, 0, 0LL, &Handle), Object < 0) )
    {
      HalPutDmaAdapter(0LL);
    }
    else
    {
      *JobHandle = Handle;
    }
  }
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJob(0LL, v16, (unsigned int)Object, 1824LL);
  return Object;
}
