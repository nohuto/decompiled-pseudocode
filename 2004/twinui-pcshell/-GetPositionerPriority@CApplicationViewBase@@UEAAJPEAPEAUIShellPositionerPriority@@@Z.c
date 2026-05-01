/*
 * XREFs of ?GetPositionerPriority@CApplicationViewBase@@UEAAJPEAPEAUIShellPositionerPriority@@@Z @ 0x1800645E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationViewBase::GetPositionerPriority(RTL_SRWLOCK *this, PVOID *a2)
{
  RTL_SRWLOCK *v2; // rbx
  unsigned int v5; // edi
  PVOID Ptr; // rcx

  v2 = this + 6;
  AcquireSRWLockShared(this + 6);
  v5 = 0;
  *a2 = 0LL;
  Ptr = this[13].Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    *a2 = this[13].Ptr;
  }
  else
  {
    v5 = -2147023728;
  }
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v5;
}
