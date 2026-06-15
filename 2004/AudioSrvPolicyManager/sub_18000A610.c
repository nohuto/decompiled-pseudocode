/*
 * XREFs of sub_18000A610 @ 0x18000A610
 * Callers:
 *     sub_18000BA80 @ 0x18000BA80 (sub_18000BA80.c)
 *     sub_18000BC74 @ 0x18000BC74 (sub_18000BC74.c)
 *     sub_18000BD50 @ 0x18000BD50 (sub_18000BD50.c)
 *     sub_18000BF18 @ 0x18000BF18 (sub_18000BF18.c)
 *     sub_18000C088 @ 0x18000C088 (sub_18000C088.c)
 *     sub_18000D9A0 @ 0x18000D9A0 (sub_18000D9A0.c)
 *     sub_1800115F4 @ 0x1800115F4 (sub_1800115F4.c)
 *     sub_180011760 @ 0x180011760 (sub_180011760.c)
 *     sub_180011A98 @ 0x180011A98 (sub_180011A98.c)
 *     sub_180011B94 @ 0x180011B94 (sub_180011B94.c)
 *     sub_180011D1C @ 0x180011D1C (sub_180011D1C.c)
 *     sub_1800129C0 @ 0x1800129C0 (sub_1800129C0.c)
 *     sub_180012B64 @ 0x180012B64 (sub_180012B64.c)
 *     sub_18001DBC4 @ 0x18001DBC4 (sub_18001DBC4.c)
 *     sub_18001E14C @ 0x18001E14C (sub_18001E14C.c)
 *     sub_18001E354 @ 0x18001E354 (sub_18001E354.c)
 *     sub_1800205B0 @ 0x1800205B0 (sub_1800205B0.c)
 *     sub_18002CAC0 @ 0x18002CAC0 (sub_18002CAC0.c)
 *     sub_18002CE00 @ 0x18002CE00 (sub_18002CE00.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall sub_18000A610(TRACEHANDLE LoggerHandle, USHORT a2, const GUID *a3, const wchar_t *a4)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  const wchar_t *v7; // rax

  if ( a4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a4[v5] );
    v6 = 2 * v5 + 2;
  }
  else
  {
    v6 = 10LL;
  }
  v7 = L"NULL";
  if ( a4 )
    v7 = a4;
  return TraceMessage(LoggerHandle, 0x2Bu, a3, a2, v7, v6, 0LL);
}
