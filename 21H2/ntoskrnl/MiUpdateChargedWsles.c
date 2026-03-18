/*
 * XREFs of MiUpdateChargedWsles @ 0x1405B85A8
 * Callers:
 *     MiDeleteVadBitmap @ 0x140693D80 (MiDeleteVadBitmap.c)
 *     MiComputeProcessUserVa @ 0x14070A9C0 (MiComputeProcessUserVa.c)
 *     MiReturnPageTablePageCommitment @ 0x1407B92D0 (MiReturnPageTablePageCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1407BDB60 (MiCommitPageTablesForVad.c)
 * Callees:
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 */

volatile signed __int64 *__fastcall MiUpdateChargedWsles(__int64 a1)
{
  volatile signed __int64 *result; // rax
  unsigned __int64 v2; // rdx

  result = (volatile signed __int64 *)MiGetSharedVm(a1);
  _InterlockedExchangeAdd64(result + 6, v2);
  return result;
}
