/*
 * XREFs of sub_18000FF28 @ 0x18000FF28
 * Callers:
 *     sub_180006E40 @ 0x180006E40 (sub_180006E40.c)
 *     sub_1800079FC @ 0x1800079FC (sub_1800079FC.c)
 *     sub_18000806C @ 0x18000806C (sub_18000806C.c)
 *     sub_180015E80 @ 0x180015E80 (sub_180015E80.c)
 *     sub_180072B40 @ 0x180072B40 (sub_180072B40.c)
 * Callees:
 *     sub_18000FFAC @ 0x18000FFAC (sub_18000FFAC.c)
 *     sub_180012A60 @ 0x180012A60 (sub_180012A60.c)
 *     sub_180012D40 @ 0x180012D40 (sub_180012D40.c)
 *     sub_180016840 @ 0x180016840 (sub_180016840.c)
 */

int __fastcall sub_18000FF28(_QWORD *a1, unsigned int a2)
{
  int result; // eax
  __int64 v5; // rcx

  sub_180012A60();
  sub_180016840(a1, a2);
  QueryUnbiasedInterruptTime(a1 + 182);
  result = sub_180012D40(a1);
  if ( result )
    result = SetEvent(*(HANDLE *)(a1[7] + 88LL));
  if ( (a2 & 2) != 0 )
  {
    v5 = a1[6];
    a1[151] = 0LL;
    return sub_18000FFAC(*(_QWORD *)(v5 + 2720));
  }
  return result;
}
