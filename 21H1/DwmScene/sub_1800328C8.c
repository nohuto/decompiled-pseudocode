/*
 * XREFs of sub_1800328C8 @ 0x1800328C8
 * Callers:
 *     sub_180033650 @ 0x180033650 (sub_180033650.c)
 *     sub_180033A54 @ 0x180033A54 (sub_180033A54.c)
 *     sub_180034B50 @ 0x180034B50 (sub_180034B50.c)
 *     sub_1800371F0 @ 0x1800371F0 (sub_1800371F0.c)
 *     sub_180037A70 @ 0x180037A70 (sub_180037A70.c)
 *     sub_180038450 @ 0x180038450 (sub_180038450.c)
 *     sub_180043080 @ 0x180043080 (sub_180043080.c)
 *     sub_180043350 @ 0x180043350 (sub_180043350.c)
 * Callees:
 *     __RTDynamicCast @ 0x18011E0AC (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_1800328C8(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::RenderDevice `RTTI Type Descriptor',
         &Spectre::Engine::D3D11::RenderDeviceD3D11 `RTTI Type Descriptor',
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
