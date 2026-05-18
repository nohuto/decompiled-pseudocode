/*
 * XREFs of sub_180038198 @ 0x180038198
 * Callers:
 *     sub_180038F20 @ 0x180038F20 (sub_180038F20.c)
 *     sub_180039324 @ 0x180039324 (sub_180039324.c)
 *     sub_18003A420 @ 0x18003A420 (sub_18003A420.c)
 *     sub_18003CAC0 @ 0x18003CAC0 (sub_18003CAC0.c)
 *     sub_18003D340 @ 0x18003D340 (sub_18003D340.c)
 *     sub_18003DD20 @ 0x18003DD20 (sub_18003DD20.c)
 *     sub_180048950 @ 0x180048950 (sub_180048950.c)
 *     sub_180048C20 @ 0x180048C20 (sub_180048C20.c)
 * Callees:
 *     __RTDynamicCast @ 0x18012397C (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_180038198(__int64 *a1, _QWORD *a2)
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
