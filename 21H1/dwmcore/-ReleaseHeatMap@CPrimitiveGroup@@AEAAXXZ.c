/*
 * XREFs of ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x1800CA834
 * Callers:
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x180095110 (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x1800A8830 (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 *     ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x1801E6F7C (-BuildHeatMap@CPrimitiveGroup@@AEAAJXZ.c)
 * Callees:
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x1800382C8 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ??$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800CA868 (--$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 */

void __fastcall CPrimitiveGroup::ReleaseHeatMap(CPrimitiveGroup *this)
{
  CPrimitiveGroup::ReleasePrimitiveCaches(this, 1);
  ReleaseInterface<ID2D1PrivateCompositorBuffer>((char *)this + 680);
  ReleaseInterface<ID2D1PrivateCompositorBuffer>((char *)this + 688);
}
