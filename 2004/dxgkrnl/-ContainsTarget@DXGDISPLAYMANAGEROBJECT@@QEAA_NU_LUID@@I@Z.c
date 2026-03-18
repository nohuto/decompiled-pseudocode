/*
 * XREFs of ?ContainsTarget@DXGDISPLAYMANAGEROBJECT@@QEAA_NU_LUID@@I@Z @ 0x1C02B0D08
 * Callers:
 *     ?GetOwnedSourceFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAI@Z @ 0x1C02B11D4 (-GetOwnedSourceFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAI@Z.c)
 *     DxgkDispMgrIsTargetOwned @ 0x1C02B1900 (DxgkDispMgrIsTargetOwned.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?FindByValue@?$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x1C004C82C (-FindByValue@-$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z.c)
 */

bool __fastcall DXGDISPLAYMANAGEROBJECT::ContainsTarget(struct DXGFASTMUTEX *const *this, struct _LUID a2, int a3)
{
  __int64 v6; // rdx
  bool v7; // bl
  _BYTE v9[16]; // [rsp+20h] [rbp-48h] BYREF
  void **v10; // [rsp+30h] [rbp-38h]
  __int128 v11; // [rsp+38h] [rbp-30h]
  struct _LUID v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+50h] [rbp-18h]

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, this[2], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  v12 = a2;
  v13 = a3;
  v10 = &SetElement::`vftable';
  v11 = 0LL;
  v7 = Set<DXGTARGETENTRY>::FindByValue((__int64)(this + 5)) != 0;
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9, v6);
  return v7;
}
