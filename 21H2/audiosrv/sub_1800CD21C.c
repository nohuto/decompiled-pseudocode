/*
 * XREFs of sub_1800CD21C @ 0x1800CD21C
 * Callers:
 *     sub_180004B00 @ 0x180004B00 (sub_180004B00.c)
 *     sub_180019EA0 @ 0x180019EA0 (sub_180019EA0.c)
 *     sub_180043BD0 @ 0x180043BD0 (sub_180043BD0.c)
 *     sub_180047360 @ 0x180047360 (sub_180047360.c)
 *     sub_1800CB6D0 @ 0x1800CB6D0 (sub_1800CB6D0.c)
 *     sub_1800CBBF0 @ 0x1800CBBF0 (sub_1800CBBF0.c)
 *     sub_1800CBDD0 @ 0x1800CBDD0 (sub_1800CBDD0.c)
 *     sub_1800CE9C4 @ 0x1800CE9C4 (sub_1800CE9C4.c)
 *     sub_1800FABF8 @ 0x1800FABF8 (sub_1800FABF8.c)
 *     sub_1800FB1A4 @ 0x1800FB1A4 (sub_1800FB1A4.c)
 *     sub_1800FBC38 @ 0x1800FBC38 (sub_1800FBC38.c)
 *     sub_1800FE268 @ 0x1800FE268 (sub_1800FE268.c)
 *     sub_1800FF010 @ 0x1800FF010 (sub_1800FF010.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800CD21C(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4, __int64 a5)
{
  __int64 v5; // r10
  __int64 v6; // rax
  bool v7; // zf

  v5 = -1LL;
  if ( a5 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)(a5 + 2 * v6) );
  }
  v7 = a4 == 0LL;
  if ( a4 )
  {
    do
      ++v5;
    while ( a4[v5] );
    v7 = a4 == 0LL;
  }
  if ( v7 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, a3, a2, a4);
}
