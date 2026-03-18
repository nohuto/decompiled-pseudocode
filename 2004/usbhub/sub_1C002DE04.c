/*
 * XREFs of sub_1C002DE04 @ 0x1C002DE04
 * Callers:
 *     sub_1C0019118 @ 0x1C0019118 (sub_1C0019118.c)
 *     sub_1C002C0A0 @ 0x1C002C0A0 (sub_1C002C0A0.c)
 *     sub_1C002CE78 @ 0x1C002CE78 (sub_1C002CE78.c)
 *     sub_1C00300F4 @ 0x1C00300F4 (sub_1C00300F4.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall sub_1C002DE04(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _DWORD *result; // rax

  result = sub_1C000F050(a1);
  if ( *((_QWORD *)result + 559) )
    return (_DWORD *)(*((__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))result + 559))(
                       *((_QWORD *)result + 529),
                       a2,
                       a3,
                       a4);
  return result;
}
