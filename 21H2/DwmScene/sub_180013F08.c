/*
 * XREFs of sub_180013F08 @ 0x180013F08
 * Callers:
 *     sub_180013A88 @ 0x180013A88 (sub_180013A88.c)
 *     sub_1800142D0 @ 0x1800142D0 (sub_1800142D0.c)
 *     sub_180014CA8 @ 0x180014CA8 (sub_180014CA8.c)
 *     sub_180014EE0 @ 0x180014EE0 (sub_180014EE0.c)
 *     sub_18008EEA4 @ 0x18008EEA4 (sub_18008EEA4.c)
 *     sub_18009B848 @ 0x18009B848 (sub_18009B848.c)
 *     sub_18009CD10 @ 0x18009CD10 (sub_18009CD10.c)
 *     sub_18009DFF0 @ 0x18009DFF0 (sub_18009DFF0.c)
 *     sub_1800C8214 @ 0x1800C8214 (sub_1800C8214.c)
 *     sub_1800C857C @ 0x1800C857C (sub_1800C857C.c)
 *     sub_180100170 @ 0x180100170 (sub_180100170.c)
 * Callees:
 *     __RTDynamicCast @ 0x18012397C (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_180013F08(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::Component `RTTI Type Descriptor',
         &Spectre::Engine::Bounds `RTTI Type Descriptor',
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
