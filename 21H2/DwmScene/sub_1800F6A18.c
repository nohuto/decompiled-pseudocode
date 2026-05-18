/*
 * XREFs of sub_1800F6A18 @ 0x1800F6A18
 * Callers:
 *     sub_1800F711C @ 0x1800F711C (sub_1800F711C.c)
 * Callees:
 *     __RTDynamicCast @ 0x18012397C (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_1800F6A18(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::Shader `RTTI Type Descriptor',
         &Spectre::Engine::PixelShader `RTTI Type Descriptor',
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
