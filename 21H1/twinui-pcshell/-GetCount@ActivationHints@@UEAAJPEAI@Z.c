/*
 * XREFs of ?GetCount@ActivationHints@@UEAAJPEAI@Z @ 0x1803A9840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ActivationHints::GetCount(RTL_SRWLOCK *this, unsigned int *a2)
{
  RTL_SRWLOCK *v4; // rsi

  v4 = this + 6;
  AcquireSRWLockExclusive(this + 6);
  *a2 = ((char *)this[8].Ptr - (char *)this[7].Ptr) / 80;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
