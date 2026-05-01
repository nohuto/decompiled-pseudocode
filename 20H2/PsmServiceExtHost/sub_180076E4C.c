/*
 * XREFs of sub_180076E4C @ 0x180076E4C
 * Callers:
 *     sub_180077220 @ 0x180077220 (sub_180077220.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180076E4C(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = off_180093F78;
  if ( qword_1800B5050 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1800B5050 + 8LL))(qword_1800B5050);
  *(_DWORD *)(a1 + 16) = 0x3FFFFFFF;
  *(_QWORD *)a1 = off_18008D938;
  result = a1;
  *(_QWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 12) = 2;
  return result;
}
