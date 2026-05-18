/*
 * XREFs of sub_1800B760C @ 0x1800B760C
 * Callers:
 *     sub_1800B47AC @ 0x1800B47AC (sub_1800B47AC.c)
 *     sub_1800B5B54 @ 0x1800B5B54 (sub_1800B5B54.c)
 *     sub_1800B8BB8 @ 0x1800B8BB8 (sub_1800B8BB8.c)
 *     sub_1800F7880 @ 0x1800F7880 (sub_1800F7880.c)
 * Callees:
 *     __RTDynamicCast @ 0x18011E0AC (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_1800B760C(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::Component `RTTI Type Descriptor',
         &Spectre::Engine::ViewerCamera `RTTI Type Descriptor',
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
