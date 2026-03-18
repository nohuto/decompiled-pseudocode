/*
 * XREFs of MiUpdateChargedWsles @ 0x140556FBC
 * Callers:
 *     MiReturnPageTablePageCommitment @ 0x1406084D0 (MiReturnPageTablePageCommitment.c)
 *     MiDeleteVadBitmap @ 0x14061D3D8 (MiDeleteVadBitmap.c)
 *     MiCommitPageTablesForVad @ 0x1406970B0 (MiCommitPageTablesForVad.c)
 *     MiComputeProcessUserVa @ 0x1406B4A38 (MiComputeProcessUserVa.c)
 * Callees:
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 */

LONG *__fastcall MiUpdateChargedWsles(__int64 a1)
{
  LONG *result; // rax
  unsigned __int64 v2; // rdx

  result = MiGetSharedVm(a1);
  _InterlockedExchangeAdd64((volatile signed __int64 *)result + 6, v2);
  return result;
}
