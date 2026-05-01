/*
 * XREFs of ?PurgeLowUsageApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1801FEA64
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1801128EC (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18000F1A8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000F6F0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180077D84 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?erase@?$list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@2@@Z @ 0x180200640 (-erase@-$list@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$share.c)
 */

__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::PurgeLowUsageApps(RTL_SRWLOCK *this)
{
  __int64 v2; // rcx
  RTL_SRWLOCK *v3; // rdi
  _QWORD *Ptr; // rbx
  _QWORD *i; // r11
  const unsigned __int8 *v6; // rdx
  __int64 appended; // rax
  _QWORD *v8; // r11
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v13; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v14; // [rsp+38h] [rbp+10h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v14, this + 21);
  v3 = this + 3;
  Ptr = this[3].Ptr;
  for ( i = (_QWORD *)*Ptr; i != Ptr; i = (_QWORD *)*i )
  {
    if ( *(int *)(i[6] + 32LL) < 3 )
    {
      v6 = (const unsigned __int8 *)(i + 2);
      if ( i[5] >= 8uLL )
        v6 = *(const unsigned __int8 **)v6;
      appended = std::_Fnv1a_append_bytes(v2, v6, 2LL * i[4]);
      v9 = this[5].Ptr;
      v10 = 2 * ((__int64)this[8].Ptr & appended);
      if ( (_QWORD *)v9[2 * ((__int64)this[8].Ptr & appended) + 1] == v8 )
      {
        if ( (_QWORD *)v9[2 * ((__int64)this[8].Ptr & appended)] == v8 )
        {
          v9[2 * ((__int64)this[8].Ptr & appended)] = Ptr;
          v9 = this[5].Ptr;
          v11 = v3->Ptr;
        }
        else
        {
          v11 = (_QWORD *)v8[1];
        }
        v9[v10 + 1] = v11;
      }
      else if ( (_QWORD *)v9[2 * ((__int64)this[8].Ptr & appended)] == v8 )
      {
        v9[2 * ((__int64)this[8].Ptr & appended)] = *v8;
      }
      std::list<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>::erase(
        &this[3],
        &v13,
        v8);
      i = v13;
      Ptr = v3->Ptr;
      if ( v13 == v3->Ptr )
        break;
    }
  }
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v14);
  return 0LL;
}
