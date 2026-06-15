/*
 * XREFs of sub_1800CDB10 @ 0x1800CDB10
 * Callers:
 *     sub_1800774F0 @ 0x1800774F0 (sub_1800774F0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CFF50 @ 0x1800CFF50 (sub_1800CFF50.c)
 */

__int64 __fastcall sub_1800CDB10(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    sub_1800CFF50(*(_QWORD *)a1 + 56LL, *(_QWORD *)(a1 + 8));
    return (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 16) + 16LL))(**(_QWORD **)(a1 + 16));
  }
  return result;
}
