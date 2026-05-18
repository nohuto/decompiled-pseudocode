/*
 * XREFs of sub_18002D6A0 @ 0x18002D6A0
 * Callers:
 *     sub_18002E630 @ 0x18002E630 (sub_18002E630.c)
 *     sub_180038F20 @ 0x180038F20 (sub_180038F20.c)
 *     sub_1800440E0 @ 0x1800440E0 (sub_1800440E0.c)
 *     sub_180048510 @ 0x180048510 (sub_180048510.c)
 *     sub_180048760 @ 0x180048760 (sub_180048760.c)
 * Callees:
 *     __RTDynamicCast @ 0x18012397C (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_18002D6A0(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::CommandList `RTTI Type Descriptor',
         &Spectre::Engine::D3D11::CommandListD3D11 `RTTI Type Descriptor',
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
