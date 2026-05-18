/*
 * XREFs of sub_18003E7B0 @ 0x18003E7B0
 * Callers:
 *     sub_18003E3AC @ 0x18003E3AC (sub_18003E3AC.c)
 * Callees:
 *     __RTDynamicCast @ 0x18012397C (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_18003E7B0(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::RendererResource `RTTI Type Descriptor',
         &Spectre::Engine::DeviceDepthBuffer `RTTI Type Descriptor',
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
