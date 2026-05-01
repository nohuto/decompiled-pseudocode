/*
 * XREFs of ?IsAppActive@UwpAppStateManager@@UEAA_NPEBG@Z @ 0x180459440
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@PEBGU?$less@X@std@@H@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@@std@@@std@@@1@AEBQEBG@Z @ 0x180458B38 (--$find@PEBGU-$less@X@std@@H@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$a.c)
 */

bool __fastcall UwpAppStateManager::IsAppActive(RTL_SRWLOCK *this, unsigned __int16 *a2)
{
  RTL_SRWLOCK *v2; // rdi
  bool v4; // bl
  PVOID v6; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int16 *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v2 = this + 6;
  AcquireSRWLockShared(this + 6);
  std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<UwpAppPackageInfo>,std::less<void>,std::allocator<std::pair<std::wstring const,std::shared_ptr<UwpAppPackageInfo>>>,0>>::find<unsigned short const *,std::less<void>,int>(
    (__int64)&this[7],
    &v6,
    &v7);
  v4 = v6 != this[7].Ptr;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v4;
}
