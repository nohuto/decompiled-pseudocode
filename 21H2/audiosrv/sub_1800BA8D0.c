/*
 * XREFs of sub_1800BA8D0 @ 0x1800BA8D0
 * Callers:
 *     sub_1800B8200 @ 0x1800B8200 (sub_1800B8200.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B85A0 @ 0x1800B85A0 (sub_1800B85A0.c)
 */

void __fastcall sub_1800BA8D0(__int64 a1)
{
  _DWORD *v1; // rdi
  __int64 v3; // rcx

  v1 = (_DWORD *)(a1 + 8);
  if ( *(_DWORD *)(a1 + 8) )
  {
    if ( *(_QWORD *)(a1 + 16) )
    {
      sub_1800B85A0(a1 + 8);
      *(_QWORD *)(a1 + 16) = 0LL;
    }
    v3 = *(_QWORD *)(a1 + 64);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
    *v1 = 0;
  }
}
