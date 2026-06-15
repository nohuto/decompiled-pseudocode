/*
 * XREFs of sub_1800E6740 @ 0x1800E6740
 * Callers:
 *     <none>
 * Callees:
 *     sub_180045EE0 @ 0x180045EE0 (sub_180045EE0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E6740(__int64 a1)
{
  int v2; // ebx

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 40LL))(*(_QWORD *)(a1 + 80));
  if ( v2 >= 0 )
  {
    ++*(_DWORD *)(a1 - 8 + 280);
    sub_180045EE0(a1 - 8);
  }
  return (unsigned int)v2;
}
