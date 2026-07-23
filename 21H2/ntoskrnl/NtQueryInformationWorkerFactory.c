/*
 * XREFs of NtQueryInformationWorkerFactory @ 0x1405B9A20
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ExSystemExceptionFilter @ 0x1407D5080 (ExSystemExceptionFilter.c)
 */

NTSTATUS __cdecl NtQueryInformationWorkerFactory(
        HANDLE WorkerFactoryHandle,
        WORKERFACTORYINFOCLASS WorkerFactoryInformationClass,
        PVOID WorkerFactoryInformation,
        ULONG WorkerFactoryInformationLength,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  char *v12; // rdi
  __int64 v13; // rdx
  int v14; // ecx
  unsigned __int8 OldIrql; // si
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  PVOID Object; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v22; // [rsp+40h] [rbp-A8h]
  __int128 v23; // [rsp+50h] [rbp-98h]
  __int128 v24; // [rsp+60h] [rbp-88h]
  __int128 v25; // [rsp+70h] [rbp-78h]
  __int128 v26; // [rsp+80h] [rbp-68h]
  __int128 v27; // [rsp+90h] [rbp-58h]
  __int128 v28; // [rsp+A0h] [rbp-48h]
  __int64 v29; // [rsp+B0h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C0h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( WorkerFactoryInformationClass != WorkerFactoryBasicInformation )
    return -1073741821;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)WorkerFactoryInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = 0x7FFFFFFF0000LL;
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)WorkerFactoryInformation < 0x7FFFFFFF0000LL )
      v11 = (__int64)WorkerFactoryInformation;
    *(_BYTE *)v11 = *(_BYTE *)v11;
    *(_BYTE *)(v11 + 119) = *(_BYTE *)(v11 + 119);
    if ( ReturnLength )
    {
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v10 = (__int64)ReturnLength;
      *(_DWORD *)v10 = 120;
    }
  }
  else if ( ReturnLength )
  {
    *ReturnLength = 120;
  }
  if ( WorkerFactoryInformationLength != 120 )
    return -1073741820;
  Object = 0LL;
  result = ObReferenceObjectByHandle(WorkerFactoryHandle, 8u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    HIBYTE(v23) = 0;
    HIDWORD(v25) = 0;
    HIDWORD(v29) = 0;
    v12 = (char *)Object;
    KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)Object + 2), &LockHandle);
    v22 = 0LL;
    *(_QWORD *)&v23 = *((_QWORD *)v12 + 14);
    WORD4(v23) = 0;
    BYTE10(v23) = (v12[312] & 8) != 0;
    v13 = *((_QWORD *)v12 + 2);
    v14 = *(_DWORD *)(v13 + 28);
    BYTE11(v23) = v14 == 0;
    BYTE12(v23) = *((_DWORD *)v12 + 76) != 0;
    *(_WORD *)((char *)&v23 + 13) = *(_WORD *)(v13 + 32);
    LODWORD(v24) = *((_DWORD *)v12 + 77);
    *(_QWORD *)((char *)&v24 + 4) = *((_QWORD *)v12 + 35);
    HIDWORD(v24) = *((_DWORD *)v12 + 74);
    LODWORD(v25) = v14;
    DWORD1(v25) = *((_DWORD *)v12 + 73);
    DWORD2(v25) = *(_DWORD *)(v13 + 24);
    *(_QWORD *)&v26 = 0LL;
    *((_QWORD *)&v26 + 1) = *((_QWORD *)v12 + 3);
    *(_QWORD *)&v27 = *((_QWORD *)v12 + 4);
    *((_QWORD *)&v27 + 1) = *(_QWORD *)(*((_QWORD *)v12 + 6) + 1088LL);
    v28 = *(_OWORD *)(v12 + 56);
    LODWORD(v29) = *((_DWORD *)v12 + 80);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v20 = (v19 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v19;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          v12 = (char *)Object;
        }
      }
    }
    __writecr8(OldIrql);
    ObfDereferenceObjectWithTag(v12, 0x746C6644u);
    *(_OWORD *)WorkerFactoryInformation = v22;
    *((_OWORD *)WorkerFactoryInformation + 1) = v23;
    *((_OWORD *)WorkerFactoryInformation + 2) = v24;
    *((_OWORD *)WorkerFactoryInformation + 3) = v25;
    *((_OWORD *)WorkerFactoryInformation + 4) = v26;
    *((_OWORD *)WorkerFactoryInformation + 5) = v27;
    *((_OWORD *)WorkerFactoryInformation + 6) = v28;
    *((_QWORD *)WorkerFactoryInformation + 14) = v29;
    return 0;
  }
  return result;
}
