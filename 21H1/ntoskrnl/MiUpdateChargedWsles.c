/*
 * XREFs of MiUpdateChargedWsles @ 0x14055696C
 * Callers:
 *     MiCommitPageTablesForVad @ 0x1405EDBB0 (MiCommitPageTablesForVad.c)
 *     MiReturnPageTablePageCommitment @ 0x14063D620 (MiReturnPageTablePageCommitment.c)
 *     MiComputeProcessUserVa @ 0x14064F668 (MiComputeProcessUserVa.c)
 *     MiDeleteVadBitmap @ 0x140662AF8 (MiDeleteVadBitmap.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 */

LONG *__fastcall MiUpdateChargedWsles(__int64 a1)
{
  LONG *result; // rax
  unsigned __int64 v2; // rdx

  result = MiGetSharedVm(a1);
  _InterlockedExchangeAdd64((volatile signed __int64 *)result + 6, v2);
  return result;
}
