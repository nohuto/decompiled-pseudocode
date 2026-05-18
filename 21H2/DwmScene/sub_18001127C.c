/*
 * XREFs of sub_18001127C @ 0x18001127C
 * Callers:
 *     sub_180010D18 @ 0x180010D18 (sub_180010D18.c)
 *     sub_180011554 @ 0x180011554 (sub_180011554.c)
 *     sub_180012870 @ 0x180012870 (sub_180012870.c)
 *     sub_180090160 @ 0x180090160 (sub_180090160.c)
 *     sub_1800BAA58 @ 0x1800BAA58 (sub_1800BAA58.c)
 *     sub_180100BE0 @ 0x180100BE0 (sub_180100BE0.c)
 * Callees:
 *     __RTDynamicCast @ 0x18012397C (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_18001127C(__int64 *a1, _QWORD *a2)
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
