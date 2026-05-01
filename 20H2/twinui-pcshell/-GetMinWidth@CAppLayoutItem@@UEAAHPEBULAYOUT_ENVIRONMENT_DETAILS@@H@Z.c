/*
 * XREFs of ?GetMinWidth@CAppLayoutItem@@UEAAHPEBULAYOUT_ENVIRONMENT_DETAILS@@H@Z @ 0x180484100
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMinWidth@CAppLayoutItem@@AEAAHPEBULAYOUT_ENVIRONMENT_DETAILS@@H@Z @ 0x180484910 (-_GetMinWidth@CAppLayoutItem@@AEAAHPEBULAYOUT_ENVIRONMENT_DETAILS@@H@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayoutItem::GetMinWidth(RTL_SRWLOCK *this, const struct LAYOUT_ENVIRONMENT_DETAILS *a2, int a3)
{
  RTL_SRWLOCK *v6; // rbp
  unsigned int MinWidth; // ebx

  v6 = this + 3;
  AcquireSRWLockShared(this + 3);
  MinWidth = CAppLayoutItem::_GetMinWidth((CAppLayoutItem *)&this[-1], a2, a3);
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return MinWidth;
}
