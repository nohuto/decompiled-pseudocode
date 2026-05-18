/*
 * XREFs of sub_1800B8840 @ 0x1800B8840
 * Callers:
 *     sub_1800B8D0C @ 0x1800B8D0C (sub_1800B8D0C.c)
 *     sub_1800B8D3C @ 0x1800B8D3C (sub_1800B8D3C.c)
 *     sub_1801042DC @ 0x1801042DC (sub_1801042DC.c)
 *     sub_1801045F8 @ 0x1801045F8 (sub_1801045F8.c)
 *     sub_180104B4C @ 0x180104B4C (sub_180104B4C.c)
 * Callees:
 *     sub_180037194 @ 0x180037194 (sub_180037194.c)
 */

__int64 __fastcall sub_1800B8840(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdx

  v1 = a1 - 128;
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 144) + 4LL) + a1 - 144) = &std::istringstream::`vftable';
  v3 = *(int *)(*(_QWORD *)(a1 - 144) + 4LL);
  *(_DWORD *)(v3 + a1 - 148) = v3 - 144;
  *(_QWORD *)(a1 - 128) = &std::stringbuf::`vftable';
  sub_180037194(a1 - 128);
  std::streambuf::~streambuf<char,std::char_traits<char>>(v1);
  return std::istream::~istream<char,std::char_traits<char>>(a1 - 120);
}
