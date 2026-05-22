/*
 * XREFs of ?NotifyInputSinkParented@@YAHPEAX0@Z @ 0x1800153C0
 * Callers:
 *     <none>
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@2@AEB_K@Z @ 0x1800099B0 (-lower_bound@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@s.c)
 *     ??$_Try_emplace@AEB_K$$V@?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x180009A90 (--$_Try_emplace@AEB_K$$V@-$unordered_map@_K_KU-$hash@_K@std@@U-$equal_to@_K@2@V-$allocator@U-$pa.c)
 *     ??$_Emplace_reallocate@VNotificationData@@@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAAPEAVNotificationData@@QEAV2@$$QEAV2@@Z @ 0x180015190 (--$_Emplace_reallocate@VNotificationData@@@-$vector@VNotificationData@@V-$allocator@VNotificatio.c)
 *     ?SetInputSinkHandle@NotificationData@@QEAAXPEAX@Z @ 0x180015358 (-SetInputSinkHandle@NotificationData@@QEAAXPEAX@Z.c)
 *     ?GetInstance@InputSinkTreeCache@@SAAEAV1@XZ @ 0x1800155A4 (-GetInstance@InputSinkTreeCache@@SAAEAV1@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputSiteTree@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18001BA34 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputSiteTree@@@details@wil@@QEAAX_NW4Rep.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall NotifyInputSinkParented(void *a1, void *a2)
{
  void *v2; // rdi
  RTL_SRWLOCK *Instance; // rbx
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int64 Ptr; // rdx
  __int64 v8; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  _QWORD v13[3]; // [rsp+20h] [rbp-40h] BYREF
  int v14; // [rsp+38h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-20h]
  __int64 v16; // [rsp+48h] [rbp-18h]
  __int64 v17; // [rsp+50h] [rbp-10h]
  __int64 v18; // [rsp+90h] [rbp+30h] BYREF
  __int64 v19; // [rsp+98h] [rbp+38h]

  v2 = a2;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputSiteTree>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_InputSiteTree>::GetImpl'::`2'::impl,
    a2);
  Instance = (RTL_SRWLOCK *)InputSinkTreeCache::GetInstance();
  v5 = 0LL;
  v18 = 0LL;
  NtQueryCompositionInputSinkLuid(v2, &v18);
  v19 = v18;
  v18 = 0LL;
  NtQueryCompositionInputSinkLuid(a1, &v18);
  v13[0] = v18;
  AcquireSRWLockExclusive(Instance);
  v13[2] = Instance;
  std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::lower_bound(
    &Instance[1].Ptr,
    v13,
    (unsigned __int8 *)&v18);
  if ( (PVOID)v13[0] == Instance[2].Ptr )
  {
    std::unordered_map<unsigned __int64,unsigned __int64>::_Try_emplace<unsigned __int64 const &,>(
      &Instance[1].Ptr,
      (__int64)v13,
      (unsigned __int8 *)&v18);
    v6 = v19;
    *(_QWORD *)(v13[0] + 24LL) = v19;
    v14 = 0;
    v15 = v18;
    v16 = 0LL;
    v17 = v6;
    NotificationData::SetInputSinkHandle((NotificationData *)&v14, a1);
    Ptr = (unsigned __int64)Instance[10].Ptr;
    if ( Instance[11].Ptr == (PVOID)Ptr )
    {
      std::vector<NotificationData>::_Emplace_reallocate<NotificationData>(&Instance[9].Ptr, Ptr, (__int64)&v14);
    }
    else
    {
      *(_DWORD *)Ptr = v14;
      *(_QWORD *)(Ptr + 8) = v15;
      *(_QWORD *)(Ptr + 16) = v16;
      v16 = 0LL;
      *(_QWORD *)(Ptr + 24) = v17;
      Instance[10].Ptr = (char *)Instance[10].Ptr + 32;
    }
    v8 = v16;
    if ( (unsigned __int64)(v16 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_5;
LABEL_13:
    NtCloseCompositionInputSink(v8);
    goto LABEL_5;
  }
  v10 = v19;
  if ( *(_QWORD *)(v13[0] + 24LL) != v19 )
  {
    *(_QWORD *)(v13[0] + 24LL) = v19;
    v14 = 1;
    v11 = v18;
    v15 = v18;
    v16 = 0LL;
    v17 = v10;
    v12 = (unsigned __int64)Instance[10].Ptr;
    if ( Instance[11].Ptr == (PVOID)v12 )
    {
      std::vector<NotificationData>::_Emplace_reallocate<NotificationData>(&Instance[9].Ptr, v12, (__int64)&v14);
      v5 = v16;
    }
    else
    {
      *(_DWORD *)v12 = 1;
      *(_QWORD *)(v12 + 8) = v11;
      *(_QWORD *)(v12 + 16) = 0LL;
      *(_QWORD *)(v12 + 24) = v10;
      Instance[10].Ptr = (char *)Instance[10].Ptr + 32;
    }
    if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v8 = v5;
      goto LABEL_13;
    }
  }
LABEL_5:
  ReleaseSRWLockExclusive(Instance);
  return 1LL;
}
