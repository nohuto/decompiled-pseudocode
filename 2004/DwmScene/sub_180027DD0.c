/*
 * XREFs of sub_180027DD0 @ 0x180027DD0
 * Callers:
 *     sub_180028D60 @ 0x180028D60 (sub_180028D60.c)
 *     sub_180033650 @ 0x180033650 (sub_180033650.c)
 *     sub_18003E810 @ 0x18003E810 (sub_18003E810.c)
 *     sub_180042C40 @ 0x180042C40 (sub_180042C40.c)
 *     sub_180042E90 @ 0x180042E90 (sub_180042E90.c)
 * Callees:
 *     __RTDynamicCast @ 0x18011E0AC (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_180027DD0(__int64 *a1, _QWORD *a2)
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
