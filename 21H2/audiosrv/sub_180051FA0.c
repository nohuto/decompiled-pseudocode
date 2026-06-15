/*
 * XREFs of sub_180051FA0 @ 0x180051FA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 */

__int64 __fastcall sub_180051FA0(unsigned __int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_18019F850 + 32LL))(
             qword_18019F850,
             (a1 + 8) & ((unsigned __int128)-(__int128)a1 >> 64));
  if ( *(_DWORD *)(a1 + 132) == 2 )
  {
    sub_1800CB144(a1 + 176);
    sub_1800CB144(a1 + 184);
    return sub_1800CB144(a1 + 192);
  }
  return result;
}
