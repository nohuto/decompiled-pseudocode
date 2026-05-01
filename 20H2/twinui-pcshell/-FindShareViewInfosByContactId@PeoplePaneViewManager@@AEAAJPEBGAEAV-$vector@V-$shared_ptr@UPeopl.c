/*
 * XREFs of ?FindShareViewInfosByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@@Z @ 0x18025E600
 * Callers:
 *     ?ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z @ 0x18025E000 (-ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z.c)
 * Callees:
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x1801A0464 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@QEAV21@AEBV21@@Z @ 0x18025CC38 (--$_Emplace_reallocate@AEBV-$shared_ptr@UPeoplePaneViewInfo@@@std@@@-$vector@V-$shared_ptr@UPeop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PeoplePaneViewManager::FindShareViewInfosByContactId(
        RTL_SRWLOCK *a1,
        unsigned __int16 *a2,
        _QWORD *a3)
{
  RTL_SRWLOCK *v6; // rdi
  _QWORD *Ptr; // rbp
  _QWORD *i; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax

  v6 = a1 + 16;
  AcquireSRWLockShared(a1 + 16);
  Ptr = a1[18].Ptr;
  for ( i = a1[17].Ptr; i != Ptr; i += 2 )
  {
    if ( *(_DWORD *)(*i + 60LL) == 1 && !(unsigned int)std::wstring::compare((__int64 *)*i, a2) )
    {
      v9 = a3[1];
      if ( a3[2] == v9 )
      {
        std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Emplace_reallocate<std::shared_ptr<PeoplePaneViewInfo> const &>(
          a3,
          (char *)v9,
          i);
      }
      else
      {
        *(_QWORD *)v9 = 0LL;
        *(_QWORD *)(v9 + 8) = 0LL;
        v10 = i[1];
        if ( v10 )
          _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
        *(_QWORD *)v9 = *i;
        *(_QWORD *)(v9 + 8) = i[1];
        a3[1] += 16LL;
      }
    }
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return 0LL;
}
