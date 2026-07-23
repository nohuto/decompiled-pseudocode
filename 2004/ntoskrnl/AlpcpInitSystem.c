/*
 * XREFs of AlpcpInitSystem @ 0x1407BB4FC
 * Callers:
 *     LpcInitSystem @ 0x140A6C57C (LpcInitSystem.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     ExInitializeNPagedLookasideList @ 0x140378790 (ExInitializeNPagedLookasideList.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ExCreateHandleTable @ 0x1405D03E8 (ExCreateHandleTable.c)
 *     NtQuerySystemInformation @ 0x14068F110 (NtQuerySystemInformation.c)
 *     ExInitializePagedLookasideList @ 0x140701340 (ExInitializePagedLookasideList.c)
 *     ObCreateObjectTypeEx @ 0x14077DE30 (ObCreateObjectTypeEx.c)
 *     AlpcpInitializeMessageLog @ 0x1407BB7E4 (AlpcpInitializeMessageLog.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 AlpcpInitSystem()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT *PoolWithTag; // rax
  int v2; // ebx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v5[8]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD SystemInformation[16]; // [rsp+D0h] [rbp-30h] BYREF

  DestinationString = 0LL;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PoolWithTag = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x6E496C41u);
  AlpcpDummyEvent = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    KeInitializeEvent(PoolWithTag, NotificationEvent, 1u);
    AlpcpPortListLock = 0LL;
    qword_140C2A6B8 = (__int64)&AlpcpPortList;
    AlpcpPortList = (__int64)&AlpcpPortList;
    RtlInitUnicodeString(&DestinationString, L"ALPC Port");
    memset(v5, 0, 0x78uLL);
    *((_QWORD *)&v5[3] + 1) = AlpcpOpenPort;
    LOWORD(v5[0]) = 120;
    *(_QWORD *)&v5[4] = AlpcpClosePort;
    *(_QWORD *)((char *)&v5[2] + 4) = 512LL;
    *((_QWORD *)&v5[4] + 1) = AlpcpDeletePort;
    HIDWORD(v5[2]) = 504;
    DWORD2(v5[0]) = 128;
    BYTE2(v5[0]) = BYTE2(v5[0]) & 0xCB | 0x10;
    *(__int128 *)((char *)v5 + 12) = AlpcpPortMapping;
    HIDWORD(v5[1]) = 2031617;
    v2 = ObCreateObjectTypeEx(&DestinationString, v5, 0LL, (__int16 *)0xF9, (__int64 *)&AlpcPortObjectType);
    if ( v2 >= 0 )
    {
      AlpcMessageTable = ExCreateHandleTable(0LL, 0LL);
      ExInitializePagedLookasideList(
        (PPAGED_LOOKASIDE_LIST)&AlpcpLookasides,
        (PALLOCATE_FUNCTION)AlpcpAllocateMessageFunction,
        (PFREE_FUNCTION)AlpcpFreeMessageFunction,
        0,
        0x348uLL,
        0x734D6C41u,
        0x20u);
      ExInitializePagedLookasideList(
        &stru_140CEBC40,
        (PALLOCATE_FUNCTION)AlpcpAllocateBuffer,
        (PFREE_FUNCTION)SC_ENV::Free,
        0,
        0x78uLL,
        0x49436C41u,
        0x20u);
      ExInitializePagedLookasideList((PPAGED_LOOKASIDE_LIST)&stru_140CEBCC0, 0LL, 0LL, 0, 0x80uLL, 0x61486C41u, 0x20u);
      ExInitializeNPagedLookasideList(&AlpcpNPLookasides, 0LL, 0LL, 0x200u, 0x20uLL, 0x65536C41u, 0x20u);
      v2 = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
      if ( v2 >= 0 )
      {
        AlpcpRegionGranularity = SystemInformation[6];
        AlpcpViewGranularity = SystemInformation[2];
      }
      if ( AlpcpMessageLogEnabled )
      {
        AlpcpInitializeMessageLog(4096LL, 0x8000LL);
      }
      else
      {
        AlpcpMessageLogLock = 0LL;
        qword_140C2A748 = (__int64)&AlpcpMessageLogListHead;
        AlpcpMessageLogListHead = (__int64)&AlpcpMessageLogListHead;
        qword_140C2A758 = (__int64)&AlpcpFreeMessageLogListHead;
        AlpcpFreeMessageLogListHead = (__int64)&AlpcpFreeMessageLogListHead;
        qword_140C2A768 = (__int64)&AlpcpFreeMessageSnapshotListHead;
        AlpcpFreeMessageSnapshotListHead = (__int64)&AlpcpFreeMessageSnapshotListHead;
      }
      AlpcpCompletionListDatabase = 0LL;
      qword_140C2A6F8 = (__int64)&qword_140C2A6F0;
      qword_140C2A6F0 = (__int64)&qword_140C2A6F0;
    }
  }
  else
  {
    v2 = -1073741670;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
