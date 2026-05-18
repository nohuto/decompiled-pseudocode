/*
 * XREFs of sub_1800BCD4C @ 0x1800BCD4C
 * Callers:
 *     sub_1800B9788 @ 0x1800B9788 (sub_1800B9788.c)
 *     sub_1800BA3D0 @ 0x1800BA3D0 (sub_1800BA3D0.c)
 *     sub_1800BE7B4 @ 0x1800BE7B4 (sub_1800BE7B4.c)
 *     sub_180101720 @ 0x180101720 (sub_180101720.c)
 * Callees:
 *     __RTDynamicCast @ 0x18012397C (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_1800BCD4C(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::Component `RTTI Type Descriptor',
         &Spectre::Engine::Aimer `RTTI Type Descriptor',
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
