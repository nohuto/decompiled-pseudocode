/*
 * XREFs of sub_18006EF68 @ 0x18006EF68
 * Callers:
 *     sub_18006FB0C @ 0x18006FB0C (sub_18006FB0C.c)
 *     sub_1800719A8 @ 0x1800719A8 (sub_1800719A8.c)
 *     sub_1800AEC10 @ 0x1800AEC10 (sub_1800AEC10.c)
 *     sub_1800C7A24 @ 0x1800C7A24 (sub_1800C7A24.c)
 *     sub_1800CB840 @ 0x1800CB840 (sub_1800CB840.c)
 * Callees:
 *     __RTDynamicCast @ 0x18012397C (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_18006EF68(__int64 *a1, _QWORD *a2)
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
