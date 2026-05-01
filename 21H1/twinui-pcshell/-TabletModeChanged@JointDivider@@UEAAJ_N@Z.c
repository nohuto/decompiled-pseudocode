/*
 * XREFs of ?TabletModeChanged@JointDivider@@UEAAJ_N@Z @ 0x1803F42B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall JointDivider::TabletModeChanged(HWND *this, char a2)
{
  if ( !a2 )
  {
    DestroyWindow(this[3]);
    this[3] = 0LL;
  }
  return 0LL;
}
