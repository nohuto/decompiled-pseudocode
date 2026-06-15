/*
 * XREFs of sub_18002F3B8 @ 0x18002F3B8
 * Callers:
 *     sub_18003C96B @ 0x18003C96B (sub_18003C96B.c)
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
BOOL __fastcall sub_18002F3B8(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( *a1 )
  {
    if ( *(_BYTE *)(v1 + 32) )
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v1 + 24) + 240LL))(*(_QWORD *)(v1 + 24), v1 + 40);
    v2 = *(_QWORD *)(v1 + 24);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    return sub_180039D98((void *)v1);
  }
  return result;
}
