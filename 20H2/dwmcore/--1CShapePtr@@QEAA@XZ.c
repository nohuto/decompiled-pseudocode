/*
 * XREFs of ??1CShapePtr@@QEAA@XZ @ 0x18016B814
 * Callers:
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x180072CD0 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x180080D20 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800C39B0 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CShapePtr::~CShapePtr(CShapePtr *this)
{
  CShapePtr::Release(this);
}
