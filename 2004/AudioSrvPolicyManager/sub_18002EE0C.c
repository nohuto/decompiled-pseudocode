/*
 * XREFs of sub_18002EE0C @ 0x18002EE0C
 * Callers:
 *     unknown_libname_25 @ 0x18003C97D (unknown_libname_25.c)
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002EE0C(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    if ( *(_BYTE *)(v2 + 32) )
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v2 + 24) + 240LL))(*(_QWORD *)(v2 + 24), v2 + 40);
    v3 = *(_QWORD *)(v2 + 24);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    sub_180039D98((void *)v2);
  }
  return sub_180009CF0(a1);
}
