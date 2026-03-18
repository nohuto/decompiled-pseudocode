/*
 * XREFs of ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x1C02FAA40
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C01213E4 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x1C02FAA84 (-ResetWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C02F8DA0 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?StopVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C02FB820 (-StopVSync@BLTQUEUE@@AEAAXH@Z.c)
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
