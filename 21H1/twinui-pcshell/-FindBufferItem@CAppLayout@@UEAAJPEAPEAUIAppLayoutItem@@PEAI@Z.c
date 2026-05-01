/*
 * XREFs of ?FindBufferItem@CAppLayout@@UEAAJPEAPEAUIAppLayoutItem@@PEAI@Z @ 0x18045DCD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FindBufferItem@CAppLayout@@AEAAJPEAPEAUIAppLayoutItem@@PEAI@Z @ 0x18045FF1C (-_FindBufferItem@CAppLayout@@AEAAJPEAPEAUIAppLayoutItem@@PEAI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::FindBufferItem(RTL_SRWLOCK *this, struct IAppLayoutItem **a2, unsigned int *a3)
{
  RTL_SRWLOCK *v6; // rbp
  unsigned int BufferItem; // ebx

  v6 = this + 2;
  AcquireSRWLockShared(this + 2);
  BufferItem = CAppLayout::_FindBufferItem((CAppLayout *)&this[-5], a2, a3);
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return BufferItem;
}
