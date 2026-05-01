/*
 * XREFs of ?GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800690B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?Unmarshal@GlobalInterfaceTable@@SAJKAEBU_GUID@@PEAPEAX@Z @ 0x18011D3C8 (-Unmarshal@GlobalInterfaceTable@@SAJKAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CWRLObjectWithGITSite::GetSite(RTL_SRWLOCK *this, const struct _GUID *a2, void **a3)
{
  unsigned int v6; // edi
  __int64 (__fastcall ***Ptr)(_QWORD, const struct _GUID *, void **); // rcx
  unsigned int v8; // ebx

  *a3 = 0LL;
  v6 = 0;
  AcquireSRWLockShared(this + 2);
  Ptr = (__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **))this[4].Ptr;
  if ( Ptr )
  {
    v8 = (**Ptr)(Ptr, a2, a3);
  }
  else
  {
    v6 = (unsigned int)this[3].Ptr;
    v8 = -2147467259;
  }
  ReleaseSRWLockShared(this + 2);
  if ( v6 )
    return (unsigned int)GlobalInterfaceTable::Unmarshal(v6, a2, a3);
  return v8;
}
