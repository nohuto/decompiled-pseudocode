/*
 * XREFs of KeSetUserHeteroCpuPolicyThread @ 0x1405117FC
 * Callers:
 *     NtSetInformationThread @ 0x14060E970 (NtSetInformationThread.c)
 * Callees:
 *     KeQueryHeteroCpuPolicyThread @ 0x1405116D0 (KeQueryHeteroCpuPolicyThread.c)
 *     KiSetHeteroPolicyThread @ 0x14051E884 (KiSetHeteroPolicyThread.c)
 */

__int64 __fastcall KeSetUserHeteroCpuPolicyThread(__int64 a1, unsigned int a2)
{
  unsigned int HeteroCpuPolicyThread; // ebx

  HeteroCpuPolicyThread = KeQueryHeteroCpuPolicyThread(a1, 1);
  KiSetHeteroPolicyThread(a1, a2, 1LL, 1LL);
  return HeteroCpuPolicyThread;
}
