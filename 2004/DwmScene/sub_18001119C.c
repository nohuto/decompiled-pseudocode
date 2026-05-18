/*
 * XREFs of sub_18001119C @ 0x18001119C
 * Callers:
 *     sub_180010C38 @ 0x180010C38 (sub_180010C38.c)
 *     sub_180011474 @ 0x180011474 (sub_180011474.c)
 *     sub_180012790 @ 0x180012790 (sub_180012790.c)
 *     sub_18008A890 @ 0x18008A890 (sub_18008A890.c)
 *     sub_1800B5188 @ 0x1800B5188 (sub_1800B5188.c)
 *     sub_1800FB310 @ 0x1800FB310 (sub_1800FB310.c)
 * Callees:
 *     __RTDynamicCast @ 0x18011E0AC (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_18001119C(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::Component `RTTI Type Descriptor',
         &Spectre::Engine::Light `RTTI Type Descriptor',
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
