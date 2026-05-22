/*
 * XREFs of ?NotifyInputSinkRemoved@@YAHPEAX@Z @ 0x180014000
 * Callers:
 *     <none>
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@2@AEB_K@Z @ 0x1800099B0 (-lower_bound@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@s.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?erase@?$list@U?$pair@$$CB_K_K@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@2@@Z @ 0x180013CE8 (-erase@-$list@U-$pair@$$CB_K_K@std@@V-$allocator@U-$pair@$$CB_K_K@std@@@2@@std@@QEAA-AV-$_List_i.c)
 *     ??$_Emplace_reallocate@VNotificationData@@@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAAPEAVNotificationData@@QEAV2@$$QEAV2@@Z @ 0x180015190 (--$_Emplace_reallocate@VNotificationData@@@-$vector@VNotificationData@@V-$allocator@VNotificatio.c)
 *     ?GetInstance@InputSinkTreeCache@@SAAEAV1@XZ @ 0x1800155A4 (-GetInstance@InputSinkTreeCache@@SAAEAV1@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputSiteTree@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18001BA34 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputSiteTree@@@details@wil@@QEAAX_NW4Rep.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall NotifyInputSinkRemoved(void *a1, __int64 a2)
{
  RTL_SRWLOCK *Instance; // r14
  __int64 v4; // rsi
  __int64 v5; // rdi
  RTL_SRWLOCK *v6; // r15
  unsigned __int8 *v7; // rbx
  __int64 v8; // rcx
  _QWORD *Ptr; // rdx
  __int64 appended; // rax
  __int64 v11; // rdx
  RTL_SRWLOCK *v12; // rcx
  PVOID v13; // rax
  int v15; // [rsp+20h] [rbp-20h] BYREF
  __int64 v16; // [rsp+28h] [rbp-18h]
  __int64 v17; // [rsp+30h] [rbp-10h]
  __int64 v18; // [rsp+38h] [rbp-8h]
  unsigned __int8 *v19; // [rsp+78h] [rbp+38h] BYREF
  unsigned __int8 *v20; // [rsp+80h] [rbp+40h] BYREF
  RTL_SRWLOCK *v21; // [rsp+88h] [rbp+48h]

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputSiteTree>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_InputSiteTree>::GetImpl'::`2'::impl,
    a2);
  Instance = (RTL_SRWLOCK *)InputSinkTreeCache::GetInstance();
  v4 = 0LL;
  v19 = 0LL;
  NtQueryCompositionInputSinkLuid(a1, &v19);
  v20 = v19;
  v5 = (__int64)v19;
  AcquireSRWLockExclusive(Instance);
  v21 = Instance;
  std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::lower_bound(
    &Instance[1].Ptr,
    &v20,
    (unsigned __int8 *)&v19);
  v6 = Instance + 2;
  v7 = v20;
  if ( v20 != Instance[2].Ptr )
  {
    v15 = 2;
    v16 = v5;
    v17 = 0LL;
    v18 = 0LL;
    v8 = (__int64)&Instance[9];
    Ptr = Instance[10].Ptr;
    if ( Instance[11].Ptr == Ptr )
    {
      std::vector<NotificationData>::_Emplace_reallocate<NotificationData>(v8, Ptr, &v15);
      v4 = v17;
    }
    else
    {
      *(_DWORD *)Ptr = 2;
      Ptr[1] = v5;
      Ptr[2] = 0LL;
      Ptr[3] = 0LL;
      Instance[10].Ptr = (char *)Instance[10].Ptr + 32;
    }
    appended = std::_Fnv1a_append_bytes(v8, v7 + 16, 8uLL);
    v11 = 2 * (appended & (__int64)Instance[7].Ptr);
    v12 = (RTL_SRWLOCK *)Instance[4].Ptr;
    if ( v12[2 * (appended & (__int64)Instance[7].Ptr) + 1].Ptr == v7 )
    {
      if ( v12[2 * (appended & (__int64)Instance[7].Ptr)].Ptr == v7 )
      {
        v12[2 * (appended & (__int64)Instance[7].Ptr)] = (RTL_SRWLOCK)v6->Ptr;
        v13 = v6->Ptr;
        v12 = (RTL_SRWLOCK *)Instance[4].Ptr;
      }
      else
      {
        v13 = (PVOID)*((_QWORD *)v7 + 1);
      }
      v12[v11 + 1].Ptr = v13;
    }
    else if ( v12[2 * (appended & (__int64)Instance[7].Ptr)].Ptr == v7 )
    {
      v12[2 * (appended & (__int64)Instance[7].Ptr)] = *(RTL_SRWLOCK *)v7;
    }
    std::list<std::pair<unsigned __int64 const,unsigned __int64>>::erase((__int64)&Instance[2], &v19, (__int64 *)v7);
    if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      NtCloseCompositionInputSink(v4);
  }
  ReleaseSRWLockExclusive(Instance);
  return 1LL;
}
