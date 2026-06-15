/*
 * XREFs of sub_180118C74 @ 0x180118C74
 * Callers:
 *     sub_18007BFA7 @ 0x18007BFA7 (sub_18007BFA7.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180118C74(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    v1 = *a1;
    *((_BYTE *)a1 + 8) = 0;
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_18019F760 + 32LL))(
             qword_18019F760,
             *(_QWORD *)(v1 + 24));
  }
  return result;
}
