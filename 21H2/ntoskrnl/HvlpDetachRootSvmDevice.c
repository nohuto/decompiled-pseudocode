/*
 * XREFs of HvlpDetachRootSvmDevice @ 0x1404F7490
 * Callers:
 *     HvlSvmAttachPasidSpace @ 0x1404F69F0 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmDetachPasidSpace @ 0x1404F6CF0 (HvlSvmDetachPasidSpace.c)
 * Callees:
 *     HvcallFastExtended @ 0x140390450 (HvcallFastExtended.c)
 *     HvlpHvToNtStatus @ 0x1404FAC74 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlpDetachRootSvmDevice(unsigned int a1)
{
  __int64 v1; // rax
  _QWORD v3[3]; // [rsp+30h] [rbp-18h] BYREF

  v3[0] = -1LL;
  v3[1] = a1 | 0x4000000000000000LL;
  v1 = HvcallFastExtended(65667LL, (__int64)v3, 0x10u, 0, 0);
  return HvlpHvToNtStatus(v1);
}
