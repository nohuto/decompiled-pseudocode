/*
 * XREFs of ?RemoveView@CAppLayout@@UEAAJPEAUIApplicationView@@@Z @ 0x1804827D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_RemoveView@CAppLayout@@AEAAJPEAUIApplicationView@@@Z @ 0x180483934 (-_RemoveView@CAppLayout@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::RemoveView(RTL_SRWLOCK *this, struct IApplicationView *a2)
{
  RTL_SRWLOCK *v4; // rsi
  unsigned int v5; // ebx

  v4 = this + 2;
  AcquireSRWLockExclusive(this + 2);
  v5 = CAppLayout::_RemoveView((CAppLayout *)&this[-5], a2);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return v5;
}
