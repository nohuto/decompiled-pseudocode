/*
 * XREFs of ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180027878
 * Callers:
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180005D28 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180019824 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18001EEB0 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18001FA20 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x1800212F0 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 *     ?Initialize@CTopLevelWindow@@MEAAJ_N@Z @ 0x1800223B0 (-Initialize@CTopLevelWindow@@MEAAJ_N@Z.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x1800249AC (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x1800285D0 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z @ 0x18002EB14 (-InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::SetInsetFromParent(struct _MARGINS *this, const struct _MARGINS *a2)
{
  __int64 v2; // rax

  if ( this[8].cyTopHeight != a2->cyTopHeight
    || this[8].cxLeftWidth != a2->cxLeftWidth
    || this[8].cxRightWidth != a2->cxRightWidth
    || this[8].cyBottomHeight != a2->cyBottomHeight )
  {
    v2 = *(_QWORD *)&this->cxLeftWidth;
    this[8] = *a2;
    (*(void (__fastcall **)(struct _MARGINS *, __int64))(v2 + 24))(this, 2LL);
  }
}
