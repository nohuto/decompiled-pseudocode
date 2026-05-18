/*
 * XREFs of sub_1800A6C5C @ 0x1800A6C5C
 * Callers:
 *     sub_1800B1804 @ 0x1800B1804 (sub_1800B1804.c)
 *     sub_1800C3C50 @ 0x1800C3C50 (sub_1800C3C50.c)
 *     sub_1800C8A84 @ 0x1800C8A84 (sub_1800C8A84.c)
 *     sub_1800CB7B0 @ 0x1800CB7B0 (sub_1800CB7B0.c)
 *     sub_180100BE0 @ 0x180100BE0 (sub_180100BE0.c)
 * Callees:
 *     sub_1800F5BE8 @ 0x1800F5BE8 (sub_1800F5BE8.c)
 */

__int64 __fastcall sub_1800A6C5C(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = a3[1];
  v6 = 0LL;
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    v3 = a3[1];
  }
  v4 = *(_QWORD *)(a1 + 18648);
  *(_QWORD *)&v6 = *a3;
  *((_QWORD *)&v6 + 1) = v3;
  return sub_1800F5BE8(v4, a2, &v6);
}
