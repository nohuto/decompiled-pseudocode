/*
 * XREFs of FsFilterInit @ 0x1403D808C
 * Callers:
 *     FsRtlInitSystem @ 0x140B25C04 (FsRtlInitSystem.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 FsFilterInit()
{
  unsigned int v0; // ebx
  __int64 result; // rax

  v0 = 0;
  AcquireOpsReservePool = (PVOID)ExAllocatePool2(64LL, 968LL, 1735217990LL);
  if ( !AcquireOpsReservePool )
    v0 = -1073741670;
  ReleaseOpsReservePool = ExAllocatePool2(64LL, 968LL, 1735217990LL);
  if ( !ReleaseOpsReservePool )
  {
    ExFreePoolWithTag(AcquireOpsReservePool, 0x676D5346u);
    v0 = -1073741670;
  }
  byte_140C48B22 = 6;
  AcquireOpsEvent = 1;
  qword_140C48B30 = (__int64)&qword_140C48B28;
  qword_140C48B28 = (__int64)&qword_140C48B28;
  qword_140C48B10 = (__int64)&qword_140C48B08;
  qword_140C48B08 = (__int64)&qword_140C48B08;
  result = v0;
  dword_140C48B24 = 1;
  ReleaseOpsEvent = 1;
  byte_140C48B02 = 6;
  dword_140C48B04 = 1;
  return result;
}
