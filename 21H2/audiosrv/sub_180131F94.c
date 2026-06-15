/*
 * XREFs of sub_180131F94 @ 0x180131F94
 * Callers:
 *     sub_180132028 @ 0x180132028 (sub_180132028.c)
 * Callees:
 *     sub_180132204 @ 0x180132204 (sub_180132204.c)
 *     sub_180132378 @ 0x180132378 (sub_180132378.c)
 */

__int64 __fastcall sub_180131F94(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d

  result = ((__int64 (*)(void))RtlExtendMemoryBlockLookaside)();
  if ( (_DWORD)result == -1073741663 )
  {
    result = sub_180132204(a2);
    if ( (int)result >= 0 )
      result = RtlExtendMemoryBlockLookaside(a1, a2);
  }
  if ( (byte_18019F981 & 4) != 0 )
    return sub_180132378(v6, v5, v7, 5, a1, a2, 0, 0);
  return result;
}
