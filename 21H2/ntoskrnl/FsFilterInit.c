/*
 * XREFs of FsFilterInit @ 0x1403C94B8
 * Callers:
 *     FsRtlInitSystem @ 0x140A6C9E0 (FsRtlInitSystem.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 FsFilterInit()
{
  unsigned int v0; // ebx
  __int64 result; // rax

  v0 = 0;
  AcquireOpsReservePool = ExAllocatePoolWithTag(NonPagedPoolNx, 0x3C8uLL, 0x676D5346u);
  if ( !AcquireOpsReservePool )
    v0 = -1073741670;
  ReleaseOpsReservePool = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0x3C8uLL, 0x676D5346u);
  if ( !ReleaseOpsReservePool )
  {
    ExFreePoolWithTag(AcquireOpsReservePool, 0x676D5346u);
    v0 = -1073741670;
  }
  byte_140C477C2 = 6;
  AcquireOpsEvent = 1;
  qword_140C477D0 = (__int64)&qword_140C477C8;
  qword_140C477C8 = (__int64)&qword_140C477C8;
  qword_140C477F0 = (__int64)&qword_140C477E8;
  qword_140C477E8 = (__int64)&qword_140C477E8;
  result = v0;
  dword_140C477C4 = 1;
  ReleaseOpsEvent = 1;
  byte_140C477E2 = 6;
  dword_140C477E4 = 1;
  return result;
}
