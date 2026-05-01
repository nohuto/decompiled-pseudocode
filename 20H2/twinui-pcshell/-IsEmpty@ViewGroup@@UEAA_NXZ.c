/*
 * XREFs of ?IsEmpty@ViewGroup@@UEAA_NXZ @ 0x180296B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall ViewGroup::IsEmpty(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  bool v3; // bl

  v2 = this + 21;
  AcquireSRWLockShared(this + 21);
  v3 = this[23].Ptr == 0LL;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v3;
}
