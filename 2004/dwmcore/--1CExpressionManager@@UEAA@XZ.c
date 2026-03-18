/*
 * XREFs of ??1CExpressionManager@@UEAA@XZ @ 0x1801AC6EC
 * Callers:
 *     ??_ECExpressionManager@@UEAAPEAXI@Z @ 0x1801AC800 (--_ECExpressionManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A624 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18009B05C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?RemoveElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAXPEAVCTargetMapEntry@@@Z @ 0x18009B104 (-RemoveElement@-$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAXPEAVCTarget.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800D637C (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAVCInte.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@IPEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@IPEAX@std@@@1@PEAU?$_Tree_node@IPEAX@1@@Z @ 0x1801AC3A4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@IPEAX@std@@@std@@@-$_Tree_val@U-$_Tree_simple_types@I@.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAVCChannelContext@@M@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAVCChannelContext@@M@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAVCChannelContext@@M@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801AC400 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAVCChannelContext@@M@std@@PEAX@std@@@std@.c)
 */

void __fastcall CExpressionManager::~CExpressionManager(CExpressionManager *this)
{
  __int64 v2; // rcx
  CTargetMapEntry *v3; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CExpressionManager::`vftable';
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>>>>::_Tidy((__int64)this + 456);
  std::_List_node<std::pair<CChannelContext * const,float>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<CChannelContext * const,float>,void *>>>(
    v2,
    *((_QWORD ***)this + 55));
  std::_Deallocate<16,0>(*((void **)this + 55), 0x20uLL);
  std::_Tree_val<std::_Tree_simple_types<unsigned int>>::_Erase_tree<std::allocator<std::_Tree_node<unsigned int,void *>>>(
    (__int64)this + 400,
    (__int64)this + 400,
    *(_QWORD *)(*((_QWORD *)this + 50) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 50), 0x20uLL);
  while ( 1 )
  {
    RestartKey = 0LL;
    v3 = (CTargetMapEntry *)RtlEnumerateGenericTableWithoutSplaying(
                              (PRTL_GENERIC_TABLE)((char *)this + 328),
                              &RestartKey);
    if ( !v3 )
      break;
    CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::RemoveElement(
      (PRTL_GENERIC_TABLE)((char *)this + 328),
      v3);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 37);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 33);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 29);
  `vector destructor iterator'(
    (char *)this + 168,
    32LL,
    2LL,
    (void (__fastcall *)(char *))DynArray<CBaseExpression *,1>::~DynArray<CBaseExpression *,1>);
  *((_QWORD *)this + 4) = &CExpressionValueStack::`vftable';
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 7);
}
