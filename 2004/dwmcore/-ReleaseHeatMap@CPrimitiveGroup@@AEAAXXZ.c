/*
 * XREFs of ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x1800D1C84
 * Callers:
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x18009B148 (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x1800C1930 (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 *     ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x1801E45FC (-BuildHeatMap@CPrimitiveGroup@@AEAAJXZ.c)
 * Callees:
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x18009E750 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ??$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800D1CB8 (--$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 */

void __fastcall CPrimitiveGroup::ReleaseHeatMap(CPrimitiveGroup *this)
{
  CPrimitiveGroup::ReleasePrimitiveCaches(this, 1);
  ReleaseInterface<ID2D1PrivateCompositorBuffer>((char *)this + 680);
  ReleaseInterface<ID2D1PrivateCompositorBuffer>((char *)this + 688);
}
