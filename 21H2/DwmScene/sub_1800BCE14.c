/*
 * XREFs of sub_1800BCE14 @ 0x1800BCE14
 * Callers:
 *     sub_1800B9E40 @ 0x1800B9E40 (sub_1800B9E40.c)
 *     sub_1800BB0E0 @ 0x1800BB0E0 (sub_1800BB0E0.c)
 *     sub_1800BE2E8 @ 0x1800BE2E8 (sub_1800BE2E8.c)
 *     sub_1800FFA80 @ 0x1800FFA80 (sub_1800FFA80.c)
 *     sub_18010BED0 @ 0x18010BED0 (sub_18010BED0.c)
 * Callees:
 *     __RTDynamicCast @ 0x18012397C (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_1800BCE14(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::Component `RTTI Type Descriptor',
         &Spectre::Engine::ShadowMapCamera `RTTI Type Descriptor',
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
