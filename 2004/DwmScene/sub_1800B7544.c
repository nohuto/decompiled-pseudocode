/*
 * XREFs of sub_1800B7544 @ 0x1800B7544
 * Callers:
 *     sub_1800B4570 @ 0x1800B4570 (sub_1800B4570.c)
 *     sub_1800B5810 @ 0x1800B5810 (sub_1800B5810.c)
 *     sub_1800B8A18 @ 0x1800B8A18 (sub_1800B8A18.c)
 *     sub_1800FA1B0 @ 0x1800FA1B0 (sub_1800FA1B0.c)
 *     sub_180106600 @ 0x180106600 (sub_180106600.c)
 * Callees:
 *     __RTDynamicCast @ 0x18011E0AC (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_1800B7544(__int64 *a1, _QWORD *a2)
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
