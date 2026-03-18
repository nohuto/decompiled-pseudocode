/*
 * XREFs of HvlpDetachRootSvmDevice @ 0x1405492D8
 * Callers:
 *     HvlSvmAttachPasidSpace @ 0x140548790 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmDetachPasidSpace @ 0x140548A90 (HvlSvmDetachPasidSpace.c)
 * Callees:
 *     HvcallFastExtended @ 0x14039DD80 (HvcallFastExtended.c)
 *     HvlpHvToNtStatus @ 0x14054CA70 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlpDetachRootSvmDevice(unsigned int a1)
{
  __int64 v1; // rax
  _QWORD v3[3]; // [rsp+30h] [rbp-18h] BYREF

  v3[0] = -1LL;
  v3[1] = a1 | 0x4000000000000000LL;
  v1 = HvcallFastExtended(65667LL, (__int64)v3, 0x10u, 0LL, 0);
  return HvlpHvToNtStatus(v1);
}
