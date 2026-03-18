/*
 * XREFs of ?DmmReset@@YAXPEAX@Z @ 0x1C02DD99C
 * Callers:
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C021386C (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007EFC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000A4B0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C0168920 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 */

void __fastcall DmmReset(DXGADAPTER *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rax
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rbx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v4 = WdLogNewEntry5_WdAssertion(v3, v2);
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = *(_QWORD *)(*((_QWORD *)a1 + 337) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v11, v5);
  v9 = (_QWORD *)(*(_QWORD *)(v5 + 80) + 24LL);
  if ( (_QWORD *)*v9 != v9 )
  {
    NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(*v9 - 8LL);
    if ( *v9 != 8LL )
    {
      do
      {
        DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(NextTarget, v6, v7, v8);
        *(_BYTE *)(*((_QWORD *)NextTarget + 67) + 168LL) = 13;
        NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(*(DMMVIDEOPRESENTTARGETSET **)(v5 + 80), NextTarget);
      }
      while ( NextTarget );
    }
  }
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v11 + 40), v6);
}
