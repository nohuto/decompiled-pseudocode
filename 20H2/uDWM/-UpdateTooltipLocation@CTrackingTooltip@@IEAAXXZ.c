/*
 * XREFs of ?UpdateTooltipLocation@CTrackingTooltip@@IEAAXXZ @ 0x1800A5878
 * Callers:
 *     ?Initialize@CTrackingTooltip@@QEAAJPEBUtagPOINT@@PEAG@Z @ 0x1800A5750 (-Initialize@CTrackingTooltip@@QEAAJPEBUtagPOINT@@PEAG@Z.c)
 *     ?Update@CTrackingTooltip@@QEAAXPEBUtagPOINT@@PEAG@Z @ 0x1800A57D0 (-Update@CTrackingTooltip@@QEAAXPEBUtagPOINT@@PEAG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTrackingTooltip::UpdateTooltipLocation(HWND *this)
{
  SendMessageW(
    this[1],
    0x412u,
    0LL,
    (unsigned __int16)(*((_WORD *)this + 16) - (*((_DWORD *)this + 6) - *((_DWORD *)this + 4)) / 2) | ((unsigned __int16)(*((_WORD *)this + 18) - (*((_DWORD *)this + 7) - *((_DWORD *)this + 5)) / 2) << 16));
}
