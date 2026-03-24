/*
 * XREFs of FsFilterInit @ 0x1403C9318
 * Callers:
 *     FsRtlInitSystem @ 0x140A6B9E0 (FsRtlInitSystem.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
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
  byte_140C47762 = 6;
  AcquireOpsEvent = 1;
  qword_140C47770 = (__int64)&qword_140C47768;
  qword_140C47768 = (__int64)&qword_140C47768;
  qword_140C47730 = (__int64)&qword_140C47728;
  qword_140C47728 = (__int64)&qword_140C47728;
  result = v0;
  dword_140C47764 = 1;
  ReleaseOpsEvent = 1;
  byte_140C47722 = 6;
  dword_140C47724 = 1;
  return result;
}
