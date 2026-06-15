/*
 * XREFs of sub_180128FE0 @ 0x180128FE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18012BBC8 @ 0x18012BBC8 (sub_18012BBC8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180128FE0(__int64 a1, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v5; // esi

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 568) + 8LL))(a1 - 568);
  if ( v5 >= 0 )
  {
    *(_DWORD *)(a1 - 24) = a2;
    if ( !a2 )
      *(_DWORD *)(a1 - 20) = 0;
    v5 = sub_18012BBC8(a1 - 568);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return (unsigned int)v5;
}
