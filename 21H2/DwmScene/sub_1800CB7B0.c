/*
 * XREFs of sub_1800CB7B0 @ 0x1800CB7B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007B2B4 @ 0x18007B2B4 (sub_18007B2B4.c)
 *     sub_1800A6C18 @ 0x1800A6C18 (sub_1800A6C18.c)
 *     ?GetLocation@VirtualProcessor@details@Concurrency@@QEBAAEBVlocation@3@XZ @ 0x1800FAE18 (-GetLocation@VirtualProcessor@details@Concurrency@@QEBAAEBVlocation@3@XZ.c)
 *     __RTDynamicCast @ 0x18012397C (__RTDynamicCast.c)
 */

__int64 __fastcall sub_1800CB7B0(__int64 a1, __int64 a2, _QWORD *a3)
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
  v6 = sub_18007B2B4(*(_QWORD *)(a1 + 8));
  sub_1800A6C18(v6, (__int64)&qword_1802130B8, a3);
  Location = Concurrency::details::VirtualProcessor::GetLocation(v5);
  return sub_1800A6C5C(v6, (__int64)&qword_1802130B8, Location);
}
