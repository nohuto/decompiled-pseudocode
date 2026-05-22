/*
 * XREFs of ?ResetState@MPCSlateDeadzoneHelper@@QEAAXXZ @ 0x180085278
 * Callers:
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x1800852A4 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 * Callees:
 *     ?ResetState@MPCButtonHoldHelper@@QEAAXXZ @ 0x180085454 (-ResetState@MPCButtonHoldHelper@@QEAAXXZ.c)
 */

void __fastcall MPCSlateDeadzoneHelper::ResetState(MPCButtonHoldHelper **this)
{
  __int64 v1; // rdx

  MPCButtonHoldHelper::ResetState(this[2]);
  *(_WORD *)(v1 + 12) = 0;
  *(_BYTE *)(v1 + 14) = 0;
  *(_QWORD *)(v1 + 4) = 0LL;
}
