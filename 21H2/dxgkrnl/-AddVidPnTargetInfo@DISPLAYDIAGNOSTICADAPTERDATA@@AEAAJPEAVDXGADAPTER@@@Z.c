/*
 * XREFs of ?AddVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02ED538
 * Callers:
 *     ?CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C02EE034 (-CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0012B30 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?GetVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAPEAVVIDPNTARGETINFO@@I@Z @ 0x1C004D328 (-GetVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAPEAVVIDPNTARGETINFO@@I@Z.c)
 *     ?Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C02EF694 (-Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z.c)
 */

__int64 __fastcall DISPLAYDIAGNOSTICADAPTERDATA::AddVidPnTargetInfo(
        DISPLAYDIAGNOSTICADAPTERDATA *this,
        struct DXGADAPTER *a2)
{
  unsigned int v2; // edi
  __int64 v6; // rbx
  _QWORD *v7; // rbx
  _QWORD *v8; // rsi
  const struct DMMVIDEOPRESENTTARGET *i; // rsi
  VIDPNTARGETINFO *VidPnTargetInfo; // rax
  __int64 v11; // [rsp+78h] [rbp+10h] BYREF

  v2 = 0;
  if ( !a2 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a2) )
  {
    WdLogSingleEntry1(1LL, 1219LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsCoreResourceSharedOwner()",
      1219LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = *(_QWORD *)(*((_QWORD *)a2 + 349) + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v11, v6);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v6 + 120) + 72LL));
  v7 = *(_QWORD **)(v6 + 120);
  v8 = (_QWORD *)v7[3];
  if ( v8 != v7 + 3 )
  {
    for ( i = (const struct DMMVIDEOPRESENTTARGET *)(v8 - 1);
          i;
          i = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v7, i) )
    {
      if ( *((_QWORD *)i + 14) )
      {
        VidPnTargetInfo = DISPLAYDIAGNOSTICADAPTERDATA::GetVidPnTargetInfo(this, *((_DWORD *)this + 489));
        if ( !VidPnTargetInfo )
        {
          WdLogSingleEntry1(2LL, 1241LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"No memory available for adding a new display target",
            1241LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v2 = -1073741801;
          break;
        }
        if ( VIDPNTARGETINFO::Initialize(VidPnTargetInfo, a2, i) >= 0 )
          ++*((_DWORD *)this + 489);
      }
    }
  }
  ReferenceCounted::Release((ReferenceCounted *)(v7 + 8));
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v11 + 40));
  return v2;
}
