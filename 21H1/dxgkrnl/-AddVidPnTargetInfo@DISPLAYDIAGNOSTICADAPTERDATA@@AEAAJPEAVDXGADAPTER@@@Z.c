/*
 * XREFs of ?AddVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02B4FA0
 * Callers:
 *     ?CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C02B59F0 (-CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000BDF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000C5B8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000F2C0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?GetNextVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAPEAVVIDPNTARGETINFO@@XZ @ 0x1C0025F94 (-GetNextVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAPEAVVIDPNTARGETINFO@@XZ.c)
 *     ?Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C02B6D90 (-Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z.c)
 */

__int64 __fastcall DISPLAYDIAGNOSTICADAPTERDATA::AddVidPnTargetInfo(
        DISPLAYDIAGNOSTICADAPTERDATA *this,
        struct DXGADAPTER *a2)
{
  unsigned int v2; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  _QWORD *v11; // rbx
  _QWORD *v12; // rsi
  const struct DMMVIDEOPRESENTTARGET *i; // rsi
  VIDPNTARGETINFO *NextVidPnTargetInfo; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  if ( !a2 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a2) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v8 + 24) = 1119LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *(_QWORD *)(*((_QWORD *)a2 + 334) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v19, v9);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 80) + 72LL));
  v11 = *(_QWORD **)(v9 + 80);
  v12 = (_QWORD *)v11[3];
  if ( v12 != v11 + 3 )
  {
    for ( i = (const struct DMMVIDEOPRESENTTARGET *)(v12 - 1);
          i;
          i = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v11, i) )
    {
      if ( *((_QWORD *)i + 14) )
      {
        NextVidPnTargetInfo = DISPLAYDIAGNOSTICADAPTERDATA::GetNextVidPnTargetInfo(this);
        if ( !NextVidPnTargetInfo )
        {
          v17 = WdLogNewEntry5_WdError(v16, v15);
          *(_QWORD *)(v17 + 24) = 1141LL;
          WdLogEvent5_WdError(v17);
          v2 = -1073741801;
          break;
        }
        if ( VIDPNTARGETINFO::Initialize(NextVidPnTargetInfo, a2, i) >= 0 )
          ++*((_DWORD *)this + 489);
      }
    }
  }
  ReferenceCounted::Release((ReferenceCounted *)(v11 + 8), v10);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v19 + 40), v18);
  return v2;
}
