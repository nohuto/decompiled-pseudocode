/*
 * XREFs of FsRtlpAllocateOplock @ 0x1406F6348
 * Callers:
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x140291E40 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpRequestShareableOplock @ 0x140296DF0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403740A0 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpOplockFsctrlInternal @ 0x140689350 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

char *FsRtlpAllocateOplock()
{
  struct _KEVENT *v0; // rax
  char *PoolWithTag; // [rsp+20h] [rbp-18h]

  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)17, 0xA0uLL, 0x6F725346u);
  memset(PoolWithTag, 0, 0xA0uLL);
  v0 = (struct _KEVENT *)ExAllocatePoolWithTag((POOL_TYPE)528, 0x38uLL, 0x6F725346u);
  *((_QWORD *)PoolWithTag + 19) = v0;
  v0->Header.LockNV = 1;
  v0->Header.WaitListHead.Flink = 0LL;
  LODWORD(v0->Header.WaitListHead.Blink) = 0;
  KeInitializeEvent(v0 + 1, SynchronizationEvent, 0);
  *((_QWORD *)PoolWithTag + 6) = PoolWithTag + 40;
  *((_QWORD *)PoolWithTag + 5) = PoolWithTag + 40;
  *((_QWORD *)PoolWithTag + 8) = PoolWithTag + 56;
  *((_QWORD *)PoolWithTag + 7) = PoolWithTag + 56;
  *((_QWORD *)PoolWithTag + 10) = PoolWithTag + 72;
  *((_QWORD *)PoolWithTag + 9) = PoolWithTag + 72;
  *((_QWORD *)PoolWithTag + 12) = PoolWithTag + 88;
  *((_QWORD *)PoolWithTag + 11) = PoolWithTag + 88;
  *((_QWORD *)PoolWithTag + 14) = PoolWithTag + 104;
  *((_QWORD *)PoolWithTag + 13) = PoolWithTag + 104;
  *((_QWORD *)PoolWithTag + 16) = PoolWithTag + 120;
  *((_QWORD *)PoolWithTag + 15) = PoolWithTag + 120;
  *((_DWORD *)PoolWithTag + 36) = 1;
  return PoolWithTag;
}
