/*
 * XREFs of sub_1800B2F70 @ 0x1800B2F70
 * Callers:
 *     sub_1800B343C @ 0x1800B343C (sub_1800B343C.c)
 *     sub_1800B346C @ 0x1800B346C (sub_1800B346C.c)
 *     sub_1800FEA0C @ 0x1800FEA0C (sub_1800FEA0C.c)
 *     sub_1800FED28 @ 0x1800FED28 (sub_1800FED28.c)
 *     sub_1800FF27C @ 0x1800FF27C (sub_1800FF27C.c)
 * Callees:
 *     sub_1800318C4 @ 0x1800318C4 (sub_1800318C4.c)
 */

__int64 __fastcall sub_1800B2F70(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdx

  v1 = a1 - 128;
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 144) + 4LL) + a1 - 144) = &std::istringstream::`vftable';
  v3 = *(int *)(*(_QWORD *)(a1 - 144) + 4LL);
  *(_DWORD *)(v3 + a1 - 148) = v3 - 144;
  *(_QWORD *)(a1 - 128) = &std::stringbuf::`vftable';
  sub_1800318C4(a1 - 128);
  std::streambuf::~streambuf<char,std::char_traits<char>>(v1);
  return std::istream::~istream<char,std::char_traits<char>>(a1 - 120);
}
