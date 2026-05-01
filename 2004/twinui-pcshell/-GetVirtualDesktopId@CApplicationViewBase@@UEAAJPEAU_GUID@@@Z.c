/*
 * XREFs of ?GetVirtualDesktopId@CApplicationViewBase@@UEAAJPEAU_GUID@@@Z @ 0x180076090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationViewBase::GetVirtualDesktopId(RTL_SRWLOCK *this, struct _GUID *a2)
{
  RTL_SRWLOCK *v2; // rsi

  v2 = this + 6;
  AcquireSRWLockShared(this + 6);
  *a2 = *(struct _GUID *)&this[14].Ptr;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return 0LL;
}
