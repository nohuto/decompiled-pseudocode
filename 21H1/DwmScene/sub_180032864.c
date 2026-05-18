/*
 * XREFs of sub_180032864 @ 0x180032864
 * Callers:
 *     sub_180035AF0 @ 0x180035AF0 (sub_180035AF0.c)
 * Callees:
 *     __RTDynamicCast @ 0x18011E0AC (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_180032864(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::DeviceShader `RTTI Type Descriptor',
         &Spectre::Engine::D3D11::PixelShaderD3D11 `RTTI Type Descriptor',
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
