/*
 * XREFs of sub_180051680 @ 0x180051680
 * Callers:
 *     sub_180051640 @ 0x180051640 (sub_180051640.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180051680(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &off_180148598;
  if ( qword_18019E418 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 8LL))(qword_18019E418);
  *(_DWORD *)(a1 + 16) = 0x3FFFFFFF;
  *(_QWORD *)a1 = &off_180148570;
  result = a1;
  *(_QWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 12) = 2;
  return result;
}
