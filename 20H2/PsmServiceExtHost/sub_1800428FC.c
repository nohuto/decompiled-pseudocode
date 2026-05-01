/*
 * XREFs of sub_1800428FC @ 0x1800428FC
 * Callers:
 *     PsmCrmStart @ 0x1800425D0 (PsmCrmStart.c)
 * Callees:
 *     memset @ 0x18004683A (memset.c)
 */

__int64 *sub_1800428FC()
{
  __int64 *result; // rax

  memset(&unk_1800B3D60, 0, 0x1B8uLL);
  RtlInitializeSRWLock(&unk_1800B3E98);
  dword_1800B3EA0 = 0;
  xmmword_1800B3EA8 = 0LL;
  unk_1800B3D60 = 0LL;
  RtlInitializeSRWLock(&unk_1800B3D60);
  dword_1800B3D68 = 0;
  unk_1800B3EB8 = 0LL;
  RtlInitializeSRWLock(&unk_1800B3EB8);
  dword_1800B3EC0 = 0;
  result = &qword_1800B3EC8;
  qword_1800B3ED0 = (__int64)&qword_1800B3EC8;
  qword_1800B3EC8 = (__int64)&qword_1800B3EC8;
  return result;
}
