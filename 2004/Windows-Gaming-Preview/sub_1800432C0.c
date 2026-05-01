/*
 * XREFs of sub_1800432C0 @ 0x1800432C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800436D4 @ 0x1800436D4 (sub_1800436D4.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800432C0(IUnknown *a1, unsigned int a2)
{
  int v3; // ebx

  v3 = sub_1800436D4(a1);
  if ( v3 >= 0 )
    return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(MEMORY[0] + 64LL))(0LL, a2);
  return (unsigned int)v3;
}
