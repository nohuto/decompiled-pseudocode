/*
 * XREFs of ?HasFullScreenViewVisible@FullScreenPositioner@@UEAAJPEAH@Z @ 0x1801A6A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FullScreenPositioner::HasFullScreenViewVisible(FullScreenPositioner *this, int *a2)
{
  *a2 = *((_QWORD *)this + 17) != 0LL;
  return 0LL;
}
