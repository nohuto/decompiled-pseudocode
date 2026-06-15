/*
 * XREFs of sub_1800CDAD8 @ 0x1800CDAD8
 * Callers:
 *     unknown_libname_240 @ 0x180077510 (unknown_libname_240.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800CDAD8(_QWORD **a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)**a1 + 232LL))(**a1, a1[1]);
  }
  return result;
}
