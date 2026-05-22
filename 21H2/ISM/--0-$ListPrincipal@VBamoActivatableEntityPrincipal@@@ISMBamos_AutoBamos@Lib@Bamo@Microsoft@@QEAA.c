/*
 * XREFs of ??0?$ListPrincipal@VBamoActivatableEntityPrincipal@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEAA@PEAVBamoConnection@1@@Z @ 0x180033268
 * Callers:
 *     ?RuntimeClassInitialize@ForegroundManager@@UEAAJXZ @ 0x180033100 (-RuntimeClassInitialize@ForegroundManager@@UEAAJXZ.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18003017C (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 */

_QWORD *__fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<BamoActivatableEntityPrincipal>::ListPrincipal<BamoActivatableEntityPrincipal>(
        _QWORD *a1,
        struct Microsoft::Bamo::BaseBamoConnection *a2)
{
  *a1 = &Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  a1[1] = &Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<BamoActivatableEntityPrincipal>::`vftable'{for `Microsoft::Bamo::Lib::ISMBamos_AutoBamos::IList_ActivatableEntityPrincipal_Principal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((Microsoft::BamoImpl::BamoPrincipalImpl *)(a1 + 2), a2);
  a1[2] = &Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_PrincipalImpl::`vftable';
  a1[7] = 0LL;
  a1[8] = 0LL;
  a1[9] = 0LL;
  *a1 = &Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<BamoActivatableEntityPrincipal>::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  a1[1] = &Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<BamoActivatableEntityPrincipal>::`vftable'{for `Microsoft::Bamo::Lib::ISMBamos_AutoBamos::IList_ActivatableEntityPrincipal_Principal'};
  return a1;
}
