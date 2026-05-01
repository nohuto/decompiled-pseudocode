/*
 * XREFs of sub_180021D50 @ 0x180021D50
 * Callers:
 *     sub_180007A80 @ 0x180007A80 (sub_180007A80.c)
 *     sub_18001F8F0 @ 0x18001F8F0 (sub_18001F8F0.c)
 * Callees:
 *     sub_18000FFAC @ 0x18000FFAC (sub_18000FFAC.c)
 *     sub_1800255FC @ 0x1800255FC (sub_1800255FC.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_18006A374 @ 0x18006A374 (sub_18006A374.c)
 */

unsigned __int64 __fastcall sub_180021D50(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 result; // rax
  __int64 v5; // r8
  unsigned __int64 v6; // r9
  __int64 v9; // rcx

  result = *(_QWORD *)(a1 + 1360);
  v5 = *(unsigned int *)(a1 + 1376);
  v6 = a2;
  if ( result > a2 )
    v6 = *(_QWORD *)(a1 + 1360);
  *(_QWORD *)(a1 + 1360) = v6;
  if ( (_DWORD)v5 != a3 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 48) + 2720LL) + 32LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 2720LL),
      a1,
      v5,
      (unsigned int)a3);
    result = sub_1800255FC(a1, a2, (unsigned int)a3);
    if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 1) != 0 )
    {
      result = qword_1800B31F8 & 1;
      if ( result == qword_1800B31F8 )
        result = sub_18006A374(v9, &unk_18009BF79);
    }
    if ( a3 >= 4 && *(int *)(a1 + 1376) < 4 )
      result = sub_18000FFAC(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 2720LL));
    *(_DWORD *)(a1 + 1376) = a3;
  }
  return result;
}
