/*
 * XREFs of ?GetWeakReference@?$weak_source@$00@impl@winrt@@UEAAHPEAPEAUIWeakReference@23@@Z @ 0x18043FFA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::weak_source<1>::GetWeakReference(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = a1 - 8;
  if ( !a1 )
    v2 = -8LL;
  *a2 = v2 & -(__int64)(a1 != 0);
  v3 = a1 - 8;
  if ( !a1 )
    v3 = -8LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(v3 & -(__int64)(a1 != 0)) + 8LL))(v3 & -(__int64)(a1 != 0));
  return 0LL;
}
