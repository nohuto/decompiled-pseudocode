/*
 * XREFs of sub_180105944 @ 0x180105944
 * Callers:
 *     sub_180107E95 @ 0x180107E95 (sub_180107E95.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180105944(_QWORD **a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)**a1 + 544LL))(**a1, *a1[1]);
  }
  return result;
}
