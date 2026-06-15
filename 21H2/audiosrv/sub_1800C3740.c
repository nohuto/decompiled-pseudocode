/*
 * XREFs of sub_1800C3740 @ 0x1800C3740
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C3740(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // edi

  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a2 + 24LL))(*a2, *(_QWORD *)(a1 + 8));
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  return v3;
}
