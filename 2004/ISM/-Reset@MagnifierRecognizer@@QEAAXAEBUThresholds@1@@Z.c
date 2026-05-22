/*
 * XREFs of ?Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z @ 0x18017DDB0
 * Callers:
 *     ?OnHitTest@MagnifierProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18017CF40 (-OnHitTest@MagnifierProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorIn.c)
 *     ?OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18017D1F0 (-OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@1@@Z @ 0x180124F90 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@.c)
 *     ??0GestureState@MagnifierRecognizer@@QEAA@XZ @ 0x18017C930 (--0GestureState@MagnifierRecognizer@@QEAA@XZ.c)
 *     ?_Move_assign@?$_Tree@V?$_Tmap_traits@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@$0A@@std@@@std@@AEAAXAEAV12@U_Equal_allocators@2@@Z @ 0x18017E0A8 (-_Move_assign@-$_Tree@V-$_Tmap_traits@KUContactState@MagnifierRecognizer@@U-$less@K@std@@V-$allo.c)
 */

void __fastcall MagnifierRecognizer::Reset(MagnifierRecognizer *this, const struct MagnifierRecognizer::Thresholds *a2)
{
  MagnifierRecognizer::GestureState *v4; // rax
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  v4 = MagnifierRecognizer::GestureState::GestureState((MagnifierRecognizer::GestureState *)&v5);
  *(_BYTE *)this = *(_BYTE *)v4;
  *((_BYTE *)this + 1) = *((_BYTE *)v4 + 1);
  *((_BYTE *)this + 2) = *((_BYTE *)v4 + 2);
  *((_BYTE *)this + 3) = *((_BYTE *)v4 + 3);
  *((_DWORD *)this + 1) = *((_DWORD *)v4 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)v4 + 2);
  if ( (char *)this + 16 != (char *)v4 + 16 )
    std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Move_assign();
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,MagnifierRecognizer::ContactState>,void *>>>(
    (__int64)&v6,
    (__int64)&v6,
    *(_QWORD *)(v6 + 8));
  std::_Deallocate<16,0>((void *)v6, (const struct std::nothrow_t *)0x48);
  *((_OWORD *)this + 2) = *(_OWORD *)a2;
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 1);
}
