/*
 * XREFs of FsFilterInit @ 0x1403C8778
 * Callers:
 *     FsRtlInitSystem @ 0x140A6EA60 (FsRtlInitSystem.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  byte_140C475E2 = 6;
  AcquireOpsEvent = 1;
  qword_140C475F0 = (__int64)&qword_140C475E8;
  qword_140C475E8 = (__int64)&qword_140C475E8;
  qword_140C47610 = (__int64)&qword_140C47608;
  qword_140C47608 = (__int64)&qword_140C47608;
  result = v0;
  dword_140C475E4 = 1;
  ReleaseOpsEvent = 1;
  byte_140C47602 = 6;
  dword_140C47604 = 1;
  return result;
}
