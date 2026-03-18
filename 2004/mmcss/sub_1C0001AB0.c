/*
 * XREFs of sub_1C0001AB0 @ 0x1C0001AB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003170 (_guard_dispatch_icall_nop.c)
 *     sub_1C0004874 @ 0x1C0004874 (sub_1C0004874.c)
 *     sub_1C000ABE0 @ 0x1C000ABE0 (sub_1C000ABE0.c)
 *     sub_1C000B720 @ 0x1C000B720 (sub_1C000B720.c)
 */

__int64 __fastcall sub_1C0001AB0(__int64 a1)
{
  __int64 result; // rax
  void *v3; // rbx
  unsigned __int8 v4; // al

  result = sub_1C000ABE0();
  v3 = (void *)result;
  if ( result )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))qword_1C0007278)(a1);
    sub_1C0004874(v3, v4);
    return sub_1C000B720(v3);
  }
  return result;
}
