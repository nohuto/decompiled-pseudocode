/*
 * XREFs of ?GetMinWidthSafe@CAppLayoutItem@@UEAAHPEBULAYOUT_ENVIRONMENT_DETAILS@@H@Z @ 0x180484180
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMinWidthSafe@CAppLayoutItem@@AEAAHPEBULAYOUT_ENVIRONMENT_DETAILS@@H@Z @ 0x180484A20 (-_GetMinWidthSafe@CAppLayoutItem@@AEAAHPEBULAYOUT_ENVIRONMENT_DETAILS@@H@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayoutItem::GetMinWidthSafe(
        RTL_SRWLOCK *this,
        const struct LAYOUT_ENVIRONMENT_DETAILS *a2,
        int a3)
{
  RTL_SRWLOCK *v6; // rbp
  unsigned int MinWidthSafe; // ebx

  v6 = this + 3;
  AcquireSRWLockShared(this + 3);
  MinWidthSafe = CAppLayoutItem::_GetMinWidthSafe((CAppLayoutItem *)&this[-1], a2, a3);
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return MinWidthSafe;
}
