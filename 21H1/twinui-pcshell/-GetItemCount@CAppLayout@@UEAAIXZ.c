/*
 * XREFs of ?GetItemCount@CAppLayout@@UEAAIXZ @ 0x18045E080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::GetItemCount(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  PVOID Ptr; // rbx

  v2 = this + 2;
  AcquireSRWLockShared(this + 2);
  Ptr = this[9].Ptr;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return (unsigned int)Ptr;
}
