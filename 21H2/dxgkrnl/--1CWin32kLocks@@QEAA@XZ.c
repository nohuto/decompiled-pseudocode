/*
 * XREFs of ??1CWin32kLocks@@QEAA@XZ @ 0x1C002C6C0
 * Callers:
 *     DxgkPresent @ 0x1C0181EB0 (DxgkPresent.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C0313260 (DxgkSubmitPresentToHwQueue.c)
 * Callees:
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C002C6E4 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ?vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ @ 0x1C002C754 (-vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ.c)
 */

void __fastcall CWin32kLocks::~CWin32kLocks(CWin32kLocks *this)
{
  CWin32kLocks::Unlock(this);
  DXGSTABLEVISRGNANDSPRITE::vUnlock((CWin32kLocks *)((char *)this + 32));
}
