/*
 * XREFs of sub_1800C5EE0 @ 0x1800C5EE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800759E4 @ 0x1800759E4 (sub_1800759E4.c)
 *     sub_1800A1348 @ 0x1800A1348 (sub_1800A1348.c)
 *     ?GetLocation@VirtualProcessor@details@Concurrency@@QEBAAEBVlocation@3@XZ @ 0x1800F5548 (-GetLocation@VirtualProcessor@details@Concurrency@@QEBAAEBVlocation@3@XZ.c)
 *     __RTDynamicCast @ 0x18011E0AC (__RTDynamicCast.c)
 */

__int64 __fastcall sub_1800C5EE0(__int64 a1, __int64 a2, _QWORD *a3)
{
  Concurrency::details::VirtualProcessor *v5; // rdi
  __int64 v6; // rbx
  const struct Concurrency::location *Location; // rax

  v5 = (Concurrency::details::VirtualProcessor *)_RTDynamicCast(
                                                   a2,
                                                   0LL,
                                                   &Spectre::Engine::ImageProcessingEffect `RTTI Type Descriptor',
                                                   &Spectre::Engine::ImageProcessingEffectPlanarReflection `RTTI Type Descriptor',
                                                   1);
  v6 = sub_1800759E4(*(_QWORD *)(a1 + 8));
  sub_1800A1348(v6, (__int64)&qword_18020C040, a3);
  Location = Concurrency::details::VirtualProcessor::GetLocation(v5);
  return sub_1800A138C(v6, (__int64)&qword_18020C040, Location);
}
