/*
 * XREFs of ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x1C03BE150
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C01CE5C0 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x1C03BE198 (-ResetWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C03BC160 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?StopVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z @ 0x1C03BF230 (-StopVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z.c)
 */

void __fastcall BLTQUEUE::ResetInternal(BLTQUEUE *this)
{
  BLTQUEUE::DiscardPendingPresent(this);
  BLTQUEUE::StopVSync(this, 0LL, 11LL);
  if ( (*((_DWORD *)this + 238) & 1) != 0 )
  {
    KeDetachProcess();
    *((_DWORD *)this + 238) &= ~1u;
  }
}
