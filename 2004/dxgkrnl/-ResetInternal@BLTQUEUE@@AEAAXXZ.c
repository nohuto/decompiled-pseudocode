/*
 * XREFs of ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x1C02FEF50
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C0118314 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x1C02FEF94 (-ResetWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C02FD2B0 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?StopVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C02FFD30 (-StopVSync@BLTQUEUE@@AEAAXH@Z.c)
 */

void __fastcall BLTQUEUE::ResetInternal(BLTQUEUE *this)
{
  BLTQUEUE::DiscardPendingPresent(this);
  BLTQUEUE::StopVSync(this, 0);
  if ( (*((_DWORD *)this + 234) & 1) != 0 )
  {
    KeDetachProcess();
    *((_DWORD *)this + 234) &= ~1u;
  }
}
