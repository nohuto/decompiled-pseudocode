/*
 * XREFs of ?Add@?$Set@VDXGTARGETENTRY@@@@QEAAEQEAVDXGTARGETENTRY@@@Z @ 0x1C004B728
 * Callers:
 *     ?AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02AC630 (-AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@.c)
 *     ?TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z @ 0x1C02AD1BC (-TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C004B7B0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?FindByValue@?$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x1C004B81C (-FindByValue@-$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z.c)
 */

char __fastcall Set<DXGTARGETENTRY>::Add(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r11
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r11
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rax

  if ( Set<DXGTARGETENTRY>::FindByValue() )
    return 0;
  if ( (unsigned __int8)DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
                          v4 + 8,
                          v3) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v11 + 24) = 108LL;
    WdLogEvent5_WdAssertion(v11);
  }
  else
  {
    v9 = *(_QWORD **)(v8 + 32);
    v10 = (_QWORD *)(a2 + 8);
    if ( *v9 != v8 + 24 )
      __fastfail(3u);
    *v10 = v8 + 24;
    *(_QWORD *)(a2 + 16) = v9;
    *v9 = v10;
    *(_QWORD *)(v8 + 32) = v10;
    ++*(_QWORD *)(v8 + 40);
  }
  return 1;
}
