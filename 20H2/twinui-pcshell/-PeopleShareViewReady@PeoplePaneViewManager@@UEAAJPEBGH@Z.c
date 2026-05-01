/*
 * XREFs of ?PeopleShareViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z @ 0x180260CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004D370 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindPendingShareViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x18025E488 (-FindPendingShareViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$shared_ptr@UPeoplePan.c)
 *     ?HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x18025F3D8 (-HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV-$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z.c)
 */

__int64 __fastcall PeoplePaneViewManager::PeopleShareViewReady(RTL_SRWLOCK *this, unsigned __int16 *a2, int a3)
{
  RTL_SRWLOCK *v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  std::_Ref_count_base *v8[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_OWORD *)v8 = 0LL;
  v4 = this - 11;
  if ( (int)PeoplePaneViewManager::FindPendingShareViewInfoByContactId(this - 11, a2, v8) < 0
    || (v5 = PeoplePaneViewManager::HandleViewReady(v4, a3, (__int64 ***)v8), v6 = v5, v5 >= 0) )
  {
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CF,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v5);
  }
  if ( v8[1] )
    std::_Ref_count_base::_Decref(v8[1]);
  return v6;
}
