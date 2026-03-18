/*
 * XREFs of _IsImmersiveBandOrShellManaged@4 @ 0xADBB0
 * Callers:
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1770E (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     ?xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x19168 (-xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroun.c)
 *     _NtUserDisableImmersiveOwner@4 @ 0x160BAA (_NtUserDisableImmersiveOwner@4.c)
 * Callees:
 *     _IsNonImmersiveBand@4 @ 0x2D3DC (_IsNonImmersiveBand@4.c)
 */

BOOL __thiscall IsImmersiveBandOrShellManaged(_DWORD *this)
{
  int v1; // ecx

  return !IsNonImmersiveBand(this) || (*(_BYTE *)(*(_DWORD *)(v1 + 20) + 146) & 0x20) != 0;
}
