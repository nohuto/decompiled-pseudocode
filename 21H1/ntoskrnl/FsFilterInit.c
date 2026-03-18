/*
 * XREFs of FsFilterInit @ 0x1403C4D7C
 * Callers:
 *     FsRtlInitSystem @ 0x140A67DB0 (FsRtlInitSystem.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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
  byte_140C47722 = 6;
  AcquireOpsEvent = 1;
  qword_140C47730 = (__int64)&qword_140C47728;
  qword_140C47728 = (__int64)&qword_140C47728;
  qword_140C47750 = (__int64)&qword_140C47748;
  qword_140C47748 = (__int64)&qword_140C47748;
  result = v0;
  dword_140C47724 = 1;
  ReleaseOpsEvent = 1;
  byte_140C47742 = 6;
  dword_140C47744 = 1;
  return result;
}
