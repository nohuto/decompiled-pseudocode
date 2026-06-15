/*
 * XREFs of sub_180128F30 @ 0x180128F30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18012BBC8 @ 0x18012BBC8 (sub_18012BBC8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180128F30(__int64 a1, _OWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v5; // edi

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 568) + 8LL))(a1 - 568);
  if ( v5 >= 0 )
  {
    *(_OWORD *)(a1 - 16) = *a2;
    v5 = sub_18012BBC8(a1 - 568);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return (unsigned int)v5;
}
