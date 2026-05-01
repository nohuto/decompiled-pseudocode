/*
 * XREFs of sub_180025C98 @ 0x180025C98
 * Callers:
 *     sub_18000DA20 @ 0x18000DA20 (sub_18000DA20.c)
 *     sub_18002785C @ 0x18002785C (sub_18002785C.c)
 *     sub_180029BA8 @ 0x180029BA8 (sub_180029BA8.c)
 * Callees:
 *     sub_180025CDC @ 0x180025CDC (sub_180025CDC.c)
 *     sub_180025DF0 @ 0x180025DF0 (sub_180025DF0.c)
 */

__int64 __fastcall sub_180025C98(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 560) == 2 )
  {
    sub_180025DF0(*(_QWORD *)(a1 + 1040));
    return sub_180025CDC(*(_QWORD *)(a1 + 776), a2);
  }
  return result;
}
