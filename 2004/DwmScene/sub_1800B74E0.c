/*
 * XREFs of sub_1800B74E0 @ 0x1800B74E0
 * Callers:
 *     sub_1800B40F8 @ 0x1800B40F8 (sub_1800B40F8.c)
 *     sub_1800B4E44 @ 0x1800B4E44 (sub_1800B4E44.c)
 *     sub_1800B8AE8 @ 0x1800B8AE8 (sub_1800B8AE8.c)
 *     sub_1800FE010 @ 0x1800FE010 (sub_1800FE010.c)
 * Callees:
 *     __RTDynamicCast @ 0x18011E0AC (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_1800B74E0(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::Component `RTTI Type Descriptor',
         &Spectre::Engine::ColorTransform `RTTI Type Descriptor',
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
