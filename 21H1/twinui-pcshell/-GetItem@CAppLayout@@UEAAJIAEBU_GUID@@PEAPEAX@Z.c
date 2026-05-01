/*
 * XREFs of ?GetItem@CAppLayout@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x18045DFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetItemInternal@CAppLayout@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x18045E300 (-GetItemInternal@CAppLayout@@UEAAJIAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::GetItem(RTL_SRWLOCK *this, unsigned int a2, const struct _GUID *a3, void **a4)
{
  RTL_SRWLOCK *v8; // r14
  unsigned int ItemInternal; // ebx

  v8 = this + 2;
  AcquireSRWLockShared(this + 2);
  ItemInternal = CAppLayout::GetItemInternal((CAppLayout *)&this[-1], a2, a3, a4);
  if ( v8 )
    ReleaseSRWLockShared(v8);
  return ItemInternal;
}
