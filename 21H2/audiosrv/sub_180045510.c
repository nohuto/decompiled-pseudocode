/*
 * XREFs of sub_180045510 @ 0x180045510
 * Callers:
 *     sub_180074880 @ 0x180074880 (sub_180074880.c)
 *     sub_180074890 @ 0x180074890 (sub_180074890.c)
 * Callees:
 *     sub_1800D7588 @ 0x1800D7588 (sub_1800D7588.c)
 */

__int64 __fastcall sub_180045510(__int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 32);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return (unsigned int)sub_1800D7588(2 * v1 + 16);
}
