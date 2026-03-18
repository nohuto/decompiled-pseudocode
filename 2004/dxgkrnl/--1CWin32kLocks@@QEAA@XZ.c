/*
 * XREFs of ??1CWin32kLocks@@QEAA@XZ @ 0x1C00268CC
 * Callers:
 *     DxgkPresent @ 0x1C0100670 (DxgkPresent.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C0271CB0 (DxgkSubmitPresentToHwQueue.c)
 * Callees:
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C00268F0 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ?vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ @ 0x1C0026960 (-vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ.c)
 */

void __fastcall CWin32kLocks::~CWin32kLocks(CWin32kLocks *this)
{
  CWin32kLocks::Unlock(this);
  DXGSTABLEVISRGNANDSPRITE::vUnlock((CWin32kLocks *)((char *)this + 32));
}
