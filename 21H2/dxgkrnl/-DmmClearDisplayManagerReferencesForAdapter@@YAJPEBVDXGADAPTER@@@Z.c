/*
 * XREFs of ?DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z @ 0x1C01E6970
 * Callers:
 *     _lambda_253e1404844a8379d0c8ce26edd6c7ad_::_lambda_invoker_cdecl_ @ 0x1C001FAD0 (_lambda_253e1404844a8379d0c8ce26edd6c7ad_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0012B30 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C001F9C4 (-reset@-$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z.c)
 *     ?ReferenceDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEBAJPEAPEAVDXGDISPLAYMANAGEROBJECT@@@Z @ 0x1C01E6A20 (-ReferenceDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEBAJPEAPEAVDXGDISPLAYMANAGEROBJECT@@@Z.c)
 *     ?ReleaseTargetOwnershipNoDmm@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1C02F4400 (-ReleaseTargetOwnershipNoDmm@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z.c)
 *     ?ExchangeDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEAAJPEAVDXGDISPLAYMANAGEROBJECT@@0@Z @ 0x1C039FF70 (-ExchangeDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEAAJPEAVDXGDISPLAYMANAGEROBJECT@@0@Z.c)
 */

__int64 __fastcall DmmClearDisplayManagerReferencesForAdapter(const struct DXGADAPTER *a1)
{
  __int64 v2; // rbx
  DMMVIDEOPRESENTTARGETSET *v3; // rbx
  unsigned int *NextTarget; // rdi
  _QWORD *v5; // rcx
  int v7; // eax
  int v8; // eax
  struct DXGDISPLAYMANAGEROBJECT *v9; // [rsp+40h] [rbp+8h] BYREF
  DMMVIDEOPRESENTTARGETSET *v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)a1 + 349) + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v11, v2);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v2 + 120) + 72LL));
  v3 = *(DMMVIDEOPRESENTTARGETSET **)(v2 + 120);
  NextTarget = 0LL;
  v10 = v3;
  v5 = (_QWORD *)*((_QWORD *)v3 + 3);
  if ( v5 != (_QWORD *)((char *)v3 + 24) )
    NextTarget = (unsigned int *)(v5 - 1);
  for ( ;
        NextTarget;
        NextTarget = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                       v3,
                                       (const struct DMMVIDEOPRESENTTARGET *const)NextTarget) )
  {
    v9 = 0LL;
    if ( (int)DMMVIDEOPRESENTTARGET::ReferenceDisplayManagerObject((DMMVIDEOPRESENTTARGET *)NextTarget, &v9) >= 0 && v9 )
    {
      v7 = DXGDISPLAYMANAGEROBJECT::ReleaseTargetOwnershipNoDmm(v9, *(struct _LUID *)((char *)a1 + 404), NextTarget[6]);
      if ( v7 < 0 )
        WdLogSingleEntry1(1LL, v7);
      v8 = DMMVIDEOPRESENTTARGET::ExchangeDisplayManagerObject((DMMVIDEOPRESENTTARGET *)NextTarget, 0LL, v9);
      if ( v8 < 0 )
        WdLogSingleEntry1(1LL, v8);
      ReferenceCounted::Release(v9);
    }
  }
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)&v10, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v11 + 40));
  return 0LL;
}
