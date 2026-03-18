/*
 * XREFs of MiMarkNonPagedHiberPhasePages @ 0x1409AD604
 * Callers:
 *     MmMarkHiberPhase @ 0x1409AD7AC (MmMarkHiberPhase.c)
 *     MmMarkImageForHiberPhase @ 0x1409ADA44 (MmMarkImageForHiberPhase.c)
 * Callees:
 *     MiWalkPageTables @ 0x140204BE0 (MiWalkPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall MiMarkNonPagedHiberPhasePages(__int64 a1, __int64 a2, __int16 a3)
{
  _QWORD v7[22]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v7, 0, sizeof(v7));
  v7[19] = MiMarkNonPagedHiberPhasePte;
  LOWORD(v7[0]) = a3 | 0x901;
  v7[3] = MiGetAnyMultiplexedVm(3);
  BYTE6(v7[0]) = 17;
  v7[4] = a1;
  v7[5] = a2;
  return MiWalkPageTables((__int16 *)v7);
}
