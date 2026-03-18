/*
 * XREFs of AlpcpInitSystem @ 0x14085C5A8
 * Callers:
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializeNPagedLookasideList @ 0x140250C10 (ExInitializeNPagedLookasideList.c)
 *     ExInitializePagedLookasideListInternal @ 0x140251C60 (ExInitializePagedLookasideListInternal.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExCreateHandleTable @ 0x1406A6378 (ExCreateHandleTable.c)
 *     NtQuerySystemInformation @ 0x14073D860 (NtQuerySystemInformation.c)
 *     ObCreateObjectTypeEx @ 0x140824B30 (ObCreateObjectTypeEx.c)
 *     AlpcpInitializeMessageLog @ 0x14085C8A0 (AlpcpInitializeMessageLog.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 AlpcpInitSystem()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT *Pool2; // rax
  int SystemInformation; // ebx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v5[8]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v6[16]; // [rsp+D0h] [rbp-30h] BYREF

  DestinationString = 0LL;
  memset(v6, 0, sizeof(v6));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  Pool2 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1850305601LL);
  AlpcpDummyEvent = (__int64)Pool2;
  if ( Pool2 )
  {
    KeInitializeEvent(Pool2, NotificationEvent, 1u);
    AlpcpPortListLock = 0LL;
    qword_140C2A098 = (__int64)&AlpcpPortList;
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
    SystemInformation = ObCreateObjectTypeEx(&DestinationString, v5, 0LL, (__int16 *)0xF9, &AlpcPortObjectType);
    if ( SystemInformation >= 0 )
    {
      AlpcMessageTable = ExCreateHandleTable(0LL, 0LL);
      ExInitializePagedLookasideListInternal(
        (__int64)&AlpcpLookasides,
        (PVOID (__stdcall *)(POOL_TYPE, SIZE_T, ULONG))AlpcpAllocateMessageFunction,
        (void (__stdcall *)(PVOID, ULONG))AlpcpFreeMessageFunction,
        0,
        840,
        1934453825,
        32,
        0);
      ExInitializePagedLookasideListInternal(
        (__int64)&unk_140CF5B00,
        (PVOID (__stdcall *)(POOL_TYPE, SIZE_T, ULONG))AlpcpAllocateBuffer,
        (void (__stdcall *)(PVOID, ULONG))SC_ENV::Free,
        0,
        128,
        1229155393,
        32,
        0);
      ExInitializePagedLookasideListInternal((__int64)&stru_140CF5B80, 0LL, 0LL, 0, 128, 1632136257, 32, 0);
      ExInitializeNPagedLookasideList(&AlpcpNPLookasides, 0LL, 0LL, 0x200u, 0x20uLL, 0x65536C41u, 0x20u);
      SystemInformation = NtQuerySystemInformation(0, (unsigned __int64)v6, 0x40u, 0LL);
      if ( SystemInformation >= 0 )
      {
        AlpcpRegionGranularity = v6[6];
        AlpcpViewGranularity = v6[2];
      }
      if ( AlpcpMessageLogEnabled )
      {
        AlpcpInitializeMessageLog(4096LL, 0x8000LL);
      }
      else
      {
        AlpcpMessageLogLock = 0LL;
        qword_140C2A128 = (__int64)&AlpcpMessageLogListHead;
        AlpcpMessageLogListHead = (__int64)&AlpcpMessageLogListHead;
        qword_140C2A138 = (__int64)&AlpcpFreeMessageLogListHead;
        AlpcpFreeMessageLogListHead = (__int64)&AlpcpFreeMessageLogListHead;
        qword_140C2A148 = (__int64)&AlpcpFreeMessageSnapshotListHead;
        AlpcpFreeMessageSnapshotListHead = (__int64)&AlpcpFreeMessageSnapshotListHead;
      }
      AlpcpCompletionListDatabase = 0LL;
      qword_140C2A0D8 = (__int64)&qword_140C2A0D0;
      qword_140C2A0D0 = (__int64)&qword_140C2A0D0;
    }
  }
  else
  {
    SystemInformation = -1073741670;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)SystemInformation;
}
