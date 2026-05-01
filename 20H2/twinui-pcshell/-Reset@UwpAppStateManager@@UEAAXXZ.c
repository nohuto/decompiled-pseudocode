/*
 * XREFs of ?Reset@UwpAppStateManager@@UEAAXXZ @ 0x180459940
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@PEAX@1@@Z @ 0x180458404 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_trai_ea_180458404.c)
 */

void __fastcall UwpAppStateManager::Reset(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rsi
  RTL_SRWLOCK *v2; // rdi
  _QWORD *Ptr; // rbx

  v1 = this + 6;
  v2 = this + 7;
  AcquireSRWLockExclusive(this + 6);
  Ptr = v2->Ptr;
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<UwpAppPackageInfo>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::shared_ptr<UwpAppPackageInfo>>,void *>>>(
    (__int64)v2,
    (__int64)v2,
    *((__int64 **)v2->Ptr + 1));
  Ptr[1] = Ptr;
  *Ptr = Ptr;
  Ptr[2] = Ptr;
  v2[1].Ptr = 0LL;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
