/*
 * XREFs of ?GetSite@CopyToViewValueSetBase@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803CE820
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CopyToViewValueSetBase::GetSite(CopyToViewValueSetBase *this, const struct _GUID *a2, void **a3)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *((_QWORD *)this + 8);
  result = 0LL;
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, const struct _GUID *, void **))(*(_QWORD *)v3 + 24LL))(v3, a2, a3);
  *a3 = 0LL;
  return result;
}
