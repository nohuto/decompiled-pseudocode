/*
 * XREFs of sub_180069698 @ 0x180069698
 * Callers:
 *     sub_18006A23C @ 0x18006A23C (sub_18006A23C.c)
 *     sub_18006C0D8 @ 0x18006C0D8 (sub_18006C0D8.c)
 *     sub_1800A9340 @ 0x1800A9340 (sub_1800A9340.c)
 *     sub_1800C2154 @ 0x1800C2154 (sub_1800C2154.c)
 *     sub_1800C5F70 @ 0x1800C5F70 (sub_1800C5F70.c)
 * Callees:
 *     __RTDynamicCast @ 0x18011E0AC (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_180069698(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::Component `RTTI Type Descriptor',
         &Spectre::Engine::Camera `RTTI Type Descriptor',
         0);
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( v4 )
  {
    v5 = a2[1];
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v5 = a2[1];
    }
    *a1 = v4;
    a1[1] = v5;
  }
  return a1;
}
