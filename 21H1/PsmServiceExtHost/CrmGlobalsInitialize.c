/*
 * XREFs of CrmGlobalsInitialize @ 0x1800428CC
 * Callers:
 *     PsmCrmStart @ 0x1800425A0 (PsmCrmStart.c)
 * Callees:
 *     memset_0 @ 0x18004651A (memset_0.c)
 */

__int64 *CrmGlobalsInitialize()
{
  __int64 *result; // rax

  memset_0(&CrmGlobals, 0, 0x1B8uLL);
  RtlInitializeSRWLock(&unk_1800B3E98);
  dword_1800B3EA0 = 0;
  xmmword_1800B3EA8 = 0LL;
  CrmGlobals = 0LL;
  RtlInitializeSRWLock(&CrmGlobals);
  dword_1800B3D68 = 0;
  unk_1800B3EB8 = 0LL;
  RtlInitializeSRWLock(&unk_1800B3EB8);
  dword_1800B3EC0 = 0;
  result = &qword_1800B3EC8;
  qword_1800B3ED0 = (__int64)&qword_1800B3EC8;
  qword_1800B3EC8 = (__int64)&qword_1800B3EC8;
  return result;
}
