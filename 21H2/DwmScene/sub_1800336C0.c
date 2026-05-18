/*
 * XREFs of sub_1800336C0 @ 0x1800336C0
 * Callers:
 *     sub_180036BB8 @ 0x180036BB8 (sub_180036BB8.c)
 *     sub_180036CE8 @ 0x180036CE8 (sub_180036CE8.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800336C0(__int64 a1, char a2, int a3)
{
  int v5; // edx
  int v6; // ecx
  int v7; // eax

  if ( a3 )
  {
    *(_QWORD *)a1 = &unk_180143350;
    *(_QWORD *)(a1 + 16) = &unk_180143358;
    std::ios::ios(a1 + 152);
  }
  std::iostream::basic_iostream<char>(a1, a1 + 24, 0LL);
  *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1) = &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vftable';
  *(_DWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 - 4) = *(_DWORD *)(*(_QWORD *)a1 + 4LL) - 152;
  std::streambuf::streambuf(a1 + 24);
  *(_QWORD *)(a1 + 24) = &std::stringbuf::`vftable';
  *(_QWORD *)(a1 + 128) = 0LL;
  v5 = (4 * ((a2 & 1) == 0)) | 2;
  if ( (a2 & 2) != 0 )
    v5 = 4 * ((a2 & 1) == 0);
  v6 = v5 | 8;
  if ( (a2 & 8) == 0 )
    v6 = v5;
  v7 = v6 | 0x10;
  if ( (a2 & 4) == 0 )
    v7 = v6;
  *(_DWORD *)(a1 + 136) = v7;
  return a1;
}
