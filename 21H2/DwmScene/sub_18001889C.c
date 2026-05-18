/*
 * XREFs of sub_18001889C @ 0x18001889C
 * Callers:
 *     sub_18001A174 @ 0x18001A174 (sub_18001A174.c)
 *     sub_180020D00 @ 0x180020D00 (sub_180020D00.c)
 *     sub_1800B8EE0 @ 0x1800B8EE0 (sub_1800B8EE0.c)
 *     sub_1800B9C04 @ 0x1800B9C04 (sub_1800B9C04.c)
 *     sub_1800BAD9C @ 0x1800BAD9C (sub_1800BAD9C.c)
 *     sub_1800EBF90 @ 0x1800EBF90 (sub_1800EBF90.c)
 * Callees:
 *     __RTDynamicCast @ 0x18012397C (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_18001889C(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::Component `RTTI Type Descriptor',
         &Spectre::Engine::LightProbe `RTTI Type Descriptor',
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
