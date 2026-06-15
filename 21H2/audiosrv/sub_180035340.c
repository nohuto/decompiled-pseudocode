/*
 * XREFs of sub_180035340 @ 0x180035340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180035340(__int64 a1, _QWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 96);
  *a2 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
  v5 = *(_QWORD *)(a1 + 88);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    *a2 = *(_QWORD *)(a1 + 88);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
