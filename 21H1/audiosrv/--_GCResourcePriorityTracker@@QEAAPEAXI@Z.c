/*
 * XREFs of ??_GCResourcePriorityTracker@@QEAAPEAXI@Z @ 0x1800E4738
 * Callers:
 *     ??1?$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAA@XZ @ 0x1800E3EAC (--1-$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BE0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AB58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@@Z @ 0x1800E3820 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKK@std@@PEAX@std@@@std@@@-$_Tree_val@U-$_T.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CResourcePriorityTracker::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this)
{
  void **p_DebugInfo; // rbx

  p_DebugInfo = (void **)&this[1].DebugInfo;
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *>>>(
    (__int64)&this[1],
    (__int64)&this[1],
    (__int64)this[1].DebugInfo->CriticalSection);
  std::_Deallocate<16,0>(*p_DebugInfo, (const struct std::nothrow_t *)0x28);
  DeleteCriticalSection(this);
  operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
