/*
 * XREFs of sub_1800C61E4 @ 0x1800C61E4
 * Callers:
 *     sub_1800CA495 @ 0x1800CA495 (sub_1800CA495.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800C61E4(_QWORD **a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)**a1 + 32LL))(**a1, a1[1]);
  }
  return result;
}
