/*
 * XREFs of ?get_VisibilityRevoked@ViewWrapperBase@@UEAAJPEAE@Z @ 0x1802D4500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewWrapperBase::get_VisibilityRevoked(ViewWrapperBase *this, bool *a2)
{
  RTL_SRWLOCK *v3; // rdi
  bool v5; // al

  v3 = (RTL_SRWLOCK *)(*((_QWORD *)this + 19) + 280LL);
  AcquireSRWLockShared(v3);
  v5 = (*((_BYTE *)this + 80) & 0x18) != 0 && (*((_BYTE *)this + 80) & 0x20) == 0;
  *a2 = v5;
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return 0LL;
}
